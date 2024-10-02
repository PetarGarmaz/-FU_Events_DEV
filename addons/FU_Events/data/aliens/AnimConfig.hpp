class FU_CfgMoves_Tripod_Basic {
	collisionVertexPattern[] = {"1a", "2a", "3a", "4a", "5a", "6a", "7a", "8a", "9a", "10a", "11a", "12a", "13a", "14a", "15a", "16a", "17a", "18a", "19a", "20a", "21a", "22a", "23a", "24a", "25a", "26a", "27a", "28a", "29a", "30a", "31a", "32a", "33a", "34a", "1c", "2c", "3c", "4c", "5c", "6c", "7c", "8c"};
	collisionGeomCompPattern[] = {1,3,6};

	class Default {
		soundEdge[] = {0.33,0.66,1};
		variantsPlayer[] = {};
		variantsAI[] = {};
		variantAfter[] = {};
		connectFrom[] = {};
		connectTo[] = {};
		interpolateWith[] = {};
		interpolateTo[] = {};
		interpolateFrom[] = {};
		access = 3;
		file = "";
		idle = "idleDefault";
		looped = 1;
		speed = 0.5;
		disableWeapons = false;
		enableOptics = 1;
		disableWeaponsLong = false;
		canreload = 1;
		showWeaponAim = 1;
		enableMissile = 0;
		enableBinocular = 0;
		showItemInHand = 0;
		showItemInRightHand = 0;
		showHandGun = 0;
		onLandBeg = 0;
		onLandEnd = 0;
		onLadder = 0;
		canPullTrigger = 1;
		duty = -0.51;
		predictSpeedCoef = 1;
		visibleSize = 1;
		aimPrecision = 1;
		relSpeedMin = 1;
		relSpeedMax = 1;
		soundEnabled = 1;
		soundOverride = "";
		soundEdge1 = 0.5;
		soundEdge2 = 1;
		terminal = 0;
		limitGunMovement = 1;
		equivalentTo = "";
		connectAs = "";
		aiming = "empty";
		leaning = "empty";
		untiltWeapon = "empty";
		aimingBody = "empty";
		legs = "empty";
		head = "empty";
		leaningFactorBeg = 0;
		leaningFactorEnd = 0;
		leaningFactorZeroPoint = -1;
		leaningCorrectionAngleBeg = 0;
		leaningCorrectionAngleEnd = 0;
		interpolationSpeed = 6;
		interpolationRestart = 0;
		hasCollShapeSafe = 0;
		collisionShapeSafe = "";
		boundingSphere = 1;
		enableDirectControl = 1;
		enableAutoActions = 0;
		leftHandIKBeg = 0;
		leftHandIKEnd = 0;
		leftHandIKCurve = 0;
		rightHandIKCurve = 0;
		rightHandIKBeg = 0;
		rightHandIKEnd = 0;
		weaponIK = 0;
		preload = 0;
		walkcycles = 1;
		forceAim = 0;
		showDisposableGun = 0;
		headBobStrength = 0.5;
		headBobMode = 1;
	};

	class StandBase: Default {
		duty = -1;
		head = "headDefault";
		speed = 1e+010;
		relSpeedMin = 0.7;
		relSpeedMax = 1.1;
		looped = 1;
		soundEnabled = 1;
		enableDirectControl = 0;
		disableWeapons = false;
		disableWeaponsLong = false;
	};

	class DefaultDie: Default {
		aiming = "empty";
		legs = "empty";
		head = "empty";
	};

	class ManActions {
		Stop = "";
		StopRelaxed = "";
		TurnL = "";
		TurnR = "";
		TurnLRelaxed = "";
		TurnRRelaxed = "";
		Default = "";
		JumpOff = "";
		ReloadMagazine = "";
		ReloadMGun = "";
		ReloadAT = "";
		ReloadMortar = "";
		ThrowGrenade = "";
		WalkF = "";
		WalkLF = "";
		WalkRF = "";
		WalkL = "";
		WalkR = "";
		WalkLB = "";
		WalkRB = "";
		WalkB = "";
		SlowF = "";
		SlowLF = "";
		SlowRF = "";
		SlowL = "";
		SlowR = "";
		SlowLB = "";
		SlowRB = "";
		SlowB = "";
		FastF = "";
		FastLF = "";
		FastRF = "";
		FastL = "";
		FastR = "";
		FastLB = "";
		FastRB = "";
		FastB = "";
		EvasiveForward = "";
		EvasiveLeft = "";
		EvasiveRight = "";
		EvasiveBack = "";
		StartSwim = "";
		StopSwim = "";
		Down = "";
		Up = "";
		PlayerStand = "";
		PlayerCrouch = "";
		PlayerProne = "";
		Lying = "";
		Stand = "";
		Combat = "";
		Crouch = "";
		CanNotMove = "";
		Civil = "";
		CivilLying = "";
		FireNotPossible = "";
		Die = "";
		WeaponOn = "";
		WeaponOff = "";
		StrokeFist = "";
		StrokeGun = "";
		SitDown = "";
		Salute = "";
		BinocOn = "";
		BinocOff = "";
		PutDown = "";
		PutDownEnd = "";
		Medic = "";
		Treated = "";
		LadderOnDown = "";
		LadderOnUp = "";
		LadderOff = "";
		LadderOffTop = "";
		LadderOffBottom = "";
		GetInLow = "";
		GetInMedium = "";
		GetInHigh = "";
		GetOutLow = "";
		GetOutMedium = "";
		GetOutHigh = "";
		TakeFlag = "";
		HandGunOn = "";
		LookAround = "";
		Eat = "";
		StopEat = "";
		Rest = "";
		StopRest = "";
	};

	class Actions {
		class NoActions: ManActions {
			turnSpeed = 8;
			limitFast = 5.5;
			useFastMove = 0;
			stance = "ManStanceUndefined";
			upDegree = 0;
		};
	};

	class Interpolations {};

	transitionsInterpolated[] = {};
	transitionsSimple[] = {};
	transitionsDisabled[] = {};

	class BlendAnims {
		aimingDefault[] = {};
		untiltWeaponDefault[] = {};
		legsDefault[] = {};
		headDefault[] = {};
		aimingNo[] = {};
		legsNo[] = {};
		headNo[] = {};
		aimingUpDefault[] = {};
	};
	
	access = 1;
};

class FU_CfgMoves_Tripod: FU_CfgMoves_Tripod_Basic {
	access = 1;
	enableDirectControl = 1;
	skeletonName = "FU_Tripod_Skeleton";
	collisionVertexPattern[] = {"1a", "2a", "3a", "4a", "5a", "6a", "7a", "8a", "9a", "10a", "11a", "12a", "13a", "14a", "15a", "16a", "17a", "18a", "19a", "20a", "21a", "22a", "23a", "24a", "25a", "26a", "27a", "28a", "29a", "30a", "31a", "32a", "33a", "34a", "1c", "2c", "3c", "4c", "5c", "6c", "7c", "8c"};
	collisionGeomCompPattern[] = {1,3,6};

	class Default: Default {
		access = 3;
		file = "";
		looped = 1;
		speed = 0.5;
		disableWeapons = false;
		enableOptics = 1;
		disableWeaponsLong = false;
		canreload = 1;
		showWeaponAim = 1;
		enableMissile = 0;
		enableBinocular = 0;
		showItemInHand = 0;
		showItemInRightHand = 0;
		showHandGun = 0;
		onLandBeg = 0;
		onLandEnd = 0;
		onLadder = 0;
		canPullTrigger = 1;
		duty = -0.51;
		predictSpeedCoef = 1;
		visibleSize = 1;
		aimPrecision = 1;
		relSpeedMin = 1;
		relSpeedMax = 1;
		soundEnabled = 1;
		soundOverride = "";
		soundEdge[] = {0.33,0.66,1};
		soundEdge1 = 0.5;
		soundEdge2 = 1;
		terminal = 0;
		limitGunMovement = 1;
		variantsPlayer[] = {};
		variantsAI[] = {};
		equivalentTo = "";
		connectAs = "";
		variantAfter[] = {};
		connectFrom[] = {};
		connectTo[] = {};
		interpolateWith[] = {};
		interpolateTo[] = {};
		interpolateFrom[] = {};
		aiming = "empty";
		leaning = "empty";
		untiltWeapon = "empty";
		aimingBody = "empty";
		legs = "empty";
		head = "empty";
		leaningFactorBeg = 0;
		leaningFactorEnd = 0;
		leaningFactorZeroPoint = -1;
		leaningCorrectionAngleBeg = 0;
		leaningCorrectionAngleEnd = 0;
		interpolationSpeed = 6;
		interpolationRestart = 0;
		hasCollShapeSafe = 0;
		collisionShapeSafe = "";
		boundingSphere = 30;
		collisionShape = "A3\anims_f\Data\Geom\Sdr\Perc_Wrfl.p3d";
		enableDirectControl = 1;
		enableAutoActions = 0;
		leftHandIKBeg = 0;
		leftHandIKEnd = 0;
		leftHandIKCurve = 0;
		rightHandIKCurve = 0;
		rightHandIKBeg = 0;
		rightHandIKEnd = 0;
		weaponIK = 0;
		preload = 0;
		walkcycles = 1;
		forceAim = 0;
		showDisposableGun = 0;
		headBobStrength = 0.5;
		headBobMode = 1;
	};

	class StandBase: Default {
		aiming = "empty";
		disableWeapons = false;
		leaningFactorBeg = 1;
		leaningFactorEnd = 1;
	};

	class DefaultDie: Default
	{
		aiming = "empty";
		legs = "empty";
		head = "empty";
		disableWeapons = false;
		interpolationRestart = 1;
		soundOverride = "fallbody";
		soundEdge1 = 0.45;
		soundEdge2 = 0.45;
	};

	class States {
		class Dog_Idle_Stop: StandBase {
			enableDirectControl = 1;
			actions = "FinActions";
			duty = -1;
			file = "\FU_Events\data\aliens\animations\FU_Tripod_Idle.rtm";
			showWeaponAim = 0;
			disableWeapons = false;
			disableWeaponsLong = false;
			variantsAI[] = {"Dog_Idle_01",0.04};
			variantsPlayer[] = {};
			variantAfter[] = {};
			speed = 1e+010;
			relSpeedMin = 0.7;
			relSpeedMax = 1.1;
			looped = 1;
			soundEnabled = 0;
			connectTo[] = {};
			interpolateTo[] = {"Dog_Idle_Stop",0.05,"Dog_Idle_01",0.05,"Dog_Idle_Bark",0.05,"Dog_Idle_Walk",0.2,"Dog_Idle_Run",0.02,"Dog_Idle_Sprint",0.02,"Dog_Die",0.2,"Dog_Walk",0.5,"Dog_Run",0.5,"Dog_Sprint",0.5,"Dog_Stop",0.5};
			enableBinocular = 1;
			leftHandIKBeg = 1;
			leftHandIKEnd = 1;
			rightHandIKBeg = 1;
			rightHandIKEnd = 1;
			interpolationSpeed = 1;
			preload = 1;
		};
		class Dog_Idling: Dog_Idle_Stop
		{
			variantAfter[] = {};
			equivalentTo = "Dog_Idle_Stop";
			speed = -2.5;
		};
		class Dog_Idle_01: Dog_Idling
		{
			file = "\FU_Events\data\aliens\animations\FU_Tripod_Idle.rtm";
		};

		class Dog_Idle_Bark: Dog_Idle_Stop
		{
			file = "\FU_Events\data\aliens\animations\FU_Tripod_Idle.rtm"; //Some attack maybe
			speed = -5;
			variantsAI[] = {};
			variantAfter[] = {};
			interpolateTo[] = {"Dog_Die",0.2};
			looped = 0;
		};

		class Dog_Idle_Sprint: Dog_Idle_Stop
		{
			actions = "FinSprint";
			file = "\FU_Events\data\aliens\animations\FU_Tripod_Walk.rtm";
			soundEnabled = 1;
			soundOverride = "Walk";
			soundEdge[] = {0.33,0.66,1};
			duty = 0.5;
			speed = -3;
			connectTo[] = {};
			interpolateTo[] = {"Dog_Idle_Run",0.02,"Dog_Idle_Stop",0.02,"Dog_Idle_Sprint",0.02,"Dog_Idle_Walk",0.02,"Dog_Die_Sprint",0.02};
			variantsAI[] = {};
		};
		class Dog_Idle_Run: Dog_Idle_Stop
		{
			file = "\FU_Events\data\aliens\animations\FU_Tripod_Walk.rtm";
			soundEnabled = 1;
			soundOverride = "Walk";
			soundEdge[] = {0.33,0.66,1};
			duty = -0.5;
			speed = -5;
			connectTo[] = {};
			interpolateTo[] = {"Dog_Idle_Run",0.02,"Dog_Idle_Stop",0.02,"Dog_Idle_Sprint",0.02,"Dog_Idle_Walk",0.02,"Dog_Die_Run",0.02};
			variantsAI[] = {};
		};
		class Dog_Idle_Walk: Dog_Idle_Stop
		{
			actions = "FinRun";
			duty = -0.7;
			file = "\FU_Events\data\aliens\animations\FU_Tripod_Walk.rtm";
			soundEnabled = 1;
			soundOverride = "Walk";
			soundEdge[] = {0.33,0.66,1};
			speed = -5;
			variantAfter[] = {};
			connectTo[] = {};
			interpolateTo[] = {"Dog_Idle_Run",0.02,"Dog_Idle_Stop",0.02,"Dog_Idle_Sprint",0.02,"Dog_Idle_Walk",0.02,"Dog_Die",0.02};
			variantsAI[] = {};
		};
		class Dog_Die: DefaultDie
		{
			enableDirectControl = 0;
			actions = "NoActions";
			file = "\FU_Events\data\aliens\animations\FU_Tripod_Idle.rtm"; 
			speed = -4;
			looped = 0;
			variantsPlayer[] = {};
			variantsAI[] = {};
			variantAfter[] = {};
			terminal = 1;
		};
		class Dog_Die_Sit: Dog_Die
		{
			file = "\FU_Events\data\aliens\animations\FU_Tripod_Idle.rtm"; 
			terminal = 1;
		};
		class Dog_Die_Sprint: Dog_Die
		{
			file = "\FU_Events\data\aliens\animations\FU_Tripod_Idle.rtm"; 
			terminal = 1;
		};
		class Dog_Die_Run: Dog_Die
		{
			file = "\FU_Events\data\aliens\animations\FU_Tripod_Idle.rtm"; 
			terminal = 1;
		};
		class Dog_Stop: Dog_Idle_Stop
		{
			actions = "FinForceStop";
			connectTo[] = {};
			interpolateTo[] = {"Dog_Idle_01",0.05,"Dog_Idle_Stop",0.05,"Dog_Die",0.2,"Dog_Walk",0.5,"Dog_Run",0.5,"Dog_Sprint",0.5,"Dog_Sit",0.5};
			variantsAI[] = {"Dog_Idle_01",0.04};
		};
		class Dog_Walk: Dog_Idle_Walk
		{
			actions = "FinForceWalk";
			interpolateTo[] = {"Dog_Run",0.02,"Dog_Idle_Stop",0.02,"Dog_Sprint",0.02,"Dog_Walk",0.02,"Dog_Die",0.02,"Dog_Stop",0.02};
		};
		class Dog_Run: Dog_Idle_Run
		{
			actions = "FinForceRun";
			interpolateTo[] = {"Dog_Run",0.02,"Dog_Idle_Stop",0.02,"Dog_Sprint",0.02,"Dog_Walk",0.02,"Dog_Stop",0.02,"Dog_Die_Run",0.02};
		};
		class Dog_Sprint: Dog_Idle_Sprint
		{
			actions = "FinForceSprint";
			interpolateTo[] = {"Dog_Run",0.02,"Dog_Sprint",0.02,"Dog_Stop",0.02,"Dog_Die_Sprint",0.02};
		};
	};

	class Actions: Actions {
		class NoActions: NoActions {
			turnSpeed = 8;
			limitFast = 5.5;
			useFastMove = 0;
			upDegree = 0;
		};

		class FinActions: NoActions {
			Stop = "Dog_Idle_Stop";
			StopRelaxed = "Dog_Idle_Stop";
			TurnL = "Dog_Idle_Walk";
			TurnR = "Dog_Idle_Walk";
			TurnLRelaxed = "Dog_TurnL";
			TurnRRelaxed = "Dog_TurnR";
			Default = "Dog_Idling";
			JumpOff = "Dog_Idle_Stop";
			WalkF = "Dog_Idle_Walk";
			SlowF = "Dog_Idle_Run";
			FastF = "Dog_Idle_Sprint";
			EvasiveForward = "Dog_Idle_Sprint";
			Down = "Dog_Idle_Stop";
			Up = "Dog_Idle_Stop";
			PlayerStand = "Dog_Idle_Stop";
			PlayerProne = "Dog_Idle_Stop";
			PlayerCrouch = "Dog_Idle_Sitting";
			Crouch = "Dog_Idle_Sitting";
			Lying = "Dog_Idle_Stop";
			Stand = "Dog_Idle_Stop";
			Combat = "Dog_Idling";
			CanNotMove = "Dog_Idling";
			Civil = "Dog_Idle_Stop";
			CivilLying = "Dog_Idle_Stop";
			FireNotPossible = "";
			Die = "Dog_Die";
			turnSpeed = 8;
			limitFast = 5.5;
			useFastMove = 0;
			upDegree = "ManPosNoWeapon";
		};
		class FinRun: FinActions
		{
			Die = "Dog_Die_Run";
		};
		class FinSprint: FinActions
		{
			FastF = "Dog_Idle_Sprint";
			EvasiveForward = "Dog_Idle_Sprint";
			Die = "Dog_Die_Sprint";
			turnSpeed = 8;
			limitFast = 5.5;
			useFastMove = 1;
		};
		class FinSit: FinActions
		{
			Stop = "Dog_Idle_Sitting";
			StopRelaxed = "Dog_Idle_Sitting";
			Die = "Dog_Die_Sit";
		};
		class FinForceStop: FinActions
		{
			CivilLying = "Dog_Stop";
		};
		class FinForceSit: FinSit
		{
			CivilLying = "Dog_Sit";
		};
		class FinForceWalk: FinActions
		{
			CivilLying = "Dog_Walk";
		};
		class FinForceRun: FinRun
		{
			CivilLying = "Dog_Run";
		};
		class FinForceSprint: FinSprint
		{
			CivilLying = "Dog_Sprint";
		};
	};
	
	class Interpolations{};

	transitionsInterpolated[] = {};
	transitionsSimple[] = {};
	transitionsDisabled[] = {};

	class BlendAnims: BlendAnims {
		aimingDefault[] = {};
		untiltWeaponDefault[] = {};
		legsDefault[] = {};
		headDefault[] = {};
		aimingNo[] = {};
		legsNo[] = {};
		headNo[] = {};
		aimingUpDefault[] = {};
	};
};