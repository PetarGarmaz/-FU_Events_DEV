class FU_A_40Rnd_Mag: CA_Magazine 
{
	scope = public; /// or 2, to be precise
	displayName = "Alien Magazine";
	picture = "\FU_Events\data\aliens\renders\FU_A_Mag_Render.paa"; /// just some icon
	ammo = FU_A_Bullet;
	count = 40; /// 30 rounds is enough
	initSpeed = 795; /// standard muzzle speed
	tracersEvery = 0; /// disable tracers by default
	lastRoundsTracer = 4; /// tracers to track low ammo
	descriptionShort = "Unknown alien magazine"; /// on mouse-over in Inventory
	magazineGroup[]	= {"fu_a_group"}; /// all magazines in the same group may be used in weapon that has the group defined as compatible
};

class FU_A_40Rnd_Mag_Tracer: FU_A_40Rnd_Mag /// a magazine full of tracer rounds
{
	tracersEvery = 1; /// moar tracers
	lastRoundsTracer = 40; /// tracers everywhere
	displayName = "Alien Magazine Tracer";
	picture = "\FU_Events\data\aliens\renders\FU_A_Mag_Tracer_Render.paa"; /// just some icon
	descriptionShort = "Unknown alien magazine with tracer rounds";
	displaynameshort = "Tracers";
	magazineGroup[]	= {"fu_a_group"};
};

class FU_A_PylonMag: VehicleMagazine {
	author = "Bizo";
	scope = 2;

	displayName = "Alien Pylon";
	descriptionShort = "Unknown Alien Pylon";
	model = "\FU_Events\data\aliens\models\FU_A_Pylon_Empty.p3d";
	pylonWeapon = "FU_A_Pylon";
	hardpoints[] = {"O_MISSILE_PYLON", "B_MISSILE_PYLON", "DAGR", "B_A143_BUZZARD_CENTER_PYLON"};
	ammo = "FU_A_FighterAmmo";
	count = 1000;
	initSpeed = 800;
	tracersEvery = 1;
	nameSound = "cannon";
	muzzleImpulseFactor[] = {0.1,0.8};
	displayNameShort = "Unknown Alien Pylon";
};

class FU_Tripod_Mag_Base: CA_Magazine 
{
	scope = public; /// or 2, to be precise
	displayName = "Alien Magazine";
	picture = "\FU_Events\data\aliens\renders\FU_A_Mag_Render.paa"; /// just some icon
	ammo = FU_Tripod_Ammo;
	count = 10000; /// 30 rounds is enough
	initSpeed = 795; /// standard muzzle speed
	tracersEvery = 0; /// disable tracers by default
	lastRoundsTracer = 4; /// tracers to track low ammo
	descriptionShort = "Unknown alien magazine"; /// on mouse-over in Inventory
	magazineGroup[]	= {"fu_a_group"}; /// all magazines in the same group may be used in weapon that has the group defined as compatible
};

class FU_Tripod_Mag: FU_Tripod_Mag_Base /// a magazine full of tracer rounds
{
	tracersEvery = 1; /// moar tracers
	lastRoundsTracer = 10000; /// tracers everywhere
	displayName = "Tripod Mag";
	picture = "\FU_Events\data\aliens\renders\FU_A_Mag_Tracer_Render.paa"; /// just some icon
	descriptionShort = "Unknown alien magazine with tracer rounds";
	displaynameshort = "Tracers";
	magazineGroup[]	= {"fu_a_group"};
};