params ["_groupPos", "_factionComp", "_type", "_spawnRadius", "_patrolRadius"]; //0 - Squad; 1 - Fireteam; 2 - Techie; 3 - APC; 4 - Tank; 5 - Heli; 6 - Plane;

_groupPos = [[[_groupPos, _spawnRadius]], ["water"]] call BIS_fnc_randomPos;
_groupPos = [
	_groupPos select 0,
	_groupPos select 1,
	0
];

_vehicleSpawn = [_groupPos, 200, []] call BIS_fnc_nearestRoad;
if(isNull(_vehicleSpawn)) then {_vehicleSpawn = _groupPos};

_squadComp = _factionComp select 0;
_vehComp = _factionComp select 1;
_side = _factionComp select 2;
_customLoadout = _factionComp select 3;

_group = createGroup [_side, true];
_vehicle = objNull;

//Group type spawns
if(_type == 0) then {
	for "_i" from 0 to 7 do {_man = _group createUnit [(_squadComp select _i), _groupPos, [], 0, "NONE"]; sleep 0.5;};
};

if(_type == 1) then {
	for "_i" from 0 to 3 do {_man = _group createUnit [(_squadComp select _i), _groupPos, [], 0, "NONE"]; sleep 0.5;};
};

if(_type == 2) then {
	_vehicle = createVehicle [(_vehComp select 0), _vehicleSpawn, [], 0, "NONE"];
	for "_i" from 0 to 2 do {_man = _group createUnit [(_squadComp select _i), _vehicleSpawn, [], 0, "NONE"]; sleep 0.2; _man moveInAny _vehicle;};
	_group addVehicle _vehicle;
	_vehicle setEffectiveCommander (leader _group);

	[_vehicle] spawn FU_fnc_assignCrewmanLogic;
};

if(_type == 3) then {
	_vehicle = createVehicle [(_vehComp select 1), _vehicleSpawn, [], 0, "NONE"];
	_group = createVehicleCrew _vehicle;
	[_vehicle] spawn FU_fnc_assignCrewmanLogic;
};

if(_type == 4) then {
	_vehicle = createVehicle [(_vehComp select 2), _vehicleSpawn, [], 0, "NONE"];
	_group = createVehicleCrew _vehicle;
	[_vehicle] spawn FU_fnc_assignCrewmanLogic;
};

if(_type == 5) then {
	_vehicle = createVehicle [(_vehComp select 3), _groupPos, [], 0, "FLY"];
	_group = createVehicleCrew _vehicle;
};

if(_type == 6) then {
	_vehicle = createVehicle [(_vehComp select 4), _groupPos, [], 0, "FLY"];
	_group = createVehicleCrew _vehicle;
};

if(_type == 7) then {
	_vehicle = createVehicle [(_vehComp select 5), _vehicleSpawn, [], 0, "NONE"];
	
	for "_i" from 0 to 11 do {_man = _group createUnit [(_squadComp select _i), _vehicleSpawn, [], 0, "NONE"]; sleep 0.2; _man moveInAny _vehicle;};
	
	_group addVehicle _vehicle;	
	_vehicle setEffectiveCommander (leader _group);
};

if(_type == 8) then {
	_vehicle = createVehicle [(_vehComp select 6), _groupPos, [], 0, "FLY"];
	_group = createVehicleCrew _vehicle;
	
	for "_i" from 0 to 11 do {_man = _group createUnit [(_squadComp select _i), _groupPos, [], 0, "CARGO"]; sleep 0.2;};
};

//Group Logic
_move = _group addWaypoint [getPos (leader _group), 0];
_move setWaypointType "MOVE";

for "_i" from 1 to 2 do {
	_patrolRoute = [[[_groupPos, _patrolRadius]], ["water"]] call BIS_fnc_randomPos;
	_patrolRoute = [_patrolRoute select 0, _patrolRoute select 1, 0];

	if(!isNull _vehicle) then {
		_patrolRoute = getPos ([_patrolRoute, 2000, []] call BIS_fnc_nearestRoad);
	};

	_move = _group addWaypoint [_patrolRoute, 0];
	_move setWaypointType "MOVE";
};

_move4 = _group addWaypoint [_groupPos, 0];
_move4 setWaypointType "CYCLE";

_group setBehaviour "SAFE";
_group setCombatMode "RED";
_group setSpeedMode "LIMITED";

//Convert unit loadouts
if(_customLoadout select 0) then {
	private _loadouts = _customLoadout select 1;

	{
		[_x, _loadouts select _foreachIndex] call CBA_fnc_setLoadout;
	}foreach (units _group);
};

_group;