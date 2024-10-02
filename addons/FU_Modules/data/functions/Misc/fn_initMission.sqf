disableSerialization;

params ["_logic"];

logic = _logic;
logicPos = getPos logic;

if (!is3DEN) exitWith {};

//Spawn UI elements
_display = (findDisplay 313) createDisplay "FU_InitMission";
_listSides = _display displayCtrl 4614;
_confirm = _display displayCtrl 4621;

{_listSides lbAdd _x;}foreach ["BLUFOR", "OPFOR", "INDFOR"]; 
_listSides lbSetCurSel 0;

[] spawn {sleep 0.25; delete3DENEntities [logic];};

_confirmAction = _confirm ctrlAddEventHandler ["ButtonClick", {
	params ["_control"];

	disableSerialization;

	_display = findDisplay 4700;
	_listSides = _display displayCtrl 4614;
	_operationName = _display displayCtrl 4624;
	_author = _display displayCtrl 4625;
	_respawnDelay = _display displayCtrl 4627;

	_selectedSide = lbcurSel _listSides;
	_operationNameText = ctrlText _operationName;
	_authorText = ctrlText _author;
	_respawnDelayText = parseNumber(ctrlText _respawnDelay);

	_display closeDisplay 2;

	//Spawn units
	_side = civilian;
	_unitTypes = [];
	_i = 0;
	_edenLayer = -1 add3DENLayer "FUMI - Mission Initialization";

	switch _selectedSide do {
		case 0: {
			_side = west; 
			_unitTypes = ["B_Soldier_SL_F","B_medic_F","B_soldier_AR_F","B_soldier_LAT_F","B_Soldier_F","B_engineer_F","B_Pilot_F","B_crew_F"]; 
		};
		case 1: {
			_side = east; 
			_unitTypes = ["O_Soldier_SL_F","O_medic_F","O_Soldier_AR_F","O_Soldier_LAT_F","O_Soldier_F","O_engineer_F","O_Pilot_F","O_crew_F"];
		};
		case 2: {
			_side = resistance; 
			_unitTypes = ["I_Soldier_SL_F","I_medic_F","I_Soldier_AR_F","I_Soldier_LAT_F","I_soldier_F","I_engineer_F","I_pilot_F","I_crew_F"];
		};
	};

	//Spawn Zeus module
	_zeus = create3DENEntity ["Logic", "ModuleCurator_F", logicPos];
	_zeus set3DENAttribute ["ModuleCurator_F_Owner", "FU_Zeus"];
	_zeus set3DENAttribute ["ModuleCurator_F_Addons", 3];
	_zeus set3DENLayer _edenLayer;
	/*_zeus set3DENAttribute ["Init", "
		this addEventHandler ['CuratorObjectPlaced', {
			params ['_curator', '_entity'];  
			
			if(_entity isKindOf 'Tank' || _entity isKindOf 'APC') then {
				[_entity] spawn FU_fnc_assignCrewmanLogic;
			};
		}];
	"];*/

	//Spawn Zeus module - ADMIN
	_zeusAdmin = create3DENEntity ["Logic", "ModuleCurator_F", logicPos];
	_zeusAdmin set3DENAttribute ["ModuleCurator_F_Owner", "#adminLogged"];
	_zeusAdmin set3DENAttribute ["ModuleCurator_F_Addons", 3];
	_zeusAdmin set3DENLayer _edenLayer;

	//Spawn units - Zeus
	_unit = create3DENEntity ["Object", _unitTypes select 0, logicPos];
	
	_group = group _unit;
	_group set3DENAttribute ["groupID", "Zeus"];

	_unit set3DENAttribute ["ControlSP", true];
	_unit set3DENAttribute ["ControlMP", true];
	_unit set3DENAttribute ["Name", "FU_Zeus"];
	_unit set3DENAttribute ["description", "1: Zeus@Zeus"];
	_unit set3DENAttribute ["rank", "Colonel"];
	_unit set3DENLayer _edenLayer;

	save3DENInventory [_unit];

	//Spawn units - HQ
	_group = grpNull;

	for "_j" from 1 to 4 do {
		_unitPos = [(logicPos select 0) + _i * 2, (logicPos select 1) - _j * 2, 0];
		_unit = objNull;
		
		switch _j do {
			case 1: {
				_unit = _group create3DENEntity ["Object", _unitTypes select 0, _unitPos];
				_unit set3DENAttribute ["Name", "PL"];
				_unit set3DENAttribute ["description", "1: Platoon Leader@HQ"];
				_unit set3DENAttribute ["rank", "Captain"];
				
				_group = group _unit;
				_group set3DENAttribute ["groupID", "HQ"];
			};
			case 2: {
				_unit = _group create3DENEntity ["Object", _unitTypes select 0, _unitPos];
				_unit set3DENAttribute ["description", "2: Asst. Platoon Leader"];
				_unit set3DENAttribute ["rank", "Lieutenant"];
			};
			case 3: {
				_unit = _group create3DENEntity ["Object", _unitTypes select 1, _unitPos];
				_unit set3DENAttribute ["description", "3: Medic"];
				_unit set3DENAttribute ["ace_isMedic", 2];
			};
			case 4: {
				_unit = _group create3DENEntity ["Object", _unitTypes select 5, _unitPos];
				_unit set3DENAttribute ["description", "4: Engineer"];
				_unit set3DENAttribute ["ace_isEngineer", 2];
			};
		};

		_unit set3DENAttribute ["ControlMP", true];
		_unit set3DENLayer _edenLayer;

		save3DENInventory [_unit];
	};

	//Spawn units - A, B, C
	_i = 1;
	{
		_groupName = _x;
		_group = grpNull;

		for "_j" from 1 to 6 do {
			_unitPos = [(logicPos select 0) + _i * 2, (logicPos select 1) - _j * 2, 0];
			_unit = objNull;
			

			switch _j do {
				case 1: {
					_unit = _group create3DENEntity ["Object", _unitTypes select 0, _unitPos];
					_unit set3DENAttribute ["description", format["1: Squad Leader@%1", _groupName]];
					_unit set3DENAttribute ["rank", "Sergeant"];

					_group = group _unit;
					_group set3DENAttribute ["groupID", _groupName];
				};
				case 2: {
					_unit = _group create3DENEntity ["Object", _unitTypes select 1, _unitPos];
					_unit set3DENAttribute ["description", "2: Medic"];
					_unit set3DENAttribute ["ace_isMedic", 2];
				};
				case 3: {
					_unit = _group create3DENEntity ["Object", _unitTypes select 2, _unitPos];
					_unit set3DENAttribute ["description", "3: Autorifleman"];
				};
				case 4: {
					_unit = _group create3DENEntity ["Object", _unitTypes select 3, _unitPos];
					_unit set3DENAttribute ["description", "4: Rifleman (AT)"];
				};
				case 5: {
					_unit = _group create3DENEntity ["Object", _unitTypes select 4, _unitPos];
					_unit set3DENAttribute ["description", "5: Rifleman"];
				};
				case 6: {
					_unit = _group create3DENEntity ["Object", _unitTypes select 4, _unitPos];
					_unit set3DENAttribute ["description", "6: Rifleman"];
				};
			};

			_unit set3DENAttribute ["ControlMP", true];
			_unit set3DENLayer _edenLayer;

			save3DENInventory [_unit];
		};

		_i = _i + 1;
	}foreach ["Alpha", "Bravo", "Charlie", "Delta"];

	//PILOTS
	_group = grpNull;

	for "_j" from 1 to 2 do {
		_unitPos = [(logicPos select 0) + _i * 2, (logicPos select 1) - _j * 2, 0];
		_unit = objNull;

		switch _j do {
			case 1: {
				_unit = _group create3DENEntity ["Object", _unitTypes select 6, _unitPos];
				_unit set3DENAttribute ["description", format["1: Pilot@%1", "Pilots"]];
				_unit set3DENAttribute ["rank", "Sergeant"];
				_unit set3DENAttribute ["ace_isEngineer", 2];

				_group = group _unit;
				_group set3DENAttribute ["groupID", "Pilots"];
			};
			case 2: {
				_unit = _group create3DENEntity ["Object", _unitTypes select 6, _unitPos];
				_unit set3DENAttribute ["description", "2: Pilot"];
				_unit set3DENAttribute ["ace_isEngineer", 2];
			};
		};

		_unit set3DENAttribute ["Name", format["FU_Pilot_%1", _j]];
		_unit set3DENAttribute ["ControlMP", true];
		_unit set3DENLayer _edenLayer;
	};
	_i = _i + 1;

	//CREWMEN
	_group = grpNull;

	for "_j" from 1 to 3 do {
		_unitPos = [(logicPos select 0) + _i * 2, (logicPos select 1) - _j * 2, 0];
		_unit = objNull;

		switch _j do {
			case 1: {
				_unit = _group create3DENEntity ["Object", _unitTypes select 7, _unitPos];
				_unit set3DENAttribute ["description", format["1: Commander@%1", "Crewmen"]];
				_unit set3DENAttribute ["rank", "Sergeant"];
				_unit set3DENAttribute ["ace_isEngineer", 2];

				_group = group _unit;
				_group set3DENAttribute ["groupID", "Crewmen"];
			};
			case 2: {
				_unit = _group create3DENEntity ["Object", _unitTypes select 7, _unitPos];
				_unit set3DENAttribute ["description", "2: Gunner"];
				_unit set3DENAttribute ["ace_isEngineer", 2];
			};
			case 3: {
				_unit = _group create3DENEntity ["Object", _unitTypes select 7, _unitPos];
				_unit set3DENAttribute ["description", "2: Driver"];
				_unit set3DENAttribute ["ace_isEngineer", 2];
			};
		};

		_unit set3DENAttribute ["ControlMP", true];
		_unit set3DENLayer _edenLayer;
	};
	_i = _i + 1;

	//Spawn necessary items: FU Flag, Respawn marker and supply box
	private _flagPos = [[[logicPos, 5]], []] call BIS_fnc_randomPos;
	private _flag = create3DENEntity ["Object", "Flag_FU", _flagPos, false];
	_flag set3DENAttribute ["Name", "FU_Flag"];
	_flag set3DENLayer _edenLayer;

	private _flagPos2 = [[[logicPos, 5]], []] call BIS_fnc_randomPos;
	private _flag2 = create3DENEntity ["Object", "RuggedTerminal_01_F", _flagPos2, false];
	_flag2 set3DENAttribute ["Name", "FU_Flag_Para"];
	_flag2 set3DENLayer _edenLayer;

	private _flagPos3 = [[[logicPos, 5]], []] call BIS_fnc_randomPos;
	private _flag3 = create3DENEntity ["Object", "RuggedTerminal_01_communications_F", _flagPos3, false];
	_flag3 set3DENAttribute ["Name", "FU_Flag_Request"];
	_flag3 set3DENLayer _edenLayer;

	private _respawnMarker = create3DENEntity ["Marker", "Empty", logicPos, false];
	_respawnMarker set3DENAttribute ["markerName", "respawn"];
	_respawnMarker set3DENLayer _edenLayer;

	private _supplyBoxPos = [[[logicPos, 5]], []] call BIS_fnc_randomPos;
	private _supplyBox = create3DENEntity ["Object", "B_CargoNet_01_ammo_F", _supplyBoxPos, false];
	private _items = ["ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_bloodIV","ACE_bloodIV","ACE_bloodIV","ACE_bloodIV","ACE_bloodIV","ACE_bloodIV","ACE_bloodIV","ACE_bloodIV","ACE_bloodIV","ACE_bloodIV","ACE_bloodIV_500","ACE_bloodIV_500","ACE_bloodIV_500","ACE_bloodIV_500","ACE_bloodIV_500","ACE_bloodIV_500","ACE_bloodIV_500","ACE_bloodIV_500","ACE_bloodIV_500","ACE_bloodIV_500","ACE_bloodIV_500","ACE_bloodIV_500","ACE_bloodIV_500","ACE_bloodIV_500","ACE_bloodIV_500","ACE_bloodIV_500","ACE_bloodIV_500","ACE_bloodIV_500","ACE_bloodIV_500","ACE_bloodIV_500","ACE_bloodIV_250","ACE_bloodIV_250","ACE_bloodIV_250","ACE_bloodIV_250","ACE_bloodIV_250","ACE_bloodIV_250","ACE_bloodIV_250","ACE_bloodIV_250","ACE_bloodIV_250","ACE_bloodIV_250","ACE_bloodIV_250","ACE_bloodIV_250","ACE_bloodIV_250","ACE_bloodIV_250","ACE_bloodIV_250","ACE_bloodIV_250","ACE_bloodIV_250","ACE_bloodIV_250","ACE_bloodIV_250","ACE_bloodIV_250","ACE_bloodIV_250","ACE_bloodIV_250","ACE_bloodIV_250","ACE_bloodIV_250","ACE_bloodIV_250","ACE_bloodIV_250","ACE_bloodIV_250","ACE_bloodIV_250","ACE_bloodIV_250","ACE_bloodIV_250","ACE_bloodIV_250","ACE_bloodIV_250","ACE_bloodIV_250","ACE_bloodIV_250","ACE_bloodIV_250","ACE_bloodIV_250","ACE_bloodIV_250","ACE_bloodIV_250","ACE_bloodIV_250","ACE_bloodIV_250","ACE_bodyBag","ACE_bodyBag","ACE_bodyBag","ACE_bodyBag","ACE_bodyBag","ACE_bodyBag","ACE_bodyBag","ACE_bodyBag","ACE_bodyBag","ACE_bodyBag","ToolKit","ToolKit","ToolKit","ToolKit","ToolKit","TFAR_anprc148jem","TFAR_anprc148jem","TFAR_anprc148jem","TFAR_anprc148jem","TFAR_anprc148jem","TFAR_anprc148jem","TFAR_anprc148jem","TFAR_anprc148jem","TFAR_anprc148jem","TFAR_anprc148jem","TFAR_anprc148jem","TFAR_anprc148jem","TFAR_anprc148jem","TFAR_anprc148jem","TFAR_anprc148jem","TFAR_anprc148jem","TFAR_anprc148jem","TFAR_anprc148jem","TFAR_anprc148jem","TFAR_anprc148jem","TFAR_anprc148jem","TFAR_anprc148jem","TFAR_anprc148jem","TFAR_anprc148jem","TFAR_anprc148jem"];
	private _magazines = ["HandGrenade","HandGrenade","HandGrenade","HandGrenade","HandGrenade","HandGrenade","HandGrenade","HandGrenade","HandGrenade","HandGrenade","HandGrenade","HandGrenade","HandGrenade","HandGrenade","HandGrenade","HandGrenade","HandGrenade","HandGrenade","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","MiniGrenade","MiniGrenade","MiniGrenade","MiniGrenade","MiniGrenade","MiniGrenade","MiniGrenade","MiniGrenade","MiniGrenade","MiniGrenade","MiniGrenade","MiniGrenade","MiniGrenade","MiniGrenade","MiniGrenade","MiniGrenade","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen","SmokeShellRed","SmokeShellRed","SmokeShellRed","SmokeShellRed","SmokeShellRed","SmokeShellBlue","SmokeShellBlue","SmokeShellBlue","SmokeShellBlue","SmokeShellBlue"];
	
	_supplyBox set3DENLayer _edenLayer;
	_supplyBox set3DENAttribute ["Name", "FU_Supplies"];
	_supplyBox set3DENAttribute ["ammoBox", "[[[[], []], [['HandGrenade', 'MiniGrenade', 'SmokeShell', 'SmokeShellGreen', 'SmokeShellRed', 'SmokeShellBlue'], [20, 20, 40, 5, 5, 5]], [['ACE_elasticBandage', 'ACE_tourniquet', 'ACE_splint', 'ACE_morphine', 'ACE_epinephrine', 'ACE_bloodIV', 'ACE_bloodIV_500', 'ACE_bloodIV_250', 'ACE_bodyBag', 'ToolKit','TFAR_anprc148jem', 'ACE_suture', 'ACE_surgicalKit'], [75, 20, 20, 25, 50, 10, 20, 40, 10, 5, 25, 50, 10]], [[], []]], false]"];
	
	//Description.ext setup - General
	"Multiplayer" set3DENMissionAttribute ["IntelBriefingName", _operationNameText];
	"Multiplayer" set3DENMissionAttribute ["Author", _authorText];
	"Scenario" set3DENMissionAttribute ["EnableDebugConsole", 1];

	//Description.ext setup - Respawn
	"Multiplayer" set3DENMissionAttribute ["GameType", "Zeus"];
	"Multiplayer" set3DENMissionAttribute ["Respawn", 3];
	"Multiplayer" set3DENMissionAttribute ["RespawnTemplates", ["Counter","ace_spectator"]];
	"Multiplayer" set3DENMissionAttribute ["SharedObjectives", 1];
	"Multiplayer" set3DENMissionAttribute ["RespawnDelay", _respawnDelayText];
}];

true;