params["_scp", "_type"];

/*
0: SCP 093 - Unclean One
1: SCP 093 - Black Entity
2: Invisible thing
3: Tentacle (SCP 610 A)
4: Large Skeleton
5: SCP 3000
*/

//Do not run in 3DEN
if(is3DEN) exitWith {};

switch _type do {
	case 0: {
		//Ambient sounds
		[_scp] spawn {
			params ["_scp"];

			while {alive _scp} do {
				_scp say3D ["FU_SCP_093_Idle", 2000];
				sleep 60;
			};
		};

		_scp enableMimics false;

		//Execute on server only
		if(isServer) then {
			//Setup the SCP
			_scp allowDamage false; //Only killable by zeus
			_scp disableAI "FSM";
			_scp setBehaviour "CARELESS";
			_scp forceSpeed (_scp getSpeed "NORMAL");

			//Create a fake collider -- make it follow the scp
			[_scp] spawn {
				params ["_scp"];
				private _collider = "FU_SCP_093_UncleanOne_Collider" createVehicle (getPosASL _scp);
				_collider allowDamage false;
				
				while {alive _scp} do {
					private _pos = getPosASL _scp;
					_collider setPosASL _pos;
					sleep 0.25;
				};

				deleteVehicle _collider;
			};

			while {alive _scp} do {
				//Find if players are nearby
				private _nearbyUnits = allUnits inAreaArray [getPosASL _scp, 25, 25, 0, false, -1];
				private _nearbyEnemies = _nearbyUnits select {side _x != side _scp};

				//Attack players
				if(count _nearbyEnemies > 0) then {
					private _scpPos = getPosATL _scp;

					//Sound and animation
					_soundSource = createVehicle ["Land_HelipadEmpty_F", _scpPos, [], 0, "CAN_COLLIDE"];
					[_soundSource, ["FU_SCP_093_Attack", 2000]] remoteExec ["say3D", 0];
					[_scp, "Dog_Idle_Bark"] remoteExec ["switchMove", 0];
					
					sleep 3;

					//Dust effect and player damage
					_nearbyUnits = allUnits inAreaArray [getPosASL _scp, 25, 25, 0, false, -1];
					_nearbyEnemies = _nearbyUnits select {side _x != side _scp};
					_nearbyBuildings = nearestTerrainObjects [_scpPos, ["HOUSE", "BUILDING"], 25];
					
					{
						private _dir = _scp getDir _x;
						_x setVelocity [(sin _dir * 10), (cos _dir * 10), 10];
						[_x, 1, "body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit", _x];
						[_x, 1, "LeftLeg", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit", _x];
						[_x, 1, "RightLeg", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit", _x];
					}foreach _nearbyEnemies;

					{
						_x setDamage 1;
					}foreach _nearbyBuildings;

					for "_i" from 0 to 24 do {
						_j = _i * 15;
						_randomSize = [10, 20] call BIS_fnc_randomInt;
						[[["\A3\data_f\cl_basic",1,0,1], "", "Billboard", 1, 2, [0, 0, 0], [cos(_j) * 10, sin(_j) * 10, 0], 3, 10, 8, 0.4, [0, _randomSize], [[0.1,0.1,0.1,1], [0.3,0.3,0.3,0]], [1], 1, 0, "", "", _scp]] remoteExec ["drop", 0];
					};

					sleep 1;

					[_scp, ""] remoteExec ["switchMove", 0];
				};

				sleep 2;
			};
		};
	};

	case 1: {
		//Execute on all clients but the server
		if(!isServer) then {
			private _hidden = true;
			_scp hideObject true;

			while {alive _scp} do {
				if(currentWeapon player == "XZ_CamRecorder_1") then {
					if(cameraView == "GUNNER" && _hidden) then {
						_scp hideObject false;
						_hidden = false;
					};
					
					if(cameraView != "GUNNER" && !_hidden) then {
						_scp hideObject true;
						_hidden = true;
					};
				} else {
					_scp hideObject true;
					_hidden = true;
				};
			};

			_scp hideObject true;
			_hidden = true;
		} else {
			_scp allowDamage false; //Only killable by zeus
			_scp disableAI "FSM";
			_scp setBehaviour "CARELESS";
			_scp forceSpeed (_scp getSpeed "SLOW");
		};
	};

	case 2: {
		_light = "#lightpoint" createVehicleLocal (getPos _scp);
		_light attachTo [_scp, [0,0,0], "head"];  
		_light setLightColor [0.1, 0.1, 0.7]; 
		_light setLightDayLight true; 
		_light setLightBrightness 1; 
		_light setLightFlareSize 2; 
		_light setLightFlareMaxDistance 1000; 
		_light setLightUseFlare true;

		waitUntil {sleep 10; !alive _scp};

		for [{_i = 1}, {_i > 0}, {_i = _i - 0.1}] do {
			_light setLightBrightness _i; 
			_light setLightFlareSize _i * 2;
			sleep 0.1;
		};

		deleteVehicle _light;
	};

	case 3: {
		if(isServer) then {
			private _soundSource = createVehicle ["Land_HelipadEmpty_F", getPosATL _scp, [], 0, "CAN_COLLIDE"];
			private _scpPos = getPos _scp;

			_soundSource attachTo [_scp, [0,0,0]];
			[_scp, "FU_SCP_610_A_Idle"] remoteExec ["switchMove", 0];
			[_scp, "ALL"] remoteExec ["disableAI", 0];
			_scp enableMimics false;

			while {alive _scp} do {
				private _playersInArea = allPlayers inAreaArray [_scpPos, 10, 10, 0, false, 10];

				[_scp, ["FU_SCP_610_A_Idle", 300]] remoteExec ["say3D", 0];

				if(count _playersInArea > 0) then {
					[_soundSource, ["FU_SCP_610_A_Attack", 300]] remoteExec ["say3D", 0];
					[_scp, "FU_SCP_610_A_Attack"] remoteExec ["switchMove", 0];

					sleep 2.5;

					{
						private _dist = _x distance _scp;
						private _dir = _scp getDir _x;

						if(_dist <= 10) then {
							[_x, [(sin _dir * 6), (cos _dir * 6), 8]] remoteExec ["setVelocity", _x];
							[_x, 1, "body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit", _x];
						};
					}foreach allPlayers;
					
					for "_i" from 0 to 24 do {
						_j = _i * 15;
						_randomSize = [3, 6] call BIS_fnc_randomInt;
						[[["\A3\data_f\cl_basic",1,0,1], "", "Billboard", 1, 3, [0, 0, 0], [cos(_j) * 5, sin(_j) * 5, 0], 3, 10, 8, 0.4, [0, _randomSize], [[0.1,0.1,0.1,1], [0.3,0.3,0.3,0]], [1], 1, 0, "", "", _scp]] remoteExec ["drop", 0];
					};

					sleep 2.5;

					[_scp, "FU_SCP_610_A_Idle"] remoteExec ["switchMove", 0];

					sleep 5;
				};

				sleep 7;
			};

			[_scp, "FU_SCP_610_A_Death"] remoteExec ["switchMove", 0];
		};
	};

	case 4: {
		//Ambient sounds
		[_scp] spawn {
			params ["_scp"];

			while {alive _scp} do {
				_scp say3D ["FU_SCP_Ambience_2", 2000];
				sleep 60;
			};
		};

		_scp enableMimics false;

		//Execute on server only
		if(isServer) then {
			//Setup the SCP
			_scp allowDamage false; //Only killable by zeus
			_scp disableAI "FSM";
			_scp setBehaviour "CARELESS";
			_scp forceSpeed (_scp getSpeed "NORMAL");

			//Create a fake collider -- make it follow the scp
			[_scp] spawn {
				params ["_scp"];
				private _collider = "FU_SCP_093_UncleanOne_Collider" createVehicle (getPosASL _scp);
				_collider allowDamage false;
				
				while {alive _scp} do {
					private _pos = getPosASL _scp;
					_collider setPosASL _pos;
					sleep 0.25;
				};

				deleteVehicle _collider;
			};

			while {alive _scp} do {
				//Find if players are nearby
				private _nearbyUnits = allUnits inAreaArray [getPosASL _scp, 25, 25, 0, false, -1];
				private _nearbyEnemies = _nearbyUnits select {side _x != side _scp};

				//Attack players
				if(count _nearbyEnemies > 0) then {
					private _scpPos = getPosATL _scp;

					//Sound and animation
					_soundSource = createVehicle ["Land_HelipadEmpty_F", _scpPos, [], 0, "CAN_COLLIDE"];
					[_soundSource, ["FU_SCP_093_Attack", 2000]] remoteExec ["say3D", 0];
					[_scp, "Dog_Idle_Bark"] remoteExec ["switchMove", 0];
					
					sleep 3;

					//Dust effect and player damage
					_nearbyUnits = allUnits inAreaArray [getPosASL _scp, 30, 30, 0, false, -1];
					_nearbyEnemies = _nearbyUnits select {side _x != side _scp};
					_nearbyBuildings = nearestTerrainObjects [_scpPos, ["HOUSE", "BUILDING"], 50];
					
					{
						private _dir = _scp getDir _x;
						[_x, [(sin _dir * 25), (cos _dir * 25), 10]] remoteExec ["setVelocity", _x];
						[_x, 1, "body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit", _x];
						[_x, 1, "LeftLeg", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit", _x];
						[_x, 1, "RightLeg", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit", _x];
					}foreach _nearbyEnemies;

					{
						_x setDamage 1;
					}foreach _nearbyBuildings;

					for "_i" from 0 to 24 do {
						_j = _i * 15;
						_randomSize = [20, 60] call BIS_fnc_randomInt;
						[[["\A3\data_f\cl_basic",1,0,1], "", "Billboard", 1, 2, [0, 0, 0], [cos(_j) * 50, sin(_j) * 50, 0], 3, 10, 8, 0.4, [random(20), _randomSize], [[0.1,0.1,0.1,1], [0.1,0.1,0.1,0]], [1], 1, 0, "", "", _scp]] remoteExec ["drop", 0];
					};

					sleep 1;

					[_scp, ""] remoteExec ["switchMove", 0];
				};

				sleep 2;
			};
		};
	};

	case 5: {
		_scp enableMimics false;

		_scpEffects = [_scp] spawn {
			params ["_scp"];

			//Particles
			_emitter = "#particlesource" createVehicleLocal getPosATL _scp;  
			_emitter setParticleClass "WaterSplashAir";  
			_emitter setDropInterval 1/100;  
			_emitter setParticleRandom [5, [1, 1, 1], [10, 10, 20], 0, 5, [0, 0, 0, 0], 0, 0];
			sleep 5;
			deleteVehicle _emitter;

			waitUntil {!alive _scp};

			_emitter = "#particlesource" createVehicleLocal getPosATL _scp;  
			_emitter setParticleClass "WaterSplashAir";  
			_emitter setDropInterval 1/100;  
			_emitter setParticleRandom [5, [1, 1, 1], [10, 10, 20], 0, 5, [0, 0, 0, 0], 0, 0];
			sleep 10;
			deleteVehicle _emitter;
		};

		if(isServer) then {
			private _colliders = [];
			private _lasers = [];
			private _soundSource = createVehicle ["Land_HelipadEmpty_F", getPosATL _scp, [], 0, "CAN_COLLIDE"];

			//Throwing function
			_fnc_throwCars = {
				params["_scp","_soundSource"];

				private _target = selectRandom allPlayers;
				private _approxDir = _scp getDir _target;

				//Do the throw
				[_scp, "FU_SCP_3000_Throw"] remoteExec ["switchMove", 0];
				_scp setDir _approxDir;

				sleep 2.5;

				[_soundSource, ["FU_SCP_Throw", 2000]] remoteExec ["say3D", 0];

				private _carType = "C_Truck_02_transport_F";
				private _pos = [(getPosASL _scp) select 0, (getPosASL _scp) select 1, ((getPosASL _scp) select 2) + 210];
				private _car = createVehicle [_carType, _pos, [], 0, "CAN_COLLIDE"];
				private _angle = 45;
				_car attachTo [_scp, [0,0,0], "Mouth", true];

				private _throwPos = getPosASL _target;
				private _dir = _pos getDir _throwPos;

				private _g = 9.81; //gravity
				private _d = _throwPos distance2D _pos; //distance
				private _h = abs((_pos select 2) - (_throwPos select 2)); //height
				
				private _v = sqrt((_g * _d ^ 2) / (2 * cos(_angle) * (_d * sin(_angle) + _h * cos(_angle))));
				private _vx = _v * cos(_angle);
				private _vy = _v * sin(_angle);
				
				private _velocity = [sin _dir * _vx, cos _dir * _vx, _vy];

				sleep 2;

				detach _car;
				_car setPosASL _pos;
				_car setVelocity _velocity;
				_car allowDamage false;

				[_car] spawn {
					params["_car"];
					waitUntil {sleep 10; isTouchingGround _car};
					deleteVehicle _car;
				};

				sleep 5.5;

				[_scp, "FU_SCP_3000_Idle"] remoteExec ["switchMove", 0];
			};

			//Initialize some stuff
			_scp allowDamage false;
			_soundSource attachTo [_scp, [0,0,0]];
			[_scp, "FU_SCP_3000_Surface"] remoteExec ["switchMove", 0];
			[_soundSource, ["FU_SCP_3000_Surface", 2000]] remoteExec ["say3D", 0];
			[_scp, "ALL"] remoteExec ["disableAI", 0];
			[true] remoteExec ["enableCamShake", 0];
			[[10, 20, 25]] remoteExec ["addCamShake", 0];

			//Initialize colliders and laser targets
			{
				private _collider = createVehicle ["FU_SCP_3000_Col", getPosATL _scp, [], 0, "CAN_COLLIDE"];
				_collider attachTo [_scp, [0,0,0], _x, true];
				_colliders pushBack _collider;

				if(_foreachindex % 3 == 0) then {
					private _laser = createVehicle ["LaserTargetW", getPosATL _scp, [], 0, "CAN_COLLIDE"];
					_laser attachTo [_scp, [0,0,0], _x, true];
					_lasers pushBack _laser;	
				};
			}foreach (_scp selectionNames "Memory");

			//Make sure the scp turns to one of the players
			private _nearestPlayer = [allPlayers, getPosATL _scp] call BIS_fnc_nearestPosition;
			private _dirToNearestPlayer = _scp getDir _nearestPlayer;
			_scp setDir _dirToNearestPlayer;

			sleep 10;

			[_scp, "FU_SCP_3000_Idle"] remoteExec ["switchMove", 0];
			[_scp, ["FU_SCP_3000_Idle_3", 2000]] remoteExec ["say3D", 0];

			//Main brain and logic
			while {alive _scp && {!alive _x} count _colliders < 2} do {
				private _playersInArea = allPlayers inAreaArray [getPosATL _scp, 40, 40, 0, false, 300];
				private _alivePlayersInArea = _playersInArea select {alive _x && !(_x getVariable ["ace_isunconscious", false])};

				if(count _alivePlayersInArea > 0) then {
					private _target = selectRandom _alivePlayersInArea;
					private _targetHeight = (getPosASL _target) select 2;
					
					if(_targetHeight >= -5 && _targetHeight <= 25) then {
						[_soundSource, ["FU_SCP_3000_Idle_2", 2000]] remoteExec ["say3D", 0];
						[_scp, "FU_SCP_3000_Eat"] remoteExec ["switchMove", 0];

						sleep 4;

						_targetInArea = _target inArea [getPosATL _scp, 20, 20, 0, false, 300];

						if(_targetInArea) then {
							_target = vehicle _target;

							_target attachTo [_scp, [0,0,0], "Mouth", true];
							sleep 6;
							_target setDamage [1, true, _scp];
							detach _target;
							[_scp, "FU_SCP_3000_Idle"] remoteExec ["switchMove", 0];
							sleep 10;
						} else {
							[_scp, "FU_SCP_3000_Idle"] remoteExec ["playMoveNow", 0];
						};
					} else {
						[_soundSource, ["FU_SCP_3000_Attack", 2000]] remoteExec ["say3D", 0];
						[_scp, "FU_SCP_3000_Attack"] remoteExec ["switchMove", 0];

						sleep 2;

						_targetInArea = _target inArea [getPosATL _scp, 40, 40, 0, false, 300];

						if(_targetInArea) then {
							_target = vehicle _target;

							_target attachTo [_scp, [0,0,0], "Mouth", true];
							sleep 8;
							_target setDamage [1, true, _scp];
							detach _target;
							[_scp, "FU_SCP_3000_Idle"] remoteExec ["switchMove", 0];
							sleep 5;
						} else {
							[_scp, "FU_SCP_3000_Idle"] remoteExec ["playMoveNow", 0];
						};
					};

				} else {
					private _attackAnyways = selectRandom [0, 1, 2, 3];

					if(_attackAnyways == 0) then {
						_throw = [_scp, _soundSource] spawn _fnc_throwCars;
						waitUntil {sleep 1; scriptDone _throw};
					};					
				};

				sleep 5;

				[_scp, ["FU_SCP_3000_Idle_3", 2000]] remoteExec ["say3D", 0];
			};

			_scp setDamage 1;
			waitUntil{animationState _scp == "FU_SCP_3000_Death"};
			[_soundSource, ["FU_SCP_3000_Death", 2000]] remoteExec ["say3D", 0];
			{deleteVehicle _x}foreach _colliders;
			{deleteVehicle _x}foreach _lasers;

			sleep 20;

			deleteVehicle _soundSource;
		};		
	};

	case 6: {
		_scp enableMimics false;

		//Particles
		[_scp] spawn {
			params ["_scp"];

			_pos = getPosATL _scp;

			_emitter = "#particlesource" createVehicleLocal _pos;  
			_emitter setParticleClass "WaterSplashAir";  
			_emitter setDropInterval 1/100;  
			_emitter setParticleRandom [5, [1, 1, 1], [10, 10, 20], 0, 5, [0, 0, 0, 0], 0, 0];
			sleep 10;

			for "_i" from 0 to 15 do {
				_newPos = [_pos # 0, (_pos # 1) - _i * 10, _pos # 2];
				_emitter setPosATL _newPos;
				sleep 1;
			};

			deleteVehicle _emitter;
		};

		if(isServer) then {
			private _soundSource = createVehicle ["Land_HelipadEmpty_F", getPosATL _scp, [], 0, "CAN_COLLIDE"];

			//Initialize some stuff
			_scp allowDamage false;
			_soundSource attachTo [_scp, [0,0,0]];
			[_scp, "FU_SCP_3000_SurfaceDive"] remoteExec ["switchMove", 0];
			[_soundSource, ["FU_SCP_3000_Surface", 2000]] remoteExec ["say3D", 0];
			[_scp, "ALL"] remoteExec ["disableAI", 0];
			[true] remoteExec ["enableCamShake", 0];
			[[10, 20, 25]] remoteExec ["addCamShake", 0];

			private _trigger = createTrigger ["EmptyDetector", getPosATL _scp, false];
			_trigger setTriggerArea [10, 10, 0, true, 10];
			_trigger setTriggerActivation ["ANY", "PRESENT", false];
			_trigger setVariable ["FU_SCP", _scp, true];
			_trigger setTriggerStatements ["this", "
				{
					_scp = thisTrigger getVariable 'FU_SCP';
					if(_x != _scp) then {
						(vehicle _x) attachTo [_scp, [0,0,0], 'Mouth', true];
					};
				}foreach thisList;
			", ""];
			_trigger attachTo [_scp, [0,0,0], 'Mouth', true];

			sleep 10;
			[_soundSource, ["FU_SCP_3000_Death", 2000]] remoteExec ["say3D", 0];
			sleep 9;
			{_x setDamage [1, true, _scp]; detach _x}foreach attachedObjects _scp;
			sleep 6;

			deleteVehicle _scp;
			deleteVehicle _soundSource;
		};
	};

	/*
	case 6: {
		private _pos = getPos _scp;
		_snow = "#particlesource" createVehiclelocal _origin;
		_snow setParticleRandom [0,[10,10,5],[0,0,0],2,0.1,[0,0,0,0.1],0,0]; 
		_snow setParticleParams [["\A3\data_f\ParticleEffects\Universal\Universal.p3d",16,12,8,1], "", "Billboard", 1, 2, [5,0,3], [-30, 0, 0], 3, 10, 1, 1, [0.05, 0.1, 0.15], [[1,1,1,1]], [1], 0.3, 1, "", "", _emitter];
		_snow setDropInterval 1/2000;
	};*/
};