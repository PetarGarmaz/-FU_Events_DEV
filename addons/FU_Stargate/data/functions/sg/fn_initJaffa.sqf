params ["_unit"];

if(local _unit) then {
	while {alive _unit} do {
		private _players = allPlayers inAreaArray [getPosASL _unit, 30, 30, 0, false, -1];

		if(count _players > 0) then {
			_unit spawn IMS_AI_MakeAiGoBayonetScript;
			sleep 10;
		};

		sleep 2; 
	};
};