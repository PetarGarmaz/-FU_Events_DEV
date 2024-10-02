_logic = param [0,objNull,[objNull]];
_units = param [1,[],[[]]];
_activated = param [2,true,[true]];
_trigger = (synchronizedObjects _logic) select 0;

_customLoadouts = [
	_logic getVariable ["FU_ModuleSpawnGarrison_Loadout_SL", "[]"],
	_logic getVariable ["FU_ModuleSpawnGarrison_Loadout_MED", "[]"],
	_logic getVariable ["FU_ModuleSpawnGarrison_Loadout_AR", "[]"],
	_logic getVariable ["FU_ModuleSpawnGarrison_Loadout_AT", "[]"],
	_logic getVariable ["FU_ModuleSpawnGarrison_Loadout_RIF", "[]"],
	_logic getVariable ["FU_ModuleSpawnGarrison_Loadout_MAR", "[]"]
];

_useCustomSquadComp = _logic getVariable ["FU_ModuleSpawnGarrison_CustomComp_Squad", false];
_customSquadComp = _logic getVariable ["FU_ModuleSpawnGarrison_Comp_Squad", "[]"];

_faction = _logic getVariable ["FU_ModuleSpawnGarrison_Faction", "CUP_B_US_Army*CUP_EdSubcat_Personel_UCP"];
_factionComp = [_faction, _customLoadouts, _customSquadComp, "[]", _useCustomSquadComp, false] call FU_fnc_getFactionComposition;

if(count (synchronizedObjects _logic) > 0) then {
	private _isRepeatable = (triggerActivation _trigger) select 2;
	
	if(_isRepeatable) then {
		while {true} do {
			waitUntil {sleep 1; triggerActivated _trigger};

			if(!isNil "FU_stateMachine") then {
				FU_stateMachine pushBack [_logic, _factionComp, true];
			};

			waitUntil {sleep 1; !triggerActivated _trigger};
		};
	} else {
		waitUntil {sleep 1; triggerActivated _trigger};

		if(!isNil "FU_stateMachine") then {
			FU_stateMachine pushBack [_logic, _factionComp, true];
		};
	};	
} else {
	systemChat format["[FU Events Script Error]: No trigger synchronized, please sync this module with a trigger."];
};

true;