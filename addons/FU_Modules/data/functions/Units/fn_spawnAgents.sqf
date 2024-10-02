params["_logic", ["_unitCount", 10], ["_vehicleCount", 3]];

_spawnPos = getPos _logic;
_unitTypes = ["C_Man_casual_1_F","C_Man_casual_3_F","C_Man_casual_7_F","C_Man_casual_9_F","C_Man_formal_2_F","C_Man_ConstructionWorker_01_Black_F","C_Man_ConstructionWorker_01_Blue_F","C_man_hunter_1_F","C_Man_Messenger_01_F","C_Man_UtilityWorker_01_F","C_man_w_worker_F","C_Man_casual_8_F","C_Man_casual_6_v2_F"];
_vehicleTypes = ["C_Hatchback_01_F","C_Offroad_01_F","C_Offroad_01_covered_F","C_SUV_01_F","C_Van_01_transport_F","C_Tractor_01_F","C_Van_01_box_F","C_Van_02_vehicle_F","C_Truck_02_transport_F","C_Offroad_02_unarmed_F"];
_agents = [];

_agentPathing = {
	params ["_unit", "_pos", "_isVehicle"];
	
	_wp1 = [];
	_wp2 = [];

	if(_isVehicle) then {
		_wp1 = [_pos, 50, 500, 0, 0, 0, 0, [], []] call BIS_fnc_findSafePos;
		_wp2 = [_pos, 50, 500, 0, 0, 0, 0, [], []] call BIS_fnc_findSafePos;

		_wp1 = getPos ([_wp1, 2000, []] call BIS_fnc_nearestRoad);
		_wp2 = getPos ([_wp2, 2000, []] call BIS_fnc_nearestRoad);
	} else {
		_wp1 = [_pos, 20, 100, 0, 0, 0, 0, [], []] call BIS_fnc_findSafePos;
		_wp2 = [_pos, 20, 100, 0, 0, 0, 0, [], []] call BIS_fnc_findSafePos;
	};

	while {alive _unit} do {
		_unit moveTo _wp1;
		waitUntil{(getPos _unit) distance _wp1 <= 2 || !alive _unit};
		
		_unit moveTo _wp2;
		waitUntil{(getPos _unit) distance _wp2 <= 2 || !alive _unit};
		
		_unit moveTo _pos;
	};

	sleep 10;

	if(_isVehicle) then {
		deleteVehicle (vehicle _unit);
	};

	deleteVehicle _unit;
};

for "_i" from 1 to _unitCount do {
	_type = selectRandom _unitTypes;
	
	_unit = createAgent [_type, _spawnPos, [], 50, "NONE"];
	_unit disableAI "FSM";
	_unit setBehaviour "SAFE";
	_unit forceSpeed (_unit getSpeed "SLOW");
	_agents pushBack _unit;

	_walkAround = [_unit, _spawnPos, false] spawn _agentPathing;

	sleep 0.1;
};

for "_i" from 1 to _vehicleCount do {
	_type = selectRandom _unitTypes;
	_vehicleType = selectRandom _vehicleTypes;
	
	_newPos = [_spawnPos, 0, 50, 2, 0, 0, 0, [], []] call BIS_fnc_findSafePos;
	_newPos = getPos ([_newPos, 2000, []] call BIS_fnc_nearestRoad);

	_unit = createAgent [_type, _newPos, [], 0, "NONE"];
	_unit disableAI "FSM";
	_unit setBehaviour "CARELESS";
	_unit forceSpeed (_unit getSpeed "FAST");
		
	_vehicle = _vehicleType createVehicle _newPos;
	_unit moveInDriver _vehicle;

	_agents pushBack _vehicle;
	_agents pushBack _unit;

	_walkAround = [_unit, _spawnPos, true] spawn _agentPathing;

	sleep 0.1;
};

_logic setVariable ["FU_agents", _agents];