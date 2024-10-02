#include "BIS_AddonInfo.hpp"
#include "basicdefines_A3.hpp"

class CfgPatches {
	class FU_Misc {
		name="FU Misc";
		Author="Bizo";
		units[]= {
			"FU_Mountain", "FU_O_Plane_CAS_02", "FU_Cliff"	
		};
		weapons[]= {"ace_xm157_prototype", "FU_Beret_Armored", "FU_Beret"};
		requiredAddons[]= {"FU_Events", "ace_xm157"};
	};
};

class CfgVehicles {
	class Static;
	class Plane_CAS_02_dynamicLoadout_base_F;

	class FU_O_Plane_CAS_02 : Plane_CAS_02_dynamicLoadout_base_F {
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_Plane_CAS_02_dynamicLoadout_F.jpg";
		_generalMacro = "O_Plane_CAS_02_dynamicLoadout_F";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		side = 0;
		faction = "OPF_R_F";
		crew = "O_Fighter_Pilot_F";
		typicalCargo[] = {"O_Fighter_Pilot_F"};
		availableForSupportTypes[] = {"CAS_Bombing"};
		hiddenSelectionsTextures[]= {
			"\FU_Misc\data\textures\Fighter02_ext01_CO.paa",
			"\FU_Misc\data\textures\Fighter02_ext02_CO.paa"
		};
	};

	class FU_Mountain: Static {
		scope = 2;
		scopeCurator = 2;

		displayname = "Mountain";
		editorCategory = "FU_Objects";
		model = "\FU_Misc\data\models\FU_Mountain.p3d";

		hiddenSelections[] = {""};
		hiddenSelectionsTextures[] = {""};
	};
	
	class FU_Cliff: Static {
		scope = 2;
		scopeCurator = 2;

		displayname = "Cliff";
		editorCategory = "FU_Objects";
		model = "\FU_Misc\data\models\FU_Cliff.p3d";

		hiddenSelections[] = {""};
		hiddenSelectionsTextures[] = {""};
	};
};

class CfgWeapons {
	class ItemCore;
	class InventoryItem_Base_F;
	class InventoryOpticsItem_Base_F;
	class ace_xm157_prototype: ItemCore	{
		scope = 2;
		scopeArsenal = 2;
	};
	class H_Beret_02: ItemCore {
		class ItemInfo;
	};

	class FU_Beret: H_Beret_02 {
		author = "Bizo";
		displayName = "Beret [FU]";

		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;

		picture = "\A3\characters_f_EPB\BLUFOR\Data\UI\icon_H_beret02_ca.paa";
		model = "\A3\Characters_F_EPB\BLUFOR\headgear_beret02";
		hiddenSelectionsTextures[] = {"\FU_Misc\data\textures\FU_Beret.paa"};
		
		class ItemInfo: ItemInfo {
			mass = 6;
			allowedSlots[] = {801,901,701,605};
			uniformModel = "\A3\Characters_F_EPB\BLUFOR\headgear_beret02";
			modelSides[] = {6};
		};
	};

	class FU_Beret_Armored: H_Beret_02 {
		author = "Bizo";
		displayName = "Beret Armored [FU]";

		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		
		picture = "\A3\characters_f_EPB\BLUFOR\Data\UI\icon_H_beret02_ca.paa";
		model = "\A3\Characters_F_EPB\BLUFOR\headgear_beret02";
		hiddenSelectionsTextures[] = {"\FU_Misc\data\textures\FU_Beret.paa"};

		class ItemInfo: ItemInfo {
			mass = 50;
			allowedSlots[] = {801,901,701,605};
			uniformModel = "\A3\Characters_F_EPB\BLUFOR\headgear_beret02";
			modelSides[] = {6};

			class Head {
				HitpointName = "HitHead";
				armor = 10;
				passThrough = 0.4;
			};
		};
	};
};