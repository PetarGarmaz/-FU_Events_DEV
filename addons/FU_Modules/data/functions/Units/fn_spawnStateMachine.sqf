FU_spawnStateMachineOn = true;
FU_stateMachine = [];

[] spawn {
	while {FU_spawnStateMachineOn} do {
		waitUntil {sleep 1; count FU_stateMachine > 0};

		{
			_args = _x select 0;
			_logic = _args select 0;
			_spawnType = _args select 1;
			_factionComp = _x select 1;
			_isGarrison = _x select 2;
			_expression = _x select 3;

			if(_isGarrison) then {
				_type = _logic getVariable ["FU_Type", "CANNOT_MOVE"];
				_radius = _logic getVariable "objectArea";
				_radius resize 4; //[a, b, angle, rect]
				_numberOfUnits = _logic getVariable ["FU_Fill", 50];

				private _group = [getPos _logic, _factionComp, _numberOfUnits, _radius, _type, _expression] call FU_fnc_spawnGarrison;
				sleep 1;
			} else {
				_type = _logic getVariable ["FU_Type", 0];

				_radius = _logic getVariable "objectArea";
				_radius resize 4; //[a, b, angle, rect]
				_numberOfUnits = _logic getVariable ["FU_Spawn_Number", 1];

				if(_spawnType == 1) then {
					_target = _logic getVariable ["FU_Attack_Marker", ""];

					for "_i" from 1 to _numberOfUnits do {
						private _group = [getPos _logic, _factionComp, _type, _radius, getMarkerPos _target, _expression] call FU_fnc_spawnAttackers;
						sleep 1;
					};
				} else {
					_patrolRadius = _logic getVariable ["FU_Patrol_Radius", 100];

					for "_i" from 1 to _numberOfUnits do {
						private _group = [getPos _logic, _factionComp, _type, _radius, _patrolRadius, _expression] call FU_fnc_spawnDefenders;
						sleep 1;
					};
				};
			};

			FU_stateMachine = FU_stateMachine - [[[_logic, _spawnType], _factionComp, _isGarrison, _expression]];
		}foreach FU_stateMachine;
	};
};