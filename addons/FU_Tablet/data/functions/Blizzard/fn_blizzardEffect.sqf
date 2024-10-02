//If server runs the script, only controll the wind
if(isDedicated) then {
	setWind [-10, 0, true];

	while {true} do {
		waitUntil{sleep 5; missionNamespace getVariable "FU_Blizzard"};

		for [{_i = 10}, {_i >= 10}, {_i = _i + 1}] do {
			setWind [-_i, 0, true];
			sleep 0.5;
		};

		waitUntil{sleep 5;(missionNamespace getVariable "FU_Blizzard")};

		for [{_i = 30}, {_i >= 10}, {_i = _i - 1}] do {
			setWind [-_i, 0, true];
			sleep 0.5;
		};
	};
} else {
	while {true} do {
		waitUntil{sleep 5; missionNamespace getVariable "FU_Blizzard"};

		playSound "FU_BlizzardStart"; sleep 10;

		//Tree sounds
		private _treeSounds = [] spawn {
			while {missionNamespace getVariable "FU_Blizzard"} do {
				private _trees = nearestTerrainObjects [getPos player, ["TREE"], 50, false, true];
				
				if(count _trees >= 20) then {
					_randomNoise = selectRandom ["FU_Creaking_Tree_1L", "FU_Creaking_Tree_1R", "FU_Creaking_Tree_2L", "FU_Creaking_Tree_2R"];
					
					playSound _randomNoise;
					playSound _randomNoise; 
					sleep 5;
				};
				
				sleep 5;
			};
		};

		//Particle variables
		private _origin = (getPosASL player);
		private _emitter = "Land_ClutterCutter_small_F" createVehiclelocal _origin;
		
		private _snow = objNull;
		private _wind = objNull;

		//Iteration variables
		private _i = 0;
		private _mod = 0;

		//Snow effect
		while {missionNamespace getVariable "FU_Blizzard"} do {
			_emitter setPosASL (getPosASL player);
			if(_i % 5 == 0) then {playSound format["FU_Blizzard_%1", _mod];};

			//Blizzard starts
			if(player getVariable "FU_BlizzardSnowfall" && isNull(_snow) && isNull(_wind)) then {
				_snow = "#particlesource" createVehiclelocal _origin;
				_snow setParticleRandom [0,[10,10,5],[0,0,0],2,0.1,[0,0,0,0.1],0,0]; 
				_snow setParticleParams [["\A3\data_f\ParticleEffects\Universal\Universal.p3d",16,12,8,1], "", "Billboard", 1, 2, [5,0,3], [-30, 0, 0], 3, 10, 1, 1, [0.05, 0.1, 0.15], [[1,1,1,1]], [1], 0.3, 1, "", "", _emitter];
				_snow setDropInterval 1/2000;
				
				_wind = "#particlesource" createVehicleLocal _origin; 
				_wind setParticleRandom [0,[10,100,0],[1,0,0],1,1,[0,0,0,0.1],0,0]; 
				_wind setParticleParams [["\A3\data_f\cl_basic",1,0,1], "", "Billboard", 1, 3, [80, 0, 0], [-60, 0, 0], 3, 10, 10, 0, [75], [[0.9,0.9,0.9,0.2], [0.95,0.95,0.95,0.25], [1,1,1,0.3]], [1], 1, 0, "", "", _emitter]; 
				_wind setDropInterval 1/50;
			};
			
			//Blizzard ends
			if(!(player getVariable "FU_BlizzardSnowfall") && !(isNull(_snow)) && !(isNull(_wind))) then {
				deleteVehicle _snow;
				deleteVehicle _wind;
			};
			
			//Recreate blizzard effects (particles will only work while you are within the view distance of the ORIGIN point, not where the particle was created, so it needs to be recreated with a new origin)
			if((_origin distance player) >= (getObjectViewDistance select 0)) then {
				_origin = (getPosASL player);
				deleteVehicle _snow;
				deleteVehicle _wind;
			};

			//Check if player has shaking turned off, for motion sickness reasons
			if(player getVariable "FU_BlizzardProtection" == "NO" && _i % 5 == 0 && _mod == 0 && missionNamespace getVariable "FU_BlizzardShake") then {
				addCamShake [0.5, 50, 200];
			};
			
			sleep 1;

			_i = _i + 1;
			if(_i % 5 == 0) then {_mod = (_i / 5) % 5;};
		};
		
		//Lets do this just in case
		deleteVehicle _snow;
		deleteVehicle _wind;

		//Play blizzard ending
		playSound format["FU_BlizzardEnd_%1", _mod];
	};
};