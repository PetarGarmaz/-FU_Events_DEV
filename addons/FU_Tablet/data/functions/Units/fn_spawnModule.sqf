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

_side = _compositionSetup getVariable ["FU_Side", "WEST"];
_factionComp = [_side, _customLoadouts, _customSquadComp, _customVehicleComp, _useCustomLoadouts, _compositionSetup] call FU_fnc_getFactionComposition;

_isGarrison = if(_moduleType == "FU_ModuleGarrison") then {true} else {false};

//Check for triggers
if(count _triggers > 0) then {
	private _areRepeatable = _triggers apply {(triggerActivation _x) select 2};
	
	if({_x} count _areRepeatable == count _areRepeatable) then {
		while {true} do {
			_cooldowns = _triggers apply {triggerInterval _x};
			_avgCooldown = 0;
			{_avgCooldown = _avgCooldown + _x} foreach _cooldowns;
			_avgCooldown = _avgCooldown / count _cooldowns;

			waitUntil {sleep _avgCooldown; count(_triggers select {triggerActivated _x}) == count _triggers};

			if(!isNil "FU_stateMachine") then {
				FU_stateMachine pushBack [[_logic, _spawnType], _factionComp, _isGarrison];	
			};
		};
	} else {
		waitUntil {sleep 1; count(_triggers select {triggerActivated _x}) == count _triggers};

		if(!isNil "FU_stateMachine") then {
			FU_stateMachine pushBack [[_logic, _spawnType], _factionComp, _isGarrison];
		};
	};	
} else {
	systemChat format["[FU Events Script Error]: No trigger synchronized, please sync this module with a trigger."];
};

true;