if(isServer) then {
	["Initialize"] call BIS_fnc_dynamicGroups;
	["RegisterInitialPlayerGroups"] call BIS_fnc_dynamicGroups;

} else {
	["InitializePlayer", [player]] call BIS_fnc_dynamicGroups;
};