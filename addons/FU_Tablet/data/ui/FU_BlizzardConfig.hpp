class RscTitles {
	class FU_BlizzardMask {
		idd = 4900;
		fadein = 0;
		fadeout = 0;
		duration = 1e+011;
		onLoad = "uinamespace setVariable ['FU_BlizzardMask', _this select 0]";
		onUnLoad = "uinamespace setVariable ['FU_BlizzardMask', nil]";
		
		class Controls {
			class Mask: RscPicture
			{
				idc = 1200;
				text = "FU_Modules\data\Images\Mask.paa";
				x =  safezoneX;
				y = safezoneY;
				w = safeZoneW;
				h = safeZoneH;
			};
		};
	};


	class FU_BlizzardHUD {
		idd = 4800;
		fadein = 2;
		fadeout = 2;
		duration = 1e+011;
		onLoad = "uinamespace setVariable ['FU_BlizzardHUD', _this select 0]";
		onUnLoad = "uinamespace setVariable ['FU_BlizzardHUD', nil]";

		class Controls {
			class Frost_BG: IGUIBack
			{
				idc = 2200;
				x = 0.711459 * safezoneW + safezoneX;
				y = 0.012 * safezoneH + safezoneY;
				w = 0.103151 * safezoneW;
				h = 0.07 * safezoneH;
			};
			class Status_BG: IGUIBack
			{
				idc = 2201;
				x = 0.639255 * safezoneW + safezoneX;
				y = 0.012 * safezoneH + safezoneY;
				w = 0.067048 * safezoneW;
				h = 0.07 * safezoneH;
			};
			class Status_L: RscPicture
			{
				idc = 1201;
				text = "#(argb,8,8,3)color(1,1,1,1)";
				x = 0.644411 * safezoneW + safezoneX;
				y = 0.027 * safezoneH + safezoneY;
				w = 0.0257877 * safezoneW;
				h = 0.044 * safezoneH;
			};
			class Status_R: RscPicture
			{
				idc = 1204;
				text = "#(argb,8,8,3)color(1,1,1,1)";
				x = 0.675357 * safezoneW + safezoneX;
				y = 0.027 * safezoneH + safezoneY;
				w = 0.0257877 * safezoneW;
				h = 0.044 * safezoneH;
			};
			class FrostBar_B: RscPicture
			{
				idc = 1202;
				text = "#(argb,8,8,3)color(0.2,0.2,0.2,1)";
				x = 0.716617 * safezoneW + safezoneX;
				y = 0.049 * safezoneH + safezoneY;
				w = 0.0928357 * safezoneW;
				h = 0.022 * safezoneH;
			};
			class FrostBar_F: RscPicture
			{
				idc = 1203;
				text = "#(argb,8,8,3)color(1,1,1,1)";
				x = 0.716617 * safezoneW + safezoneX;
				y = 0.049 * safezoneH + safezoneY;
				w = 0.0928357 * safezoneW;
				h = 0.022 * safezoneH;
			};
			class FrostText: RscText
			{
				idc = 1000;
				text = "Frost Level:"; //--- ToDo: Localize;
				x = 0.713021 * safezoneW + safezoneX;
				y = 0.016 * safezoneH + safezoneY;
				w = 0.0964313 * safezoneW;
				h = 0.033 * safezoneH;
			};
		};
	};

	class Default 
	{
		idd = -1;
		fadein = 0;
		fadeout = 0;
		duration = 0;
	};
};

class FU_InitBlizzardZeus {
	idd = 5000;
	
	class Controls {
		class BG1: IGUIBack {
			idc = 4610;
			x = 0.376219 * safezoneW + safezoneX;
			y = 0.401 * safezoneH + safezoneY;
			w = 0.247562 * safezoneW;
			h = 0.33 * safezoneH;
		};
		
		class BG2: IGUIBack {
			idc = 4611;

			x = 0.376219 * safezoneW + safezoneX;
			y = 0.357 * safezoneH + safezoneY;
			w = 0.2475 * safezoneW;
			h = 0.033 * safezoneH;
		};
		
		class Title: RscStructuredText
		{
			idc = 4612;
			text = "<t size=""1.5"">Blizzard Initialization</t>"; //--- ToDo: Localize;
			x = 0.376251 * safezoneW + safezoneX;
			y = 0.357 * safezoneH + safezoneY;
			w = 0.2475 * safezoneW;
			h = 0.033 * safezoneH;
		};
		
		class Name: RscText
		{
			idc = 4613;

			text = "Choose a side:"; //--- ToDo: Localize;
			x = 0.381377 * safezoneW + safezoneX;
			y = 0.654 * safezoneH + safezoneY;
			w = 0.0928357 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class NameText: RscCombo
		{
			idc = 4614;

			x = 0.386534 * safezoneW + safezoneX;
			y = 0.687 * safezoneH + safezoneY;
			w = 0.226932 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,0.5};
			tooltip = "Side choice."; //--- ToDo: Localize;
		};
		class ConfirmButton: RscButton
		{
			idc = 4621;
			colorDisabled[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.7])"};
			colorBackgroundDisabled[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.7])"};
			colorBackgroundActive[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_A',1])"};

			text = "Confirm"; //--- ToDo: Localize;
			x = 0.432952 * safezoneW + safezoneX;
			y = 0.742 * safezoneH + safezoneY;
			w = 0.12375 * safezoneW;
			h = 0.033 * safezoneH;
			colorBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.9])"};
			tooltip = "Confirm the side"; //--- ToDo: Localize;
		};
		class OperationNameText: RscText
		{
			idc = 4622;

			text = "Operation Name:"; //--- ToDo: Localize;
			x = 0.381377 * safezoneW + safezoneX;
			y = 0.423 * safezoneH + safezoneY;
			w = 0.0928357 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class AuthorText: RscText
		{
			idc = 4623;

			text = "Author:"; //--- ToDo: Localize;
			x = 0.381377 * safezoneW + safezoneX;
			y = 0.5 * safezoneH + safezoneY;
			w = 0.0928357 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class OperationName: RscEdit
		{
			idc = 4624;
			text = "Operation: OP-NAME";
			x = 0.386534 * safezoneW + safezoneX;
			y = 0.456 * safezoneH + safezoneY;
			w = 0.226932 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,0.5};
			tooltip = "Name of the operation (eg. Operation: Thunderstorm)."; //--- ToDo: Localize;
		};
		class Author: RscEdit
		{
			idc = 4625;
			text = "FU MEMBER";
			x = 0.386534 * safezoneW + safezoneX;
			y = 0.533 * safezoneH + safezoneY;
			w = 0.226932 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,0.5};
			tooltip = "Name of the author."; //--- ToDo: Localize;
		};
		class RespawnDelayText: RscText
		{
			idc = 4626;

			text = "Respawn Delay:"; //--- ToDo: Localize;
			x = 0.381377 * safezoneW + safezoneX;
			y = 0.577 * safezoneH + safezoneY;
			w = 0.0928357 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RespawnDelay: RscEdit
		{
			idc = 4627;
			text = "90";
			x = 0.386534 * safezoneW + safezoneX;
			y = 0.61 * safezoneH + safezoneY;
			w = 0.226932 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,0.5};
			tooltip = "How much time you need to respawn in seconds."; //--- ToDo: Localize;
		};
	};
};