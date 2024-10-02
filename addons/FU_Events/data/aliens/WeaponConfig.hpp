class FU_A_Gun_Base: Tavor_base_F /// Just basic values common for all testing rifle variants
{
	magazines[] = {"FU_A_40Rnd_Mag", "FU_A_40Rnd_Mag_Tracer"}; /// original custom made magazines and a group of several standardized mags

	descriptionShort = "Unknown alien weaponry"; /// displayed on mouseOver in Inventory
	
	caseless[] = {"",1,1,1};  /// no sound of ejected brass
	soundBullet[] = {caseless,1};

	modes[] = {"Single", "FullAuto", "fullauto_medium"}; /// Includes fire modes for AI

	class Single: Mode_SemiAuto /// Pew
	{
		// the new parameter to distinguish muzzle accessories type
		sounds[] =
		{
			StandardSound // default sound
		};

		class StandardSound
		{
			// array of sounds (SoundSet names) to be played at the game event (shot)
			// number of SoundSets in array is not limited
			// consider that several ms lag could appear between each SoundSet is played
			// closure (bolt action) sound definition should be part of SoundSet
			soundSetShot[] =
			{
				FU_A_Gun_SoundSet
			};
		};

		reloadTime = 0.096; /// means some 625 rounds per minute
		dispersion = 0.00087; /// A bit less than 3 MOA

		recoil = "FU_A_Recoil_Single"; /// defined in cfgRecoils
		recoilProne = "FU_A_Recoil_Single_Prone"; /// defined in cfgRecoils

		minRange = 2; minRangeProbab = 0.5; 	/// Task Force Balance black magic - this is the probability which AI thinks it would hit target at set range with
		midRange = 200; midRangeProbab = 0.7; 	/// it is no real probability of hit, just used for AI to compute if the shot is worth to take - AI chooses highest
		maxRange = 400; maxRangeProbab = 0.3; 	/// probability of the weapon, does some calculation and compares it with calculated probability of other weapons
	};

	class FullAuto: Mode_FullAuto /// Pew-pew-pew-pew-pew
	{
		sounds[] =
		{
			StandardSound
		};

		class StandardSound
		{
			soundSetShot[] =
			{
				FU_A_Gun_SoundSet
			};
		};

		reloadTime = 0.096;
		dispersion = 0.00087;

		recoil = "FU_A_Recoil_Auto"; /// defined in cfgRecoils
		recoilProne = "FU_A_Recoil_Auto_Prone"; /// defined in cfgRecoils

		minRange = 0; minRangeProbab = 0.9;
		midRange = 15; midRangeProbab = 0.7;
		maxRange = 30; maxRangeProbab = 0.1;

		aiRateOfFire = 0.000001;
	};

	class fullauto_medium: FullAuto /// Pew, pew, pew only for AI
	{
		showToPlayer = 0;
		burst = 5;

		minRange = 2; minRangeProbab = 0.5;
		midRange = 75; midRangeProbab = 0.7;
		maxRange = 150; maxRangeProbab = 0.05;

		aiRateOfFire = 2.0;
		aiRateOfFireDistance = 300;
	};

	drySound[]={"A3\sounds_f\weapons\Other\dry_1", db-5, 1, 10}; /// custom made sounds
	reloadMagazineSound[]={"A3\sounds_f\weapons\reloads\new_trg",db-8,1, 30}; /// custom made sounds
};

class FU_A_Gun: FU_A_Gun_Base
{
	scope = 2; /// should be visible and useable in game
	scopeArsenal = 2;
	scopeCurator = 2;
	
	displayName = "Alien Rifle"; /// some name
	model = "\FU_Events\data\aliens\models\FU_A_Gun.p3d"; /// path to model

	picture = "\FU_Events\data\aliens\renders\FU_A_Gun_Render.paa"; /// different accessories have M, S, T instead of X
	UiPicture = ""; /// weapon with grenade launcher should be marked such way

	weaponInfoType = "RscWeaponZeroing"; /// display with zeroing is good for iron sights

	muzzles[] = {this}; /// to be able to switch between bullet muzzle and TGL
};

class FU_A_Pylon: CannonCore {
	scope = 2;
	displayName = "Unknown Alien Pylon";
	nameSound = "cannon";
	cursor = "EmptyCursor";
	cursorAim = "mg";
	showAimCursorInternal = 0;
	magazines[] = {"FU_A_PylonMag"};
	canLock = 0;
	ballisticsComputer = "1 + 2 + 16";
	FCSMaxLeadSpeed = 30.5556;
	FCSZeroingDelay = 0.5;
	maxZeroing = 2500;
	aiDispersionCoefY = 0.5;
	aiDispersionCoefX = 0.5;
	modes[] = {"manual","close"};

	class GunParticles {
		class Effect {
			effectName = "MachineGun1";
			positionName = "Usti hlavne";
			directionName = "Konec hlavne";
		};
	};

	class manual: CannonCore {
		displayName = "Unknown Fire Mode";
		autoFire = 1;
		textureType = "fullAuto";
		sounds[] = {"StandardSound"};
		
		class StandardSound {
			soundSetShot[] = {
				FU_A_Canon_Soundset
			};
		};

		soundContinuous = 0;
		soundBurst = 0;
		aiRateOfFire = 0.1;
		aiRateOfFireDistance = 10;
		minRange = 0;
		minRangeProbab = 0.01;
		midRange = 1;
		midRangeProbab = 0.01;
		maxRange = 2;
		maxRangeProbab = 0.01;
		reloadTime = 0.1;
		dispersion = 0.006;
	};

	class close: manual {
		aiBurstTerminable = 1;
		showToPlayer = 0;
		burst = 50;
		burstRangeMax = 37;
		aiRateOfFire = 0.1;
		aiRateOfFireDispersion = 1;
		aiRateOfFireDistance = 50;
		minRange = 0;
		minRangeProbab = 0.1;
		midRange = 50;
		midRangeProbab = 0.65;
		maxRange = 5000;
		maxRangeProbab = 0.75;
	};
};

class FU_Tripod_Gun_Base: Tavor_base_F /// Just basic values common for all testing rifle variants
{
	magazines[] = {"FU_Tripod_Mag"}; /// original custom made magazines and a group of several standardized mags

	descriptionShort = "Unknown alien weaponry"; /// displayed on mouseOver in Inventory
	
	caseless[] = {"",1,1,1};  /// no sound of ejected brass
	soundBullet[] = {caseless,1};

	modes[] = {"FullAuto","fullauto_medium"}; /// Includes fire modes for AI

	class FullAuto: Mode_FullAuto /// Pew-pew-pew-pew-pew
	{
		sounds[] =
		{
			StandardSound
		};

		class StandardSound
		{
			soundSetShot[] =
			{
				FU_Tripod_SoundSet
			};
		};

		reloadTime = 0.05;
		dispersion = 0;
		burst = 50;

		recoil = "FU_A_Recoil_Auto"; /// defined in cfgRecoils
		recoilProne = "FU_A_Recoil_Auto_Prone"; /// defined in cfgRecoils

		minRange = 0; minRangeProbab = 0.9;
		midRange = 15; midRangeProbab = 0.7;
		maxRange = 30; maxRangeProbab = 0.1;

		aiRateOfFire = 0.05;
		aiRateOfFireDistance = 300;
	};
	class fullauto_medium: FullAuto /// Pew, pew, pew only for AI
	{
		showToPlayer = 0;
		burst = 50;

		minRange = 1; minRangeProbab = 0.5;
		midRange = 1000; midRangeProbab = 0.7;
		maxRange = 2000; maxRangeProbab = 0.05;
	};

	drySound[]={"A3\sounds_f\weapons\Other\dry_1", db-5, 1, 10}; /// custom made sounds
	reloadMagazineSound[]={"A3\sounds_f\weapons\reloads\new_trg",db-8,1, 30}; /// custom made sounds
};

class FU_Tripod_Gun: FU_Tripod_Gun_Base
{
	scope = 1; /// should be visible and useable in game
	scopeArsenal = 1;
	scopeCurator = 1;
	
	displayName = "Tripod Gun"; /// some name
	model = "\FU_Events\data\aliens\models\FU_Tripod_Gun.p3d";
	weaponInfoType = "RscWeaponZeroing"; /// display with zeroing is good for iron sights

	muzzles[] = {this}; /// to be able to switch between bullet muzzle and TGL
};