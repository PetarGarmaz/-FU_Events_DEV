_logic = param [0,objNull,[objNull]];
_units = param [1,[],[[]]];
_activated = param [2,true,[true]];

_maskStr = _logic getVariable ["FU_Module_BlizzardMasks", ""];
_masks = _maskStr splitString ", ";

missionNamespace setVariable ["FU_BlizzardType", _logic getVariable ["FU_Module_BlizzardType", "SNOW"], true]; //SNOW, RAIN, SAND
missionNamespace setVariable ["FU_Blizzard", _logic getVariable ["FU_Module_Blizzard", false], true];
missionNamespace setVariable ["FU_BlizzardDifficulty", _logic getVariable ["FU_Module_BlizzardDifficulty", 2], true]; //EASY - only visual snowstorm; MEDIUM - visual disturbances; HARD - tripping, warmth, etc... full package
missionNamespace setVariable ["FU_BlizzardTimeToFreeze", _logic getVariable ["FU_Module_BlizzardTimeToFreeze", 300], true];
missionNamespace setVariable ["FU_BlizzardTimeToDefreeze", _logic getVariable ["FU_Module_BlizzardTimeToDefreeze", 150], true];
missionNamespace setVariable ["FU_BlizzardAllowTearing", _logic getVariable ["FU_Module_BlizzardAllowTearing", true], true];
missionNamespace setVariable ["FU_BlizzardShake", _logic getVariable ["FU_Module_BlizzardShake", true], true];
missionNamespace setVariable ["FU_BlizzardMaskOverlay", _logic getVariable ["FU_Module_BlizzardMaskOverlay", true], true];
missionNamespace setVariable ["FU_BlizzardMasks", _masks, true];

player setVariable ["FU_BlizzardFrost", 0, true];
player setVariable ["FU_BlizzardFreezing", false, true];
player setVariable ["FU_BlizzardSnowfall", true, true];
player setVariable ["FU_BlizzardTearing", true, true];
player setVariable ["FU_BlizzardProtection", "NO", true];

"FU_BlizzardMask" call BIS_fnc_rscLayer;
"FU_BlizzardHUD" call BIS_fnc_rscLayer;
"FU_BlizzardHint" call BIS_fnc_rscLayer;

if(missionNamespace getVariable "FU_BlizzardDifficulty" >= 0) then {
	[] spawn FUB_fnc_blizzardEffect;
	[] spawn FUB_fnc_blizzardLogic;
	if(missionNamespace getVariable "FU_BlizzardMaskOverlay") then {[] spawn FUB_fnc_blizzardMask;};
};

if(missionNamespace getVariable "FU_BlizzardDifficulty" >= 1) then {
	[] spawn FUB_fnc_blizzardUI;
	if(missionNamespace getVariable "FU_BlizzardAllowTearing") then {[] spawn FUB_fnc_blizzardTearing;};
};

if(missionNamespace getVariable "FU_BlizzardDifficulty" >= 2) then {
	[] spawn FUB_fnc_blizzardFrost;
	[] spawn FUB_fnc_blizzardHazard;
};

true;