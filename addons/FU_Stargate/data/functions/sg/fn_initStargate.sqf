params ["_sg"];

if(!is3DEN) then {
	_pos = getPosASL _sg;

	_lightSource = "#lightpoint" createVehicleLocal (getPos _sg);
	_lightSource setPosASL _pos;
	_lightSource setLightColor [0.561,0.741,0.976];
	_lightSource setLightAmbient [0.71,0.835,1];
	_lightSource setLightBrightness 1;

	while {alive _sg} do {
		_source = _sg say3D ["FU_Stargate", 25];
		sleep 4;
		deleteVehicle _source;
	};

	deleteVehicle _lightSource;
};