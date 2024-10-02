playSound "FU_SandstormStart"; sleep 10;

//Post process effects
private _priority = 200;
private _handle = -1;
waitUntil {_handle = ppEffectCreate ["colorCorrections", _priority]; _priority = _priority + 1; _handle > 0;};
_handle ppEffectEnable true; 
_handle ppEffectAdjust [0.9, 1, 0, [0.4, 0.3, 0.1, 0.2], [1, 1, 0.8, 0.528],  [1, 0.2, 0, 0]]; 
_handle ppEffectCommit 10;

//Particle variables
private _origin = (getPosASL player);
private _emitter = "Land_ClutterCutter_small_F" createVehiclelocal _origin;
private _sand = objNull;

//Iteration variables
private _i = 0;
private _mod = 0;

//Snow effect
while {missionNamespace getVariable "FU_Blizzard"} do {
	_emitter setPosASL (getPosASL player);
	if(_i % 5 == 0) then {playSound "FU_Sandstorm";};	

	//Blizzard starts
	if(player getVariable "FU_BlizzardSnowfall" && isNull(_sand)) then {
		_sand = "#particlesource" createVehicleLocal _origin; 
		_sand setParticleRandom [0,[10,100,0],[1,0,0],1,1,[0,0,0,0.1],0,0]; 
		_sand setParticleParams [["\A3\data_f\cl_basic",1,0,1], "", "Billboard", 1, 3, [80, 0, 0], [-60, 0, 0], 3, 10, 10, 0, [30,40,50], [[0.3,0.2,0.1,0.3], [0.4,0.3,0.1,0.3], [0.4,0.3,0.1,0]], [1], 1, 0, "", "", _emitter]; 
		_sand setDropInterval 1/50;
	};
	
	//Blizzard ends
	if(!(player getVariable "FU_BlizzardSnowfall") && !(isNull(_sand))) then {
		deleteVehicle _sand;
	};
	
	//Recreate blizzard effects (particles will only work while you are within the view distance of the ORIGIN point, not where the particle was created, so it needs to be recreated with a new origin)
	if((_origin distance player) >= (getObjectViewDistance select 0)) then {
		_origin = (getPosASL player);
		deleteVehicle _sand;
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
deleteVehicle _sand;

//Play blizzard ending
playSound "FU_SandstormEnd";

//End post processes
_handle ppEffectAdjust [1,1,0,[0,0,0,0],[1,1,1,1],[0.299, 0.587, 0.114, 0],[-1,-1,0,0,0,0,0]]; 
_handle ppEffectCommit 10;
sleep 10;
_handle ppEffectEnable false;