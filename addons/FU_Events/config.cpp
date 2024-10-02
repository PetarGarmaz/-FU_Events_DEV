#include "BIS_AddonInfo.hpp"
#include "basicdefines_A3.hpp"

class CfgPatches {
	class FU_Events {
		name="FU Events";
		Author="Bizo";
		units[]= {
			"FU_D_Tunnel_Stairs", "FU_D_Tunnel_End","FU_D_Tunnel_Passage","FU_D_Tunnel_X","FU_D_Tunnel_T","FU_D_Tunnel_Corridor_Up","FU_D_Tunnel_Corner","FU_D_Tunnel_Corridor","FU_Tripod", "FU_O_Plane_CAS_02", "FU_A_Rifleman", "FU_A_Medic","FU_A_Engineer", "FU_A_SL", "FU_S_Corridor", "FU_S_Corner", "FU_S_Cross", "FU_S_T"
		};
		weapons[]= {"FU_A_Gun", "FU_A_Uniform", "FU_SCP_2191_Uniform", "FU_SCP_093_Uniform", "FU_SCP_093_BlackMan_Uniform"};
		requiredAddons[]= {
			"A3_Weapons_F",
			"A3_Characters_F",
			"A3_Structures_F",
			"A3_Modules_F",
			"A3_Boat_F",
			"A3_Boat_F_Civilian_Boat"
		};
	};
};

/*
class CfgWorlds {
	class CAWorld;
	
	class UMB_Colombia : CAWorld {
		class Grid
		{
			offsetX = 0;
			offsetY = 8192;
			class Zoom1
			{
				zoomMax = 0.2;
				format = "XY";
				formatX = "000";
				formatY = "000";
				stepX = 100;
				stepY = -100;
			};
			class Zoom2
			{
				zoomMax = 0.95;
				format = "XY";
				formatX = "00";
				formatY = "00";
				stepX = 1000;
				stepY = -1000;
			};
			class Zoom3
			{
				zoomMax = 1e+030;
				format = "XY";
				formatX = "0";
				formatY = "0";
				stepX = 10000;
				stepY = -10000;
			};
		};
		class Sea {
			MinTide = 30; // Minimum: How much above Main Sea level?
			MaxTide = 30; // Maximum: How much under Main Sea level?
		};
	};
};
*/


class DefaultEventhandlers;
class UniformSlotInfo;
class CfgFactionClasses {
	class NO_CATEGORY;

	class FU_TR {
		displayName="Terran Republic";
		priority=6;
		side=1;
		icon="FU_Events\data\FU_Logo.paa";
		flag="FU_Events\data\FU_Logo.paa";
	};

	class FU_Aliens {
		displayName="FU Aliens";
		priority=6;
		side=1;
		icon="FU_Events\data\FU_Logo.paa";
		flag="FU_Events\data\FU_Logo.paa";
	};

	class FU_Viking {
		displayName="FU Vikings";
		priority=6;
		side=1;
		icon="FU_Events\data\FU_Logo.paa";
		flag="FU_Events\data\FU_Logo.paa";
	};
};

class CfgEditorCategories {
	class FU_Objects {
		displayName = "FU - Objects";
	};

	class FU_Tunnels {
		displayName = "FU - Tunnels";
	};
};

class CfgSounds {
	sounds[] = {};

	class FU_Intro {
		name = "FU_Intro";
		sound[] = {"FU_Events\data\scp\music\FU_Track_3.ogg", 40, 1, 200};
		titles[] = {};
	};

	class FU_Cave_Sounds {
		name = "FU_Cave_Sounds";
		sound[] = {"FU_Events\data\scp\sfx\FU_Cave_Sounds.ogg", 40, 1, 200};
		titles[] = {};
	};

	class FU_Tripod_Horn_1 {
		name = "FU_Tripod_Horn_1";
		sound[] = {"FU_Events\data\aliens\Sfx\FU_Tripod_Horn_1.ogg", 5, 1, 300};
		titles[] = {};
	};

	class FU_Tripod_Horn_2 {
		name = "FU_Tripod_Horn_2";
		sound[] = {"FU_Events\data\aliens\Sfx\FU_Tripod_Horn_2.ogg", 5, 1, 300};
		titles[] = {};
	};

	class FU_Tripod_Startup {
		name = "FU_Tripod_Startup";
		sound[] = {"FU_Events\data\aliens\Sfx\FU_Tripod_Startup.ogg", 5, 1, 300};
		titles[] = {};
	};

	class FU_Tripod_Idle {
		name = "FU_Tripod_Idle";
		sound[] = {"FU_Events\data\aliens\Sfx\FU_Tripod_Idle.ogg", 5, 1, 300};
		titles[] = {};
	};

	class FU_A_Alarm {
		name = "FU_A_Alarm";
		sound[] = {"FU_Events\data\aliens\Sfx\FU_Alarm.ogg", 5, 1, 300};
		titles[] = {};
	};
};


class CfgMusic {
	tracks[] = {};
	
	//Alien:isolation-ost escape from habitation decks
	class FU_Track_4 {
		name = "FU_Track_4";
		sound[]	= {"FU_Events\data\aliens\music\FU_Track_4.ogg", db + 30, 1.0};
	};

	class FU_Track_5 {
		name = "FU_Track_5";
		sound[]	= {"FU_Events\data\aliens\music\FU_Track_5.ogg", db + 30, 1.0};
	};
};


class CfgMarkers {
	class FU_A_ShipMarker {
		name="FUA Mothership";
		icon="FU_Events\data\aliens\textures\FU_ShipMarker.paa";
		color[]={1,1,1,1};
		size=32;
		shadow = 0;
		scope = 2;
		markerClass = "Flags";
	};

	class FU_Flag_Marker {
		name="[FU] Freelancers Union";
		icon="FU_Events\data\FU_Logo.paa";
		color[]={1,1,1,1};
		size=32;
		shadow = 0;
		scope = 2;
		markerClass = "Flags";
	};
};

class CfgSoundShaders {
	class FU_A_Gun_SoundShader_Close {
		samples[] = {
			{ "FU_Events\data\aliens\sfx\FU_A_GunShot_1.ogg", 1 },
			{ "FU_Events\data\aliens\sfx\FU_A_GunShot_2.ogg", 1 },
			{ "FU_Events\data\aliens\sfx\FU_A_GunShot_3.ogg", 1 }
		};
		volume = db3; // additional gain, +3dB
		range = 1000;
	};

	class FU_A_Canon_SoundShader_Close {
		samples[] = {
			{ "FU_Events\data\aliens\sfx\FU_A_CannonShot_1.ogg", 1 },
			{ "FU_Events\data\aliens\sfx\FU_A_CannonShot_2.ogg", 1 },
			{ "FU_Events\data\aliens\sfx\FU_A_CannonShot_3.ogg", 1 }
		};
		volume = db3; // additional gain, +3dB
		range = 1000;
	};

	class FU_Tripod_SoundShader {
		samples[] = {
			{ "FU_Events\data\aliens\sfx\FU_Tripod_Gun.ogg", 1 },
			{ "FU_Events\data\aliens\sfx\FU_Tripod_Gun.ogg", 1 },
			{ "FU_Events\data\aliens\sfx\FU_Tripod_Gun.ogg", 1 }
		};
		volume = db3; // additional gain, +3dB
		range = 1000;
	};
};

class CfgSoundSets {
	class FU_A_Gun_SoundSet	{
		soundShaders[] = {
			FU_A_Gun_SoundShader_Close
		};
		soundShadersLimit = 1;
		volumeFactor = 1;
		volumeRandomizer = 0;
		frequencyFactor = 1;
		frequencyRandomizer = 0;
		loop = 0;
		spatial = 1;
		doppler = 0;
		speedOfSound = 1;
	};

	class FU_A_Canon_Soundset	{
		soundShaders[] = {
			FU_A_Canon_SoundShader_Close
		};
		soundShadersLimit = 1;
		volumeFactor = 1;
		volumeRandomizer = 0;
		frequencyFactor = 1;
		frequencyRandomizer = 0;
		loop = 0;
		spatial = 1;
		doppler = 0;
		speedOfSound = 1;
	};

	class FU_Tripod_SoundSet {
		soundShaders[] = {
			FU_Tripod_SoundShader
		};
		soundShadersLimit = 1;
		volumeFactor = 1;
		volumeRandomizer = 0;
		frequencyFactor = 1;
		frequencyRandomizer = 0;
		loop = 0;
		spatial = 1;
		doppler = 0;
		speedOfSound = 1;
	};
};

/// All firemodes, to be sure
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;

/// Weapon slots
class SlotInfo;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;

class CfgVehicles {
	class B_Soldier_base_F;
	class O_soldier_Melee;
	class O_Soldier_base_F;
	class I_Soldier_base_F;
	class Animal_Base_F;
	class Static;
	class Logic;
	class Car;
	class Land;
	class Ship_F;
	class Plane_CAS_02_dynamicLoadout_base_F;
	class Helipad_base_F;
	class ACE_Explosives_Place;

	class Module_F: Logic {
		class AttributesBase {
			class Default;
			class Edit;					// Default edit box (i.e., text input field)
			class Combo;				// Default combo box (i.e., drop-down menu)
			class Checkbox;				// Default checkbox (returned value is Boolean)
			class CheckboxNumber;		// Default checkbox (returned value is Number)
			class ModuleDescription;	// Module description
			class Units;				// Selection of units on which the module is applied
		};
		
		// Description base classes, for more information see below
		class ModuleDescription
		{
			class AnyBrain;
		};
	};
	
	#include "data\aliens\UnitConfig.hpp"
	#include "data\tunnels\VehicleConfig.hpp"
};

class CfgWeapons {
	class Tavor_base_F;
	class DMR_06_base_F;
	class UniformItem;
	class ItemCore;
	class InventoryItem_Base_F;
	class HeadgearItem;
	class NVGoggles;
	class Uniform_Base: ItemCore {
		class ItemInfo;
	};
	class WBK_pipeStyledSword;
	class Shield_RoadSign;
	class CUP_launch_M72A6_Loaded;
	class CannonCore;
	
	#include "data\aliens\WeaponConfig.hpp"
	#include "data\aliens\UniformConfig.hpp"
};

class CfgMagazines {
	class Default;
	class CA_Magazine;
	class VehicleMagazine;

	#include "data\aliens\CfgMagazines.hpp" /// specific magazines for this rifle
};

class CfgRecoils {
	#include "data\aliens\CfgRecoils.hpp" /// specific recoil patterns for this rifle
};

class CfgAmmo {
	class PipeBombBase;

	#include "data\aliens\CfgAmmo.hpp" /// specific ammo for this rifle
};

//UI Stuff
class IGUIBack;
class RscStructuredText;
class RscCombo;
class RscText;
class RscButton;
class RscEdit;
class RscPicture;

//Misc includes
#include "data\aliens\CfgGroups.hpp"
#include "data\aliens\AnimConfig.hpp"