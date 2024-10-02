params ["_side", "_customLoadouts", "_customSquadComp", "_customVehicleComp", "_useCustomLoadouts", "_compositionSetup"];

private _squadComp = [];
private _vehComp = [];
private _unitLoadouts = [false, []];

private _defaultSquadComp_B = ["B_Soldier_SL_F", "B_medic_F", "B_Soldier_F", "B_soldier_AR_F", "B_Soldier_SL_F", "B_medic_F", "B_Soldier_F", "B_soldier_LAT_F", "B_Soldier_SL_F", "B_medic_F", "B_Soldier_F", "B_soldier_M_F"];
private _defaultSquadComp_O = ["O_G_Soldier_SL_F", "O_G_medic_F", "O_G_Soldier_F", "O_G_soldier_AR_F", "O_G_Soldier_SL_F", "O_G_medic_F", "O_G_Soldier_F", "O_G_soldier_LAT_F", "O_G_Soldier_SL_F", "O_G_medic_F", "O_G_Soldier_F", "O_G_soldier_M_F"];
private _defaultSquadComp_I = ["I_Soldier_SL_F", "I_medic_F", "I_Soldier_F", "I_soldier_AR_F", "I_Soldier_SL_F", "I_medic_F", "I_Soldier_F", "I_soldier_LAT_F", "I_Soldier_SL_F", "I_medic_F", "I_Soldier_F", "I_soldier_M_F"];
private _defaultSquadComp = [];

private _defaultVehicles_B = ["B_LSV_01_armed_F", "B_APC_Wheeled_01_cannon_F", "B_MBT_01_TUSK_F", "B_Heli_Light_01_dynamicLoadout_F", "B_Plane_CAS_01_dynamicLoadout_F", "B_Truck_01_covered_F", "B_Heli_Transport_03_unarmed_F"];
private _defaultVehicles_O = ["O_LSV_02_armed_F", "O_APC_Wheeled_02_rcws_v2_F", "O_MBT_02_cannon_F", "O_Heli_Light_02_dynamicLoadout_F", "O_Plane_CAS_02_dynamicLoadout_F", "O_Truck_02_covered_F", "O_Heli_Transport_04_covered_F"];
private _defaultVehicles_I = ["B_T_LSV_01_armed_F", "I_APC_tracked_03_cannon_F", "I_MBT_03_cannon_F", "I_Heli_light_03_dynamicLoadout_F", "I_Plane_Fighter_03_CAS_F", "I_Truck_02_covered_F", "I_Heli_Transport_02_F"];
private _defaultVehicles = [];

//Get side
switch _side do {
	case "WEST": {_side = west};
	case "EAST": {_side = east};
	case "GUER": {_side = resistance};
	default {_side = civilian};
};

//Get default vehicles
switch _side do {
	case west: {_defaultSquadComp = _defaultSquadComp_B};
	case east: {_defaultSquadComp = _defaultSquadComp_O};
	case independent: {_defaultSquadComp = _defaultSquadComp_I};
};

//Get default vehicles
switch _side do {
	case west: {_defaultVehicles = _defaultVehicles_B};
	case east: {_defaultVehicles = _defaultVehicles_O};
	case independent: {_defaultVehicles = _defaultVehicles_I};
};

//Filter out units
if(isNull(_compositionSetup)) then {
	_squadComp = _defaultSquadComp;
} else {
	if(count _customSquadComp >= 12) then {
		_squadComp = _customSquadComp;
	} else {
		_squadComp = _customSquadComp;
		_count = count _customSquadComp;

		for "_i" from 1 to (12 - _count) do {
			_squadComp pushBack (selectRandom _customSquadComp);
		};
	};
};

//Filter out vehicles
if(isNull(_compositionSetup)) then {
	_vehComp = _defaultVehicles;
} else {
	if(count _customVehicleComp >= 7) then {
		_vehComp = _customVehicleComp;
	} else {
		_vehComp = _customVehicleComp;
		_count = count _customVehicleComp;

		for "_i" from _count to 7 do {
			_vehComp pushBack (_defaultVehicles select (_i - 1));
		};
	};

};

//Convert all loadouts to array
_customLoadouts = _customLoadouts apply {parseSimpleArray _x};

if(_useCustomLoadouts) then {
	_unitLoadouts = [
		true,
		[
			_customLoadouts select 0,
			_customLoadouts select 1,
			_customLoadouts select 2,
			_customLoadouts select 3,
			_customLoadouts select 0,
			_customLoadouts select 1,
			_customLoadouts select 2,
			_customLoadouts select 4,
			_customLoadouts select 0,
			_customLoadouts select 1,
			_customLoadouts select 2,
			_customLoadouts select 5
		]
	];
};

[_squadComp, _vehComp, _side, _unitLoadouts];