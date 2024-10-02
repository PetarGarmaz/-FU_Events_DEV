#include "BIS_AddonInfo.hpp"
#include "basicdefines_A3.hpp"

class CfgPatches {
	class FU_SCP {
		name="FU SCP";
		Author="Bizo";
		units[]= {
			"FU_SCP_610_A", "FU_SCP_2191_1", "FU_SCP_093_UncleanOne", "FU_SCP_093_BlackMan", "FU_SCP_093_UncleanOne_Collider","FU_SCP_DClass", "FU_SCP_093_Disk","FU_SCP_InvisibleMan", "FU_SCP_3000", "FU_SCP_3000_Dive", "FU_SCP_3000_Body", "FU_SCP_3000_Col", "FU_Tentacle_Big", "FU_SCP_Skeleton", "FU_SCP_Skeleton_Clean", "FU_Skeleton_Boss", "FU_Rupture"
		};
		weapons[]= {"FU_SCP_2191_Uniform", "FU_SCP_093_Uniform", "FU_SCP_093_BlackMan_Uniform"};
		requiredAddons[]= {
			"A3_Weapons_F",
			"A3_Characters_F",
			"A3_Structures_F",
			"A3_Modules_F",
			"A3_Boat_F",
			"A3_Boat_F_Civilian_Boat",
			"WBK_ZombieCreatures"
		};
	};
};

class DefaultEventhandlers;
class UniformSlotInfo;
class CfgFactionClasses {
	class FU_SCP_IND {
		displayName="SCP";
		priority=6;
		side=2;
		icon="FU_Events\data\FU_Logo.paa";
		flag="FU_Events\data\FU_Logo.paa";
	};
};

class CfgSounds {
	sounds[] = {};
	
	class FU_SCP_610_A_Idle {
		name = "SCP-610-A Idle Sound";
		sound[] = {"FU_SCP\data\sfx\FU_SCP_610_A_Idle.ogg", db+5, 1, 100};
		titles[] = {};
	};
	
	class FU_SCP_610_A_Attack {
		name = "SCP-610-A Attack Sound";
		sound[] = {"FU_SCP\data\sfx\FU_SCP_610_A_Attack.ogg", db+5, 1, 100};
		titles[] = {};
	};
	
	class FU_SCP_2191_1_1 {
		name = "SCP-610-1 Sound 1";
		sound[] = {"FU_SCP\data\sfx\FU_SCP_2191_1_1.ogg", db+5, 1, 100};
		titles[] = {};
	};
	
	class FU_SCP_2191_1_2 {
		name = "SCP-610-1 Sound 2";
		sound[] = {"FU_SCP\data\sfx\FU_SCP_2191_1_2.ogg", db+5, 1, 100};
		titles[] = {};
	};
	
	class FU_SCP_2191_1_3 {
		name = "SCP-610-1 Sound 3";
		sound[] = {"FU_SCP\data\sfx\FU_SCP_2191_1_3.ogg", db+5, 1, 100};
		titles[] = {};
	};
	
	class FU_SCP_2191_1_4 {
		name = "SCP-610-1 Sound 4";
		sound[] = {"FU_SCP\data\sfx\FU_SCP_2191_1_4.ogg", db+5, 1, 100};
		titles[] = {};
	};
	
	class FU_SCP_2191_1_5 {
		name = "SCP-610-1 Sound 5";
		sound[] = {"FU_SCP\data\sfx\FU_SCP_2191_1_5.ogg", db+5, 1, 100};
		titles[] = {};
	};
	
	class FU_SCP_2191_1_Death_1 {
		name = "SCP-610-1 Death 1";
		sound[] = {"FU_SCP\data\sfx\FU_SCP_2191_1_Death_1.ogg", db+5, 1, 100};
		titles[] = {};
	};

	class FU_SCP_2191_1_Death_2 {
		name = "SCP-610-1 Death 2";
		sound[] = {"FU_SCP\data\sfx\FU_SCP_2191_1_Death_2.ogg", db+5, 1, 100};
		titles[] = {};
	};

	class FU_SCP_093_Idle {
		name = "SCP-093 Idle";
		sound[] = {"FU_SCP\data\sfx\FU_SCP_093_Idle.ogg", 800, 1, 100};
		titles[] = {};
	};

	class FU_SCP_093_Attack {
		name = "SCP-093 Attack";
		sound[] = {"FU_SCP\data\sfx\FU_SCP_093_Attack.ogg", 800, 1, 100};
		titles[] = {};
	};

	class FU_SCP_Ambience {
		name = "FU_SCP_Ambience";
		sound[] = {"FU_SCP\data\sfx\FU_SCP_Ambience.ogg", 800, 1, 100};
		titles[] = {};
	};

	class FU_SCP_Ambience_2 {
		name = "FU_SCP_Ambience_2";
		sound[] = {"FU_SCP\data\sfx\FU_SCP_Ambience_2.ogg", 800, 1, 100};
		titles[] = {};
	};

	class FU_SCP_Spawn {
		name = "FU_SCP_Spawn";
		sound[] = {"FU_SCP\data\sfx\FU_SCP_Spawn.ogg", 800, 1, 100};
		titles[] = {};
	};

	class FU_SCP_Throw {
		name = "FU_SCP_Throw";
		sound[] = {"FU_SCP\data\sfx\FU_SCP_Throw.ogg", 800, 1, 100};
		titles[] = {};
	};

	class FU_SCP_3000_Idle_1 {
		name = "FU_SCP_3000_Idle_1";
		sound[] = {"FU_SCP\data\sfx\FU_SCP_3000_Idle_1.ogg", 800, 1, 100};
		titles[] = {};
	};

	class FU_SCP_3000_Idle_2 {
		name = "FU_SCP_3000_Idle_2";
		sound[] = {"FU_SCP\data\sfx\FU_SCP_3000_Idle_2.ogg", 800, 1, 100};
		titles[] = {};
	};

	class FU_SCP_3000_Idle_3 {
		name = "FU_SCP_3000_Idle_3";
		sound[] = {"FU_SCP\data\sfx\FU_SCP_3000_Idle_3.ogg", 800, 1, 100};
		titles[] = {};
	};

	class FU_SCP_3000_Surface {
		name = "FU_SCP_3000_Surface";
		sound[] = {"FU_SCP\data\sfx\FU_SCP_3000_Surface.ogg", 800, 1, 100};
		titles[] = {};
	};

	class FU_SCP_3000_Roar {
		name = "FU_SCP_3000_Roar";
		sound[] = {"FU_SCP\data\sfx\FU_SCP_3000_Roar.ogg", 800, 1, 100};
		titles[] = {};
	};

	class FU_SCP_3000_Death {
		name = "FU_SCP_3000_Death";
		sound[] = {"FU_SCP\data\sfx\FU_SCP_3000_Death.ogg", 800, 1, 100};
		titles[] = {};
	};

	class FU_SCP_3000_Attack {
		name = "FU_SCP_3000_Attack";
		sound[] = {"FU_SCP\data\sfx\FU_SCP_3000_Attack.ogg", 800, 1, 100};
		titles[] = {};
	};
};


class CfgMusic {
	tracks[] = {};
	
	//Ones Atop the Unknown
	class FU_SCP_Track_1 {
		name = "FU_SCP_Track_1";
		sound[]	= {"FU_SCP\data\music\FU_SCP_Track_1.ogg", db + 30, 1.0};
	};

	//Woods - Evan Royalty
	class FU_SCP_Track_2 {
		name = "FU_SCP_Track_2";
		sound[]	= {"FU_SCP\data\music\FU_SCP_Track_2.ogg", db + 30, 1.0};
	};

	//Innocence died screaming - Nick Fox
	class FU_SCP_Track_3 {
		name = "FU_SCP_Track_3";
		sound[]	= {"FU_SCP\data\music\FU_SCP_Track_3.ogg", db + 30, 1.0};
	};

	//Gorka - Bohemia Interactive
	class FU_SCP_Track_4 {
		name = "FU_SCP_Track_4";
		sound[]	= {"FU_SCP\data\music\FU_SCP_Track_4.ogg", db + 30, 1.0};
	};

	//Scepter - Evan Royalty
	class FU_SCP_Track_5 {
		name = "FU_SCP_Track_5";
		sound[]	= {"FU_SCP\data\music\FU_SCP_Track_5.ogg", db + 30, 1.0};
	};
};

class CfgVehicles {
	class B_Soldier_base_F;
	class O_soldier_Melee;
	class O_Soldier_base_F;
	class I_Soldier_base_F;
	class Animal_Base_F;
	class Static;
	class Zombie_O_Walker_CSAT;

	#include "data\UnitConfig.hpp"
};

class CfgWeapons {
	class UniformItem;
	class ItemCore;
	class Uniform_Base: ItemCore {
		class ItemInfo;
	};

	#include "data\UniformConfig.hpp"
};

#include "data\AnimConfig.hpp"