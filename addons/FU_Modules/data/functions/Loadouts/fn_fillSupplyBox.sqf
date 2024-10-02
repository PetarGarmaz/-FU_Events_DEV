params ["_type"];

private _selectedObjects = get3DENSelected "object";
private _selectedBoxes = _selectedObjects select {([_x] call BIS_fnc_objectType) select 1 == "AmmoBox"};
private _selectedVehicles = _selectedObjects select {([_x] call BIS_fnc_objectType) select 0 == "Vehicle" || ([_x] call BIS_fnc_objectType) select 0 == "VehicleAutonomous"};

switch (_type) do {
	case "CAR": {
		if(count _selectedVehicles > 0) then {
			private _ammoTypes = [];
			private _ammoCounts = [];

			{
				private _primaryMags = primaryWeaponMagazine _x;
				private _handgunMags = handgunMagazine _x;
				private _launcherMags = secondaryWeaponMagazine _x;

				{
					_index = _ammoTypes pushBackUnique _x;
					if(_index > -1) then {
						_ammoCounts pushBack 100;
					};
				}foreach _primaryMags;

				{
					_index = _ammoTypes pushBackUnique _x;
					if(_index > -1) then {
						_ammoCounts pushBack 25;
					};
				}foreach _handgunMags;

				{
					_index = _ammoTypes pushBackUnique _x;
					if(_index > -1) then {
						_ammoCounts pushBack 10;
					};
				}foreach _launcherMags;
			}foreach playableUnits;

			{
				_x set3DENAttribute ["ammoBox", format["[[[[], []], [%1, %2], [['ACE_elasticBandage', 'ACE_tourniquet', 'ACE_splint', 'ACE_morphine', 'ACE_epinephrine', 'ACE_adenosine', 'ACE_bloodIV', 'ACE_bloodIV_500', 'ACE_bloodIV_250', 'ACE_bodyBag', 'ToolKit','TFAR_anprc148jem', 'ACE_suture', 'ACE_surgicalKit'], [150, 20, 20, 50, 50, 50, 10, 20, 40, 10, 5, 25, 50, 10]], [[], []]], false]", _ammoTypes + ['HandGrenade', 'MiniGrenade', 'SmokeShell', 'SmokeShellGreen', 'SmokeShellRed', 'SmokeShellBlue'], _ammoCounts + [20, 20, 40, 5, 5, 5]]];
			}foreach _selectedVehicles;
		} else {
			["There are no vehicles selected!"] call BIS_fnc_error;
		};
	};

	case "BOX": {
		if(count _selectedBoxes > 0) then {
			private _ammoTypes = [];
			private _ammoCounts = [];

			{
				private _primaryMags = primaryWeaponMagazine _x;
				private _handgunMags = handgunMagazine _x;
				private _launcherMags = secondaryWeaponMagazine _x;

				{
					_index = _ammoTypes pushBackUnique _x;
					if(_index > -1) then {
						_ammoCounts pushBack 100;
					};
				}foreach _primaryMags;

				{
					_index = _ammoTypes pushBackUnique _x;
					if(_index > -1) then {
						_ammoCounts pushBack 25;
					};
				}foreach _handgunMags;

				{
					_index = _ammoTypes pushBackUnique _x;
					if(_index > -1) then {
						_ammoCounts pushBack 10;
					};
				}foreach _launcherMags;
			}foreach playableUnits;

			{
				_x set3DENAttribute ["ammoBox", format["[[[[], []], [%1, %2], [['ACE_elasticBandage', 'ACE_tourniquet', 'ACE_splint', 'ACE_morphine', 'ACE_epinephrine', 'ACE_adenosine', 'ACE_bloodIV', 'ACE_bloodIV_500', 'ACE_bloodIV_250', 'ACE_bodyBag', 'ToolKit','TFAR_anprc148jem', 'ACE_suture', 'ACE_surgicalKit'], [150, 20, 20, 50, 50, 50, 10, 20, 40, 10, 5, 25, 50, 10]], [[], []]], false]", _ammoTypes + ['HandGrenade', 'MiniGrenade', 'SmokeShell', 'SmokeShellGreen', 'SmokeShellRed', 'SmokeShellBlue'], _ammoCounts + [20, 20, 40, 5, 5, 5]]];
			}foreach _selectedBoxes;
		} else {
			["There are no ammo boxes selected!"] call BIS_fnc_error;
		};
	};

	default { 
		["Huh?"] call BIS_fnc_error;
	};
};

