disableSerialization;

params ["_logic"];

logic = _logic;
_squadComp = (_logic get3DENAttribute "FU_SquadComp") select 0;

if (!is3DEN) exitWith {};
if (_squadComp != "") exitWith {};

[] spawn {
	//SQUAD COMP
	systemChat "[FU EVENTS] PLEASE WAIT UNTIL ALL FACTIONS ARE LOADED...";
	sleep 2;

	//Spawn UI elements
	_display = (findDisplay 313) createDisplay "FU_SquadComposition";
	_listFactions = _display displayCtrl 4808;
	_listSL = _display displayCtrl 4805;
	_listMED = _display displayCtrl 4810;
	_listRIF = _display displayCtrl 4812;
	_listFT1 = _display displayCtrl 4814;
	_listFT2 = _display displayCtrl 4816;
	_listFT3 = _display displayCtrl 4818;
	_confirm = _display displayCtrl 4806;

	{_x ctrlEnable false;} foreach [_listFactions, _listSL, _listMED, _listRIF, _listFT1, _listFT2, _listFT3, _confirm];

	//Config scraping
	private _selectedSide = civilian;
	private _factionConfig = configFile >> "CfgFactionClasses";
	private _vehicleConfig = configFile >> "CfgVehicles";
	private _allFactions = "true" configClasses _factionConfig;
	private _allUnits = "(configName _x) isKindoF 'CAManBase' && getNumber(_x >> 'scope') == 2" configClasses _vehicleConfig;
	_allFactions = _allFactions select {
		private _faction = configName _x;
		private _unitCount = {getText (_x >> 'faction') == _faction} count _allUnits;
		_unitCount > 0;
	};
	factions = _allFactions apply {
		private _side = getNumber (_x >> 'side');
		private _sideTag = _side call BIS_fnc_sideType;
		private _name = getText (_x >> 'displayName');

		[format["[%1] %2", _sideTag, _name], configName _x];
	};
	factions sort true;

	{_listFactions lbAdd (_x select 0);}foreach factions; 
	_listFactions lbSetCurSel 0;

	_confirmAction = _confirm ctrlAddEventHandler ["ButtonClick", {
		params ["_control"];

		disableSerialization;

		_display = findDisplay 4800;
		_listFactions = _display displayCtrl 4808;
		_listSL = _display displayCtrl 4805;
		_listMED = _display displayCtrl 4810;
		_listRIF = _display displayCtrl 4812;
		_listFT1 = _display displayCtrl 4814;
		_listFT2 = _display displayCtrl 4816;
		_listFT3 = _display displayCtrl 4818;

		_selectedFaction = lbcurSel _listFactions;
		_selectedSL = lbcurSel _listSL;
		_selectedMED = lbcurSel _listMED;
		_selectedRIF = lbcurSel _listRIF;
		_selectedFT1 = lbcurSel _listFT1;
		_selectedFT2 = lbcurSel _listFT2;
		_selectedFT3 = lbcurSel _listFT3;	

		_SL = (allFactionUnits select _selectedSL) select 1;
		_MED = (allFactionUnits select _selectedMED) select 1;
		_RIF = (allFactionUnits select _selectedRIF) select 1;
		_FT1 = (allFactionUnits select _selectedFT1) select 1;
		_FT2 = (allFactionUnits select _selectedFT2) select 1;
		_FT3 = (allFactionUnits select _selectedFT3) select 1;
		
		_squadComp = "";
		{
			_squadComp = format["%1,%2", _squadComp, _x];
		} foreach [_SL, _MED, _RIF, _FT1, _SL, _MED, _RIF, _FT2, _SL, _MED, _RIF, _FT3];
		
		private _side = getNumber (configFile >> "CfgVehicles" >> _SL >> 'side');
		private _sideTag = _side call BIS_fnc_sideType;

		logic set3DENAttribute ["FU_SquadComp", _squadComp];
		logic set3DENAttribute ["FU_Side", _sideTag];

		_display closeDisplay 2;
	}];

	{_x ctrlEnable true;} foreach [_listFactions, _listSL, _listMED, _listRIF, _listFT1, _listFT2, _listFT3, _confirm];

	while {!isNull(findDisplay 4800)} do {
		private _selectedFaction = lbCurSel _listFactions;
		private _selectedFactionName = (factions select _selectedFaction) select 1;
		
		_selectedSide = getNumber (_factionConfig >> _selectedFactionName >> 'side');
		
		allFactionUnits = _allUnits select {getText (_x >> 'faction') == _selectedFactionName};
		allFactionUnits = allFactionUnits apply {
			private _name = getText (_x >> 'displayName');
			private _subcat = getText (_x >> 'editorSubcategory');
			private _subcatName = getText (configFile >> "CfgEditorSubcategories" >> _subcat >> "displayName");
			
			[format["[%1] %2", _subcatName, _name], configName _x];
		};
		allFactionUnits sort true;

		lbClear _listSL;
		{_listSL lbAdd (_x select 0);}foreach allFactionUnits;
		_listSL lbSetCurSel 0;

		lbClear _listMED;
		{_listMED lbAdd (_x select 0);}foreach allFactionUnits;
		_listMED lbSetCurSel 0;

		lbClear _listRIF;
		{_listRIF lbAdd (_x select 0);}foreach allFactionUnits;
		_listRIF lbSetCurSel 0;

		lbClear _listFT1;
		{_listFT1 lbAdd (_x select 0);}foreach allFactionUnits;
		_listFT1 lbSetCurSel 0;

		lbClear _listFT2;
		{_listFT2 lbAdd (_x select 0);}foreach allFactionUnits;
		_listFT2 lbSetCurSel 0;

		lbClear _listFT3;
		{_listFT3 lbAdd (_x select 0);}foreach allFactionUnits;
		_listFT3 lbSetCurSel 0;


		waitUntil {sleep 1; lbCurSel _listFactions != _selectedFaction || isNull(findDisplay 4800)};
	};

	//Vehicle COMP
	systemChat "[FU EVENTS] PLEASE WAIT UNTIL ALL VEHICLES ARE LOADED...";
	sleep 2;

	//Spawn UI elements
	_display = (findDisplay 313) createDisplay "FU_VehComposition";
	_listCars = _display displayCtrl 4808;
	_listAPCs = _display displayCtrl 4805;
	_listTanks = _display displayCtrl 4810;
	_listHeliCAS = _display displayCtrl 4812;
	_listPlaneCAS = _display displayCtrl 4814;
	_listTruckQRF = _display displayCtrl 4816;
	_listHeliQRF = _display displayCtrl 4818;
	_confirm = _display displayCtrl 4806;

	_confirm ctrlEnable false;

	//Config scraping
	private _allVehicles = "((configName _x) isKindoF 'Car' || (configName _x) isKindoF 'APC' || (configName _x) isKindoF 'Tank' || (configName _x) isKindoF 'Helicopter' || (configName _x) isKindoF 'Plane') && getNumber(_x >> 'scope') == 2 && getNumber(_x >> 'side') == _selectedSide" configClasses _vehicleConfig;
	//allVehicles = _allVehicles apply {
	//	private _type = ((configName _x) call BIS_fnc_objectType) select 1;
	//	private _name = getText (_x >> 'displayName');
	//	private _faction = getText (_x >> 'faction');
	//	private _factionName = getText (_factionConfig >> _faction >> 'displayName');
	//
	//	[format["[%1] [%2] %3", _type, _factionName, _name], configName _x];
	//};
	allCars = [];
	{
		private _type = ((configName _x) call BIS_fnc_objectType) select 1;

		if(_type == "Car") then {
			private _name = getText (_x >> 'displayName');
			private _faction = getText (_x >> 'faction');
			private _factionName = getText (_factionConfig >> _faction >> 'displayName');

			allCars pushBack [format["[%1] [%2] %3", _type, _factionName, _name], configName _x];
		};
	} foreach _allVehicles;
	allCars sort true;
	
	allAPCs = [];
	{
		private _type = ((configName _x) call BIS_fnc_objectType) select 1;

		if(_type == "TrackedAPC" || _type == "WheeledAPC") then {
			private _name = getText (_x >> 'displayName');
			private _faction = getText (_x >> 'faction');
			private _factionName = getText (_factionConfig >> _faction >> 'displayName');

			allAPCs pushBack [format["[%1] [%2] %3", _type, _factionName, _name], configName _x];
		};
	} foreach _allVehicles;
	allAPCs sort true;

	allTanks = [];
	{
		private _type = ((configName _x) call BIS_fnc_objectType) select 1;

		if(_type == "Tank") then {
			private _name = getText (_x >> 'displayName');
			private _faction = getText (_x >> 'faction');
			private _factionName = getText (_factionConfig >> _faction >> 'displayName');

			allTanks pushBack [format["[%1] [%2] %3", _type, _factionName, _name], configName _x];
		};
	} foreach _allVehicles;
	allTanks sort true;

	allHeli = [];
	{
		private _type = ((configName _x) call BIS_fnc_objectType) select 1;

		if(_type == "Helicopter") then {
			private _name = getText (_x >> 'displayName');
			private _faction = getText (_x >> 'faction');
			private _factionName = getText (_factionConfig >> _faction >> 'displayName');

			allHeli pushBack [format["[%1] [%2] %3", _type, _factionName, _name], configName _x];
		};
	} foreach _allVehicles;
	allHeli sort true;

	allPlanes = [];
	{
		private _type = ((configName _x) call BIS_fnc_objectType) select 1;

		if(_type == "Plane") then {
			private _name = getText (_x >> 'displayName');
			private _faction = getText (_x >> 'faction');
			private _factionName = getText (_factionConfig >> _faction >> 'displayName');

			allPlanes pushBack [format["[%1] [%2] %3", _type, _factionName, _name], configName _x];
		};
	} foreach _allVehicles;
	allPlanes sort true;

	lbClear _listCars;
	{_listCars lbAdd (_x select 0);}foreach allCars;
	_listCars lbSetCurSel 0;

	lbClear _listAPCs;
	{_listAPCs lbAdd (_x select 0);}foreach allAPCs;
	_listAPCs lbSetCurSel 0;

	lbClear _listTanks;
	{_listTanks lbAdd (_x select 0);}foreach allTanks;
	_listTanks lbSetCurSel 0;

	lbClear _listHeliCAS;
	{_listHeliCAS lbAdd (_x select 0);}foreach allHeli;
	_listHeliCAS lbSetCurSel 0;

	lbClear _listPlaneCAS;
	{_listPlaneCAS lbAdd (_x select 0);}foreach allPlanes;
	_listPlaneCAS lbSetCurSel 0;

	lbClear _listTruckQRF;
	{_listTruckQRF lbAdd (_x select 0);}foreach allCars;
	_listTruckQRF lbSetCurSel 0;

	lbClear _listHeliQRF;
	{_listHeliQRF lbAdd (_x select 0);}foreach allHeli;
	_listHeliQRF lbSetCurSel 0;

	_confirmAction = _confirm ctrlAddEventHandler ["ButtonClick", {
		params ["_control"];

		disableSerialization;

		_display = findDisplay 4900;
		_listCars = _display displayCtrl 4808;
		_listAPCs = _display displayCtrl 4805;
		_listTanks = _display displayCtrl 4810;
		_listHeliCAS = _display displayCtrl 4812;
		_listPlaneCAS = _display displayCtrl 4814;
		_listTruckQRF = _display displayCtrl 4816;
		_listHeliQRF = _display displayCtrl 4818;
		_confirm = _display displayCtrl 4806;

		_selectedCar = lbcurSel _listCars;
		_selectedAPC = lbcurSel _listAPCs;
		_selectedTank = lbcurSel _listTanks;
		_selectedHeliCAS = lbcurSel _listHeliCAS;
		_selectedPlaneCAS = lbcurSel _listPlaneCAS;
		_selectedTruckQRF = lbcurSel _listTruckQRF;
		_selectedHeliQRF = lbcurSel _listHeliQRF;	

		_car = (allCars select _selectedCar) select 1;
		_apc = (allAPCs select _selectedAPC) select 1;
		_tank = (allTanks select _selectedTank) select 1;
		_heliCAS = (allHeli select _selectedHeliCAS) select 1;
		_planeCAS = (allPlanes select _selectedPlaneCAS) select 1;
		_truckQRF = (allCars select _selectedTruckQRF) select 1;
		_heliQRF = (allHeli select _selectedHeliQRF) select 1;
		
		_vehComp = "";
		{
			_vehComp = format["%1,%2", _vehComp, _x];
		} foreach [_car, _apc, _tank, _heliCAS, _planeCAS, _truckQRF, _heliQRF];

		logic set3DENAttribute ["FU_VehComp", _vehComp];

		_display closeDisplay 2;
	}];

	_confirm ctrlEnable true;

	logic setVariable ["bis_fnc_initmodules_activate", false];
};

true;