_logic = param [0,objNull,[objNull]];
_units = param [1,[],[[]]];
_activated = param [2,true,[true]];
_syncs = synchronizedObjects _logic;
_triggers = _syncs select {_type = ((typeOf _x) call BIS_fnc_objectType) select 1; _type == "UnknownObject";};
_moduleType = typeOf _logic;
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
_expression = _logic getVariable ["FU_Expression", ""];

_side = _compositionSetup getVariable ["FU_Side", "WEST"];
_factionComp = [_side, _customLoadouts, _customSquadComp, _customVehicleComp, _useCustomLoadouts, _compositionSetup] call FU_fnc_getFactionComposition;

_isGarrison = if(_moduleType == "FU_ModuleGarrison") then {true} else {false};

//Check for triggers
if(count _triggers > 0) then {
	private _radios = ["ALPHA", "BRAVO", "CHARLIE", "DELTA", "ECHO", "FOXTROT", "HOTEL", "JULIET", "INDIA"];
	private _done = false;

	while {!_done} do {
		_activatedTriggers = [];
		waitUntil {sleep 1; _activatedTriggers = _triggers select {triggerActivated _x}; count(_activatedTriggers) > 0};

		{
			if(!isNil "FU_stateMachine") then {
				FU_stateMachine pushBack [[_logic, _spawnType], _factionComp, _isGarrison, _expression];
			};
		}foreach _activatedTriggers;

		if(count(_activatedTriggers select {(triggerActivation _x) select 2}) == count _activatedTriggers) then {
			waitUntil {sleep 1; count(_activatedTriggers select {!triggerActivated _x}) == count _activatedTriggers};
		} else {
			{_triggers = _triggers - [_x]} foreach _activatedTriggers;

			if(count _triggers == 0) then {
				_done = true;
			};
		};
	};
} else {
	systemChat format["[FU Events Script Error]: No trigger synchronized, please sync this module with a trigger."];
};

true;