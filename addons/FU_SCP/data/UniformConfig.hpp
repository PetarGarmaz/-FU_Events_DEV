class FU_SCP_2191_1_Uniform: Uniform_Base {
	scope = 2;
	displayName="SCP-2191-1";
	picture="\FU_SCP\data\renders\FU_SCP_2191_1_Uniform_Render.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
	hiddenSelections[]={};
	hiddenSelectionsTextures[]={};
	
	class ItemInfo: ItemInfo {
		uniformModel="-";
		uniformClass="FU_SCP_2191_1";
		containerClass="Supply500";
		mass = 100;
		type = 801;
	};
};

class FU_SCP_093_Uniform: Uniform_Base {
	scope = 1;
	displayName="SCP 093 Uniform";
	picture="\FU_SCP\data\renders\FU_SCP_093_Render.jpg";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
	hiddenSelections[]={};
	hiddenSelectionsTextures[]={};
	
	class ItemInfo: ItemInfo {
		uniformModel="-";
		uniformClass="FU_SCP_093_UncleanOne";
		containerClass="Supply500";
		mass = 100;
		type = 801;
	};
};

class FU_Skeleton_Boss_Uniform: Uniform_Base {
	scope = 1;
	displayName="Skeleton Boss Uniform";
	picture="\FU_SCP\data\renders\FU_SCP_093_Render.jpg";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
	hiddenSelections[]={};
	hiddenSelectionsTextures[]={};
	
	class ItemInfo: ItemInfo {
		uniformModel="-";
		uniformClass="FU_Skeleton_Boss";
		containerClass="Supply500";
		mass = 100;
		type = 801;
	};
};

class FU_SCP_610_A_Uniform: Uniform_Base {
	scope = 1;
	displayName="SCP 610 A Uniform";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
	hiddenSelections[]={};
	hiddenSelectionsTextures[]={};
	
	class ItemInfo: ItemInfo {
		uniformModel="-";
		uniformClass="FU_SCP_610_A";
		containerClass="Supply500";
		mass = 100;
		type = 801;
	};
};

class FU_Tentacle_Big_Uniform: Uniform_Base {
	scope = 1;
	displayName="Tentacle Anomaly (Big)";
	picture="\FU_SCP\data\renders\FU_SCP_093_Render.jpg";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
	hiddenSelections[]={};
	hiddenSelectionsTextures[]={};
	
	class ItemInfo: ItemInfo {
		uniformModel="-";
		uniformClass="FU_Tentacle_Big";
		containerClass="Supply500";
		mass = 100;
		type = 801;
	};
};

class FU_SCP_093_BlackMan_Uniform: Uniform_Base {
	scope = 1;
	displayName="SCP 093 Black Man Uniform";
	picture="\FU_SCP\data\renders\FU_SCP_093_Render.jpg";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
	hiddenSelections[]={};
	hiddenSelectionsTextures[]={};
	
	class ItemInfo: ItemInfo {
		uniformModel="-";
		uniformClass="FU_SCP_093_BlackMan";
		containerClass="Supply500";
		mass = 100;
		type = 801;
	};
};

class FU_SCP_InvisibleMan_Uniform: Uniform_Base {
	scope = 2;
	displayName="Invisibility Uniform";
	picture="";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
	hiddenSelections[]={};
	hiddenSelectionsTextures[]={};
	
	class ItemInfo: ItemInfo {
		uniformModel="-";
		uniformClass="FU_SCP_InvisibleMan";
		containerClass="Supply500";
		mass = 100;
		type = 801;
	};
};

class FU_SCP_Skeleton_Uniform: Uniform_Base {
	author = "Bizo";
	scope = 2;
	displayName = "SCP Skeleton Uniform";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
	picture = "\A3\characters_f\data\ui\icon_U_C_Poor_1_ca.paa";
	hiddenSelections[] = {"camo1"};
	hiddenSelectionsTextures[] = {"\FU_SCP\data\textures\FU_Skeleton_CO.paa"};
	
	class ItemInfo: UniformItem {
		uniformModel = "-";
		uniformClass = "FU_SCP_Skeleton";
		containerClass = "Supply40";
		mass = 40;
	};
};

class FU_SCP_Skeleton_Base_Uniform: Uniform_Base {
	author = "Bizo";
	scope = 2;
	displayName = "SCP Clean Skeleton Uniform";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
	picture = "\A3\characters_f\data\ui\icon_U_C_Poor_1_ca.paa";
	hiddenSelections[] = {"camo1"};
	hiddenSelectionsTextures[] = {"\FU_SCP\data\textures\FU_Skeleton_Base_CO.paa"};
	
	class ItemInfo: UniformItem {
		uniformModel = "-";
		uniformClass = "FU_SCP_Skeleton_Clean";
		containerClass = "Supply40";
		mass = 40;
	};
};

class FU_SCP_DClass_Uniform: Uniform_Base {
	author = "Bizo";
	scope = 2;
	displayName = "D-Class Prisoner Uniform";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
	picture = "\A3\characters_f\data\ui\icon_U_C_Poor_1_ca.paa";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\FU_SCP\data\textures\FU_SCP_DClass_Uniform.paa"};
	
	class ItemInfo: UniformItem {
		uniformModel = "-";
		uniformClass = "FU_SCP_DClass";
		containerClass = "Supply40";
		mass = 40;
	};
};

class FU_SCP_3000_Uniform: Uniform_Base {
	author = "Bizo";
	scope = 1;
	displayName = "SCP 3000 Uniform";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
	picture = "\A3\characters_f\data\ui\icon_U_C_Poor_1_ca.paa";
	hiddenSelections[] = {};
	hiddenSelectionsTextures[] = {};
	
	class ItemInfo: UniformItem {
		uniformModel = "-";
		uniformClass = "FU_SCP_3000";
		containerClass = "Supply40";
		mass = 40;
	};
};