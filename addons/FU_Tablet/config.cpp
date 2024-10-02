#include "BIS_AddonInfo.hpp"
#include "basicdefines_A3.hpp"

class CfgPatches {
	class FU_Tablet {
		name="FU Tablet";
		Author="Bizo";
		units[]= {
			
		};
		weapons[]= {};
		requiredAddons[]= {
			"FU_Events"
		};
	};
};

/*
class CfgFunctions {
	class FU {
		class Units {
			file = "FU_Modules\data\functions\Units";

			class assignCrewmanLogic{};
			class getFactionComposition{};
			class getVC{};
			class getSC{};
			class initComposition{};
			class spawnDefenders{};
			class spawnAttackers{};
			class spawnGarrison{};
			class spawnModule{};
			class spawnModuleGarrison{};
			class spawnStateMachine {postInit = 1;};
			class unitCommander {};
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
		};

		class Blizzard {
			file = "FU_Modules\data\functions\Blizzard";

			class initBlizzard{};
			class toggleBlizzard{};
			class blizzardUI{};
			class blizzardEffect{};
			class blizzardTearing{};
			class blizzardHazard{};
			class blizzardLogic{};
			class blizzardFrost{};
			class blizzardMask{};
		};
	};
};
*/

class CfgSounds {
	sounds[] = {};

	class FUT_Button {
		name = "FUT_Button";
		sound[] = {"FU_Tablet\data\Sfx\FUT_Button.ogg", 40, 1, 200};
		titles[] = {};
	};

	class FUT_Home {
		name = "FUT_Home";
		sound[] = {"FU_Tablet\data\Sfx\FUT_Home.ogg", 40, 1, 200};
		titles[] = {};
	};
};