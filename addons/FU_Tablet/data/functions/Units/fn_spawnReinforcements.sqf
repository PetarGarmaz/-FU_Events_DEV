_logic = param [0,objNull,[objNull]];
_units = param [1,[],[[]]];
_activated = param [2,true,[true]];

_compositionSetup = missionNamespace getVariable [_logic getVariable "FU_Composition", objNull];

_customLoadouts = [
	_compositionSetup getVariable ["FU_Loadout_SL", "[]"],
	_compositionSetup getVariable ["FU_Loadout_MED", "[]"],
	_compositionSetup getVariable ["FU_Loadout_RIF", "[]"],
	_compositionSetup getVariable ["FU_Loadout_SPC_1", "[]"],
	_compositionSetup getVariable ["FU_Loadout_SPC_2", "[]"],
	_compositionSetup getVariable ["FU_Loadout_SPC_3", "[]"]
];
_useCustomLoadouts = _compositionSetup getVariable ["FU_Use_CL", false];
_customSquadComp = _compositionSetup getVariable ["FU_SquadComp", ""];
_customSquadComp = _customSquadComp splitString ", ";
_customVehicleComp = _compositionSetup getVariable ["FU_VehComp", ""];
_customVehicleComp = _customVehicleComp splitString ", ";
_spawnType = _logic getVariable ["FU_SpawnType", ""];
_enemySide = _compositionSetup getVariable ["FU_Side", "WEST"];
_factionComp = [_side, _customLoadouts, _customSquadComp, _customVehicleComp, _useCustomLoadouts, _compositionSetup] call FU_fnc_getFactionComposition;

_commander = _logic getVariable ["FU_Commander", ""];
_detectAI = _logic getVariable ["FU_Detect_AI", false];
_playerSide = _logic getVariable ["FU_Side_Player", "WEST"];
_spotTreshold = _logic getVariable ["FU_SpotTreshold", 1];
_responseStr = _logic getVariable ["FU_ResponseStr", 0];
_responseLvl = _logic getVariable ["FU_ResponseLvl", 1];
_radius = _logic getVariable ["FU_Radius", 300];
_commanderUnit = if(_commander == "") then {_logic} else {missionNamespace getVariable [_commander, ""]};
_spawnNumber = _logic getVariable ["FU_Spawn_Number", 1];

while {alive _commanderUnit} do {
	_allEnemyGroups = allGroups select {str(side _x) == _enemySide};
	_enemyLeaders = _allEnemyGroups apply {leader _x};
	_enemyGroups = _enemyLeaders inAreaArray [getPos _radius, _radius, ]; //HERE

	if(count _enemyGroups > 0) then {
		private _allUnits = [];

		if(_detectAI) then {
			_allUnits = allUnits;
		} else {
			_allUnits = allPlayers;
		};

		private _players = _allUnits inAreaArray _radius;
		_players = _players select {str(side _x) == _playerSide};

		{	
			private _group = group _x;
			private _leader = _x;

			if(count _players > 0) then {
				_spotted = _players select {_group knowsAbout _x >= _spotTreshold};

				if(count _spotted >= _responseLvl) exitWith {
					for "_i" from 1 to _numberOfUnits do {
						private _group = [getPos _logic, _factionComp, _type, _radius, getPos _logic] call FU_fnc_spawnAttackers;
						sleep 1;
					};
				};
			};
		}foreach _enemyGroups;
	};
	
	sleep 60;
};

true;