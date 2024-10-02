// GENERAL
maxSpeed					= 800; // flight behavior arrays are dependable on this value
// acceleration 				= 300;

landingAoa					= 6*3.1415/180; // landing angle of attack in radians, for AI
landingSpeed				= 215; // for AI to approach the runawy, the plane should be stable at this speed

stallSpeed					= 190;
stallWarningTreshold		= 0.1;

wheelSteeringSensitivity	= 2.0; // steering authority of the nose wheel

airBrake 					= 1;
airBrakeFrictionCoef 		= 2.2;
flaps						= 1;
flapsFrictionCoef 			= 0.32;
gearsUpFrictionCoef 		= 0.6;

airFrictionCoefs0[] 		= { 0.0, 0.0, 0.0 };
airFrictionCoefs1[] 		= { 0.1, 0.5, 0.0066 };
airFrictionCoefs2[] 		= { 0.001, 0.005, 0.000068};

angleOfIndicence			= -2*3.1415/180; // difference between forward and airfold chord line in radians
envelope[] =
{
	0.0,	// 0
	0.05,	// 50
	0.2,	// 100
	0.46,	// 150
	0.82,	// 200
	1.28,	// 250
	1.84,	// 300
	2.4,	// 350
	2.88,	// 400
	3.65,	// 450
	4.5,	// 500
	5.45,	// 550
	6.48,	// 600
	7.61,	// 650
	8.1,	// 700
	8.3,	// 750
	8.4,	// 800
	8.3,	// 850
	8.0,	// 900
	7.6,	// 950
	7.0		// 1000
};

// THRUST
altNoForce				= 13000;
altFullForce			= 2000;
thrustCoef[]			=
{	//		 fSpeed = maxI * speedRel; speedRel = speed / (maxSpeed * 1.5f); maxI = _thrustCoef.Size() - 1;
	1.42,	// 0
	1.38,	// 75
	1.34,	// 150
	1.30,	// 225
	1.25,	// 300
	1.20,	// 375
	1.19,	// 450
	1.18,	// 525
	1.17,	// 600
	1.17,	// 675
	1.16,	// 750
	1.16,	// 825
	0.1,	// 900
	0.0,	// 975
	0.0,	// 1050
	0.0,	// 1125
	0.0		// 1200
};

// CONTROL SURFACES
aileronSensitivity		= 1.0;
aileronCoef[]			=
{
	0.0,	// 0
	0.11,	// 75
	0.45,	// 150
	0.81,	// 225
	1.1,	// 300
	1.15,	// 375
	1.2,	// 450
	1.25,	// 525
	1.3,	// 600
	1.35,	// 675
	1.4,	// 750
	1.43,	// 825
	1.45,	// 900
	1.47,	// 975
	1.4,	// 1050
	1.2,	// 1125
	0.8		// 1200
};

elevatorSensitivity		= 1.1;
elevatorCoef[]			=
{
	0.0,	// 0
	0.14,	// 75
	0.54,	// 150
	0.62,	// 225
	0.58,	// 300
	0.56,	// 375
	0.54,	// 450
	0.52,	// 525
	0.48,	// 600
	0.43,	// 675
	0.38,	// 750
	0.35,	// 825
	0.3,	// 900
	0.25,	// 975
	0.2,	// 1050
	0.15,	// 1125
	0.1		// 1200
};


rudderInfluence			= 0.8660; 	// Basic angle (cos angle) of the rudder extent
rudderCoef[]			=	 		// default value is fabs(speed.Z())*InvSqrt(Square(speed.X())+Square(speed.Z()));
{
	0.0,	// 0
	0.8,	// 120
	2.0,	// 240
	2.2,	// 360
	2.3,	// 480
	2.4,	// 600
	2.3,	// 720
	2.2,	// 840
	2.1,	// 960
	2.0,	// 1080
	1.2	// 1200
};

// CONTROLS - sensitivity/speed in which control surface reaches its maximum extent
aileronControlsSensitivityCoef		= 3.6;	// default value is 4
elevatorControlsSensitivityCoef	 = 3.4;	// default value is 4
rudderControlsSensitivityCoef		= 3.8;	// default value is 4

// FORCES - how good the airplane changes the flight vector or alignes with it
draconicForceXCoef	  = 8.0; //7.5
draconicForceYCoef	  = 1.4; //1
draconicForceZCoef	  = 1.0; //1
draconicTorqueXCoef[] =
{
	4.8,	// 0
	5.0,	// 120
	5.5,	// 240
	6.2,	// 360
	7.0,	// 480
	7.7,	// 600
	9.4,	// 720
	11.1,	// 840
	12.0,	// 960
	14.0,	// 1080
	15.0	// 1200
};
draconicTorqueYCoef[] =
{
	12.0,	// 0
	10.0,	// 75
	6.0,	// 150
	2.0,	// 225
	0.2,	// 300
	0.0,	// 375
	0.0,	// 450
	0.0,	// 525
	0.0,	// 600
	0.0,	// 675
	0.0,	// 750
	0.0,	// 825
	0.0,	// 900
	0.0,	// 975
	0.0,	// 1050
	0.0,	// 1125
	0.0		// 1200
};

// VTOL - behavior while vectoring
// VTOLYawInfluence = 1.0;
// VTOLPitchInfluence = 1.0;
// VTOLRollInfluence = 1.0;