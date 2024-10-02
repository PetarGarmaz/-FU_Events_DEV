#include "BIS_AddonInfo.hpp"
#include "basicdefines_A3.hpp"

class CfgPatches {
	class FU_SG {
		name="FU Stargate";
		Author="Bizo";
		units[]= {
			"FU_Hatak", "FU_Stargate", "FU_Stargate_Empty", "FU_Jaffa", "FU_Death_Glider"
		};
		weapons[]= {"FU_Jaffa_Uniform", "FU_Staff", "FU_Staff_Pylon"};
		requiredAddons[]= {
			"FU_Events"
		};
	};
};

class CfgFactionClasses {
	class FU_SG_OPFOR {
		displayName="Goauld";
		priority=6;
		side=1;
		icon="FU_Events\data\FU_Logo.paa";
		flag="FU_Events\data\FU_Logo.paa";
	};
};

class CfgFunctions {
	class FU {
		class SG {
			file = "FU_SG\data\functions\SG";

			class initStargate{};
			class initJaffa{};
			class initGlider{};
		};
	};
};

class CfgSounds {
	sounds[] = {};

	class FU_Stargate_Intro {
		name = "FU_Stargate_Intro";
		sound[] = {"FU_SG\data\sfx\FU_Stargate_Intro.ogg", 800, 1, 100};
		titles[] = {};
	};

	class FU_Stargate {
		name = "FU_Stargate";
		sound[] = {"FU_SG\data\sfx\FU_Stargate.ogg", 800, 1, 100};
		titles[] = {};
	};
};

class CfgSoundShaders {
	class FU_Staff_SoundShader_Close {
		samples[] = {
			{ "FU_SG\data\sfx\FU_Staff.ogg", 1 },
			{ "FU_SG\data\sfx\FU_Staff.ogg", 1 }
		};
		volume = db3; // additional gain, +3dB
		range = 1000;
	};
};

class CfgSoundSets {
	class FU_Staff_SoundSet	{
		soundShaders[] = {
			FU_Staff_SoundShader_Close
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

class CfgVehicles {
	class B_Soldier_base_F;
	class O_Soldier_base_F;
	class I_Soldier_base_F;
	class O_soldier_Melee;
	class Plane_CAS_02_dynamicLoadout_base_F;
	class Animal_Base_F;
	class Static;
	class Logic;
	class Car;
	class Land;
	class Ship;
	class Air;
	class Plane: Air {
		class HitPoints;
	};
	class Plane_Base_F: Plane {
		class AnimationSources;
		class HitPoints: HitPoints {
			class HitHull;
		};
		class Components;
		class Eventhandlers;
	};
	class Ejection_Seat_Base_F;
	class Plane_Canopy_Base_F;
	class PlaneWreck;
	class Ship_F: Ship {
		class ViewPilot;
		class AnimationSources;
		class Eventhandlers;
	};

	class FU_Hatak: Static {
		scope = 2;							// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2;					// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.

		displayname = "Hatak Spaceship";
		editorCategory = "FU_Objects";
		model = "\FU_SG\data\models\FU_Hatak.p3d";
		editorPreview = "\FU_SG\data\renders\FU_Hatak.jpg";

		hiddenSelections[] = {""};
		hiddenSelectionsTextures[] = {""};
	};

	class FU_Stargate: Static {
		scope = 2;							// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2;					// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.

		displayname = "Stargate";
		editorCategory = "FU_Objects";
		model = "\FU_SG\data\models\FU_Stargate.p3d";
		editorPreview = "";

		class EventHandlers {
			postinit="[_this select 0] spawn FU_fnc_initStargate;";
		};

		hiddenSelections[] = {""};
		hiddenSelectionsTextures[] = {""};
	};

	class FU_Stargate_Empty: Static {
		scope = 2;							// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2;					// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.

		displayname = "Stargate (OFF)";
		editorCategory = "FU_Objects";
		model = "\FU_SG\data\models\FU_Stargate_Empty.p3d";
		editorPreview = "";

		hiddenSelections[] = {""};
		hiddenSelectionsTextures[] = {""};
	};

	class FU_Jaffa: O_Soldier_base_F {
		author = "Bizo";			// The name of the author of the asset, which is displayed in the editor.

		faction = "FU_SG_OPFOR";

		scope = 2;							// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2;					// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2;					// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		identityTypes[] = {"Head_NATO"};		// Identity Types are explained in the Headgear section of this guide.
		displayName = "Jaffa Warrior";		// The name of the soldier, which is displayed in the editor.

		model = "FU_SG\data\models\FU_Jaffa_Uniform.p3d";			// The path to the model this character uses.
		//editorPreview = "FU_SG\data\renders\FU_SCP_093_BlackMan_Render.jpg"
		uniformClass = "FU_Jaffa_Uniform";							// This links this soldier to a particular uniform. For the details, see below.
		hiddenSelections[] = {""};								// List of model selections which can be changed with hiddenSelectionTextures[]// and hiddenSelectionMaterials[] properties. If empty, model textures are used.
		hiddenSelectionsTextures[] = {""};	// The textures for the selections defined above.
		canDeactivateMines = false;				// Can this character deactivate mines?
		engineer = false;						// Can this character repair vehicles?
		attendant = false;							// Can this character heal soldiers?


		class EventHandlers {
			postinit="[_this select 0] spawn FU_fnc_initJaffa";
		};

		role = "Rifleman";
		icon = "iconMan";				// If a character has a special role, a special icon shall be used.

		weapons[] = {"FU_Staff", "Throw", "Put"};				// Which weapons the character has.
		respawnWeapons[] = {"FU_Staff", "Throw", "Put"};		// Which weapons the character respawns with.
		Items[] = {};				// Which items the character has.
		RespawnItems[] = {};		// Which items the character respawns with.
		magazines[] = {"FU_SG_Staff_Ammo", "FU_SG_Staff_Ammo"};				// What ammunition the character has.
		respawnMagazines[] = {"FU_SG_Staff_Ammo", "FU_SG_Staff_Ammo"};		// What ammunition the character respawns with.
		linkedItems[] = {};				// Which items the character has.
		respawnLinkedItems[] = {};	// Which items the character respawns with.
	};

	class Test_Plane_01_Canopy_F : Plane_Canopy_Base_F {
		scope							= 0;
		displayName						= "Death Glider Canopy";
		model							= "\A3\Air_F_Gamma\Plane_Fighter_03\Plane_Fighter_03_canopy_F.p3d";
	};

	class Ejection_Seat_Test_Plane_01_base_F : Ejection_Seat_Base_F {
		scope							= private;
		displayName						= $STR_A3_Ejection_Seat_02_name;
		model							= "\A3\Air_F_Gamma\Plane_Fighter_03\Plane_Fighter_03_ejection_seat_F.p3d";

		icon							= iconParachute;
		picture							= "\A3\Air_F_Beta\Parachute_01\Data\UI\Portrait_Parachute_01_CA.paa";

		driverAction					= Pilot_Plane_Fighter_Ejection;
		cargoAction[]					= {Pilot_Plane_Fighter_Ejection};
	};

	class I_Ejection_Seat_Test_Plane_01_F : Ejection_Seat_Test_Plane_01_base_F {
		scope							= protected;
		side							= 0;
		faction							= "FU_SG_OPFOR";
		crew							= "O_T_Pilot_F";
	};

	//Plane class
	class Test_Plane_01_base_F: Plane_Base_F {
		scope							= 0;  					//base class should be hidden
		displayName						= "Death Glider (Base)";			// how is the plane displayed (named) in editor
		model							= "\FU_SG\data\models\FU_Death_Glider.p3d";		// path to model of the plane
		accuracy						= 0.2;												// how hard it is to distinguish the type of the vehicle (bigger number means harder)
		editorSubcategory				= EdSubcat_Planes;		// category in which we want to see this plane in editor
		memoryPointTaskMarker			= "TaskMarker_1_pos";	// The memory point defines the position where the task marked will be displayed if the task is attached to the particular object


		armor							= 55;					// base value of the vehicle armor, reduces the damage taken from the direct hit. Affects armor parameter in the HitPoints class
		armorStructural					= 2;					// value affecting passThrough parameter in the HitPoints class (divides the extent of the damage transferred by passThrough). It also increases overall durability of the object (even if it has no hitpoints).
		armorLights						= 0.1;					// level of protection for lights located on hull
		epeImpulseDamageCoef			= 50;					// coeficient for physx damage
		damageResistance				= 0.004;				// for AI if it is worth to be shoot at
		destrType						= DestructWreck;		// how does the vehicle behave while destroyed, this one changes to the Wreck lod of the model
		driverCanEject					= 0;					// needed for hiding engine "Eject" action if we want to use ejection seats instead

		slingLoadCargoMemoryPoints[]	= {"SlingLoadCargo1","SlingLoadCargo2","SlingLoadCargo3","SlingLoadCargo4"};	//array of memory points for slingloading hook position

		driverAction					= Plane_Fighter_03_pilot;	// what is the standard pose for the pilot, defined as animation state

		viewDriverShadowDiff			= 0.5;					//diffuse light attenuation
		viewDriverShadowAmb				= 0.5;					//ambient light attenuation

		radarTargetSize					= 0.8;
		visualTargetSize				= 0.8;
		irTargetSize					= 0.8;

		driverLeftHandAnimName			= "throttle_pilot";		// conecting throttle animation to left hand of pilot

		icon							= "A3\Air_F_Gamma\Plane_Fighter_03\Data\UI\Map_Plane_Fighter_03_CA.paa"; 	// icon in map/editor
		picture							= "A3\Air_F_Gamma\Plane_Fighter_03\Data\UI\Plane_Fighter_03_CA.paa";		// small picture in command menu



		LockDetectionSystem = CM_Lock_Radar;							// this uses macros from basicDefines_A3, just add more to gain more systems for the vehicle
		incomingMissileDetectionSystem = CM_Lock_Radar + CM_Missile;	// for example CM_Lock_Laser + CM_Lock_Radar, parser is able to evaluate that, or simply 12 in that case

		class EjectionSystem		// ejection system parameters - used only when you we have plane with ejection seats (EJS)
		{
			EjectionSeatEnabled		= 1;											//enable advanced ejection system
			EjectionDual			= 0;											//currently only single seat aircraft ejection supported (to do for latter)
			EjectionSeatClass		= "I_Ejection_Seat_Test_Plane_01_F";			//class name of ejector seat to use
			CanopyClass				= "Test_Plane_01_Canopy_F";						//class name of canopy to use
			EjectionSeatHideAnim	= "ejection_seat_hide";							//name of the hide animation that will hide ejector seat mesh in plane
			EjectionSeatRailAnim	= "ejection_seat_motion";						//name of the animation that will be played to start a smooth ejection motion out of cockpit
			CanopyHideAnim			= "canopy_hide";								//name of the hide animation that will hide canopy mesh in plane
			EjectionSeatPos			= "pos_eject";									//position memory point whwre to attach ejector seat
			CanopyPos				= "pos_eject_canopy";							//position memory point where to attach dummy canopy
			EjectionSoundExt		= "Plane_Fighter_01_ejection_ext_sound";		//sound to play when ejection trigered (external)
			EjectionSoundInt		= "Plane_Fighter_01_ejection_in_sound";			//sound to play when ejection trigered (in-ternal)
			EjectionParachute		= "Steerable_Parachute_F";						//class name parachute used in ejection
			EjectionSeatForce		= 50;											//ejection seat blast force
			CanopyForce				= 30;											//canopy bast force
		};

		class Turrets {};	// single seat planes don't have any kind of turret, we need to void it

		class TransportItems{};	// planes are usually not used to transport items, there could possibly be a few FAKs

		class HitPoints: HitPoints
		{
			class HitHull: HitHull				{armor = 4;		explosionShielding = 3;		name = "HitHull";			passThrough = 1;	visual = "Hit_Hull";		radius = 0.3;	minimalHit = 0.05;	depends = "0";	material = -1;};
			class HitEngine: HitHull			{armor = 4;		explosionShielding = 3.5;	name = "HitEngine";			passThrough = 1;	visual = "Hit_Engine";		radius = 0.3;	minimalHit = 0.05;	depends = "0";};
			class HitAvionics: HitHull			{armor = 3;		explosionShielding = 3.5;	name = "HitAvionics";		passThrough = 0.5;	visual = "";				radius = 0.2;	minimalHit = 0.05;	depends = "0";};
			// Main fueslage fuel tank
			class HitFuel: HitHull				{armor = 4.5;	explosionShielding = 4;		name = "HitFuel";			passThrough = 0.8;	visual = "";				radius = 0.3;	minimalHit = 0.1;	depends = "0";};
			// Wingtips fuel tanks
			class HitFuel_Lead_Left: HitFuel	{armor = 1.8;	explosionShielding = 3;		name = "HitFuel1_Leads";	passThrough = 0;	visual = "Hit_AileronL";	radius = 0.13;	minimalHit = 0.1;	};
			class HitFuel_Lead_Right: HitFuel	{armor = 1.8;	explosionShielding = 3;		name = "HitFuel2_leads";	passThrough = 0;	visual = "Hit_AileronR";	radius = 0.13;	minimalHit = 0.1;	};
			class HitFuel_Left: HitFuel			{armor = 2.5;	explosionShielding = 5;		name = "HitFuel1";			passThrough = 0.2;	visual = "Hit_Fuel2a";		radius = 0.2;	minimalHit = 0.1;	depends = "HitFuel_Lead_Left";};
			class HitFuel_Right: HitFuel		{armor = 2.5;	explosionShielding = 5;		name = "HitFuel2";			passThrough = 0.2;	visual = "Hit_Fuel2b";		radius = 0.2;	minimalHit = 0.1;	depends = "HitFuel_Lead_Right";};
			class HitFuel2: HitFuel				{armor = 999;	explosionShielding = 0;		name = "HitFuel2";			passThrough = 0.2;	visual = "";				radius = 0.2;	minimalHit = 0.1;	depends = "(HitFuel_Left + HitFuel_Right)*0.5";};
			// Cockpit glass
			class HitGlass1: HitHull			{armor = 1.2;	explosionShielding = 3;		name = "HitGlass1";			passThrough = 0;	visual = "glass1"; 			radius = 0.2;	minimalHit = 0.1;	depends = "0";};
			class HitGlass2: HitGlass1			{armor = 1.2;	explosionShielding = 3;		name = "HitGlass2";			passThrough = 0;	visual = "glass2"; 			radius = 0.2;	minimalHit = 0.1;	};
			class HitGlass3: HitGlass1			{armor = 1.2;	explosionShielding = 3;		name = "HitGlass3";			passThrough = 0;	visual = "glass3";			radius = 0.2;	minimalHit = 0.1;	};
			// Steering hitpoints	- LC means left or center
			class HitLAileron_Link: HitHull		{armor = 1.8;	explosionShielding = 3.5;	name = "HitLAileron_Link";	passThrough = 0;	visual = "Hit_AileronL"; 	radius = 0.09;	minimalHit = 0.1;	depends = "0";};
			class HitRAileron_Link: HitHull		{armor = 1.8;	explosionShielding = 3.5;	name = "HitRAileron_Link";	passThrough = 0;	visual = "Hit_AileronR"; 	radius = 0.09;	minimalHit = 0.1;	depends = "0";};
			class HitLAileron: HitHull			{armor = 1.5;	explosionShielding = 3;		name = "HitLAileron";		passThrough = 0.3;	visual = "Hit_AileronL"; 	radius = 0.2;	minimalHit = 0.1;	depends = "HitLAileron_Link";};
			class HitRAileron: HitLAileron		{armor = 1.5;	explosionShielding = 3;		name = "HitRAileron";		passThrough = 0.3;	visual = "Hit_AileronR"; 	radius = 0.2;	minimalHit = 0.1;	depends = "HitRAileron_Link";};
			class HitLCRudder: HitHull			{armor = 2;		explosionShielding = 3;		name = "HitLCRudder";		passThrough = 0.3;	visual = "Hit_RudderC"; 	radius = 0.2;	minimalHit = 0.1;	depends = "0";};
			class HitLCElevator: HitHull		{armor = 1.5;	explosionShielding = 3;		name = "HitLCElevator";		passThrough = 0.3;	visual = "Hit_ElevatorL"; 	radius = 0.2;	minimalHit = 0.1;	depends = "0";};
			class HitRElevator: HitHull			{armor = 1.5;	explosionShielding = 3;		name = "HitRElevator";		passThrough = 0.3;	visual = "Hit_ElevatorR"; 	radius = 0.2;	minimalHit = 0.1;	depends = "0";};
		};

		class Exhausts
		{
			class Exhaust1
			{
				position = "Exhaust1";				// position of exhaust memory point from smoke is coming from
				direction = "Exhaust1_dir";			// direction of exhaust smoke
				effect = "ExhaustsEffectPlaneHP";	// efect used for exhaust - variant which reacts to engine damage

				engineIndex = 0; 					// index used for detection which engine is getting damage
			};
		};

		class WingVortices
		{
			class WingTipLeft
			{
				effectName	= "WingVortices";		// name of the effect
				position	= "body_vapour_L_E";	// name of the memory point in model
			};

			class WingTipRight
			{
				effectName	= "WingVortices"; 		// name of the effect
				position	= "body_vapour_R_E";	// name of the memory point in model
			};
			class BodyLeft
			{
				effectName	= "BodyVortices";		// name of the effect
				position	= "body_vapour_L_S";	// name of the memory point in model
			};

			class BodyRight
			{
				effectName	= "BodyVortices";		// name of the effect
				position	= "body_vapour_R_S";	// name of the memory point in model
			};
		};

		#include "data\helpers\sounds.hpp" 						// sounds are included in separate file to prevent cluttering
		#include "data\helpers\flightModel.hpp"					// flight model is included in separate file to prevent cluttering, too
		#include "data\helpers\physx.hpp" 						// PhysX suspension setup

		driveOnComponent[] = {};  // array of components to be assigned special low-friction material (usually wheels) - not used anymore, for PhysX suspension use blank array (old array was - {"wheel_1","wheel_2","wheel_3"} )

		/*
		// These properties become obsolete with the new Sensor component configuration
		irScanRangeMin = 500;		// defines the range of IR sight of the vehicle
		irScanRangeMax = 5000;		// defines the range of IR sight of the vehicle
		irScanToEyeFactor = 2;		// defines the effectivity of IR sight of the vehicle
		laserScanner = 1;		// if the vehicle is able to see targets marked by laser marker
		*/

		gunAimDown = 0.029000;	// adjusts the aiming of gun relative to the axis of model
		headAimDown = 0.0000;	// adjusts the view of pilot to have crosshair centred

		memoryPointLRocket = "Rocket_1"; // use this for simulating different rocked pods in case you don't want to mess with "maverick weapon" simulation
		memoryPointRRocket = "Rocket_2"; // it is used to alternate two points/pods of fire the missiles

		minFireTime = 30;			// how long does the pilot fire at one target before switching to another one

		threat[] = {1, 1, 1};		// multiplier of cost of the vehicle in eyes of soft, armoured and air enemies

		class Components : Components // class where various components can be defined and made available to the entity. Make sure you inherit from
		{
			class SensorsManagerComponent // Component containing the vehicle sensors
			{
				class Components
				{
					class IRSensorComponent // Individual sensor class. In this case an Infra-red Search & Track.
					{
						componentType = "IRSensorComponent"; 	// Type of the sensor. Options: IRSensorComponent, NVSensorComponent, LaserSensorComponent, ActiveRadarSensorComponent, PassiveRadarSensorComponent, VisualSensorComponent, ManSensorComponent

						class AirTarget      							// Sensor range for targets in look-up conditions, with sky background
						{
							minRange = 500;         					/// Minimum possible range in meters
							maxRange = 5000;       						/// Maximum possible range in meters
							objectDistanceLimitCoef = 1;    			/// Range in meters set as objectDistanceLimit = (objectDistanceLimitCoef * player's obj. view distance)
							viewDistanceLimitCoef = 1;      			/// Range in meters set as viewDistanceLimit = (viewDistanceLimitCoef * player's view distance)
							/// Smallest of [maxRange, objectDistanceLimit, viewDistanceLimit] is used as actual sensor's range. If this number is lower than minRange then minRange is used.
						};
						class GroundTarget : AirTarget     				// Sensor range for targets in look-down conditions, with ground background
						{
							maxRange = 3500; 			// Less than AirTarget - It's usually more difficult to detect something against ground clutter.
						};

						angleRangeHorizontal = 90;     	// Azimuth coverage in degrees
						angleRangeVertical = 90;       	// Elevation coverage in degrees
						groundNoiseDistanceCoef = 0.1;  // Portion of sensor-target-ground distance below which the target becomes invisible to the sensor
						maxGroundNoiseDistance = 100;   // Distance from the ground background in meters above which the target will be visible even if still below groundNoiseDistanceCoef
						minSpeedThreshold = 0;        	// Speed in km/h above which the target will start becoming visible. Useful for simulating doppler-radar.
						maxSpeedThreshold = 0;       	// Speed above which the target becomes visible even if below groundNoiseDistanceCoef. Linearly decreases to minSpeedThreshold
						minTrackableSpeed = -600;  		// Min speed of target to be detectable
						maxTrackableSpeed = 600;      	// Max speed of target to be detectable. In this case the sensor won't be able to detect fast moving targets.
						minTrackableATL = -1e10;       	// Min altitude above terrain level of target to be detectable
						maxTrackableATL = 1e10;        	// Max altitude above terrain level of target to be detectable
						typeRecognitionDistance = 1000; // Distance in meters at which the sensor recognizes the actual target vehicle type
						animDirection = "";  			// Model selection to set the sensor direction. In this case empty, but it can be useful on tanks or gunships.
						aimDown = 15;                   // Elevation offset in degrees of the sensor from the animDirection. Looking down 15° in this case.
					};

					class PassiveRadarSensorComponent
					{
						componentType = "PassiveRadarSensorComponent"; // Component for Radar Warning Receiver

						class AirTarget
						{
							minRange = 25;
							maxRange = 5000;

							objectDistanceLimitCoef = -1;    //Don't limit the range by obj. view distance
							viewDistanceLimitCoef = -1;      //Don't limit the range by view distance
						};
						class GroundTarget : AirTarget {};
					};
				};
			};
			class TransportPylonsComponent
			{
				uiPicture = "\A3\Air_F_Gamma\Plane_Fighter_03\Data\UI\Plane_A143_3DEN_CA.paa";
				
				class Pylons
				{
					class Pylons1
					{
						hardpoints[]	= {"B_MISSILE_PYLON","B_BOMB_PYLON"};
						attachment		= "";
						priority		= 5;
						maxweight		= 200;
						UIposition[]	= {0.35,0.08};
					};
					class Pylons2: Pylons1
					{
						priority		= 4;
						attachment		= "FU_Staff_Pylon_Mag";
						maxweight		= 320;
						UIposition[]	= {0.345,0.13};
					};
					class Pylons3: Pylons1
					{
						hardpoints[]	= {"B_ZEPHYR","B_MISSILE_PYLON","B_BOMB_PYLON"};
						priority		= 3;
						attachment		= "";
						maxweight		= 400;
						UIposition[]	= {0.34,0.18};
					};
					class Pylons4: Pylons1 // center pylon
					{
						priority		= 2;
						attachment		= "";
						maxweight		= 500;
						UIposition[]	= {0.27,0.28};
						hardpoints[]	= {"B_A143_BUZZARD_CENTER_PYLON"};
					};
					class Pylons5: Pylons3 {UIposition[] = {0.33,0.38}; mirroredMissilePos = 3;}; // mirror the rest
					class Pylons6: Pylons2 {UIposition[] = {0.33,0.43}; mirroredMissilePos = 2;};
					class Pylons7: Pylons1 {UIposition[] = {0.34,0.48}; mirroredMissilePos = 1;};
				};
				class Presets
				{
					class Empty
					{
						displayName = $STR_empty;
						attachment[] = {};
					};
				};
			};
		};

		memoryPointDriverOptics	= "PilotCamera_pos";		//mem. point for pilot camera
		unitInfoType			= "RscOptics_CAS_Pilot";	//rsc with DriverOptics elements
		driverWeaponsInfoType	= "RscOptics_CAS_01_TGP";	//resource with Weapon UI elements that will be used when looking through the pilotCamera

		class MFD							// class for helmet mounted displays, is going to be documented separately
		{
			class AirplaneHUD
			{
				enableParallax = true;		//enables parallax effect for plane's HUD
				#define PosY0Center (0.383)
				#define PosY0CenterAdjust 0.13
				#define PosYCenterHorizont 0.38
				#define PosX0Center 0.4975
				#define SizeX10deg (0.94+0.03-0.02)
				#define SizeY10deg (1.3-0.2-0.03)
				#include "data\helpers\cfgHUD.hpp"		// here we are including file with HUD configuration itself
			};
		};

		class pilotCamera // A class that creates a turret-like slewable secondary optics for the pilot. Used to simulate Targeting Pods.
		{
			class OpticsIn
			{
				class Wide
				{
					initAngleX			= 0; minAngleX=0; maxAngleX=0;
					initAngleY			= 0; minAngleY=0; maxAngleY=0;
					initFov				= 0.25; 			// Zoom level of the magnification mode. In this case discrete - min/max/init set to the same value
					minFov				= 0.25;
					maxFov				= 0.25;
					directionStabilized	= 1; 				// Allows stabilization of the turret
					visionMode[]		= {"Normal","Ti"};	// Available spectrum modes - in this case visible and thermal
					thermalMode[]		= {0,1};			// TI modes - in this case WHOT and BHOT
					gunnerOpticsModel	= "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d"; // model used for the reticle
					opticsPPEffects[]	= {};  				// post-process effects used in the optics
				};
				class Medium : Wide
				{
					opticsDisplayName	= "MFOV";
					initFov				= A3_FOV_DEG(6);
					minFov				= A3_FOV_DEG(6);
					maxFov				= A3_FOV_DEG(6);
					gunnerOpticsModel	= "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_medium_F.p3d";
				};
				class Narrow : Wide
				{
					initFov				= 0.125;
					minFov				= 0.125;
					maxFov				= 0.125;
					gunnerOpticsModel	= "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				showMiniMapInOptics				= true;
				showUAVViewInOptics				= false;
				showSlingLoadManagerInOptics	= false;
			};

			minTurn					= -160;		// yaw limits
			maxTurn					= +160; 	// yaw limits
			initTurn				= 0;		// initial yaw angle
			minElev					= -10;		// pitch limits
			maxElev					= 90;		// pitch limits
			initElev				= 0;		// initial pitch angle
			maxXRotSpeed			= 0.3;		// yawing speed
			maxYRotSpeed			= 0.3;		// pitching speed
			maxMouseXRotSpeed		= 0.5;		// yawing speed for mouse
			maxMouseYRotSpeed		= 0.5;		// pitching speed for mouse
			pilotOpticsShowCursor	= 1;		// aimCursor is display inside optics (is useful to see plane direction)
			controllable			= true;		// camera can be slewed, set to 0 to have static camera
		};

		class AnimationSources: AnimationSources	// custom made animation sources to show/hide all the different parts for different loadout
		{
			class Muzzle_flash {source = "ammorandom"; weapon = "gatling_20mm";};	// used to rotate the muzzle flash, dependent on the weapon selected
			// animation sources for EJS
			class canopy_hide				{source = "user";animPeriod = 0.001;initPhase = 0;};
			class ejection_seat_hide : canopy_hide {};
			class ejection_seat_motion		{source = "user";animPeriod = 0.25;initPhase = 0;};
			// antimation sources for suspension animations and wheel rotation
			class Wheel_1_source			{source = wheel; wheel = Wheel_1;};
			class Wheel_2_source			{source = wheel; wheel = Wheel_2;};
			class Wheel_3_source			{source = wheel; wheel = Wheel_3;};
			class Damper_1_source			{source = damper; wheel = Wheel_1;};
			class Damper_2_source			{source = damper; wheel = Wheel_2;};
			class Damper_3_source			{source = damper; wheel = Wheel_3;};
			//extra animations sources for damage representation
			class HitGlass1 				{source="Hit"; hitpoint="HitGlass1"; 			raw=1;};
			class HitGlass2: HitGlass1 		{hitpoint = "HitGlass2";};
			class HitGlass3: HitGlass1 		{hitpoint = "HitGlass3";};
			class HitAvionics               {source = "Hit"; hitpoint = "HitAvionics"; 		raw=1;};
		};

		class UserActions		//used only when "driverCanEject" is zero and we want to use ejection system
		{
			class Test_Plane_01_Eject
			{
				priority		= 0.05;
				shortcut		= "Eject";
				displayName		= "$STR_A3_action_eject";
				condition		= "player in this && {speed this > 1}";
				statement		= "[this] spawn bis_fnc_planeEjection";
				position		= "pilotcontrol";
				radius			= 10;
				onlyforplayer	= 1;
				showWindow		= 0;
				hideOnUse		= 1;
			};
		};

		class EventHandlers {
			postinit="[_this select 0] spawn FU_fnc_initGlider;";
		};
	};

	class FU_Death_Glider: Test_Plane_01_base_F {
		scope			= 2;				// scope 2 means it is available in editor, this is one of the macros in basicdefines_a3.hpp
		scopeCurator	= 2;				// 2 means available from Zeus, whereas 0 means hidden
		displayName		= "Death Glider"; // how does the vehicle show itself in editor

		side			= 0;					// 3 stands for civilians, 0 is OPFOR, 1 is BLUFOR, 2 means guerrillas
		faction			= "FU_SG_OPFOR";				// defines the faction inside of the side
		crew			= "FU_Jaffa";	// we are using "Fighter Pilot" for now, but we can use the sample soldier we have as captain of the boat, too - "Test_Soldier_F"

		cost						= 3000000;			// we need some high cost for such vehicles to be prioritized by AA defences
	};

	class FU_Death_Glider_Wreck: PlaneWreck {
		scope				= 1;	// we don't want to see wreck model in editor (you can use scope=2 if you want to see it)
		model				= "FU_SG\data\models\FU_Death_Glider_Wreck.p3d"; // "FU_SG\data\models\FU_Death_Glider_Wreck.p3d";
		typicalCargo[]		= {};	//no one should be sitting inside when spawned
		irTarget			= 0;
		transportAmmo		= 0;
		transportRepair		= 0;
		transportFuel		= 0;
		transportSoldier	= 1;
		class Eventhandlers{};
	};
};


class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;

class SlotInfo;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;

class CfgWeapons {
	class DMR_06_base_F;
	class ItemCore;

	class Uniform_Base: ItemCore {
		class ItemInfo;
	};

	class CannonCore;

	class FU_Jaffa_Uniform: Uniform_Base {
		scope = 2;
		displayName="Jaffa Armor";
		//picture="\FU_Events\data\aliens\renders\FU_A_Uniform_Render.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		
		class ItemInfo: ItemInfo {
			uniformModel="-";
			uniformClass="FU_Jaffa";
			containerClass="Supply500";
			mass = 100;
			type = 801;
		};
	};

	class FU_Staff_Base: DMR_06_base_F {
		magazines[] = {"FU_SG_Staff_Ammo"}; /// original custom made magazines and a group of several standardized mags
		descriptionShort = "Staff Weapon"; /// displayed on mouseOver in Inventory
		modes[] = {"Single", "FullAuto"}; /// Includes fire modes for AI

		class Single: Mode_SemiAuto {
			sounds[] = {
				StandardSound // default sound
			};

			class StandardSound {
				soundSetShot[] = {
					FU_Staff_SoundSet
				};
			};

			reloadTime = 2;
			dispersion = 0.006;
			aiDispersionCoefX = 3.0;

			recoil = "FU_A_Recoil_Single"; /// defined in cfgRecoils
			recoilProne = "FU_A_Recoil_Single_Prone"; /// defined in cfgRecoils

			minRange = 50; minRangeProbab = 0.5; 	/// Task Force Balance black magic - this is the probability which AI thinks it would hit target at set range with
			midRange = 225; midRangeProbab = 0.7; 	/// it is no real probability of hit, just used for AI to compute if the shot is worth to take - AI chooses highest
			maxRange = 500; maxRangeProbab = 0.3; 	/// probability of the weapon, does some calculation and compares it with calculated probability of other weapons
		};

		class FullAuto: Mode_FullAuto {
			sounds[] = {
				StandardSound // default sound
			};

			class StandardSound {
				soundSetShot[] = {
					FU_Staff_SoundSet
				};
			};

			reloadTime = 0.6;
			dispersion = 0.01;
			aiDispersionCoefX = 3.0;

			recoil = "FU_A_Recoil_Auto"; /// defined in cfgRecoils
			recoilProne = "FU_A_Recoil_Auto_Prone"; /// defined in cfgRecoils

			minRange = 0; minRangeProbab = 0.9;
			midRange = 25; midRangeProbab = 0.7;
			maxRange = 50; maxRangeProbab = 0.1;

			aiRateOfFire = 0.000001;
		};
	};

	class FU_Staff: FU_Staff_Base {
		scope = 2; /// should be visible and useable in game
		scopeArsenal = 2;
		scopeCurator = 2;
		
		displayName = "Staff Weapon"; /// some name
		model = "FU_SG\data\models\FU_Staff.p3d"; /// path to model

		picture = "FU_SG\data\renders\FU_Staff.paa"; /// different accessories have M, S, T instead of X
		UiPicture = ""; /// weapon with grenade launcher should be marked such way

		weaponInfoType = "RscWeaponZeroing"; /// display with zeroing is good for iron sights

		muzzles[] = {this}; /// to be able to switch between bullet muzzle and TGL
	};

	class FU_Staff_Pylon: CannonCore {
		scope = 2;
		displayName = "Staff Pod";
		nameSound = "cannon";
		cursor = "EmptyCursor";
		cursorAim = "mg";
		showAimCursorInternal = 0;
		magazines[] = {"FU_Staff_Pylon_Mag"};
		canLock = 0;
		ballisticsComputer = "1 + 2 + 16";
		FCSMaxLeadSpeed = 30.5556;
		FCSZeroingDelay = 0.5;
		maxZeroing = 2500;
		aiDispersionCoefY = 0.5;
		aiDispersionCoefX = 0.5;
		modes[] = {"manual","close","short","medium","far"};

		class GunParticles {
			class Effect {
				effectName = "MachineGun1";
				positionName = "Usti hlavne";
				directionName = "Konec hlavne";
			};
		};

		class manual: CannonCore {
			displayName = "Staff Pod";
			autoFire = 1;
			textureType = "fullAuto";
			sounds[] = {"StandardSound"};
			
			class StandardSound {
				begin1[] = {"FU_SG\data\sfx\FU_Staff.ogg", 1.77828, 1, 1300, {2,35740}};
				soundBegin[] = {"begin1", 1};
			};

			soundContinuous = 0;
			soundBurst = 0;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 10;
			minRange = 0;
			minRangeProbab = 0.01;
			midRange = 1;
			midRangeProbab = 0.01;
			maxRange = 2;
			maxRangeProbab = 0.01;
			reloadTime = 0.6;
			dispersion = 0.006;
		};

		class close: manual {
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 16;
			burstRangeMax = 37;
			aiRateOfFire = 0.5;
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.1;
			midRange = 50;
			midRangeProbab = 0.65;
			maxRange = 400;
			maxRangeProbab = 0.75;
		};

		class short: close {
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 12;
			burstRangeMax = 32;
			aiRateOfFire = 1;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 200;
			minRange = 200;
			minRangeProbab = 0.65;
			midRange = 400;
			midRangeProbab = 0.75;
			maxRange = 1000;
			maxRangeProbab = 0.7;
		};

		class medium: close {
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 12;
			burstRangeMax = 28;
			aiRateOfFire = 2;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 800;
			minRange = 800;
			minRangeProbab = 0.7;
			midRange = 1400;
			midRangeProbab = 0.4;
			maxRange = 1800;
			maxRangeProbab = 0.15;
		};

		class far: close {
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 9;
			burstRangeMax = 20;
			aiRateOfFire = 4;
			aiRateOfFireDispersion = 4;
			aiRateOfFireDistance = 1400;
			minRange = 1400;
			minRangeProbab = 0.5;
			midRange = 1800;
			midRangeProbab = 0.15;
			maxRange = 2500;
			maxRangeProbab = 0.05;
		};
	};
};

class CfgMagazines {
	class Default;
	class CA_Magazine;
	class VehicleMagazine;

	class FU_SG_Staff_Ammo: CA_Magazine {
		scope = 2; /// or 2, to be precise
		displayName = "Staff Magazine";
		picture = ""; /// just some icon
		ammo = "FU_SG_StaffBullet";
		count = 500; /// 30 rounds is enough
		initSpeed = 100; /// standard muzzle speed
		tracersEvery = 1; /// disable tracers by default
		lastRoundsTracer = 500; /// tracers to track low ammo
		descriptionShort = "Staff Weapon Magazine"; /// on mouse-over in Inventory
		magazineGroup[]	= {"fu_sg_group"}; /// all magazines in the same group may be used in weapon that has the group defined as compatible
	};

	class FU_Staff_Pylon_Mag: VehicleMagazine {
		author = "Bizo";
		scope = 2;

		displayName = "Staff Pod";
		descriptionShort = "Staff Pod Pylon";
		model = "FU_SG\data\models\FU_Staff_Pylon.p3d";
		pylonWeapon = "FU_Staff_Pylon";
		hardpoints[] = {"O_MISSILE_PYLON", "B_MISSILE_PYLON", "DAGR"};
		ammo = "FU_SG_PylonBullet";
		count = 5000;
		initSpeed = 800;
		maxLeadSpeed = 83.3333;
		tracersEvery = 1;
		nameSound = "cannon";
		muzzleImpulseFactor[] = {0.1,0.8};
		displayNameShort = "Staff Pod Pylon";
	};
};

class CfgRecoils {
	#include "data\helpers\CfgRecoils.hpp" /// specific recoil patterns for this rifle
};

class CfgAmmo {
	class B_30mm_MP_Tracer_Yellow;
	class B_30mm_AP_Tracer_Yellow;
	class FU_SG_StaffBullet: B_30mm_AP_Tracer_Yellow {
		tracerScale = 5.0; /// how big is the flying tracer
		maxSpeed = 100;
	};
	class FU_SG_PylonBullet: B_30mm_MP_Tracer_Yellow {
		tracerScale = 5.0; /// how big is the flying tracer
		maxSpeed = 100;
	};
};