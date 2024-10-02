#include "BIS_AddonInfo.hpp"
#include "basicdefines_A3.hpp"

class CfgPatches {
	class FU_Modules {
		name="FU Modules";
		Author="Bizo";
		units[]= {
			"FU_ModuleSpawn", "FU_ModuleGarrison", "FU_ModuleInitMission", "FU_ModuleSetup", "FU_BlizzardModule", "FU_ToggleBlizzardModule", "FU_ModuleAgents", "FU_ModuleIntro"
		};
		weapons[]= {};
		requiredAddons[]= {
			"FU_Events",
			"A3_Modules_F"
		};
	};
};

class CfgNotifications {
	class FU_TransportRequest {
		title = "Transport Notification";
		iconPicture = "\A3\ui_f\data\igui\cfg\simpleTasks\types\land_ca.paa";
		description = "%1";
		color[] = {1,1,0,1};
		duration = 5;
		priority = 7;
	};
	
	class FU_StatusReport {
		title = "Status Report";
		iconPicture = "\A3\ui_f\data\igui\cfg\simpleTasks\types\%2_ca.paa";
		description = "%1";
		color[] = {1,1,0,1};
		duration = 5;
		priority = 7;
	};
};

class CfgFunctions {
	class FU {
		class Units {
			file = "FU_Modules\data\functions\Units";

			class assignCrewmanLogic{};
			class getFactionComposition{};
			class getVC{};
			class getSC{};
			class initComposition{};
			class spawnAgents{};
			class spawnDefenders{};
			class spawnAttackers{};
			class spawnGarrison{};
			class spawnModule{};
			class spawnModuleAgents{};
			class spawnStateMachine {postInit = 1;};
			class unitCommander {};
		};

		class Loadouts {
			file = "FU_Modules\data\functions\Loadouts";

			class fillLoadout{};
			class fillSupplyBox{};
		};

		class Misc {
			file = "FU_Modules\data\functions\Misc";

			class initMission{};
			class initBriefing{postInit = 1;};
			class initAttendanceTracker{preInit = 1;};
			class initGrassCutting{postInit = 1;};
			class initTreeCutting{postInit = 1;};
			class initFlag{postInit = 1;};
			class initGroupCreator{postInit = 1;};
			class initFighter{};
			class initIntro{};
		};

		class Blizzard {
			file = "FU_Modules\data\functions\Blizzard";

			class initBlizzard{};
			class toggleBlizzard{};
			class blizzardUI{};
			class blizzardEffect{};
			class blizzardEffectSnow{};
			class blizzardEffectRain{};
			class blizzardEffectSand{};
			class blizzardTearing{};
			class blizzardHazard{};
			class blizzardLogic{};
			class blizzardFrost{};
			class blizzardMask{};
		};
	};
};

class CfgFactionClasses {
	class NO_CATEGORY;

	class FU_BlizzardCategory: NO_CATEGORY {
		displayName = "FUM - Blizzard";
	};

	class FU_MissionCategory: NO_CATEGORY {
		displayName = "FUM - Mission Setup";
	};

	class FU_SpawnCategory: NO_CATEGORY {
		displayName = "FUM - Spawning";
	};
};

class CfgSounds {
	sounds[] = {};

	class FU_SandstormStart {
		name = "FU_SandstormStart";
		sound[] = {"FU_Modules\data\Sfx\FU_SandstormStart.ogg", 40, 1, 200};
		titles[] = {};
	};

	class FU_Sandstorm {
		name = "FU_Sandstorm";
		sound[] = {"FU_Modules\data\Sfx\FU_Sandstorm.ogg", 40, 1, 200};
		titles[] = {};
	};

	class FU_SandstormEnd {
		name = "FU_SandstormEnd";
		sound[] = {"FU_Modules\data\Sfx\FU_SandstormEnd.ogg", 40, 1, 200};
		titles[] = {};
	};

	class FU_TyphoonStart {
		name = "FU_TyphoonStart";
		sound[] = {"FU_Modules\data\Sfx\FU_TyphoonStart.ogg", 40, 1, 200};
		titles[] = {};
	};

	class FU_Typhoon {
		name = "FU_Typhoon";
		sound[] = {"FU_Modules\data\Sfx\FU_Typhoon.ogg", 40, 1, 200};
		titles[] = {};
	};

	class FU_TyphoonEnd {
		name = "FU_TyphoonEnd";
		sound[] = {"FU_Modules\data\Sfx\FU_TyphoonEnd.ogg", 40, 1, 200};
		titles[] = {};
	};

	class FU_BlizzardStart {
		name = "FU_BlizzardStart";
		sound[] = {"FU_Modules\data\Sfx\FU_BlizzardStart.ogg", 40, 1, 200};
		titles[] = {};
	};

	class FU_Blizzard_0 {
		name = "FU_Blizzard_0";
		sound[] = {"FU_Modules\data\Sfx\FU_Blizzard_0.ogg", 40, 1, 200};
		titles[] = {};
	};

	class FU_Blizzard_1 {
		name = "FU_Blizzard_1";
		sound[] = {"FU_Modules\data\Sfx\FU_Blizzard_1.ogg", 40, 1, 200};
		titles[] = {};
	};

	class FU_Blizzard_2 {
		name = "FU_Blizzard_2";
		sound[] = {"FU_Modules\data\Sfx\FU_Blizzard_2.ogg", 40, 1, 200};
		titles[] = {};
	};

	class FU_Blizzard_3 {
		name = "FU_Blizzard_3";
		sound[] = {"FU_Modules\data\Sfx\FU_Blizzard_3.ogg", 40, 1, 200};
		titles[] = {};
	};

	class FU_Blizzard_4 {
		name = "FU_Blizzard_4";
		sound[] = {"FU_Modules\data\Sfx\FU_Blizzard_4.ogg", 40, 1, 200};
		titles[] = {};
	};

	class FU_BlizzardEnd_0 {
		name = "FU_BlizzardEnd_0";
		sound[] = {"FU_Modules\data\Sfx\FU_BlizzardEnd_0.ogg", 40, 1, 200};
		titles[] = {};
	};

	class FU_BlizzardEnd_1 {
		name = "FU_BlizzardEnd_1";
		sound[] = {"FU_Modules\data\Sfx\FU_BlizzardEnd_1.ogg", 40, 1, 200};
		titles[] = {};
	};

	class FU_BlizzardEnd_2 {
		name = "FU_BlizzardEnd_2";
		sound[] = {"FU_Modules\data\Sfx\FU_BlizzardEnd_2.ogg", 40, 1, 200};
		titles[] = {};
	};

	class FU_BlizzardEnd_3 {
		name = "FU_BlizzardEnd_3";
		sound[] = {"FU_Modules\data\Sfx\FU_BlizzardEnd_3.ogg", 40, 1, 200};
		titles[] = {};
	};

	class FU_BlizzardEnd_4 {
		name = "FU_BlizzardEnd_4";
		sound[] = {"FU_Modules\data\Sfx\FU_BlizzardEnd_4.ogg", 40, 1, 200};
		titles[] = {};
	};
		
	class FU_Creaking_Tree_1L {
		name = "FU_Creaking_Tree_1L";
		sound[] = {"FU_Modules\data\Sfx\FU_Creaking_Tree_1L.ogg", 40, 1, 200};
		titles[] = {};
	};
	
	class FU_Creaking_Tree_1R {
		name = "FU_Creaking_Tree_1R";
		sound[] = {"FU_Modules\data\Sfx\FU_Creaking_Tree_1R.ogg", 40, 1, 200};
		titles[] = {};
	};
	
	class FU_Creaking_Tree_2L {
		name = "FU_Creaking_Tree_2L";
		sound[] = {"FU_Modules\data\Sfx\FU_Creaking_Tree_2L.ogg", 40, 1, 200};
		titles[] = {};
	};
	
	class FU_Creaking_Tree_2R {
		name = "FU_Creaking_Tree_2R";
		sound[] = {"FU_Modules\data\Sfx\FU_Creaking_Tree_2R.ogg", 40, 1, 200};
		titles[] = {};
	};
};


class CfgVehicles {
	class Logic;

	class Module_F: Logic {
		class AttributesBase {
			class Default;
			class Edit;					// Default edit box (i.e., text input field)
			class Combo;	// Default combo box (i.e., drop-down menu)
			class Checkbox;				// Default checkbox (returned value is Boolean)
			class CheckboxNumber;		// Default checkbox (returned value is Number)
			class ModuleDescription;	// Module description
			class Units;				// Selection of units on which the module is applied
			class Music: Default {
				control = "Music";
				defaultValue = "''";
			};
			class EditCodeMulti3: Default {
				control = "EditCodeMulti3";
				defaultValue = "''";
			};
		};
		
		// Description base classes, for more information see below
		class ModuleDescription
		{
			class AnyBrain;
		};
	};
	
	class FU_ModuleSpawn: Module_F {
		// Standard object definitions
		scope = 2; // Editor visibility; 2 will show it in the menu, 1 will hide it.
		displayName = "Spawn Units"; // Name displayed in the menu
		category = "FU_SpawnCategory";
		canSetArea = 1;
		canSetAreaHeight = 0;
		canSetAreaShape = 1;
		class AttributeValues {
			size3[] = {100,100,-1};
			isRectangle = 0;
		};

		// Name of function triggered once conditions are met
		function = "FU_fnc_spawnModule";
		// Execution priority, modules with lower number are executed first. 0 is used when the attribute is undefined
		functionPriority = 1;
		// 0 for server only execution, 1 for global execution, 2 for persistent global execution
		isGlobal = 0;
		// 1 for module waiting until all synced triggers are activated
		isTriggerActivated = 0;
		// 1 if modules is to be disabled once it is activated (i.e., repeated trigger activation won't work)
		isDisposable = 0;
		// 1 to run init function in Eden Editor as well
		is3DEN = 0;

		class Attributes: AttributesBase {
			class FU_Composition: Edit {
				// Unique property, use "<moduleClass>_<attributeClass>" format to make sure the name is unique in the world
				property = "FU_Composition";
				displayName = "Composition Setup Variable Name"; // Argument label
				tooltip = "Put the variable name of the composition."; // Tooltip description
				typeName = "STRING";
				defaultValue = """"""; // Default attribute value. WARNING: This is an expression, and its returned value will be used (50 in this case)
			};

			class FU_SpawnType: Combo {
				property = "FU_SpawnType";
				displayName = "Spawn Type";
				tooltip = "How will the units act when spawned. Defenders patrol in their predetermined area, attackers attack a given marker.";
				typeName = "NUMBER";
				defaultValue = 0;
				
				class Values {
					class DEF {name = "Defenders"; value = 0;};
					class ATT {name = "Attackers"; value = 1;};
				};
			};
			
			// Module specific arguments
			class FU_Type: Combo {
				// Unique property, use "<moduleClass>_<attributeClass>" format to make sure the name is unique in the world
				property = "FU_Type";
				displayName = "Group Type"; // Argument label
				tooltip = "What type of group will you spawn."; // Tooltip description
				typeName = "NUMBER"; // Value type, can be "NUMBER", "STRING" or "BOOL"
				defaultValue = 0; // Default attribute value. WARNING: This is an expression, and its returned value will be used (50 in this case)
				
				class Values {
					class SQD {name = "Squad";	value = 0;};
					class FT {name = "Fireteam"; value = 1;};
					class TEH {name = "Technical"; value = 2;};
					class APC {name = "APC"; value = 3;};
					class TNK {name = "Tank"; value = 4;};
					class HEL {name = "Helicopter"; value = 5;};
					class PLN {name = "Plane"; value = 6;};
					class QRF_T {name = "QRF - Truck"; value = 7;};
					class QRF_H {name = "QRF - Helicopter"; value = 8;};
				};
			};

			class FU_Spawn_Number: Edit {
				// Unique property, use "<moduleClass>_<attributeClass>" format to make sure the name is unique in the world
				property = "FU_Spawn_Number";
				displayName = "Spawn Number"; // Argument label
				tooltip = "How many GROUPS will you spawn."; // Tooltip description
				typeName = "NUMBER";
				defaultValue = 1; // Default attribute value. WARNING: This is an expression, and its returned value will be used (50 in this case)
			};

			class FU_Patrol_Radius: Edit {
				// Unique property, use "<moduleClass>_<attributeClass>" format to make sure the name is unique in the world
				property = "FU_Patrol_Radius";
				displayName = "[DEFENDERS] Patrol Radius"; // Argument label
				tooltip = "What will be the patrol radius. (DEFENDERS)"; // Tooltip description
				typeName = "NUMBER";
				defaultValue = 300; // Default attribute value. WARNING: This is an expression, and its returned value will be used (50 in this case)
			};

			class FU_Attack_Marker: Edit {
				// Unique property, use "<moduleClass>_<attributeClass>" format to make sure the name is unique in the world
				property = "FU_Attack_Marker";
				displayName = "[ATTACKERS] Attack Marker"; // Argument label
				tooltip = "Where will the units go to after spawning. (ATTACKERS)"; // Tooltip description
				defaultValue = """marker_0"""; // Default attribute value. WARNING: This is an expression, and its returned value will be used (50 in this case)
			};

			class FU_Expression: Edit {
				// Unique property, use "<moduleClass>_<attributeClass>" format to make sure the name is unique in the world
				property = "FU_Expression";
				displayName = "Expression"; // Argument label
				tooltip = "A script expression that will be executed for each unit in group. To get the reference of the unit, use (_x)."; // Tooltip description
				defaultValue = """"""; // Default attribute value. WARNING: This is an expression, and its returned value will be used (50 in this case)
			};
		};
	};

	class FU_ModuleGarrison: Module_F {
		// Standard object definitions
		scope = 2; // Editor visibility; 2 will show it in the menu, 1 will hide it.
		displayName = "Spawn Garrisoned Units"; // Name displayed in the menu
		category = "FU_SpawnCategory";
		canSetArea = 1;
		canSetAreaHeight = 0;
		canSetAreaShape = 1;
		class AttributeValues {
			size3[] = {20,20,-1};
			isRectangle = 1;
		};


		// Name of function triggered once conditions are met
		function = "FU_fnc_spawnModule";
		// Execution priority, modules with lower number are executed first. 0 is used when the attribute is undefined
		functionPriority = 1;
		// 0 for server only execution, 1 for global execution, 2 for persistent global execution
		isGlobal = 0;
		// 1 for module waiting until all synced triggers are activated
		isTriggerActivated = 0;
		// 1 if modules is to be disabled once it is activated (i.e., repeated trigger activation won't work)
		isDisposable = 0;
		// 1 to run init function in Eden Editor as well
		is3DEN = 0;

		// Menu displayed when the module is placed or double-clicked on by Zeus
		//curatorInfoType = "RscDisplayAttributeModuleNuke";

		// Module attributes, uses https://community.bistudio.com/wiki/Eden_Editor:_Configuring_Attributes#Entity_Specific
		class Attributes: AttributesBase {
			class FU_Composition: Edit {
				// Unique property, use "<moduleClass>_<attributeClass>" format to make sure the name is unique in the world
				property = "FU_Composition";
				displayName = "Composition Setup Variable Name"; // Argument label
				tooltip = "Put the variable name of the composition."; // Tooltip description
				typeName = "STRING";
				defaultValue = """"""; // Default attribute value. WARNING: This is an expression, and its returned value will be used (50 in this case)
			};
			
			class FU_Type: Combo {
				// Unique property, use "<moduleClass>_<attributeClass>" format to make sure the name is unique in the world
				property = "FU_Type";
				displayName = "Behaviour Type"; // Argument label
				tooltip = "Would you like this groups units to be fixed in place (Fixed Mode), be able to move (Loose Mode), or move once players shoot near them (Combat Mode)."; // Tooltip description
				typeName = "STRING"; // Value type, can be "NUMBER", "STRING" or "BOOL"
				defaultValue = """CANNOT_MOVE"""; // Default attribute value. WARNING: This is an expression, and its returned value will be used (50 in this case)

				class Values {
					class CANNOT_MOVE {name = "Fixed Mode"; value = "CANNOT_MOVE";};
					class COMBAT {name = "Combat Mode";	value = "COMBAT";};
					class CAN_MOVE {name = "Loose Mode"; value = "CAN_MOVE";};
				};
			};
			
			class FU_Fill: Edit {
				// Unique property, use "<moduleClass>_<attributeClass>" format to make sure the name is unique in the world
				property = "FU_Fill";
				displayName = "Building fill"; // Argument label
				tooltip = "How much of the building/s would you like to be filled in percentage (0-100%)"; // Tooltip description
				typeName = "NUMBER";
				defaultValue = 50; // Default attribute value. WARNING: This is an expression, and its returned value will be used (50 in this case)
			};

			class FU_Expression: Edit {
				// Unique property, use "<moduleClass>_<attributeClass>" format to make sure the name is unique in the world
				property = "FU_Expression";
				displayName = "Expression"; // Argument label
				tooltip = "A script expression that will be executed for each unit in group. To get the reference of the unit, use (_x)."; // Tooltip description
				defaultValue = """"""; // Default attribute value. WARNING: This is an expression, and its returned value will be used (50 in this case)
			};
		};
	};

	class FU_ModuleCommander: Module_F {
		// Standard object definitions
		scope = 2; // Editor visibility; 2 will show it in the menu, 1 will hide it.
		displayName = "Unit Commander"; // Name displayed in the menu
		category = "FU_SpawnCategory";
		canSetArea = 1;
		canSetAreaHeight = 0;
		canSetAreaShape = 1;
		class AttributeValues {
			size3[] = {500,500,-1};
			isRectangle = 0;
		};

		// Name of function triggered once conditions are met
		function = "FU_fnc_unitCommander";
		// Execution priority, modules with lower number are executed first. 0 is used when the attribute is undefined
		functionPriority = 1;
		// 0 for server only execution, 1 for global execution, 2 for persistent global execution
		isGlobal = 0;
		// 1 for module waiting until all synced triggers are activated
		isTriggerActivated = 0;
		// 1 if modules is to be disabled once it is activated (i.e., repeated trigger activation won't work)
		isDisposable = 0;
		// 1 to run init function in Eden Editor as well
		is3DEN = 0;

		class Attributes: AttributesBase {
			class FU_Commander: Edit {
				property = "FU_Commander";
				displayName = "Commander Unit";
				tooltip = "Put in the VARIABLE NAME of an entity (UNIT, VEHICLE, OBJECT, etc...) to assign the command to the physical entity. Leave empty for units to coordinate without a commander.";
				typeName = "STRING";
				defaultValue = """""";
			};

			class FU_Detect_AI: Checkbox {
				property = "FU_Detect_AI";
				displayName = "Detect AI Units";
				tooltip = "Would you like the module to detect AI friendlies";
				typeName = "BOOL";
				defaultValue = false;
			};

			class FU_Side_Player: Combo {
				property = "FU_Side_Player";
				displayName = "Player Side";
				tooltip = "Which side is the player";
				typeName = "STRING";
				defaultValue = """WEST""";
				
				class Values {
					class WEST_SIDE {name = "BLUFOR";	value = "WEST";};
					class EAST_SIDE	{name = "OPFOR";	value = "EAST";};
					class GUER_SIDE	{name = "Independent";	value = "GUER";};
				};
			};

			class FU_Side: Combo {
				property = "FU_Side";
				displayName = "Enemy Side";
				tooltip = "Which side is the enemy";
				typeName = "STRING";
				defaultValue = """EAST""";
				
				class Values {
					class WEST_SIDE {name = "BLUFOR";	value = "WEST";};
					class EAST_SIDE	{name = "OPFOR";	value = "EAST";};
					class GUER_SIDE	{name = "Independent";	value = "GUER";};
				};
			};

			class FU_SpotTreshold: Combo {
				property = "FU_SpotTreshold";
				displayName = "Response Sensitivity";
				tooltip = "What knowledge level enemies need to reach to respond to players (where 0 means enemies don't know about players and 4 means enemies know exactly where players are). Very sensitive = 1; Sensitive = 2; Moderate = 3; Less sensitive = 4;";
				typeName = "NUMBER";
				defaultValue = 1;

				class Values {
					class EASY {name = "Very sensitive";	value = 1;};
					class MID	{name = "Sensitive";	value = 2;};
					class HARD	{name = "Moderate";	value = 3;};
					class VERY_HARD	{name = "Less sensitive";	value = 4;};
				};
			};

			class FU_ResponseStr: Edit {
				property = "FU_ResponseStr";
				displayName = "Response Strenght";
				tooltip = "How many groups will be called to respond to player threat (includes the group that spotted them). Put 0 for every available group in radius.";
				typeName = "NUMBER";
				defaultValue = 0;
			};

			class FU_ResponseLvl: Edit {
				property = "FU_ResponseLvl";
				displayName = "Response Level";
				tooltip = "How many players need to be spotted before enemies respond.";
				typeName = "NUMBER";
				defaultValue = 1;
			};
		};
	};

	class FU_ModuleInitMission: Module_F {
		// Standard object definitions
		scope = 2; // Editor visibility; 2 will show it in the menu, 1 will hide it.
		displayName = "Mission Initialization"; // Name displayed in the menu
		category = "FU_MissionCategory";

		class EventHandlers {
			Init="[_this select 0] spawn FU_fnc_initMission";
		};

		// Execution priority, modules with lower number are executed first. 0 is used when the attribute is undefined
		functionPriority = 1;
		// 0 for server only execution, 1 for global execution, 2 for persistent global execution
		isGlobal = 1;
		// 1 for module waiting until all synced triggers are activated
		isTriggerActivated = 0;
		// 1 if modules is to be disabled once it is activated (i.e., repeated trigger activation won't work)
		isDisposable = 0;
		// 1 to run init function in Eden Editor as well
		is3DEN = 1;
	};

	class FU_ModuleSetup: Module_F {
		// Standard object definitions
		scope = 2;
		displayName = "Setup Compositions";
		category = "FU_SpawnCategory";

		class EventHandlers {
			Init="[_this select 0] spawn FU_fnc_initComposition";
		};

		functionPriority = 1;
		isGlobal = 1;
		isTriggerActivated = 0;
		isDisposable = 1;
		is3DEN = 1;

		class Attributes: AttributesBase {
			class FU_SquadComp: Edit {
				property = "FU_SquadComp";
				displayName = "Generated Squad Composition";
				tooltip = "Put the variable name of the composition.";
				defaultValue = """""";
			};

			class FU_VehComp: Edit {
				property = "FU_VehComp";
				displayName = "Generated Vehicle Composition";
				tooltip = "Put the variable name of the composition.";
				defaultValue = """""";
			};

			class FU_Side: Combo {
				property = "FU_Side";
				displayName = "Side";
				tooltip = "What side will you spawn.";
				typeName = "STRING";
				defaultValue = """WEST""";
				
				class Values {
					class WEST_SIDE {name = "BLUFOR";	value = "WEST";};
					class EAST_SIDE	{name = "OPFOR";	value = "EAST";};
					class GUER_SIDE	{name = "Independent";	value = "GUER";};
				};
			};

			class FU_Use_CL: Checkbox {
				property = "FU_Use_CL";
				displayName = "Use Custom Loadouts"; // Argument label
				tooltip = "Would you like to use custom loadouts."; // Tooltip description
				typeName = "BOOL"; // Value type, can be "NUMBER", "STRING" or "BOOL"
				defaultValue = false; // Default attribute value. WARNING: This is an expression, and its returned value will be used (50 in this case)
			};

			class FU_Loadout_SL: Edit {
				property = "FU_Loadout_SL";
				displayName = "Custom Loadout - Squad Leader"; // Argument label
				tooltip = "Custom loadout of the Squad Leader."; // Tooltip description
				typeName = "STRING";
				defaultValue = "[]"; // Default attribute value. WARNING: This is an expression, and its returned value will be used (50 in this case)
			};

			class FU_Loadout_MED: Edit {
				property = "FU_Loadout_MED";
				displayName = "Custom Loadout - Medic"; // Argument label
				tooltip = "Custom loadout of the Medic."; // Tooltip description
				typeName = "STRING";
				defaultValue = "[]"; // Default attribute value. WARNING: This is an expression, and its returned value will be used (50 in this case)
			};

			class FU_Loadout_RIF: Edit {
				property = "FU_Loadout_RIF";
				displayName = "Custom Loadout - Rifleman"; // Argument label
				tooltip = "Custom loadout of the Rifleman."; // Tooltip description
				typeName = "STRING";
				defaultValue = "[]"; // Default attribute value. WARNING: This is an expression, and its returned value will be used (50 in this case)
			};

			class FU_Loadout_SPC_1: Edit {
				property = "FU_Loadout_SPC_1";
				displayName = "Custom Loadout - FT 1"; // Argument label
				tooltip = "Custom loadout of the special unit 1 (4th unit in a 12 man squad)."; // Tooltip description
				typeName = "STRING";
				defaultValue = "[]"; // Default attribute value. WARNING: This is an expression, and its returned value will be used (50 in this case)
			};

			class FU_Loadout_SPC_2: Edit {
				property = "FU_Loadout_SPC_2";
				displayName = "Custom Loadout - FT 2"; // Argument label
				tooltip = "Custom loadout of the special unit 2 (8th unit in a 12 man squad)."; // Tooltip description
				typeName = "STRING";
				defaultValue = "[]"; // Default attribute value. WARNING: This is an expression, and its returned value will be used (50 in this case)
			};

			class FU_Loadout_SPC_3: Edit {

				property = "FU_Loadout_SPC_3";
				displayName = "Custom Loadout -  FT 3"; // Argument label
				tooltip = "Custom loadout of the special unit 3 (12th unit in a 12 man squad)."; // Tooltip description
				typeName = "STRING";
				defaultValue = "[]"; // Default attribute value. WARNING: This is an expression, and its returned value will be used (50 in this case)
			};
		}
	};

	class FU_BlizzardModule: Module_F {
		// Standard object definitions
		scope = 2; // Editor visibility; 2 will show it in the menu, 1 will hide it.
		displayName = "FUB - Blizzard"; // Name displayed in the menu
		category = "FU_BlizzardCategory";
		
		// Name of function triggered once conditions are met
		function = "FU_fnc_initBlizzard";
		// Execution priority, modules with lower number are executed first. 0 is used when the attribute is undefined
		functionPriority = 1;
		// 0 for server only execution, 1 for global execution, 2 for persistent global execution
		isGlobal = 2;
		// 1 for module waiting until all synced triggers are activated
		isTriggerActivated = 0;
		// 1 if modules is to be disabled once it is activated (i.e., repeated trigger activation won't work)
		isDisposable = 0;
		// 1 to run init function in Eden Editor as well
		is3DEN = 0;

		// Menu displayed when the module is placed or double-clicked on by Zeus
		//curatorInfoType = "RscDisplayAttributeModuleNuke";

		// Module attributes, uses https://community.bistudio.com/wiki/Eden_Editor:_Configuring_Attributes#Entity_Specific
		class Attributes: AttributesBase {
			// Arguments shared by specific module type (have to be mentioned in order to be present)
			class FU_Module_BlizzardType: Combo {
				property = "FU_Module_BlizzardType";
				displayName = "Effect Type";
				tooltip = "Select an effect type.";
				typeName = "STRING";
				defaultValue = """SNOW""";
				
				class Values {
					class WEST_SIDE {name = "Blizzard (Snow)";	value = "SNOW";};
					class EAST_SIDE	{name = "Typhoon (Rain)";	value = "RAIN";};
					class GUER_SIDE	{name = "Sandstorm (Sand)";	value = "SAND";};
				};
			};

			class FU_Module_Blizzard: Checkbox {
				// Unique property, use "<moduleClass>_<attributeClass>" format to make sure the name is unique in the world
				property = "FU_Module_Blizzard";
				displayName = "Start Blizzard"; // Argument label
				tooltip = "Start blizzard when the game loads."; // Tooltip description
				typeName = "BOOL"; // Value type, can be "NUMBER", "STRING" or "BOOL"
				defaultValue = false; // Default attribute value. WARNING: This is an expression, and its returned value will be used (50 in this case)
			};

			class FU_Module_BlizzardDifficulty: Combo {
				// Unique property, use "<moduleClass>_<attributeClass>" format to make sure the name is unique in the world
				property = "FU_BlizzardDifficulty";
				displayName = "Difficulty"; // Argument label
				tooltip = "Difficulty of the blizzard. EASY - Blizzard is only visually there (no hazards, screen shakes, eye tearing); MEDIUM - Blizzard has visual disturbances; HARD - Blizzard is hazardous (you can freeze, or fall down)"; // Tooltip description
				typeName = "NUMBER"; // Value type, can be "NUMBER", "STRING" or "BOOL"
				defaultValue = 0; // Default attribute value. WARNING: This is an expression, and its returned value will be used (50 in this case)

				class Values {
					class EASY {name = "Easy"; value = 0;};
					class MEDIUM {name = "Medium";	value = 1;};
					class HARD {name = "Hard";	value = 2;};
				};
			};
			
			class FU_Module_BlizzardTimeToFreeze: Edit {
				// Unique property, use "<moduleClass>_<attributeClass>" format to make sure the name is unique in the world
				property = "FU_Module_BlizzardTimeToFreeze";
				displayName = "Freezing time"; // Argument label
				tooltip = "How much time (in seconds) to freeze."; // Tooltip description
				typeName = "NUMBER"; // Value type, can be "NUMBER", "STRING" or "BOOL"
				defaultValue = 300;	
			};

			class FU_Module_BlizzardTimeToDefreeze: Edit {
				// Unique property, use "<moduleClass>_<attributeClass>" format to make sure the name is unique in the world
				property = "FU_Module_BlizzardTimeToDefreeze";
				displayName = "Defreezing time"; // Argument label
				tooltip = "How much time (in seconds) to defreeze."; // Tooltip description
				typeName = "NUMBER"; // Value type, can be "NUMBER", "STRING" or "BOOL"
				defaultValue = 150;	
			};

			class FU_Module_BlizzardAllowTearing: Checkbox {
				// Unique property, use "<moduleClass>_<attributeClass>" format to make sure the name is unique in the world
				property = "FU_Module_BlizzardAllowTearing";
				displayName = "Enable eye tearing"; // Argument label
				tooltip = "Enable or disable eye tearing when not wearing masks."; // Tooltip description
				typeName = "BOOL"; // Value type, can be "NUMBER", "STRING" or "BOOL"
				defaultValue = true; // Default attribute value. WARNING: This is an expression, and its returned value will be used (50 in this case)
			};

			class FU_Module_BlizzardShake: Checkbox {
				// Unique property, use "<moduleClass>_<attributeClass>" format to make sure the name is unique in the world
				property = "FU_Module_BlizzardShake";
				displayName = "Enable shaking"; // Argument label
				tooltip = "Enable camera shaking from the blizzard."; // Tooltip description
				typeName = "BOOL"; // Value type, can be "NUMBER", "STRING" or "BOOL"
				defaultValue = true; // Default attribute value. WARNING: This is an expression, and its returned value will be used (50 in this case)
			};

			class FU_Module_BlizzardMaskOverlay: Checkbox {
				// Unique property, use "<moduleClass>_<attributeClass>" format to make sure the name is unique in the world
				property = "FU_Module_BlizzardMaskOverlay";
				displayName = "Enable mask overlay"; // Argument label
				tooltip = "Enable mask overlay to be displayed on the screen when equipped."; // Tooltip description
				typeName = "BOOL"; // Value type, can be "NUMBER", "STRING" or "BOOL"
				defaultValue = true; // Default attribute value. WARNING: This is an expression, and its returned value will be used (50 in this case)
			};
			
			class FU_Module_BlizzardMasks: Edit {
				// Unique property, use "<moduleClass>_<attributeClass>" format to make sure the name is unique in the world
				property = "FU_Module_BlizzardMasks";
				displayName = "Allowed masks"; // Argument label
				tooltip = "Allowed masks, used to prevent eye tearing. Separate multiple masks/glasses/goggles class names with a comma, ex.: G_Combat, G_Bandanna_aviator, G_Balaclava_combat, ... "; // Tooltip description
				typeName = "STRING";
				defaultValue = "G_Combat"; // Default attribute value. WARNING: This is an expression, and its returned value will be used (50 in this case)
			};
			
			class ModuleDescription: ModuleDescription{}; // Module description should be shown last
		};

		// Module description. Must inherit from base class, otherwise pre-defined entities won't be available
		class ModuleDescription: ModuleDescription
		{
			description[] = {
				""
			};
			sync[] = {"LocationArea_F"}; // Array of synced entities (can contain base classes)
		};
	};

	class FU_ToggleBlizzardModule: Module_F {
		// Standard object definitions
		scope = 1; // Editor visibility; 2 will show it in the menu, 1 will hide it.
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "FU - Toggle Blizzard"; // Name displayed in the menu
		category = "FU_BlizzardCategory";
		
		function = "FU_fnc_toggleBlizzard";
		functionPriority = 1;
		isGlobal = 0;
		isTriggerActivated = 0;
		isDisposable = 0;
		is3DEN = 0;
	};

	class FU_ModuleIntro: Module_F {
		// Standard object definitions
		scope = 2; // Editor visibility; 2 will show it in the menu, 1 will hide it.
		displayName = "Mission Intro"; // Name displayed in the menu
		category = "FU_MissionCategory";

		// Name of function triggered once conditions are met
		function = "FU_fnc_initIntro";
		// Execution priority, modules with lower number are executed first. 0 is used when the attribute is undefined
		functionPriority = 1;
		// 0 for server only execution, 1 for global execution, 2 for persistent global execution
		isGlobal = 1;
		// 1 for module waiting until all synced triggers are activated
		isTriggerActivated = 0;
		// 1 if modules is to be disabled once it is activated (i.e., repeated trigger activation won't work)
		isDisposable = 0;
		// 1 to run init function in Eden Editor as well
		is3DEN = 0;

		class Attributes: AttributesBase {
			class FU_Line_1: Edit {
				// Unique property, use "<moduleClass>_<attributeClass>" format to make sure the name is unique in the world
				property = "FU_Line_1";
				displayName = "First line"; // Argument label
				typeName = "STRING"; // Value type, can be "NUMBER", "STRING" or "BOOL"
				tooltip = "First line of the intro text. Will be displayed on bottom left corner for the screen. Can be used for operation name."; // Tooltip description
				defaultValue = """Operation: Lorem Ipsum"""; // Default attribute value. WARNING: This is an expression, and its returned value will be used (50 in this case)
			};

			class FU_Line_2: Edit {
				// Unique property, use "<moduleClass>_<attributeClass>" format to make sure the name is unique in the world
				property = "FU_Line_2";
				displayName = "Second line"; // Argument label
				typeName = "STRING"; // Value type, can be "NUMBER", "STRING" or "BOOL"
				tooltip = "Second line of the intro text. Will be displayed on bottom left corner for the screen. Can be used for location, or author name."; // Tooltip description
				defaultValue = """Pyrgos Military Base, Republic of Altis"""; // Default attribute value. WARNING: This is an expression, and its returned value will be used (50 in this case)
			};

			class FU_DateTime: Checkbox {
				property = "FU_DateTime";
				displayName = "Display date-time"; // Argument label
				tooltip = "Toggle if you want to display ingame date and time."; // Tooltip description
				typeName = "BOOL"; // Value type, can be "NUMBER", "STRING" or "BOOL"
				defaultValue = false; // Default attribute value. WARNING: This is an expression, and its returned value will be used (50 in this case)
			};

			class FU_Music: Music {
				// Unique property, use "<moduleClass>_<attributeClass>" format to make sure the name is unique in the world
				property = "FU_Music";
				displayName = "Music"; // Argument label
				tooltip = "Music that will be played on start."; // Tooltip description
				typeName = "STRING"; // Value type, can be "NUMBER", "STRING" or "BOOL"
				defaultValue = """"""; // Default attribute value. WARNING: This is an expression, and its returned value will be used (50 in this case)
			};

			class FU_Before: EditCodeMulti3 {
				// Unique property, use "<moduleClass>_<attributeClass>" format to make sure the name is unique in the world
				property = "FU_Before";
				displayName = "Execute Before"; // Argument label
				tooltip = "Executes before the intro condition or start. (Passes the module object)"; // Tooltip description
				defaultValue = """"""; // Default attribute value. WARNING: This is an expression, and its returned value will be used (50 in this case)
			};

			class FU_Condition: EditCodeMulti3 {
				// Unique property, use "<moduleClass>_<attributeClass>" format to make sure the name is unique in the world
				property = "FU_Condition";
				displayName = "Condition"; // Argument label
				tooltip = "Starts the intro after this returns true. Leave as it is if you want to start immediatelly."; // Tooltip description
				defaultValue = """true"""; // Default attribute value. WARNING: This is an expression, and its returned value will be used (50 in this case)
			};

			class FU_After: EditCodeMulti3 {
				// Unique property, use "<moduleClass>_<attributeClass>" format to make sure the name is unique in the world
				property = "FU_After";
				displayName = "Execute After"; // Argument label
				tooltip = "Executes after the intro. (Passes the module object)"; // Tooltip description
				defaultValue = """"""; // Default attribute value. WARNING: This is an expression, and its returned value will be used (50 in this case)
			};
		};
	};

	class FU_ModuleAgents: Module_F {
		// Standard object definitions
		scope = 2; // Editor visibility; 2 will show it in the menu, 1 will hide it.
		displayName = "Spawn Civilians"; // Name displayed in the menu
		category = "FU_SpawnCategory";
		canSetArea = 1;
		canSetAreaHeight = 0;
		canSetAreaShape = 1;
		class AttributeValues {
			size3[] = {500,500,-1};
			isRectangle = 0;
		};

		// Name of function triggered once conditions are met
		function = "FU_fnc_spawnModuleAgents";
		// Execution priority, modules with lower number are executed first. 0 is used when the attribute is undefined
		functionPriority = 1;
		// 0 for server only execution, 1 for global execution, 2 for persistent global execution
		isGlobal = 0;
		// 1 for module waiting until all synced triggers are activated
		isTriggerActivated = 0;
		// 1 if modules is to be disabled once it is activated (i.e., repeated trigger activation won't work)
		isDisposable = 0;
		// 1 to run init function in Eden Editor as well
		is3DEN = 0;

		class Attributes: AttributesBase {
			class FU_UnitCount: Edit {
				// Unique property, use "<moduleClass>_<attributeClass>" format to make sure the name is unique in the world
				property = "FU_UnitCount";
				displayName = "Civilian count"; // Argument label
				typeName = "NUMBER"; // Value type, can be "NUMBER", "STRING" or "BOOL"
				tooltip = "Amount of civilians to be spawned."; // Tooltip description
				defaultValue = 10; // Default attribute value. WARNING: This is an expression, and its returned value will be used (50 in this case)
			};

			class FU_VehicleCount: Edit {
				// Unique property, use "<moduleClass>_<attributeClass>" format to make sure the name is unique in the world
				property = "FU_VehicleCount";
				displayName = "Vehicle Count"; // Argument label
				typeName = "NUMBER"; // Value type, can be "NUMBER", "STRING" or "BOOL"
				tooltip = "Amount of civilians in vehicles to be spawned."; // Tooltip description
				defaultValue = 3; // Default attribute value. WARNING: This is an expression, and its returned value will be used (50 in this case)
			};

			class FU_Condition: EditCodeMulti3 {
				// Unique property, use "<moduleClass>_<attributeClass>" format to make sure the name is unique in the world
				property = "FU_Condition";
				displayName = "Condition"; // Argument label
				tooltip = "Works the same as CONDITION field in triggers."; // Tooltip description
				defaultValue = """this && alive ((thisTrigger getVariable 'FU_TriggerParams') select 0)"""; // Default attribute value. WARNING: This is an expression, and its returned value will be used (50 in this case)
			};
		};
	};
};

//UI Stuff
class ctrlMenuStrip;
class IGUIBack;
class RscStructuredText;
class RscCombo;
class RscText;
class RscButton;
class RscEdit;
class RscPicture;

class display3DEN {
	class Controls {
		class MenuStrip : ctrlMenuStrip	{
			class Items	{
				items[] += { "FU_Tools" };

				class FU_Tools
				{
					text = "FU Tools";
					items[] = {"FU_Tool_Loadout_1", "FU_Tool_Loadout_2", "FU_Tool_Loadout_3", "FU_Tool_Loadout_4", "FU_Tool_Loadout_5", "Separator", "FU_Tool_Box_1", "FU_Tool_Box_2"};
				};

				class FU_Tool_Loadout_1 {
					text = "Fill Loadout - Anti Tank";
					picture = "\A3\ui_f\data\igui\cfg\simpleTasks\types\destroy_ca.paa";
					action = "['AT'] call FU_fnc_fillLoadout;";
					//opensNewWindow = 1;// Adds '...' to the name of the menu entry, indicating the user that a new window will be opened.
				};

				class FU_Tool_Loadout_2 {
					text = "Fill Loadout - Engineer";
					picture = "\A3\ui_f\data\igui\cfg\simpleTasks\types\repair_ca.paa";
					action = "['ENG'] call FU_fnc_fillLoadout;";
				};

				class FU_Tool_Loadout_3 {
					text = "Fill Loadout - Machine Gunner";
					picture = "\A3\ui_f\data\igui\cfg\simpleTasks\types\rearm_ca.paa";
					action = "['MG'] call FU_fnc_fillLoadout;";
				};

				class FU_Tool_Loadout_4 {
					text = "Fill Loadout - Medic";
					picture = "\A3\ui_f\data\igui\cfg\simpleTasks\types\heal_ca.paa";
					action = "['MED'] call FU_fnc_fillLoadout;";
				};

				class FU_Tool_Loadout_5 {
					text = "Fill Loadout - Rifleman";
					picture = "\A3\ui_f\data\igui\cfg\simpleTasks\types\rifle_ca.paa";
					action = "['RIF'] call FU_fnc_fillLoadout;";
				};

				class FU_Tool_Box_1 {
					text = "Fill Supply Box";
					picture = "\A3\ui_f\data\igui\cfg\simpleTasks\types\box_ca.paa";
					action = "['BOX'] call FU_fnc_fillSupplyBox;";
				};

				class FU_Tool_Box_2 {
					text = "Fill Vehicle Inventory";
					picture = "\A3\ui_f\data\igui\cfg\simpleTasks\types\car_ca.paa";
					action = "['CAR'] call FU_fnc_fillSupplyBox;";
				};
			};
		};
	};
};

#include "data\ui\FU_InitMission.hpp"
#include "data\ui\FU_CompositionSetup.hpp"
#include "data\ui\FU_BlizzardConfig.hpp"