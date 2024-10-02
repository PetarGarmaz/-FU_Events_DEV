if(!isServer) exitWith {};

addMissionEventHandler ["PlayerConnected", {
	params ["_id", "_uid", "_name", "_jip", "_owner", "_idstr"];

	systemChat str(_uid);

	["py_scripts.update_player",[[_uid, _name]]] call py3_fnc_callExtension;
}];