class FU_A_Uniform: Uniform_Base {
	scope = 2;
	displayName="FUA Combat Uniform";
	picture="\FU_Events\data\aliens\renders\FU_A_Uniform_Render.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
	hiddenSelections[]={};
	hiddenSelectionsTextures[]={};
	
	class ItemInfo: ItemInfo {
		uniformModel="-";
		uniformClass="FU_A_Soldier_base";
		containerClass="Supply500";
		mass = 100;
		type = 801;
	};
};

class FU_Tripod_Uniform: Uniform_Base {
	scope = 1;
	displayName="FU_Tripod_Uniform";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
	hiddenSelections[]={};
	hiddenSelectionsTextures[]={};
	
	class ItemInfo: ItemInfo {
		uniformModel="-";
		uniformClass="FU_Tripod";
		containerClass="Supply500";
		mass = 100;
		type = 801;
	};
};