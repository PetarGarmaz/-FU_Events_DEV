soundGetIn[]={"A3\Sounds_F\air\Plane_Fighter_03\buzzard_getin",db0, 1, 40};
soundGetOut[]={"A3\Sounds_F\air\Plane_Fighter_03\getout",db0, 1, 40};
soundDammage[]={"", db-5, 1};
soundEngineOnInt[] = {"A3\Sounds_F\air\Plane_Fighter_03\Plane_Fighter_03-start_int", db-0, 1.0};
soundEngineOnExt[] = {"A3\Sounds_F\air\Plane_Fighter_03\Plane_Fighter_03-start_ext", db5, 1.0, 500};
soundEngineOffInt[] =  {"A3\Sounds_F\air\Plane_Fighter_03\Plane_Fighter_03-stop_int", db-0, 1.0};
soundEngineOffExt[] =  {"A3\Sounds_F\air\Plane_Fighter_03\Plane_Fighter_03-stop_ext", db5, 1.0, 500};

/*	EXTERNAL SOUNDS */
class Sounds {
	class EngineLowOut
	{
		sound[] =  {"A3\Sounds_F\air\Plane_Fighter_03\Plane_Fighter_03_low_ext", db8, 1.0, 1200};
		frequency = "1.0 min (rpm + 0.5)";
		volume = "camPos*2*(rpm factor[0.95, 0])*(rpm factor[0, 0.95])";
	};

	class EngineHighOut
	{
		sound[] =  {"A3\Sounds_F\air\Plane_Fighter_03\Plane_Fighter_03_engi_ext", db8, 1.2, 1400};
		frequency = "1";
		volume = "camPos*4*(rpm factor[0.5, 1.1])*(rpm factor[1.1, 0.5])";
	};

/*	INTERNAL SOUNDS */

	class EngineLowIn
	{
		sound[] =  {"A3\Sounds_F\air\Plane_Fighter_03\Plane_Fighter_03_low_int", db0, 1.0};
		frequency = "1.0 min (rpm + 0.5)";
		volume = (1-camPos)*((rpm factor[0.7, 0.1])*(rpm factor[0.1, 0.7]));
	};

	class EngineHighIn
	{
		sound[] =  {"A3\Sounds_F\air\Plane_Fighter_03\Plane_Fighter_03_engi_int", db0, 1.2};
		frequency = "1";
		volume = "(1-camPos)*(rpm factor[0.85, 1.0])";
	};
};