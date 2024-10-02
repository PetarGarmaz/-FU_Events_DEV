params["_alien", "_type"];

/*
0: Tripod
1: 
*/

//Do not run in 3DEN
if(is3DEN) exitWith {};

switch _type do {
	case 0: {
		//Ambient sounds
		[_alien] spawn {
			params ["_alien"];

			while {alive _alien} do {
				if(simulationEnabled _alien && !isObjectHidden _alien) then {
					_alien say3D ["FU_Tripod_Idle", 3000];
					sleep 5;
				}
			};
		};

		//Horn sounds
		[_alien] spawn {
			params ["_alien"];

			while {alive _alien} do {
				private _playSound = selectRandom [false, true];

				if(_playSound && simulationEnabled _alien && !isObjectHidden _alien) then {
					private _soundSource = "Land_ClutterCutter_small_F" createVehicle (getPosASL _alien);
					private _sound = selectRandom ["FU_Tripod_Horn_1", "FU_Tripod_Horn_2"];
					_soundSource say3D [_sound, 2000];
					sleep 10;
					deleteVehicle _soundSource;
				};

				sleep 20;
			};
		};

		//Spawn light
		_light = "#lightreflector" createVehicleLocal (getPos _alien); 
		_light setLightIntensity 1000000;
		_light setLightAmbient [1,1,1]; 
		_light setLightColor [1,1,1]; 
		_light setLightConePars [45, 10, 2];
		_light attachTo [_alien, [0,0,0], "body", true];
		_light setLightUseFlare true;
		_light setLightFlareSize 10;
		_light setLightFlareMaxDistance 2000;
		_light setLightDayLight true;

		//Execute on server only
		if(isServer) then {
			//Setup the SCP
			_alien allowDamage false; //Only killable by zeus
			_alien disableAI "FSM";
			_alien setBehaviour "CARELESS";
			_alien forceSpeed (_alien getSpeed "NORMAL");
			_alien addWeapon "FU_Tripod_Gun";
			_alien addMagazine "FU_Tripod_Mag";
			_alien addMagazine "FU_Tripod_Mag";
			_alien addMagazine "FU_Tripod_Mag";

			//Create a fake collider -- make it follow the scp
			[_alien] spawn {
				params ["_alien"];
				private _collider = "FU_Tripod_Collider" createVehicle (getPosASL _alien);
				_collider allowDamage false;
				_collider attachTo [_alien, [0,0,8]];
				
				waitUntil {sleep 5; !alive _alien};
				
				deleteVehicle _collider;				
				
			};
		};

		waitUntil {sleep 5; !alive _alien};

		deleteVehicle _light;
	};
};

