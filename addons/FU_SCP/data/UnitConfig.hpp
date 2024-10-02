/*class FU_SCP_2191_1: O_Soldier_base_F {
	author = "Bizo";			// The name of the author of the asset, which is displayed in the editor.

	side = 2;
	faction = "FU_SCP_IND";

	editorPreview = "FU_SCP\data\renders\FU_SCP_2191_1_Render.jpg";

	scope = 2;							// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
	scopeCurator = 2;					// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
	scopeArsenal = 2;					// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
	identityTypes[] = {"Head_NATO"};		// Identity Types are explained in the Headgear section of this guide.
	displayName = "SCP-2191-1";		// The name of the soldier, which is displayed in the editor.

	model = "FU_SCP\data\models\FU_SCP_2191_1.p3d";			// The path to the model this character uses.
	uniformClass = "FU_SCP_2191_1_Uniform";							// This links this soldier to a particular uniform. For the details, see below.
	hiddenSelections[] = {""};								// List of model selections which can be changed with hiddenSelectionTextures[]// and hiddenSelectionMaterials[] properties. If empty, model textures are used.
	hiddenSelectionsTextures[] = {""};	// The textures for the selections defined above.
	canDeactivateMines = false;				// Can this character deactivate mines?
	engineer = false;						// Can this character repair vehicles?
	attendant = false;							// Can this character heal soldiers?

	role = "Rifleman";
	icon = "iconMan";				// If a character has a special role, a special icon shall be used.
	picture = "";				// The same as above, but for the squad picture.

	weapons[] = {"Throw", "Put"};				// Which weapons the character has.
	respawnWeapons[] = {"Throw", "Put"};		// Which weapons the character respawns with.
	Items[] = {};				// Which items the character has.
	RespawnItems[] = {};		// Which items the character respawns with.
	magazines[] = {};				// What ammunition the character has.
	respawnMagazines[] = {};		// What ammunition the character respawns with.
	linkedItems[] = {};				// Which items the character has.
	respawnLinkedItems[] = {};	// Which items the character respawns with.
};*/

class FU_SCP_610_A: I_Soldier_base_F {
	author = "Bizo";

	side = 2;
	faction = "FU_SCP_IND";

	scope = 2;							// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
	scopeCurator = 2;					// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
	scopeArsenal = 2;					// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
	identityTypes[] = {"Head_NATO"};		// Identity Types are explained in the Headgear section of this guide.
	displayName = "SCP-610-A";
	moves = "FU_CfgMoves_SCP_610";
	

	model = "FU_SCP\data\models\FU_SCP_610_A.p3d";
	editorPreview = "FU_SCP\data\renders\FU_SCP_610_A_Render.jpg";
	uniformClass = "FU_SCP_610_A_Uniform";							// This links this soldier to a particular uniform. For the details, see below.
	
	canDeactivateMines = false;				// Can this character deactivate mines?
	engineer = false;						// Can this character repair vehicles?
	attendant = false;							// Can this character heal soldiers?

	role = "Rifleman";
	icon = "iconMan";				// If a character has a special role, a special icon shall be used.

	weapons[] = {"Throw", "Put"};				// Which weapons the character has.
	respawnWeapons[] = {"Throw", "Put"};		// Which weapons the character respawns with.
	Items[] = {};				// Which items the character has.
	RespawnItems[] = {};		// Which items the character respawns with.
	magazines[] = {};				// What ammunition the character has.
	respawnMagazines[] = {};		// What ammunition the character respawns with.
	linkedItems[] = {};				// Which items the character has.
	respawnLinkedItems[] = {};	// Which items the character respawns with.

	class EventHandlers {
		Init="[_this select 0, 3] execVM 'FU_SCP\data\scripts\initSCP.sqf'";
	};
};

class FU_SCP_093_BlackMan: I_Soldier_base_F {
	author = "Bizo";			// The name of the author of the asset, which is displayed in the editor.

	side = 2;
	faction = "FU_SCP_IND";

	scope = 2;							// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
	scopeCurator = 2;					// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
	scopeArsenal = 2;					// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
	identityTypes[] = {"Head_NATO"};		// Identity Types are explained in the Headgear section of this guide.
	displayName = "SCP-093 Black Entity";		// The name of the soldier, which is displayed in the editor.

	model = "FU_SCP\data\models\FU_SCP_093_BlackMan.p3d";			// The path to the model this character uses.
	editorPreview = "FU_SCP\data\renders\FU_SCP_093_BlackMan_Render.jpg"
	uniformClass = "FU_SCP_093_BlackMan_Uniform";							// This links this soldier to a particular uniform. For the details, see below.
	hiddenSelections[] = {""};								// List of model selections which can be changed with hiddenSelectionTextures[]// and hiddenSelectionMaterials[] properties. If empty, model textures are used.
	hiddenSelectionsTextures[] = {""};	// The textures for the selections defined above.
	canDeactivateMines = false;				// Can this character deactivate mines?
	engineer = false;						// Can this character repair vehicles?
	attendant = false;							// Can this character heal soldiers?

	class EventHandlers {
		Init="[_this select 0, 1] execVM 'FU_SCP\data\scripts\initSCP.sqf'";
	};

	role = "Rifleman";
	icon = "iconMan";				// If a character has a special role, a special icon shall be used.

	weapons[] = {"Throw", "Put"};				// Which weapons the character has.
	respawnWeapons[] = {"Throw", "Put"};		// Which weapons the character respawns with.
	Items[] = {};				// Which items the character has.
	RespawnItems[] = {};		// Which items the character respawns with.
	magazines[] = {};				// What ammunition the character has.
	respawnMagazines[] = {};		// What ammunition the character respawns with.
	linkedItems[] = {};				// Which items the character has.
	respawnLinkedItems[] = {};	// Which items the character respawns with.
};

class FU_SCP_InvisibleMan: I_Soldier_base_F {
	author = "Bizo";			// The name of the author of the asset, which is displayed in the editor.

	side = 2;
	faction = "FU_SCP_IND";

	scope = 2;							// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
	scopeCurator = 2;					// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
	scopeArsenal = 2;					// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
	identityTypes[] = {"Head_NATO"};		// Identity Types are explained in the Headgear section of this guide.
	displayName = "Anomaly - Invisible Entity";		// The name of the soldier, which is displayed in the editor.

	model = "FU_SCP\data\models\FU_SCP_InvisibleMan.p3d";			// The path to the model this character uses.
	editorPreview = "";
	uniformClass = "FU_SCP_InvisibleMan_Uniform";							// This links this soldier to a particular uniform. For the details, see below.
	hiddenSelections[] = {""};								// List of model selections which can be changed with hiddenSelectionTextures[]// and hiddenSelectionMaterials[] properties. If empty, model textures are used.
	hiddenSelectionsTextures[] = {""};	// The textures for the selections defined above.
	canDeactivateMines = false;				// Can this character deactivate mines?
	engineer = false;						// Can this character repair vehicles?
	attendant = false;							// Can this character heal soldiers?

	class EventHandlers {
		Init="[_this select 0, 2] execVM 'FU_SCP\data\scripts\initSCP.sqf'";
	};

	role = "Rifleman";
	icon = "iconMan";				// If a character has a special role, a special icon shall be used.

	weapons[] = {"Throw", "Put"};				// Which weapons the character has.
	respawnWeapons[] = {"Throw", "Put"};		// Which weapons the character respawns with.
	Items[] = {};				// Which items the character has.
	RespawnItems[] = {};		// Which items the character respawns with.
	magazines[] = {};				// What ammunition the character has.
	respawnMagazines[] = {};		// What ammunition the character respawns with.
	linkedItems[] = {};				// Which items the character has.
	respawnLinkedItems[] = {};	// Which items the character respawns with.
};

class FU_SCP_093_UncleanOne: I_Soldier_base_F {
	author = "Bizo";

	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;

	displayName = "SCP-093 The Unclean One";
	side = 2;
	faction = "FU_SCP_IND";

	model = "FU_SCP\data\models\FU_SCP_093.p3d";
	editorPreview = "FU_SCP\data\renders\FU_SCP_093_Render.jpg";
	uniformClass = "FU_SCP_093_Uniform";
	nakedUniform = "FU_SCP_093_Uniform";
	moves="FU_CfgMoves_SCP_093";
	identityTypes[]= {"Head_NATO"};

	camouflage=10;
	sensitivityEar=0.5;
	accuracy = 1000;

	weapons[] = {"Throw", "Put"};
	respawnWeapons[] = {"Throw", "Put"};
	Items[] = {};
	RespawnItems[] = {};
	magazines[] = {};
	respawnMagazines[] = {};
	linkedItems[] = {};
	respawnLinkedItems[] = {};

	minSpeed = -0.5;
	maxSpeed = 40;
	minGunElev=0;
	maxGunElev=0;
	minGunTurn=0;
	maxGunTurn=0;
	minGunTurnAI=0;
	maxGunTurnAI=0;
	extCameraPosition[]={0,0.60000002,-15};

	minHeadTurnAI=0;
	maxHeadTurnAI=0;

	class EventHandlers {
		Init="[_this select 0, 0] execVM 'FU_SCP\data\scripts\initSCP.sqf'";
	};

	armor = 40;
	armorStructural = 10;
	explosionShielding = 10.25;

	class Wounds {
		tex[]={};
		mat[]={};
	};

	class SoundEnvironExt {
		generic[] = {{"healself",{"\A3\Sounds_F\characters\ingame\AinvPknlMstpSlayWrflDnon_medic",0.891251,1,20}},{"healselfprone",{"\A3\Sounds_F\characters\ingame\AinvPpneMstpSlayWrflDnon_medic",0.891251,1,20}},{"healselfpistolkneelin",{"\A3\Sounds_F\characters\ingame\AinvPknlMstpSlayWpstDnon_medicIn",0.891251,1,20}},{"healselfpistolkneel",{"\A3\Sounds_F\characters\ingame\AinvPknlMstpSlayWpstDnon_medic",0.891251,1,20}},{"healselfpistolkneelout",{"\A3\Sounds_F\characters\ingame\AinvPknlMstpSlayWpstDnon_medicOut",0.891251,1,20}},{"healselfpistolpromein",{"\A3\Sounds_F\characters\ingame\AinvPpneMstpSlayWpstDnon_medicin",0.891251,1,20}},{"healselfpistolprone",{"\A3\Sounds_F\characters\ingame\AinvPpneMstpSlayWpstDnon_medic",0.891251,1,20}},{"healselfpistolpromeout",{"\A3\Sounds_F\characters\ingame\AinvPpneMstpSlayWpstDnon_medicOut",0.891251,1,20}},{"roll",{"A3\Sounds_F\characters\movements\roll\concrete_roll_1",0.891251,1,20}},{"roll",{"A3\Sounds_F\characters\movements\roll\concrete_roll_2",0.891251,1,20}},{"roll",{"A3\Sounds_F\characters\movements\roll\concrete_roll_3",0.891251,1,20}},{"roll_unarmed",{"A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_1",0.891251,1,20}},{"roll_unarmed",{"A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_2",0.891251,1,20}},{"roll_unarmed",{"A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_3",0.891251,1,20}},{"adjust_short",{"\A3\sounds_f\characters\stances\adjust_short1",0.158489,1,20}},{"adjust_short",{"\A3\sounds_f\characters\stances\adjust_short2",0.158489,1,20}},{"adjust_short",{"\A3\sounds_f\characters\stances\adjust_short3",0.158489,1,20}},{"adjust_short",{"\A3\sounds_f\characters\stances\adjust_short4",0.158489,1,20}},{"adjust_short",{"\A3\sounds_f\characters\stances\adjust_short5",0.158489,1,20}},{"adjust_stand_to_left_prone",{"\A3\sounds_f\characters\stances\adjust_short1",0.158489,1,20}},{"adjust_stand_to_right_prone",{"\A3\sounds_f\characters\stances\adjust_short1",0.158489,1,20}},{"adjust_kneelhigh_to_standlow",{"\A3\sounds_f\characters\stances\adjust_short3",0.158489,1,20}},{"adjust_standlow_to_kneelhigh",{"\A3\sounds_f\characters\stances\adjust_short1",0.158489,1,20}},{"over_the_obstacle_slow",{"\A3\sounds_f\characters\movements\over_the_obstacle_slow",0.316228,1,20}},{"over_the_obstacle_fast",{"\A3\sounds_f\characters\movements\over_the_obstacle_fast",0.316228,1,20}},{"overstep",{"A3\sounds_f\characters\movements\overstep_1",0.251189,1,32}},{"overstep",{"A3\sounds_f\characters\movements\overstep_2",0.251189,1,32}},{"grenade_throw",{"\A3\sounds_f\characters\stances\grenade_throw1",0.354813,1,20}},{"grenade_throw",{"\A3\sounds_f\characters\stances\grenade_throw2",0.354813,1,20}},{"inventory_in",{"\A3\sounds_f\characters\stances\adjust_short1",0.251189,1,20}},{"inventory_out",{"\A3\sounds_f\characters\stances\adjust_short2",0.251189,1,20}},{"handgun_to_rifle",{"\A3\Sounds_F\characters\stances\handgun_to_rifle",1,1,20}},{"handgun_to_launcher",{"\A3\sounds_f\characters\stances\handgun_to_launcher",1,1,20}},{"launcher_to_rifle",{"\A3\sounds_f\characters\stances\launcher_to_rifle",1,1,20}},{"launcher_to_handgun",{"\A3\sounds_f\characters\stances\launcher_to_handgun",1,1,20}},{"rifle_to_handgun",{"\A3\Sounds_F\characters\stances\rifle_to_handgun",1,1,20}},{"rifle_to_handgun_prn",{"\A3\Sounds_F\characters\stances\rifle_to_handgun_prn",1,1,20}},{"rifle_to_launcher",{"\A3\sounds_f\characters\stances\rifle_to_launcher",1,1,20}},{"rifle_to_binoc",{"\A3\sounds_f\characters\stances\rifle_to_binoculars",1,1,20}},{"handgun_to_binoc",{"\A3\sounds_f\characters\stances\handgun_to_binoculars",1,1,20}},{"launcher_to_binoc",{"\A3\sounds_f\characters\stances\launcher_to_binoculars",1,1,20}},{"launcher_to_binoc_knl",{"\A3\sounds_f\characters\stances\launcher_to_binoculars_knl",1,1,20}},{"unarmed_to_binoc",{"\A3\sounds_f\characters\stances\unarmed_to_binoculars",1,1,20}},{"binoc_to_rifle",{"\A3\sounds_f\characters\stances\binoculars_to_rifle",1,1,20}},{"binoc_to_rifle_2",{"\A3\sounds_f\characters\stances\binoculars_to_rifle_2",1,1,20}},{"binoc_to_handgun",{"\A3\sounds_f\characters\stances\binoculars_to_handgun",1,1,20}},{"binoc_to_launcher",{"\A3\sounds_f\characters\stances\binoculars_to_launcher",1,1,20}},{"binoc_to_unarmed",{"\A3\sounds_f\characters\stances\binoculars_to_unarmed",1,1,20}},{"low_rifle",{"A3\sounds_f\characters\stances\low_rifle",0.501187,1,20}},{"lift_rifle",{"A3\sounds_f\characters\stances\lift_rifle",0.501187,1,20}},{"low_handgun",{"A3\sounds_f\characters\stances\low_handgun",0.501187,1,20}},{"lift_handgun",{"A3\sounds_f\characters\stances\lift_handgun",0.501187,1,20}},{"ladder",{"\A3\Sounds_F\characters\movements\ladder\ladder_01",0.501187,1,20}},{"ladder",{"\A3\Sounds_F\characters\movements\ladder\ladder_02",0.501187,1,20}},{"ladder",{"\A3\Sounds_F\characters\movements\ladder\ladder_03",0.501187,1,20}},{"ladder",{"\A3\Sounds_F\characters\movements\ladder\ladder_04",0.501187,1,20}},{"ladder",{"\A3\Sounds_F\characters\movements\ladder\ladder_05",0.501187,1,20}},{"ladder",{"\A3\Sounds_F\characters\movements\ladder\ladder_06",0.501187,1,20}},{"swim",{"soundset","movement_swim_SoundSet"}},{"heli_get_in_init",{"soundset","heli_get_in_init_SoundSet"}},{"Acts_CrouchGetLowGesture",{"\A3\Sounds_F\characters\cutscenes\Acts_CrouchGetLowGesture",0.891251,1,20}},{"Acts_listeningToRadio_in",{"A3\Sounds_F\characters\cutscenes\Acts_listeningToRadio_in",0.891251,1,20}},{"Acts_listeningToRadio_Loop",{"\A3\Sounds_F\dummysound",0.891251,1,20}},{"Acts_listeningToRadio_Out",{"\A3\Sounds_F\characters\cutscenes\Acts_listeningToRadio_Out",0.891251,1,20}},{"Acts_LyingWounded_loop1",{"\A3\Sounds_F\characters\cutscenes\Acts_LyingWounded_loop1",0.891251,1,20}},{"Acts_LyingWounded_loop2",{"\A3\Sounds_F\characters\cutscenes\Acts_LyingWounded_loop2",0.891251,1,20}},{"Acts_LyingWounded_loop3",{"\A3\Sounds_F\characters\cutscenes\Acts_LyingWounded_loop3",0.891251,1,20}},{"Acts_NavigatingChopper_In",{"\A3\Sounds_F\characters\cutscenes\Acts_NavigatingChopper_In",0.562341,1,20}},{"Acts_NavigatingChopper_Loop",{"\A3\Sounds_F\characters\cutscenes\Acts_NavigatingChopper_Loop",0.562341,1,20}},{"Acts_NavigatingChopper_Out",{"\A3\Sounds_F\characters\cutscenes\Acts_NavigatingChopper_Out",0.562341,1,20}},{"Acts_PercMstpSlowWrflDnon_handup1",{"\A3\Sounds_F\characters\cutscenes\Acts_PercMstpSlowWrflDnon_handup1",0.562341,1,20}},{"Acts_PercMstpSlowWrflDnon_handup1b",{"\A3\Sounds_F\characters\cutscenes\Acts_PercMstpSlowWrflDnon_handup1b",0.562341,1,20}},{"Acts_PercMstpSlowWrflDnon_handup1c",{"\A3\Sounds_F\characters\cutscenes\Acts_PercMstpSlowWrflDnon_handup1c",0.562341,1,20}},{"Acts_PercMstpSlowWrflDnon_handup2",{"\A3\Sounds_F\characters\cutscenes\Acts_PercMstpSlowWrflDnon_handup2",0.562341,1,20}},{"Acts_PercMstpSlowWrflDnon_handup2b",{"\A3\Sounds_F\characters\cutscenes\Acts_PercMstpSlowWrflDnon_handup2b",0.891251,1,20}},{"Acts_PercMstpSlowWrflDnon_handup2c",{"\A3\Sounds_F\characters\cutscenes\Acts_PercMstpSlowWrflDnon_handup2c",0.562341,1,20}},{"Acts_SignalToCheck",{"\A3\Sounds_F\characters\cutscenes\Acts_SignalToCheck",0.562341,1,20}},{"Acts_ShowingTheRightWay_in",{"\A3\Sounds_F\characters\cutscenes\Acts_ShowingTheRightWay_in",0.562341,1,20}},{"Acts_ShowingTheRightWay_loop",{"\A3\Sounds_F\characters\cutscenes\Acts_ShowingTheRightWay_Loop",0.562341,1,20}},{"Acts_ShowingTheRightWay_out",{"\A3\Sounds_F\characters\cutscenes\Acts_ShowingTheRightWay_Out",0.562341,1,20}},{"Acts_ShieldFromSun_loop",{"\A3\Sounds_F\dummysound",0.562341,1,20}},{"Acts_ShieldFromSun_out",{"\A3\Sounds_F\characters\cutscenes\Acts_ShieldFromSun_Out",0.562341,1,20}},{"Acts_TreatingWounded01",{"\A3\Sounds_F\characters\cutscenes\Acts_TreatingWounded01",0.562341,1,20}},{"Acts_TreatingWounded02",{"\A3\Sounds_F\characters\cutscenes\Acts_TreatingWounded02",0.562341,1,20}},{"Acts_TreatingWounded03",{"\A3\Sounds_F\characters\cutscenes\Acts_TreatingWounded03",0.562341,1,20}},{"Acts_TreatingWounded04",{"\A3\Sounds_F\characters\cutscenes\Acts_TreatingWounded04",0.562341,1,20}},{"Acts_TreatingWounded05",{"\A3\Sounds_F\characters\cutscenes\Acts_TreatingWounded05",0.562341,1,20}},{"Acts_TreatingWounded06",{"\A3\Sounds_F\characters\cutscenes\Acts_TreatingWounded06",0.562341,1,20}},{"Acts_AidlPercMstpSlowWrflDnon_pissing",{"\A3\Sounds_F\characters\cutscenes\Acts_AidlPercMstpSlowWrflDnon_pissing",0.891251,1,20}},{"Acts_BoatAttacked01",{"\A3\Sounds_F\characters\cutscenes\Acts_BoatAttacked01",0.891251,1,20}},{"Acts_BoatAttacked02",{"\A3\Sounds_F\characters\cutscenes\Acts_BoatAttacked02",0.891251,1,20}},{"Acts_BoatAttacked03",{"\A3\Sounds_F\characters\cutscenes\Acts_BoatAttacked03",0.891251,1,20}},{"Acts_BoatAttacked04",{"\A3\Sounds_F\characters\cutscenes\Acts_BoatAttacked04",0.891251,1,20}},{"Acts_BoatAttacked05",{"\A3\Sounds_F\characters\cutscenes\Acts_BoatAttacked05",0.891251,1,20}},{"acts_CrouchingCoveringRifle01",{"\A3\Sounds_F\characters\cutscenes\Acts_CrouchingCoveringRifle01",0.562341,1,20}},{"acts_CrouchingIdleRifle01",{"\A3\Sounds_F\characters\cutscenes\Acts_CrouchingIdleRifle01",0.562341,1,20}},{"acts_CrouchingReloadingRifle01",{"\A3\Sounds_F\characters\cutscenes\Acts_CrouchingReloadingRifle01",0.562341,1,20}},{"acts_CrouchingWatchingRifle01",{"\A3\Sounds_F\characters\cutscenes\Acts_CrouchingWatchingRifle01",0.562341,1,20}},{"acts_InjuredAngryRifle01",{"\A3\Sounds_F\characters\cutscenes\Acts_InjuredAngryRifle01",0.562341,1,20}},{"acts_InjuredCoughRifle02",{"\A3\Sounds_F\characters\cutscenes\Acts_InjuredCoughRifle02",0.562341,1,20}},{"acts_InjuredLookingRifle01",{"\A3\Sounds_F\characters\cutscenes\Acts_InjuredLookingRifle01",0.562341,1,20}},{"acts_InjuredLookingRifle02",{"\A3\Sounds_F\characters\cutscenes\Acts_InjuredLookingRifle02",0.562341,1,20}},{"acts_InjuredLookingRifle03",{"\A3\Sounds_F\characters\cutscenes\Acts_InjuredLookingRifle03",0.562341,1,20}},{"acts_InjuredLookingRifle04",{"\A3\Sounds_F\characters\cutscenes\Acts_InjuredLookingRifle04",0.562341,1,20}},{"acts_InjuredLookingRifle05",{"\A3\Sounds_F\characters\cutscenes\Acts_InjuredLookingRifle05",0.562341,1,20}},{"acts_InjuredLyingRifle01",{"\A3\Sounds_F\characters\cutscenes\Acts_InjuredLyingRifle01",0.562341,1,20}},{"acts_InjuredSpeakingRifle01",{"\A3\Sounds_F\characters\cutscenes\Acts_InjuredSpeakingRIfle01",0.562341,1,20}},{"Acts_PknlMstpSlowWrflDnon",{"\A3\Sounds_F\characters\cutscenes\Acts_PknlMstpSlowWrflDnon",0.562341,1,20}},{"Acts_SittingJumpingSaluting_loop1",{"\A3\Sounds_F\characters\cutscenes\Acts_SittingJumpingSaluting_loop1",0.562341,1,20}},{"Acts_SittingJumpingSaluting_loop2",{"\A3\Sounds_F\characters\cutscenes\Acts_SittingJumpingSaluting_loop2",0.562341,1,20}},{"Acts_SittingJumpingSaluting_loop3",{"\A3\Sounds_F\characters\cutscenes\Acts_SittingJumpingSaluting_loop3",0.562341,1,20}},{"AmovPercMstpSnonWnonDnon_exercisekneeBendA",{"\A3\Sounds_F\characters\cutscenes\AmovPercMstpSnonWnonDnon_exercisekneeBendA",0.562341,1,20}}};

		normal[] = {
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}}
			};
		rock[] = {
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}}
			};
		stony[] = {
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}}
			};
		gravel[] = {
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}}
			};
		tiling[] = {
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}}
			};
		sand[] = {
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}}
			};
		drygrass[] = {
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}}
			};
		grass[] = {
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}}
			};
		debris[] = {
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}}
			};
		wood[] = {
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}}
			};
		concrete[] = {
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}}
			};
		metal[] = {
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}}
			};
		dirt[] = {
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}}
			};
		wavymetal[] = {
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}}
			};
		water[] = {
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}}
			};
		virtual[] = {
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}}
			};
		int_concrete[] = {
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}}
			};
		int_wood[] = {
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}}
			};
		int_metal[] = {
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}}
			};
		int_tiles[] = {
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}}
			};
		tarmac[] = {
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}}
			};
		concrete_exp[] = {
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}}
			};
		int_concrete_exp[] = {
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}}
			};
		pavement_exp[] = {
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}}
			};
		int_pavement_exp[] = {
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}}
			};
		stones_exp[] = {
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}}
			};
		int_solidwood_exp[] = {
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}}
			};
		softwood_exp[] = {
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}}
			};
		int_softwood_exp[] = {
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}}
			};
		steel_exp[] = {
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}}
			};
		metalplate_exp[] = {
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}}
			};
		int_metalplate_exp[] = {
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}}
			};
		metalplatepressed_exp[] = {
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}}
			};
		wavymetal_exp[] = {
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}}
			};
		gridmetal_exp[] = {
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}}
			};
		int_carpet_exp[] = {
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}}
			};
		int_mat_exp[] = {
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}}
			};
		mud_exp[] = {
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}}
			};
		mud[] = {
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}}
			};
		straw_exp[] = {
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}}
			};
		lino_exp[] = {
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}}
			};
		int_lino_exp[] = {
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}}
			};
		rooftiles_exp[] = {
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}}
			};
		gravel_exp[] = {
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}}
			};
		dirt_exp[] = {
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}}
			};
		asphalt_exp[] = {
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}}
			};
		water_exp[] = {
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}}
			};
		grass_exp[] = {
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}}
			};
		grasstall_exp[] = {
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}}
			};
		sand_exp[] = {
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}}
			};
		seabed_exp[] = {
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}}
			};
		forest_exp[] = {
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}}
			};
		forest[] = {
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}}
			};
	};
};

class FU_SCP_DClass: I_Soldier_base_F {
	author = "Bizo";			// The name of the author of the asset, which is displayed in the editor.

	side = 2;
	faction = "FU_SCP_IND";

	//editorPreview = "";

	scope = 2;							// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
	scopeCurator = 2;					// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
	scopeArsenal = 2;					// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
	identityTypes[] = {"Head_NATO"};		// Identity Types are explained in the Headgear section of this guide.
	displayName = "D-Class Prisoner";		// The name of the soldier, which is displayed in the editor.
	
	model = "\A3\characters_F\civil\c_poor";
	picture = "\A3\characters_f\data\ui\icon_U_C_Poor_1_ca.paa";
	uniformClass = "FU_SCP_DClass_Uniform";							// This links this soldier to a particular uniform. For the details, see below.
	
	canDeactivateMines = false;				// Can this character deactivate mines?
	engineer = false;						// Can this character repair vehicles?
	attendant = false;							// Can this character heal soldiers?

	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\FU_SCP\data\textures\FU_SCP_DClass_Uniform.paa"};

	role = "Rifleman";
	icon = "iconMan";				// If a character has a special role, a special icon shall be used.

	weapons[] = {"Throw", "Put"};				// Which weapons the character has.
	respawnWeapons[] = {"Throw", "Put"};		// Which weapons the character respawns with.
	Items[] = {};				// Which items the character has.
	RespawnItems[] = {};		// Which items the character respawns with.
	magazines[] = {};				// What ammunition the character has.
	respawnMagazines[] = {};		// What ammunition the character respawns with.
	linkedItems[] = {};				// Which items the character has.
	respawnLinkedItems[] = {};	// Which items the character respawns with.
};

class FU_SCP_093_UncleanOne_Collider: Static {
	scope = 1;							// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).

	displayname = "SCP-093 The Unclean One - Collider";
	model = "\FU_SCP\data\models\FU_SCP_093_Collider.p3d";
	editorPreview = "";
	editorCategory = "FU_Objects";

	hiddenSelections[] = {""};
	hiddenSelectionsTextures[] = {""};
};

class FU_SCP_093_Disk: Static {
	scope = 2;							// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).

	displayname = "SCP-093 Disk";
	editorCategory = "FU_Objects";
	model = "\FU_SCP\data\models\FU_SCP_093_Disk.p3d";
	editorPreview = "";

	hiddenSelections[] = {""};
	hiddenSelectionsTextures[] = {""};
};

class FU_SCP_Skeleton: Zombie_O_Walker_CSAT {
	author = "Bizo";			// The name of the author of the asset, which is displayed in the editor.

	side = 2;
	faction = "FU_SCP_IND";

	//editorPreview = "";

	scope = 2;							// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
	scopeCurator = 2;					// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
	scopeArsenal = 2;					// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
	identityTypes[] = {"Head_NATO"};		// Identity Types are explained in the Headgear section of this guide.
	displayName = "SCP Skeleton";		// The name of the soldier, which is displayed in the editor.
	
	model = "\FU_SCP\data\models\FU_Skeleton.p3d";
	uniformClass = "FU_SCP_Skeleton_Uniform";							// This links this soldier to a particular uniform. For the details, see below.
	
	canDeactivateMines = false;				// Can this character deactivate mines?
	engineer = false;						// Can this character repair vehicles?
	attendant = false;							// Can this character heal soldiers?

	hiddenSelections[] = {"camo1"};
	hiddenSelectionsTextures[] = {"\FU_SCP\data\textures\FU_Skeleton_CO.paa"};

	role = "Rifleman";
	icon = "iconMan";				// If a character has a special role, a special icon shall be used.

	weapons[] = {"Throw", "Put"};				// Which weapons the character has.
	respawnWeapons[] = {"Throw", "Put"};		// Which weapons the character respawns with.
	Items[] = {};				// Which items the character has.
	RespawnItems[] = {};		// Which items the character respawns with.
	magazines[] = {};				// What ammunition the character has.
	respawnMagazines[] = {};		// What ammunition the character respawns with.
	linkedItems[] = {};				// Which items the character has.
	respawnLinkedItems[] = {};	// Which items the character respawns with.
};

class FU_SCP_Skeleton_Clean: Zombie_O_Walker_CSAT {
	author = "Bizo";			// The name of the author of the asset, which is displayed in the editor.

	side = 2;
	faction = "FU_SCP_IND";

	//editorPreview = "";

	scope = 2;							// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
	scopeCurator = 2;					// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
	scopeArsenal = 2;					// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
	identityTypes[] = {"Head_NATO"};		// Identity Types are explained in the Headgear section of this guide.
	displayName = "SCP Skeleton (Clean)";		// The name of the soldier, which is displayed in the editor.
	
	model = "\FU_SCP\data\models\FU_Skeleton.p3d";
	uniformClass = "FU_SCP_Skeleton_Uniform";							// This links this soldier to a particular uniform. For the details, see below.
	
	canDeactivateMines = false;				// Can this character deactivate mines?
	engineer = false;						// Can this character repair vehicles?
	attendant = false;							// Can this character heal soldiers?

	hiddenSelections[] = {"camo1"};
	hiddenSelectionsTextures[] = {"\FU_SCP\data\textures\FU_SCP_Skeleton_Base_Uniform.paa"};

	role = "Rifleman";
	icon = "iconMan";				// If a character has a special role, a special icon shall be used.

	weapons[] = {"Throw", "Put"};				// Which weapons the character has.
	respawnWeapons[] = {"Throw", "Put"};		// Which weapons the character respawns with.
	Items[] = {};				// Which items the character has.
	RespawnItems[] = {};		// Which items the character respawns with.
	magazines[] = {};				// What ammunition the character has.
	respawnMagazines[] = {};		// What ammunition the character respawns with.
	linkedItems[] = {};				// Which items the character has.
	respawnLinkedItems[] = {};	// Which items the character respawns with.
};

class FU_Skeleton_Boss: I_Soldier_base_F {
	author = "Bizo";

	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;

	displayName = "Skeleton Boss";
	side = 2;
	faction = "FU_SCP_IND";

	model = "FU_SCP\data\models\FU_Skeleton_Boss.p3d";
	editorPreview = "";
	uniformClass = "FU_Skeleton_Boss_Uniform";
	nakedUniform = "FU_Skeleton_Boss_Uniform";
	moves="FU_CfgMoves_SCP_Skeleton_Boss";
	identityTypes[]= {"Head_NATO"};

	camouflage=10;
	sensitivityEar=0.5;
	accuracy = 1000;

	weapons[] = {"Throw", "Put"};
	respawnWeapons[] = {"Throw", "Put"};
	Items[] = {};
	RespawnItems[] = {};
	magazines[] = {};
	respawnMagazines[] = {};
	linkedItems[] = {};
	respawnLinkedItems[] = {};

	minSpeed = -0.5;
	maxSpeed = 40;
	minGunElev=0;
	maxGunElev=0;
	minGunTurn=0;
	maxGunTurn=0;
	minGunTurnAI=0;
	maxGunTurnAI=0;
	extCameraPosition[]={0,0.60000002,-15};

	minHeadTurnAI=0;
	maxHeadTurnAI=0;

	class EventHandlers {
		Init="[_this select 0, 4] execVM 'FU_SCP\data\scripts\initSCP.sqf'";
	};

	armor = 40;
	armorStructural = 10;
	explosionShielding = 10.25;

	class Wounds {
		tex[]={};
		mat[]={};
	};

	class SoundEnvironExt {
		generic[] = {{"healself",{"\A3\Sounds_F\characters\ingame\AinvPknlMstpSlayWrflDnon_medic",0.891251,1,20}},{"healselfprone",{"\A3\Sounds_F\characters\ingame\AinvPpneMstpSlayWrflDnon_medic",0.891251,1,20}},{"healselfpistolkneelin",{"\A3\Sounds_F\characters\ingame\AinvPknlMstpSlayWpstDnon_medicIn",0.891251,1,20}},{"healselfpistolkneel",{"\A3\Sounds_F\characters\ingame\AinvPknlMstpSlayWpstDnon_medic",0.891251,1,20}},{"healselfpistolkneelout",{"\A3\Sounds_F\characters\ingame\AinvPknlMstpSlayWpstDnon_medicOut",0.891251,1,20}},{"healselfpistolpromein",{"\A3\Sounds_F\characters\ingame\AinvPpneMstpSlayWpstDnon_medicin",0.891251,1,20}},{"healselfpistolprone",{"\A3\Sounds_F\characters\ingame\AinvPpneMstpSlayWpstDnon_medic",0.891251,1,20}},{"healselfpistolpromeout",{"\A3\Sounds_F\characters\ingame\AinvPpneMstpSlayWpstDnon_medicOut",0.891251,1,20}},{"roll",{"A3\Sounds_F\characters\movements\roll\concrete_roll_1",0.891251,1,20}},{"roll",{"A3\Sounds_F\characters\movements\roll\concrete_roll_2",0.891251,1,20}},{"roll",{"A3\Sounds_F\characters\movements\roll\concrete_roll_3",0.891251,1,20}},{"roll_unarmed",{"A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_1",0.891251,1,20}},{"roll_unarmed",{"A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_2",0.891251,1,20}},{"roll_unarmed",{"A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_3",0.891251,1,20}},{"adjust_short",{"\A3\sounds_f\characters\stances\adjust_short1",0.158489,1,20}},{"adjust_short",{"\A3\sounds_f\characters\stances\adjust_short2",0.158489,1,20}},{"adjust_short",{"\A3\sounds_f\characters\stances\adjust_short3",0.158489,1,20}},{"adjust_short",{"\A3\sounds_f\characters\stances\adjust_short4",0.158489,1,20}},{"adjust_short",{"\A3\sounds_f\characters\stances\adjust_short5",0.158489,1,20}},{"adjust_stand_to_left_prone",{"\A3\sounds_f\characters\stances\adjust_short1",0.158489,1,20}},{"adjust_stand_to_right_prone",{"\A3\sounds_f\characters\stances\adjust_short1",0.158489,1,20}},{"adjust_kneelhigh_to_standlow",{"\A3\sounds_f\characters\stances\adjust_short3",0.158489,1,20}},{"adjust_standlow_to_kneelhigh",{"\A3\sounds_f\characters\stances\adjust_short1",0.158489,1,20}},{"over_the_obstacle_slow",{"\A3\sounds_f\characters\movements\over_the_obstacle_slow",0.316228,1,20}},{"over_the_obstacle_fast",{"\A3\sounds_f\characters\movements\over_the_obstacle_fast",0.316228,1,20}},{"overstep",{"A3\sounds_f\characters\movements\overstep_1",0.251189,1,32}},{"overstep",{"A3\sounds_f\characters\movements\overstep_2",0.251189,1,32}},{"grenade_throw",{"\A3\sounds_f\characters\stances\grenade_throw1",0.354813,1,20}},{"grenade_throw",{"\A3\sounds_f\characters\stances\grenade_throw2",0.354813,1,20}},{"inventory_in",{"\A3\sounds_f\characters\stances\adjust_short1",0.251189,1,20}},{"inventory_out",{"\A3\sounds_f\characters\stances\adjust_short2",0.251189,1,20}},{"handgun_to_rifle",{"\A3\Sounds_F\characters\stances\handgun_to_rifle",1,1,20}},{"handgun_to_launcher",{"\A3\sounds_f\characters\stances\handgun_to_launcher",1,1,20}},{"launcher_to_rifle",{"\A3\sounds_f\characters\stances\launcher_to_rifle",1,1,20}},{"launcher_to_handgun",{"\A3\sounds_f\characters\stances\launcher_to_handgun",1,1,20}},{"rifle_to_handgun",{"\A3\Sounds_F\characters\stances\rifle_to_handgun",1,1,20}},{"rifle_to_handgun_prn",{"\A3\Sounds_F\characters\stances\rifle_to_handgun_prn",1,1,20}},{"rifle_to_launcher",{"\A3\sounds_f\characters\stances\rifle_to_launcher",1,1,20}},{"rifle_to_binoc",{"\A3\sounds_f\characters\stances\rifle_to_binoculars",1,1,20}},{"handgun_to_binoc",{"\A3\sounds_f\characters\stances\handgun_to_binoculars",1,1,20}},{"launcher_to_binoc",{"\A3\sounds_f\characters\stances\launcher_to_binoculars",1,1,20}},{"launcher_to_binoc_knl",{"\A3\sounds_f\characters\stances\launcher_to_binoculars_knl",1,1,20}},{"unarmed_to_binoc",{"\A3\sounds_f\characters\stances\unarmed_to_binoculars",1,1,20}},{"binoc_to_rifle",{"\A3\sounds_f\characters\stances\binoculars_to_rifle",1,1,20}},{"binoc_to_rifle_2",{"\A3\sounds_f\characters\stances\binoculars_to_rifle_2",1,1,20}},{"binoc_to_handgun",{"\A3\sounds_f\characters\stances\binoculars_to_handgun",1,1,20}},{"binoc_to_launcher",{"\A3\sounds_f\characters\stances\binoculars_to_launcher",1,1,20}},{"binoc_to_unarmed",{"\A3\sounds_f\characters\stances\binoculars_to_unarmed",1,1,20}},{"low_rifle",{"A3\sounds_f\characters\stances\low_rifle",0.501187,1,20}},{"lift_rifle",{"A3\sounds_f\characters\stances\lift_rifle",0.501187,1,20}},{"low_handgun",{"A3\sounds_f\characters\stances\low_handgun",0.501187,1,20}},{"lift_handgun",{"A3\sounds_f\characters\stances\lift_handgun",0.501187,1,20}},{"ladder",{"\A3\Sounds_F\characters\movements\ladder\ladder_01",0.501187,1,20}},{"ladder",{"\A3\Sounds_F\characters\movements\ladder\ladder_02",0.501187,1,20}},{"ladder",{"\A3\Sounds_F\characters\movements\ladder\ladder_03",0.501187,1,20}},{"ladder",{"\A3\Sounds_F\characters\movements\ladder\ladder_04",0.501187,1,20}},{"ladder",{"\A3\Sounds_F\characters\movements\ladder\ladder_05",0.501187,1,20}},{"ladder",{"\A3\Sounds_F\characters\movements\ladder\ladder_06",0.501187,1,20}},{"swim",{"soundset","movement_swim_SoundSet"}},{"heli_get_in_init",{"soundset","heli_get_in_init_SoundSet"}},{"Acts_CrouchGetLowGesture",{"\A3\Sounds_F\characters\cutscenes\Acts_CrouchGetLowGesture",0.891251,1,20}},{"Acts_listeningToRadio_in",{"A3\Sounds_F\characters\cutscenes\Acts_listeningToRadio_in",0.891251,1,20}},{"Acts_listeningToRadio_Loop",{"\A3\Sounds_F\dummysound",0.891251,1,20}},{"Acts_listeningToRadio_Out",{"\A3\Sounds_F\characters\cutscenes\Acts_listeningToRadio_Out",0.891251,1,20}},{"Acts_LyingWounded_loop1",{"\A3\Sounds_F\characters\cutscenes\Acts_LyingWounded_loop1",0.891251,1,20}},{"Acts_LyingWounded_loop2",{"\A3\Sounds_F\characters\cutscenes\Acts_LyingWounded_loop2",0.891251,1,20}},{"Acts_LyingWounded_loop3",{"\A3\Sounds_F\characters\cutscenes\Acts_LyingWounded_loop3",0.891251,1,20}},{"Acts_NavigatingChopper_In",{"\A3\Sounds_F\characters\cutscenes\Acts_NavigatingChopper_In",0.562341,1,20}},{"Acts_NavigatingChopper_Loop",{"\A3\Sounds_F\characters\cutscenes\Acts_NavigatingChopper_Loop",0.562341,1,20}},{"Acts_NavigatingChopper_Out",{"\A3\Sounds_F\characters\cutscenes\Acts_NavigatingChopper_Out",0.562341,1,20}},{"Acts_PercMstpSlowWrflDnon_handup1",{"\A3\Sounds_F\characters\cutscenes\Acts_PercMstpSlowWrflDnon_handup1",0.562341,1,20}},{"Acts_PercMstpSlowWrflDnon_handup1b",{"\A3\Sounds_F\characters\cutscenes\Acts_PercMstpSlowWrflDnon_handup1b",0.562341,1,20}},{"Acts_PercMstpSlowWrflDnon_handup1c",{"\A3\Sounds_F\characters\cutscenes\Acts_PercMstpSlowWrflDnon_handup1c",0.562341,1,20}},{"Acts_PercMstpSlowWrflDnon_handup2",{"\A3\Sounds_F\characters\cutscenes\Acts_PercMstpSlowWrflDnon_handup2",0.562341,1,20}},{"Acts_PercMstpSlowWrflDnon_handup2b",{"\A3\Sounds_F\characters\cutscenes\Acts_PercMstpSlowWrflDnon_handup2b",0.891251,1,20}},{"Acts_PercMstpSlowWrflDnon_handup2c",{"\A3\Sounds_F\characters\cutscenes\Acts_PercMstpSlowWrflDnon_handup2c",0.562341,1,20}},{"Acts_SignalToCheck",{"\A3\Sounds_F\characters\cutscenes\Acts_SignalToCheck",0.562341,1,20}},{"Acts_ShowingTheRightWay_in",{"\A3\Sounds_F\characters\cutscenes\Acts_ShowingTheRightWay_in",0.562341,1,20}},{"Acts_ShowingTheRightWay_loop",{"\A3\Sounds_F\characters\cutscenes\Acts_ShowingTheRightWay_Loop",0.562341,1,20}},{"Acts_ShowingTheRightWay_out",{"\A3\Sounds_F\characters\cutscenes\Acts_ShowingTheRightWay_Out",0.562341,1,20}},{"Acts_ShieldFromSun_loop",{"\A3\Sounds_F\dummysound",0.562341,1,20}},{"Acts_ShieldFromSun_out",{"\A3\Sounds_F\characters\cutscenes\Acts_ShieldFromSun_Out",0.562341,1,20}},{"Acts_TreatingWounded01",{"\A3\Sounds_F\characters\cutscenes\Acts_TreatingWounded01",0.562341,1,20}},{"Acts_TreatingWounded02",{"\A3\Sounds_F\characters\cutscenes\Acts_TreatingWounded02",0.562341,1,20}},{"Acts_TreatingWounded03",{"\A3\Sounds_F\characters\cutscenes\Acts_TreatingWounded03",0.562341,1,20}},{"Acts_TreatingWounded04",{"\A3\Sounds_F\characters\cutscenes\Acts_TreatingWounded04",0.562341,1,20}},{"Acts_TreatingWounded05",{"\A3\Sounds_F\characters\cutscenes\Acts_TreatingWounded05",0.562341,1,20}},{"Acts_TreatingWounded06",{"\A3\Sounds_F\characters\cutscenes\Acts_TreatingWounded06",0.562341,1,20}},{"Acts_AidlPercMstpSlowWrflDnon_pissing",{"\A3\Sounds_F\characters\cutscenes\Acts_AidlPercMstpSlowWrflDnon_pissing",0.891251,1,20}},{"Acts_BoatAttacked01",{"\A3\Sounds_F\characters\cutscenes\Acts_BoatAttacked01",0.891251,1,20}},{"Acts_BoatAttacked02",{"\A3\Sounds_F\characters\cutscenes\Acts_BoatAttacked02",0.891251,1,20}},{"Acts_BoatAttacked03",{"\A3\Sounds_F\characters\cutscenes\Acts_BoatAttacked03",0.891251,1,20}},{"Acts_BoatAttacked04",{"\A3\Sounds_F\characters\cutscenes\Acts_BoatAttacked04",0.891251,1,20}},{"Acts_BoatAttacked05",{"\A3\Sounds_F\characters\cutscenes\Acts_BoatAttacked05",0.891251,1,20}},{"acts_CrouchingCoveringRifle01",{"\A3\Sounds_F\characters\cutscenes\Acts_CrouchingCoveringRifle01",0.562341,1,20}},{"acts_CrouchingIdleRifle01",{"\A3\Sounds_F\characters\cutscenes\Acts_CrouchingIdleRifle01",0.562341,1,20}},{"acts_CrouchingReloadingRifle01",{"\A3\Sounds_F\characters\cutscenes\Acts_CrouchingReloadingRifle01",0.562341,1,20}},{"acts_CrouchingWatchingRifle01",{"\A3\Sounds_F\characters\cutscenes\Acts_CrouchingWatchingRifle01",0.562341,1,20}},{"acts_InjuredAngryRifle01",{"\A3\Sounds_F\characters\cutscenes\Acts_InjuredAngryRifle01",0.562341,1,20}},{"acts_InjuredCoughRifle02",{"\A3\Sounds_F\characters\cutscenes\Acts_InjuredCoughRifle02",0.562341,1,20}},{"acts_InjuredLookingRifle01",{"\A3\Sounds_F\characters\cutscenes\Acts_InjuredLookingRifle01",0.562341,1,20}},{"acts_InjuredLookingRifle02",{"\A3\Sounds_F\characters\cutscenes\Acts_InjuredLookingRifle02",0.562341,1,20}},{"acts_InjuredLookingRifle03",{"\A3\Sounds_F\characters\cutscenes\Acts_InjuredLookingRifle03",0.562341,1,20}},{"acts_InjuredLookingRifle04",{"\A3\Sounds_F\characters\cutscenes\Acts_InjuredLookingRifle04",0.562341,1,20}},{"acts_InjuredLookingRifle05",{"\A3\Sounds_F\characters\cutscenes\Acts_InjuredLookingRifle05",0.562341,1,20}},{"acts_InjuredLyingRifle01",{"\A3\Sounds_F\characters\cutscenes\Acts_InjuredLyingRifle01",0.562341,1,20}},{"acts_InjuredSpeakingRifle01",{"\A3\Sounds_F\characters\cutscenes\Acts_InjuredSpeakingRIfle01",0.562341,1,20}},{"Acts_PknlMstpSlowWrflDnon",{"\A3\Sounds_F\characters\cutscenes\Acts_PknlMstpSlowWrflDnon",0.562341,1,20}},{"Acts_SittingJumpingSaluting_loop1",{"\A3\Sounds_F\characters\cutscenes\Acts_SittingJumpingSaluting_loop1",0.562341,1,20}},{"Acts_SittingJumpingSaluting_loop2",{"\A3\Sounds_F\characters\cutscenes\Acts_SittingJumpingSaluting_loop2",0.562341,1,20}},{"Acts_SittingJumpingSaluting_loop3",{"\A3\Sounds_F\characters\cutscenes\Acts_SittingJumpingSaluting_loop3",0.562341,1,20}},{"AmovPercMstpSnonWnonDnon_exercisekneeBendA",{"\A3\Sounds_F\characters\cutscenes\AmovPercMstpSnonWnonDnon_exercisekneeBendA",0.562341,1,20}}};

		normal[] = {
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}}
			};
		rock[] = {
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}}
			};
		stony[] = {
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}}
			};
		gravel[] = {
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}}
			};
		tiling[] = {
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}}
			};
		sand[] = {
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}}
			};
		drygrass[] = {
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}}
			};
		grass[] = {
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}}
			};
		debris[] = {
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}}
			};
		wood[] = {
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}}
			};
		concrete[] = {
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}}
			};
		metal[] = {
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}}
			};
		dirt[] = {
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}}
			};
		wavymetal[] = {
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}}
			};
		water[] = {
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}}
			};
		virtual[] = {
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}}
			};
		int_concrete[] = {
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}}
			};
		int_wood[] = {
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}}
			};
		int_metal[] = {
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}}
			};
		int_tiles[] = {
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}}
			};
		tarmac[] = {
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}}
			};
		concrete_exp[] = {
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}}
			};
		int_concrete_exp[] = {
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}}
			};
		pavement_exp[] = {
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}}
			};
		int_pavement_exp[] = {
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}}
			};
		stones_exp[] = {
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}}
			};
		int_solidwood_exp[] = {
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}}
			};
		softwood_exp[] = {
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}}
			};
		int_softwood_exp[] = {
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}}
			};
		steel_exp[] = {
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}}
			};
		metalplate_exp[] = {
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}}
			};
		int_metalplate_exp[] = {
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}}
			};
		metalplatepressed_exp[] = {
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}}
			};
		wavymetal_exp[] = {
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}}
			};
		gridmetal_exp[] = {
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}}
			};
		int_carpet_exp[] = {
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}}
			};
		int_mat_exp[] = {
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}}
			};
		mud_exp[] = {
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}}
			};
		mud[] = {
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}}
			};
		straw_exp[] = {
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}}
			};
		lino_exp[] = {
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}}
			};
		int_lino_exp[] = {
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}}
			};
		rooftiles_exp[] = {
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}}
			};
		gravel_exp[] = {
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}}
			};
		dirt_exp[] = {
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}}
			};
		asphalt_exp[] = {
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}}
			};
		water_exp[] = {
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}}
			};
		grass_exp[] = {
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}}
			};
		grasstall_exp[] = {
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}}
			};
		sand_exp[] = {
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}}
			};
		seabed_exp[] = {
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}}
			};
		forest_exp[] = {
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}}
			};
		forest[] = {
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"walk", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"run", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS1.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS2.wss", 1, 1, 700}},
				{"sprint", {"FU_SCP\data\sfx\FU_SCP_093_FS3.wss", 1, 1, 700}}
			};
	};
};

class FU_Rupture: Static {
	scope = 2;							// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).

	displayname = "SCP Rupture";
	editorCategory = "FU_Objects";
	model = "\FU_SCP\data\models\FU_Rupture.p3d";
	editorPreview = "";

	hiddenSelections[] = {""};
	hiddenSelectionsTextures[] = {""};
};

class FU_SCP_3000: I_Soldier_base_F {
	author = "Bizo";

	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;

	displayName = "SCP-3000";
	side = 2;
	faction = "FU_SCP_IND";

	model = "FU_SCP\data\models\FU_SCP_3000.p3d";
	editorPreview = "";
	uniformClass = "FU_SCP_3000_Uniform";
	nakedUniform = "FU_SCP_3000_Uniform";
	moves="FU_CfgMoves_SCP_3000";
	identityTypes[]= {"Head_NATO"};

	camouflage=10;
	sensitivityEar=0.5;
	accuracy = 1000;

	weapons[] = {"Throw", "Put"};
	respawnWeapons[] = {"Throw", "Put"};
	Items[] = {};
	RespawnItems[] = {};
	magazines[] = {};
	respawnMagazines[] = {};
	linkedItems[] = {};
	respawnLinkedItems[] = {};

	minSpeed = -0.5;
	maxSpeed = 40;
	minGunElev=0;
	maxGunElev=0;
	minGunTurn=0;
	maxGunTurn=0;
	minGunTurnAI=0;
	maxGunTurnAI=0;
	extCameraPosition[]={0,0.60000002,-15};

	class EventHandlers {
		Init="[_this select 0, 5] execVM 'FU_SCP\data\scripts\initSCP.sqf'";
	};

	armor = 400;

	class Wounds {
		tex[]={};
		mat[]={};
	};

	class HitPoints{};

	bonePrimaryWeapon = "Mouth";
	boneHead = "Head";
	boneHeadCutScene = "Mouth";
	boneLEye = "Mouth";
	boneREye = "Mouth";
	boneLEyelidUp = "Mouth";
	boneREyelidUp = "Mouth";
	boneLEyelidDown = "Mouth";
	boneREyelidDown = "Mouth";
	boneLPupil = "Mouth";
	boneRPupil = "Mouth";
	selectionHeadWound = "1";
	selectionBodyWound = "1";
	selectionLArmWound = "1";
	selectionRArmWound = "1";
	selectionLLegWound = "1";
	selectionRLegWound = "1";
	selectionLArmWound1 = "1";
	selectionRArmWound1 = "1";
	selectionLLegWound1 = "1";
	selectionRLegWound1 = "1";
	selectionLArmWound2 = "1";
	selectionRArmWound2 = "1";
	selectionLLegWound2 = "1";
	selectionRLegWound2 = "1";
	selectionHeadHide = "";
	selectionNeckHide = "";
	memoryPointLStep = "1";
	memoryPointRStep = "1";
	memoryPointAim = "Head";
	memoryPointCameraTarget = "Head";
	memoryPointCommonDamage = "Head";
	memoryPointLeaningAxis = "Head";
	memoryPointAimingAxis = "Head";
	memoryPointHeadAxis = "Head";
	memoryPointWaterSurface = "2";
	selectionLBrow = "Mouth";
	selectionMBrow = "Mouth";
	selectionRBrow = "Mouth";
	selectionLMouth = "Mouth";
	selectionMMouth = "Mouth";
	selectionRMouth = "Mouth";
	selectionEyelid = "Mouth";
	selectionLip = "Mouth";

	leftArmToElbow[] = {"Mouth",0.5,"Head",0};
	leftArmFromElbow[] = {"Head",0,"Mouth",0.5};
	leftWrist = "Mouth";
	leftShoulder = "Mouth";
	leftHand[] = {"Mouth"};
	leftArmPoints[] = {"Mouth"};
	rightArmToElbow[] = {"Mouth",0.5,"Head",0};
	rightArmFromElbow[] = {"Head",0,"Mouth",0.5};
	rightWrist = "Mouth";
	rightShoulder = "Mouth";
	rightHand[] = {"Mouth"};
	rightArmPoints[] = {"Mouth"};
	leftLegToKnee[] = {"Mouth",0.5,"Head",0};
	leftLegFromKnee[] = {"Head",0,"Mouth",0.5};
	leftHeel = "Mouth";
	leftHip = "Mouth";
	leftFoot[] = {"Mouth"};
	leftLegPoints[] = {"Mouth"};
	rightLegToKnee[] = {"Mouth",0.5,"Head",0};
	rightLegFromKnee[] = {"Head",0,"Mouth",0.5};
	rightHeel = "Mouth";
	rightHip = "Mouth";
	rightFoot[] = {"Mouth"};
	rightLegPoints[] = {"Mouth"};
	launcherBone = "Mouth";
	handGunBone = "Mouth";
	weaponBone = "Mouth";
	impactEffectsSea = "ImpactEffectsSeaMen";
	canCarryBackPack = 0;
};

class FU_SCP_3000_Dive: FU_SCP_3000 {
	displayName = "SCP-3000 (Dive)";

	class EventHandlers {
		Init="[_this select 0, 6] execVM 'FU_SCP\data\scripts\initSCP.sqf'";
	};
};

class FU_SCP_3000_Body: Static {
	author = "Bizo";

	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;

	displayName = "SCP-3000 Body";
	editorCategory = "FU_Objects";
	model = "FU_SCP\data\models\FU_SCP_3000_Body.p3d";
	editorPreview = "";

	hiddenSelections[] = {""};
	hiddenSelectionsTextures[] = {""};
};

class FU_SCP_3000_Col: Static {
	author = "Bizo";

	scope = 1;

	displayName = "SCP-3000 Collider";
	editorCategory = "FU_Objects";
	model = "FU_SCP\data\models\FU_SCP_3000_Col.p3d";
	editorPreview = "";

	hiddenSelections[] = {""};
	hiddenSelectionsTextures[] = {""};

	armor = 400;

	irTarget = true;
	irScanRangeMin = 500;	// tanks general
	irScanRangeMax = 4000;
};

/*
class FU_Tentacle_Small: Static {
	author = "Bizo";

	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;

	displayName = "Anomaly Tentacle (Small)";		// The name of the soldier, which is displayed in the editor.

	editorCategory = "FU_Objects";
	model = "FU_SCP\data\models\FU_Tentacle_Small.p3d";
	editorPreview = "FU_SCP\data\renders\FU_SCP_610_A_Render.jpg";

	hiddenSelections[] = {""};
	hiddenSelectionsTextures[] = {""};

	class AnimationSources {
		class Node_3 {
			source = "user";	// The controller is defined as a user animation.
			animPeriod = 5;		// The animation period used for this controller.
			initPhase = 0;
		};

		class Node_6 {
			source = "user";	// The controller is defined as a user animation.
			animPeriod = 5;		// The animation period used for this controller.
			initPhase = 0;
		};

		class Node_8 {
			source = "user";	// The controller is defined as a user animation.
			animPeriod = 5;		// The animation period used for this controller.
			initPhase = 0;
		};

		class Translate_Pivot {
			source = "user";	// The controller is defined as a user animation.
			animPeriod = 10;		// The animation period used for this controller.
			initPhase = 0;
		};
	};

	class Attributes {
		class Node_3_Rot {
			displayName="Rotation Speed - Node 3";
			property="Node_3_Rot";
			control="slider";
			defaultValue="0";
			expression="_this animateSource ['Node_3',1e6-1,_value]";
		};

		class Node_6_Rot {
			displayName="Rotation Speed - Node 6";
			property="Node_6_Rot";
			control="slider";
			defaultValue="0";
			expression="_this animateSource ['Node_6',1e6-1,_value]";
		};

		class Node_8_Rot {
			displayName="Rotation Speed - Node 8";
			property="Node_8_Rot";
			control="slider";
			defaultValue="0";
			expression="_this animateSource ['Node_8',1e6-1,_value]";
		};

		class Pivot_Trans {
			displayName="Translate Pivot";
			property="Pivot_Trans";
			control="slider";
			defaultValue="0";
			expression="_this animateSource ['Translate_Pivot', _value, 0]";
		};
	};
};
*/

class FU_Tentacle_Big: Static {
	author = "Bizo";

	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;

	displayName = "Anomaly Tentacle (Big)";
	editorCategory = "FU_Objects";
	model = "FU_SCP\data\models\FU_Tentacle_Big.p3d";
	editorPreview = "FU_SCP\data\renders\FU_SCP_610_A_Render.jpg";

	hiddenSelections[] = {""};
	hiddenSelectionsTextures[] = {""};

	class AnimationSources {
		class Node_3 {
			source = "user";	// The controller is defined as a user animation.
			animPeriod = 5;		// The animation period used for this controller.
			initPhase = 0;
		};

		class Node_6 {
			source = "user";	// The controller is defined as a user animation.
			animPeriod = 5;		// The animation period used for this controller.
			initPhase = 0;
		};

		class Node_8 {
			source = "user";	// The controller is defined as a user animation.
			animPeriod = 5;		// The animation period used for this controller.
			initPhase = 0;
		};

		class Translate_Pivot {
			source = "user";	// The controller is defined as a user animation.
			animPeriod = 10;		// The animation period used for this controller.
			initPhase = 0;
		};
	};

	class Attributes {
		class Node_3_Rot {
			displayName="Rotation Speed - Node 3";
			property="Node_3_Rot";
			control="slider";
			defaultValue="0";
			expression="_this animateSource ['Node_3',1e6-1,_value]";
		};

		class Node_6_Rot {
			displayName="Rotation Speed - Node 6";
			property="Node_6_Rot";
			control="slider";
			defaultValue="0";
			expression="_this animateSource ['Node_6',1e6-1,_value]";
		};

		class Node_8_Rot {
			displayName="Rotation Speed - Node 8";
			property="Node_8_Rot";
			control="slider";
			defaultValue="0";
			expression="_this animateSource ['Node_8',1e6-1,_value]";
		};

		class Pivot_Trans {
			displayName="Translate Pivot";
			property="Pivot_Trans";
			control="slider";
			defaultValue="0";
			expression="_this animateSource ['Translate_Pivot', _value, 0]";
		};
	};
};