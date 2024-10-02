#define mags_10(a) a, a, a, a, a, a, a, a, a, a
#define mags_2(a) a, a

class FU_A_Soldier_base: O_Soldier_base_F {
	author = "Bizo";			// The name of the author of the asset, which is displayed in the editor.

	faction = "FU_Aliens";

	editorPreview = "\FU_Events\data\aliens\renders\FU_A_Uniform_Render.paa";

	scope = 1;							// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
	scopeCurator = 2;					// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
	scopeArsenal = 2;					// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
	identityTypes[] = {"Head_NATO"};		// Identity Types are explained in the Headgear section of this guide.
	displayName = "Tiro";		// The name of the soldier, which is displayed in the editor.

	model = "\FU_Events\data\aliens\models\FU_A_Uniform.p3d";			// The path to the model this character uses.
	uniformClass = "FU_A_Uniform";							// This links this soldier to a particular uniform. For the details, see below.
	hiddenSelections[] = {""};								// List of model selections which can be changed with hiddenSelectionTextures[]// and hiddenSelectionMaterials[] properties. If empty, model textures are used.
	hiddenSelectionsTextures[] = {""};	// The textures for the selections defined above.
	canDeactivateMines = false;				// Can this character deactivate mines?
	engineer = false;						// Can this character repair vehicles?
	attendant = false;							// Can this character heal soldiers?

	role = "Rifleman";
	icon = "iconMan";				// If a character has a special role, a special icon shall be used.
	picture = "";				// The same as above, but for the squad picture.

	weapons[] = {"FU_A_Gun", "Throw", "Put"};				// Which weapons the character has.
	respawnWeapons[] = {"FU_A_Gun", "Throw", "Put"};		// Which weapons the character respawns with.
	Items[] = {mags_2(FirstAidKit)};				// Which items the character has.
	RespawnItems[] = {mags_2(FirstAidKit)};		// Which items the character respawns with.
	magazines[] = {mags_10(FU_A_40Rnd_Mag_Tracer), mags_10(FU_A_40Rnd_Mag_Tracer), mags_2(ACE_M14), mags_2(SmokeShell)};				// What ammunition the character has.
	respawnMagazines[] = {mags_10(FU_A_40Rnd_Mag_Tracer), mags_10(FU_A_40Rnd_Mag_Tracer), mags_2(ACE_M14), mags_2(SmokeShell)};		// What ammunition the character respawns with.
	linkedItems[] = {"V_PlateCarrier1_blk", "H_PASGT_basic_black_F", "ItemCompass", "ItemMap", "ItemRadio", "ItemWatch", "NVGoggles_OPFOR"};				// Which items the character has.
	respawnLinkedItems[] = {"V_PlateCarrier1_blk", "H_PASGT_basic_black_F", "ItemCompass", "ItemMap", "ItemRadio", "ItemWatch", "NVGoggles_OPFOR"};	// Which items the character respawns with.
};

class FU_A_Rifleman: FU_A_Soldier_base {
	displayName = "Miles";		// The name of the soldier, which is displayed in the editor.
	
	scope = 2;							// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
	scopeCurator = 2;					// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.

	canDeactivateMines = false;				// Can this character deactivate mines?
	engineer = false;						// Can this character repair vehicles?
	attendant = false;							// Can this character heal soldiers?

	role = "Rifleman";
	icon = "iconMan";				// If a character has a special role, a special icon shall be used.
	picture = "";				// The same as above, but for the squad picture.
};

class FU_A_Medic: FU_A_Soldier_base {
	displayName = "Immunis Medicus";		// The name of the soldier, which is displayed in the editor.
	
	scope = 2;							// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
	scopeCurator = 2;					// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.

	canDeactivateMines = false;				// Can this character deactivate mines?
	engineer = false;						// Can this character repair vehicles?
	attendant = true;							// Can this character heal soldiers?

	role = "CombatLifeSaver";
	icon = "iconManMedic";				// If a character has a special role, a special icon shall be used.
	picture = "pictureHeal";				// The same as above, but for the squad picture.

	Items[] = {mags_10(FirstAidKit), mags_10(FirstAidKit), "Medikit"};				// Which items the character has.
	RespawnItems[] = {mags_10(FirstAidKit), mags_10(FirstAidKit), "Medikit"};		// Which items the character respawns with.
};

class FU_A_Engineer: FU_A_Soldier_base {
	displayName = "Immunis Mechanicus";		// The name of the soldier, which is displayed in the editor.
	
	scope = 2;							// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
	scopeCurator = 2;					// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.

	canDeactivateMines = true;				// Can this character deactivate mines?
	engineer = true;						// Can this character repair vehicles?
	attendant = false;							// Can this character heal soldiers?

	role = "Sapper";
	icon = "iconManEngineer";				// If a character has a special role, a special icon shall be used.
	picture = "pictureRepair";				// The same as above, but for the squad picture.

	Items[] = {mags_2(FirstAidKit), "ToolKit", "MineDetector", mags_2(DemoCharge_Remote_Mag)};				// Which items the character has.
	RespawnItems[] = {mags_2(FirstAidKit), "ToolKit", "MineDetector", mags_2(DemoCharge_Remote_Mag)};		// Which items the character respawns with.
};

class FU_A_SL: FU_A_Soldier_base {
	displayName = "Centurion";		// The name of the soldier, which is displayed in the editor.
	
	scope = 2;							// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
	scopeCurator = 2;					// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.

	canDeactivateMines = false;				// Can this character deactivate mines?
	engineer = false;						// Can this character repair vehicles?
	attendant = false;							// Can this character heal soldiers?

	role = "Rifleman";
	icon = "iconManLeader";				// If a character has a special role, a special icon shall be used.
	picture = "";			// The same as above, but for the squad picture.

	linkedItems[] = {"V_PlateCarrier2_blk", "H_PASGT_basic_black_F", "ItemCompass", "ItemMap", "ItemRadio", "ItemWatch", "NVGoggles_OPFOR"};				// Which items the character has.
	respawnLinkedItems[] = {"V_PlateCarrier2_blk", "H_PASGT_basic_black_F", "ItemCompass", "ItemMap", "ItemRadio", "ItemWatch", "NVGoggles_OPFOR"};
};

class FU_A_Ship: Static {
	scope = 2;							// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
	scopeCurator = 2;					// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.

	displayname = "FUA Mothership";
	editorCategory = "FU_Objects";
	model = "\FU_Events\data\aliens\models\FU_A_Ship.p3d";
	editorPreview = "\FU_Events\data\aliens\renders\FU_A_Ship_Render.paa";

	hiddenSelections[] = {""};
	hiddenSelectionsTextures[] = {""};
};

class FU_A_Debris_1: Static {
	scope = 2;							// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
	scopeCurator = 2;					// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.

	displayname = "FUA Mothership Debris";
	editorCategory = "FU_Objects";
	model = "\FU_Events\data\aliens\models\FU_A_Debris_1.p3d";
	editorPreview = "\FU_Events\data\aliens\renders\FU_A_Ship_Render.paa";

	hiddenSelections[] = {""};
	hiddenSelectionsTextures[] = {""};
};

class FU_A_Barrier: Static {
	scope = 2;							// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
	scopeCurator = 2;					// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.

	displayname = "FUA Barrier";
	editorCategory = "FU_Objects";
	model = "\FU_Events\data\aliens\models\FU_A_Barrier.p3d";
	editorPreview = "\FU_Events\data\aliens\renders\FU_A_Ship_Render.paa";

	hiddenSelections[] = {""};
	hiddenSelectionsTextures[] = {""};
};

class FU_Alien_Crater: Helipad_base_F {
	author = "Bizo";
	editorPreview = "";
	scope = 2;
	scopeCurator = 2;
	displayName = "Alien Crater";
	model = "FU_Events\data\aliens\models\FU_Alien_Crater.p3d";
};

class FU_Tripod: FU_A_Soldier_base {
	author = "Bizo";

	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;

	displayName = "Tripod";

	model = "FU_Events\data\aliens\models\FU_Tripod.p3d";
	uniformClass = "FU_Tripod_Uniform";
	nakedUniform = "FU_Tripod_Uniform";
	moves="FU_CfgMoves_Tripod";
	identityTypes[]= {"Head_NATO"};

	camouflage=10;
	sensitivityEar=0.5;
	accuracy = 0.3;

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
	minGunElev=-90;
	maxGunElev=90;
	minGunTurn=0;
	maxGunTurn=0;
	minGunTurnAI=0;
	maxGunTurnAI=0;
	extCameraPosition[]={0,0.60000002,-15};

	minHeadTurnAI=0;
	maxHeadTurnAI=0;

	class EventHandlers {
		Init="[_this select 0, 0] execVM 'FU_Events\data\aliens\scripts\initAlien.sqf'";
	};

	armor = 1;
	cost = 1000;

	class Wounds {
		tex[]={};
		mat[]={};
	};

	class SoundEnvironExt 
	{
		generic[] = {{"healself",{"\A3\Sounds_F\characters\ingame\AinvPknlMstpSlayWrflDnon_medic",0.891251,1,20}},{"healselfprone",{"\A3\Sounds_F\characters\ingame\AinvPpneMstpSlayWrflDnon_medic",0.891251,1,20}},{"healselfpistolkneelin",{"\A3\Sounds_F\characters\ingame\AinvPknlMstpSlayWpstDnon_medicIn",0.891251,1,20}},{"healselfpistolkneel",{"\A3\Sounds_F\characters\ingame\AinvPknlMstpSlayWpstDnon_medic",0.891251,1,20}},{"healselfpistolkneelout",{"\A3\Sounds_F\characters\ingame\AinvPknlMstpSlayWpstDnon_medicOut",0.891251,1,20}},{"healselfpistolpromein",{"\A3\Sounds_F\characters\ingame\AinvPpneMstpSlayWpstDnon_medicin",0.891251,1,20}},{"healselfpistolprone",{"\A3\Sounds_F\characters\ingame\AinvPpneMstpSlayWpstDnon_medic",0.891251,1,20}},{"healselfpistolpromeout",{"\A3\Sounds_F\characters\ingame\AinvPpneMstpSlayWpstDnon_medicOut",0.891251,1,20}},{"roll",{"A3\Sounds_F\characters\movements\roll\concrete_roll_1",0.891251,1,20}},{"roll",{"A3\Sounds_F\characters\movements\roll\concrete_roll_2",0.891251,1,20}},{"roll",{"A3\Sounds_F\characters\movements\roll\concrete_roll_3",0.891251,1,20}},{"roll_unarmed",{"A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_1",0.891251,1,20}},{"roll_unarmed",{"A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_2",0.891251,1,20}},{"roll_unarmed",{"A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_3",0.891251,1,20}},{"adjust_short",{"\A3\sounds_f\characters\stances\adjust_short1",0.158489,1,20}},{"adjust_short",{"\A3\sounds_f\characters\stances\adjust_short2",0.158489,1,20}},{"adjust_short",{"\A3\sounds_f\characters\stances\adjust_short3",0.158489,1,20}},{"adjust_short",{"\A3\sounds_f\characters\stances\adjust_short4",0.158489,1,20}},{"adjust_short",{"\A3\sounds_f\characters\stances\adjust_short5",0.158489,1,20}},{"adjust_stand_to_left_prone",{"\A3\sounds_f\characters\stances\adjust_short1",0.158489,1,20}},{"adjust_stand_to_right_prone",{"\A3\sounds_f\characters\stances\adjust_short1",0.158489,1,20}},{"adjust_kneelhigh_to_standlow",{"\A3\sounds_f\characters\stances\adjust_short3",0.158489,1,20}},{"adjust_standlow_to_kneelhigh",{"\A3\sounds_f\characters\stances\adjust_short1",0.158489,1,20}},{"over_the_obstacle_slow",{"\A3\sounds_f\characters\movements\over_the_obstacle_slow",0.316228,1,20}},{"over_the_obstacle_fast",{"\A3\sounds_f\characters\movements\over_the_obstacle_fast",0.316228,1,20}},{"overstep",{"A3\sounds_f\characters\movements\overstep_1",0.251189,1,32}},{"overstep",{"A3\sounds_f\characters\movements\overstep_2",0.251189,1,32}},{"grenade_throw",{"\A3\sounds_f\characters\stances\grenade_throw1",0.354813,1,20}},{"grenade_throw",{"\A3\sounds_f\characters\stances\grenade_throw2",0.354813,1,20}},{"inventory_in",{"\A3\sounds_f\characters\stances\adjust_short1",0.251189,1,20}},{"inventory_out",{"\A3\sounds_f\characters\stances\adjust_short2",0.251189,1,20}},{"handgun_to_rifle",{"\A3\Sounds_F\characters\stances\handgun_to_rifle",1,1,20}},{"handgun_to_launcher",{"\A3\sounds_f\characters\stances\handgun_to_launcher",1,1,20}},{"launcher_to_rifle",{"\A3\sounds_f\characters\stances\launcher_to_rifle",1,1,20}},{"launcher_to_handgun",{"\A3\sounds_f\characters\stances\launcher_to_handgun",1,1,20}},{"rifle_to_handgun",{"\A3\Sounds_F\characters\stances\rifle_to_handgun",1,1,20}},{"rifle_to_handgun_prn",{"\A3\Sounds_F\characters\stances\rifle_to_handgun_prn",1,1,20}},{"rifle_to_launcher",{"\A3\sounds_f\characters\stances\rifle_to_launcher",1,1,20}},{"rifle_to_binoc",{"\A3\sounds_f\characters\stances\rifle_to_binoculars",1,1,20}},{"handgun_to_binoc",{"\A3\sounds_f\characters\stances\handgun_to_binoculars",1,1,20}},{"launcher_to_binoc",{"\A3\sounds_f\characters\stances\launcher_to_binoculars",1,1,20}},{"launcher_to_binoc_knl",{"\A3\sounds_f\characters\stances\launcher_to_binoculars_knl",1,1,20}},{"unarmed_to_binoc",{"\A3\sounds_f\characters\stances\unarmed_to_binoculars",1,1,20}},{"binoc_to_rifle",{"\A3\sounds_f\characters\stances\binoculars_to_rifle",1,1,20}},{"binoc_to_rifle_2",{"\A3\sounds_f\characters\stances\binoculars_to_rifle_2",1,1,20}},{"binoc_to_handgun",{"\A3\sounds_f\characters\stances\binoculars_to_handgun",1,1,20}},{"binoc_to_launcher",{"\A3\sounds_f\characters\stances\binoculars_to_launcher",1,1,20}},{"binoc_to_unarmed",{"\A3\sounds_f\characters\stances\binoculars_to_unarmed",1,1,20}},{"low_rifle",{"A3\sounds_f\characters\stances\low_rifle",0.501187,1,20}},{"lift_rifle",{"A3\sounds_f\characters\stances\lift_rifle",0.501187,1,20}},{"low_handgun",{"A3\sounds_f\characters\stances\low_handgun",0.501187,1,20}},{"lift_handgun",{"A3\sounds_f\characters\stances\lift_handgun",0.501187,1,20}},{"ladder",{"\A3\Sounds_F\characters\movements\ladder\ladder_01",0.501187,1,20}},{"ladder",{"\A3\Sounds_F\characters\movements\ladder\ladder_02",0.501187,1,20}},{"ladder",{"\A3\Sounds_F\characters\movements\ladder\ladder_03",0.501187,1,20}},{"ladder",{"\A3\Sounds_F\characters\movements\ladder\ladder_04",0.501187,1,20}},{"ladder",{"\A3\Sounds_F\characters\movements\ladder\ladder_05",0.501187,1,20}},{"ladder",{"\A3\Sounds_F\characters\movements\ladder\ladder_06",0.501187,1,20}},{"swim",{"soundset","movement_swim_SoundSet"}},{"heli_get_in_init",{"soundset","heli_get_in_init_SoundSet"}},{"Acts_CrouchGetLowGesture",{"\A3\Sounds_F\characters\cutscenes\Acts_CrouchGetLowGesture",0.891251,1,20}},{"Acts_listeningToRadio_in",{"A3\Sounds_F\characters\cutscenes\Acts_listeningToRadio_in",0.891251,1,20}},{"Acts_listeningToRadio_Loop",{"\A3\Sounds_F\dummysound",0.891251,1,20}},{"Acts_listeningToRadio_Out",{"\A3\Sounds_F\characters\cutscenes\Acts_listeningToRadio_Out",0.891251,1,20}},{"Acts_LyingWounded_loop1",{"\A3\Sounds_F\characters\cutscenes\Acts_LyingWounded_loop1",0.891251,1,20}},{"Acts_LyingWounded_loop2",{"\A3\Sounds_F\characters\cutscenes\Acts_LyingWounded_loop2",0.891251,1,20}},{"Acts_LyingWounded_loop3",{"\A3\Sounds_F\characters\cutscenes\Acts_LyingWounded_loop3",0.891251,1,20}},{"Acts_NavigatingChopper_In",{"\A3\Sounds_F\characters\cutscenes\Acts_NavigatingChopper_In",0.562341,1,20}},{"Acts_NavigatingChopper_Loop",{"\A3\Sounds_F\characters\cutscenes\Acts_NavigatingChopper_Loop",0.562341,1,20}},{"Acts_NavigatingChopper_Out",{"\A3\Sounds_F\characters\cutscenes\Acts_NavigatingChopper_Out",0.562341,1,20}},{"Acts_PercMstpSlowWrflDnon_handup1",{"\A3\Sounds_F\characters\cutscenes\Acts_PercMstpSlowWrflDnon_handup1",0.562341,1,20}},{"Acts_PercMstpSlowWrflDnon_handup1b",{"\A3\Sounds_F\characters\cutscenes\Acts_PercMstpSlowWrflDnon_handup1b",0.562341,1,20}},{"Acts_PercMstpSlowWrflDnon_handup1c",{"\A3\Sounds_F\characters\cutscenes\Acts_PercMstpSlowWrflDnon_handup1c",0.562341,1,20}},{"Acts_PercMstpSlowWrflDnon_handup2",{"\A3\Sounds_F\characters\cutscenes\Acts_PercMstpSlowWrflDnon_handup2",0.562341,1,20}},{"Acts_PercMstpSlowWrflDnon_handup2b",{"\A3\Sounds_F\characters\cutscenes\Acts_PercMstpSlowWrflDnon_handup2b",0.891251,1,20}},{"Acts_PercMstpSlowWrflDnon_handup2c",{"\A3\Sounds_F\characters\cutscenes\Acts_PercMstpSlowWrflDnon_handup2c",0.562341,1,20}},{"Acts_SignalToCheck",{"\A3\Sounds_F\characters\cutscenes\Acts_SignalToCheck",0.562341,1,20}},{"Acts_ShowingTheRightWay_in",{"\A3\Sounds_F\characters\cutscenes\Acts_ShowingTheRightWay_in",0.562341,1,20}},{"Acts_ShowingTheRightWay_loop",{"\A3\Sounds_F\characters\cutscenes\Acts_ShowingTheRightWay_Loop",0.562341,1,20}},{"Acts_ShowingTheRightWay_out",{"\A3\Sounds_F\characters\cutscenes\Acts_ShowingTheRightWay_Out",0.562341,1,20}},{"Acts_ShieldFromSun_loop",{"\A3\Sounds_F\dummysound",0.562341,1,20}},{"Acts_ShieldFromSun_out",{"\A3\Sounds_F\characters\cutscenes\Acts_ShieldFromSun_Out",0.562341,1,20}},{"Acts_TreatingWounded01",{"\A3\Sounds_F\characters\cutscenes\Acts_TreatingWounded01",0.562341,1,20}},{"Acts_TreatingWounded02",{"\A3\Sounds_F\characters\cutscenes\Acts_TreatingWounded02",0.562341,1,20}},{"Acts_TreatingWounded03",{"\A3\Sounds_F\characters\cutscenes\Acts_TreatingWounded03",0.562341,1,20}},{"Acts_TreatingWounded04",{"\A3\Sounds_F\characters\cutscenes\Acts_TreatingWounded04",0.562341,1,20}},{"Acts_TreatingWounded05",{"\A3\Sounds_F\characters\cutscenes\Acts_TreatingWounded05",0.562341,1,20}},{"Acts_TreatingWounded06",{"\A3\Sounds_F\characters\cutscenes\Acts_TreatingWounded06",0.562341,1,20}},{"Acts_AidlPercMstpSlowWrflDnon_pissing",{"\A3\Sounds_F\characters\cutscenes\Acts_AidlPercMstpSlowWrflDnon_pissing",0.891251,1,20}},{"Acts_BoatAttacked01",{"\A3\Sounds_F\characters\cutscenes\Acts_BoatAttacked01",0.891251,1,20}},{"Acts_BoatAttacked02",{"\A3\Sounds_F\characters\cutscenes\Acts_BoatAttacked02",0.891251,1,20}},{"Acts_BoatAttacked03",{"\A3\Sounds_F\characters\cutscenes\Acts_BoatAttacked03",0.891251,1,20}},{"Acts_BoatAttacked04",{"\A3\Sounds_F\characters\cutscenes\Acts_BoatAttacked04",0.891251,1,20}},{"Acts_BoatAttacked05",{"\A3\Sounds_F\characters\cutscenes\Acts_BoatAttacked05",0.891251,1,20}},{"acts_CrouchingCoveringRifle01",{"\A3\Sounds_F\characters\cutscenes\Acts_CrouchingCoveringRifle01",0.562341,1,20}},{"acts_CrouchingIdleRifle01",{"\A3\Sounds_F\characters\cutscenes\Acts_CrouchingIdleRifle01",0.562341,1,20}},{"acts_CrouchingReloadingRifle01",{"\A3\Sounds_F\characters\cutscenes\Acts_CrouchingReloadingRifle01",0.562341,1,20}},{"acts_CrouchingWatchingRifle01",{"\A3\Sounds_F\characters\cutscenes\Acts_CrouchingWatchingRifle01",0.562341,1,20}},{"acts_InjuredAngryRifle01",{"\A3\Sounds_F\characters\cutscenes\Acts_InjuredAngryRifle01",0.562341,1,20}},{"acts_InjuredCoughRifle02",{"\A3\Sounds_F\characters\cutscenes\Acts_InjuredCoughRifle02",0.562341,1,20}},{"acts_InjuredLookingRifle01",{"\A3\Sounds_F\characters\cutscenes\Acts_InjuredLookingRifle01",0.562341,1,20}},{"acts_InjuredLookingRifle02",{"\A3\Sounds_F\characters\cutscenes\Acts_InjuredLookingRifle02",0.562341,1,20}},{"acts_InjuredLookingRifle03",{"\A3\Sounds_F\characters\cutscenes\Acts_InjuredLookingRifle03",0.562341,1,20}},{"acts_InjuredLookingRifle04",{"\A3\Sounds_F\characters\cutscenes\Acts_InjuredLookingRifle04",0.562341,1,20}},{"acts_InjuredLookingRifle05",{"\A3\Sounds_F\characters\cutscenes\Acts_InjuredLookingRifle05",0.562341,1,20}},{"acts_InjuredLyingRifle01",{"\A3\Sounds_F\characters\cutscenes\Acts_InjuredLyingRifle01",0.562341,1,20}},{"acts_InjuredSpeakingRifle01",{"\A3\Sounds_F\characters\cutscenes\Acts_InjuredSpeakingRIfle01",0.562341,1,20}},{"Acts_PknlMstpSlowWrflDnon",{"\A3\Sounds_F\characters\cutscenes\Acts_PknlMstpSlowWrflDnon",0.562341,1,20}},{"Acts_SittingJumpingSaluting_loop1",{"\A3\Sounds_F\characters\cutscenes\Acts_SittingJumpingSaluting_loop1",0.562341,1,20}},{"Acts_SittingJumpingSaluting_loop2",{"\A3\Sounds_F\characters\cutscenes\Acts_SittingJumpingSaluting_loop2",0.562341,1,20}},{"Acts_SittingJumpingSaluting_loop3",{"\A3\Sounds_F\characters\cutscenes\Acts_SittingJumpingSaluting_loop3",0.562341,1,20}},{"AmovPercMstpSnonWnonDnon_exercisekneeBendA",{"\A3\Sounds_F\characters\cutscenes\AmovPercMstpSnonWnonDnon_exercisekneeBendA",0.562341,1,20}}};

		normal[] = {
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}}
			};
		rock[] = {
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}}
			};
		stony[] = {
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}}
			};
		gravel[] = {
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}}
			};
		tiling[] = {
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}}
			};
		sand[] = {
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}}
			};
		drygrass[] = {
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}}
			};
		grass[] = {
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}}
			};
		debris[] = {
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}}
			};
		wood[] = {
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}}
			};
		concrete[] = {
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}}
			};
		metal[] = {
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}}
			};
		dirt[] = {
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}}
			};
		wavymetal[] = {
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}}
			};
		water[] = {
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}}
			};
		virtual[] = {
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}}
			};
		int_concrete[] = {
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}}
			};
		int_wood[] = {
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}}
			};
		int_metal[] = {
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}}
			};
		int_tiles[] = {
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}}
			};
		tarmac[] = {
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}}
			};
		concrete_exp[] = {
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}}
			};
		int_concrete_exp[] = {
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}}
			};
		pavement_exp[] = {
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}}
			};
		int_pavement_exp[] = {
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}}
			};
		stones_exp[] = {
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}}
			};
		int_solidwood_exp[] = {
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}}
			};
		softwood_exp[] = {
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}}
			};
		int_softwood_exp[] = {
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}}
			};
		steel_exp[] = {
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}}
			};
		metalplate_exp[] = {
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}}
			};
		int_metalplate_exp[] = {
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}}
			};
		metalplatepressed_exp[] = {
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}}
			};
		wavymetal_exp[] = {
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}}
			};
		gridmetal_exp[] = {
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}}
			};
		int_carpet_exp[] = {
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}}
			};
		int_mat_exp[] = {
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}}
			};
		mud_exp[] = {
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}}
			};
		mud[] = {
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}}
			};
		straw_exp[] = {
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}}
			};
		lino_exp[] = {
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}}
			};
		int_lino_exp[] = {
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}}
			};
		rooftiles_exp[] = {
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}}
			};
		gravel_exp[] = {
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}}
			};
		dirt_exp[] = {
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}}
			};
		asphalt_exp[] = {
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}}
			};
		water_exp[] = {
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}}
			};
		grass_exp[] = {
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}}
			};
		grasstall_exp[] = {
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}}
			};
		sand_exp[] = {
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}}
			};
		seabed_exp[] = {
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}}
			};
		forest_exp[] = {
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}}
			};
		forest[] = {
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"walk", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"run", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS1.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS2.wss", db-300, 0.5, 3000}},
				{"sprint", {"FU_Events\data\scp\sfx\FU_SCP_093_FS3.wss", db-300, 0.5, 3000}}
			};
	};
};

class FU_Tripod_Collider: Static {
	scope = 1;							// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).

	displayname = "Tripod - Collider";
	model = "\FU_Events\data\aliens\models\FU_Tripod_Collider.p3d";
	editorPreview = "";
	editorCategory = "FU_Objects";

	hiddenSelections[] = {""};
	hiddenSelectionsTextures[] = {""};
};