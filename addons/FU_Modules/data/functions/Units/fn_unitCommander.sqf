_logic = param [0,objNull,[objNull]];
_units = param [1,[],[[]]];
_activated = param [2,true,[true]];

_commander = _logic getVariable ["FU_Commander", ""];
_detectAI = _logic getVariable ["FU_Detect_AI", false];
_playerSide = _logic getVariable ["FU_Side_Player", "WEST"];
_enemySide = _logic getVariable ["FU_Side", "EAST"];
_spotTreshold = _logic getVariable ["FU_SpotTreshold", 1];
_responseStr = _logic getVariable ["FU_ResponseStr", 0];
_responseLvl = _logic getVariable ["FU_ResponseLvl", 1];
_radius = _logic getVariable "objectArea";
_radius insert [0, [getPos _logic]];
_commanderUnit = if(_commander == "") then {_logic} else {missionNamespace getVariable [_commander, ""]};

while {alive _commanderUnit} do {
	_allEnemyGroups = allGroups select {str(side _x) == _enemySide};
	_enemyLeaders = _allEnemyGroups apply {leader _x};
	_enemyGroups = _enemyLeaders inAreaArray _radius;

	if(count _enemyGroups > 0) then {
		{	
			private _group = group _x;
			private _leader = _x;
			private _allUnits = [];
			
			if(_detectAI) then {
				_allUnits = allUnits;
			} else {
				_allUnits = allPlayers;
			};

			private _players = _allUnits inAreaArray _radius;
			_players = _players select {str(side _x) == _playerSide};
			
			if(count _players > 0) then {
				_spotted = _players select {_group knowsAbout _x >= _spotTreshold};

				if(count _spotted >= _responseLvl) exitWith {
					private _otherGroups = _enemyGroups - [_leader];
					private _target = selectRandom _spotted;

					if(_responseStr > 0) then {
						while {count _otherGroups >= _responseStr} do {
							_randomGroup = [0, (count _otherGroups) - 1] call BIS_fnc_randomInt;
							_otherGroups deleteAt _randomGroup;
						};
					};

					{
						private _group = group _x;

						for "_i" from 1 to (count waypoints _group) do {
							deleteWaypoint [_group, 0];
						};
						
						_wp = _group addWaypoint [getPos _target, 100];
						_wp setWaypointType "SAD";
						
						_group setBehaviour "AWARE";
						_group setCombatMode "RED";
						_group setSpeedMode "FULL";
					}foreach _otherGroups;
				};
			};
		}foreach _enemyGroups;
	};
	
	sleep 60;
};

//When commander dies, every enemy goes into combat mode
_allEnemyGroups = allGroups select {str(side _x) == _enemySide};
_enemyLeaders = _allEnemyGroups apply {leader _x};
_enemyGroups = _enemyLeaders inAreaArray _radius;

{
	private _group = group _x;

	for "_i" from 1 to (count waypoints _group) do {
		deleteWaypoint [_group, 0];
	};
	
	_wp = _group addWaypoint [getPos _x, 200];
	_wp setWaypointType "SAD";
	
	_group setBehaviour "AWARE";
	_group setCombatMode "RED";
	_group setSpeedMode "FULL";
}foreach _enemyGroups;

true;