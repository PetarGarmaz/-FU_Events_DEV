_logic = param [0,objNull,[objNull]];
_units = param [1,[],[[]]];
_activated = param [2,true,[true]];

_blizzard = missionNamespace getVariable ["FU_Blizzard", false];
missionNamespace setVariable ["FU_Blizzard", !_blizzard, true];