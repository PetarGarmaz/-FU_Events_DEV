while {true} do {
	waitUntil{sleep 1; missionNamespace getVariable "FU_Blizzard"};

	private _randomSleep = [20, 60] call BIS_fnc_randomInt;
	sleep _randomSleep;

	if(player getVariable "FU_BlizzardProtection" == "NO" && stance player == "STAND" && missionNamespace getVariable "FU_Blizzard") then {
		"FU_BlizzardHint" cutText ["Ah damn! The wind's too strong! I should be keep a low profile, stick close to friendlies and vehicles, or find shelter!", "PLAIN DOWN", 5, true, false];
	
		private _randomMove = selectRandom ["AmovPercMstpSrasWrflDnon_AadjPpneMstpSrasWrflDleft", "AmovPercMstpSrasWrflDnon_AadjPpneMstpSrasWrflDright"];
		player switchMove _randomMove;
		
		sleep 0.5;
		cutText ["", "BLACK OUT", 0.5];
		sleep 0.5;
		cutText ["", "BLACK IN", 0.5];
		playSound "ACE_hit_Male08ENG_low_3";
		sleep 1;
		playSound "ACE_moan_Male08ENG_low_1";
	};
};