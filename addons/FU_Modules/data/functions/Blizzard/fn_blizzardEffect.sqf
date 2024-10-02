//If server runs the script, only control the wind
if(isDedicated) then {
	while {true} do {
		waitUntil{sleep 5; missionNamespace getVariable "FU_Blizzard"};

		setWind [-30, 0, true];

		waitUntil{sleep 5; !(missionNamespace getVariable "FU_Blizzard")};

		setWind [0, 0, true];
	};
} else {
	while {true} do {
		waitUntil{sleep 5; missionNamespace getVariable "FU_Blizzard"};

		switch (missionNamespace getVariable "FU_BlizzardType") do {
			case "SNOW": {_effect = [] call FU_fnc_blizzardEffectSnow;};
			case "RAIN": {_effect = [] call FU_fnc_blizzardEffectRain;};
			case "SAND": {_effect = [] call FU_fnc_blizzardEffectSand;};
			default {};
		};
	};
};