class FU_SquadComposition {
	idd = 4800;
	
	class Controls {
		class BG1: IGUIBack
		{
			idc = 4801;

			x = 0.376219 * safezoneW + safezoneX;
			y = 0.28 * safezoneH + safezoneY;
			w = 0.247562 * safezoneW;
			h = 0.55 * safezoneH;

			colorBackground[] = {0,0,0,0.5};
		};
		class BG2: IGUIBack
		{
			idc = 4802;

			x = 0.376219 * safezoneW + safezoneX;
			y = 0.225 * safezoneH + safezoneY;
			w = 0.2475 * safezoneW;
			h = 0.033 * safezoneH;

			colorBackground[] = {0,0,0,0.5};
		};
		class Title: RscStructuredText
		{
			idc = 4803;

			text = "<t size=""1.5"">Squad Composition Setup</t>"; //--- ToDo: Localize;
			x = 0.376219 * safezoneW + safezoneX;
			y = 0.225 * safezoneH + safezoneY;
			w = 0.2475 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class RscText_1000: RscText
		{
			idc = 4804;

			text = "Select a Squad Leader Unit:"; //--- ToDo: Localize;
			x = 0.381377 * safezoneW + safezoneX;
			y = 0.368 * safezoneH + safezoneY;
			w = 0.113466 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class SL: RscCombo
		{
			idc = 4805;

			x = 0.386534 * safezoneW + safezoneX;
			y = 0.401 * safezoneH + safezoneY;
			w = 0.226932 * safezoneW;
			h = 0.022 * safezoneH;
			colorDisabled[] = {0,0,0,0.8};
			colorBackground[] = {0,0,0,0.8};
			colorBackgroundDisabled[] = {0,0,0,0.3};
			colorBackgroundActive[] = {0,0,0,0.3};
		};
		class ConfirmButton: RscButton
		{
			idc = 4806;
			colorDisabled[] = {0,0,0,0.5};
			colorBackground[] = {0,0,0,0.5};
			colorBackgroundDisabled[] = {0,0,0,0.3};
			colorBackgroundActive[] = {0,0,0,0.3};

			text = "Confirm"; //--- ToDo: Localize;
			x = 0.432952 * safezoneW + safezoneX;
			y = 0.852 * safezoneH + safezoneY;
			w = 0.12375 * safezoneW;
			h = 0.033 * safezoneH;
			tooltip = "Confirm the composition"; //--- ToDo: Localize;
		};
		class RscText_1001: RscText
		{
			idc = 4807;

			text = "Select Faction:"; //--- ToDo: Localize;
			x = 0.381377 * safezoneW + safezoneX;
			y = 0.291 * safezoneH + safezoneY;
			w = 0.0928357 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class Faction: RscCombo
		{
			idc = 4808;

			x = 0.386534 * safezoneW + safezoneX;
			y = 0.324 * safezoneH + safezoneY;
			w = 0.226932 * safezoneW;
			h = 0.022 * safezoneH;
			colorDisabled[] = {0,0,0,0.8};
			colorBackground[] = {0,0,0,0.8};
			colorBackgroundDisabled[] = {0,0,0,0.3};
			colorBackgroundActive[] = {0,0,0,0.3};
			tooltip = "Select a faction. The faction's side is displayed in square brackets, example: [WEST] NATO Pacific, [EAST] Spetsnaz"; //--- ToDo: Localize;
		};
		class RscText_1002: RscText
		{
			idc = 4809;

			text = "Select a Medic Unit:"; //--- ToDo: Localize;
			x = 0.381377 * safezoneW + safezoneX;
			y = 0.445 * safezoneH + safezoneY;
			w = 0.113466 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class Medic: RscCombo
		{
			idc = 4810;

			x = 0.386534 * safezoneW + safezoneX;
			y = 0.478 * safezoneH + safezoneY;
			w = 0.226932 * safezoneW;
			h = 0.022 * safezoneH;
			colorDisabled[] = {0,0,0,0.8};
			colorBackground[] = {0,0,0,0.8};
			colorBackgroundDisabled[] = {0,0,0,0.3};
			colorBackgroundActive[] = {0,0,0,0.3};
		};
		class RscText_1003: RscText
		{
			idc = 4811;

			text = "Select a Rifleman Unit:"; //--- ToDo: Localize;
			x = 0.381377 * safezoneW + safezoneX;
			y = 0.522 * safezoneH + safezoneY;
			w = 0.113466 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class Rifleman: RscCombo
		{
			idc = 4812;

			x = 0.386534 * safezoneW + safezoneX;
			y = 0.555 * safezoneH + safezoneY;
			w = 0.226932 * safezoneW;
			h = 0.022 * safezoneH;
			colorDisabled[] = {0,0,0,0.8};
			colorBackground[] = {0,0,0,0.8};
			colorBackgroundDisabled[] = {0,0,0,0.3};
			colorBackgroundActive[] = {0,0,0,0.3};
		};
		class RscText_1004: RscText
		{
			idc = 4813;

			text = "Select a Member of FIRETEAM 1:"; //--- ToDo: Localize;
			x = 0.381377 * safezoneW + safezoneX;
			y = 0.599 * safezoneH + safezoneY;
			w = 0.123781 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class FT1: RscCombo
		{
			idc = 4814;

			x = 0.386534 * safezoneW + safezoneX;
			y = 0.632 * safezoneH + safezoneY;
			w = 0.226932 * safezoneW;
			h = 0.022 * safezoneH;
			colorDisabled[] = {0,0,0,0.8};
			colorBackground[] = {0,0,0,0.8};
			colorBackgroundDisabled[] = {0,0,0,0.3};
			colorBackgroundActive[] = {0,0,0,0.3};
			tooltip = "This is the member of the FIRETEAM 1. The squad composition usually entails a full squad of 12 men, which is split up into 3 fireteams."; //--- ToDo: Localize;
		};
		class RscText_1005: RscText
		{
			idc = 4815;

			text = "Select a Member of FIRETEAM 2:"; //--- ToDo: Localize;
			x = 0.381377 * safezoneW + safezoneX;
			y = 0.676 * safezoneH + safezoneY;
			w = 0.175356 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class FT2: RscCombo
		{
			idc = 4816;

			x = 0.386534 * safezoneW + safezoneX;
			y = 0.709 * safezoneH + safezoneY;
			w = 0.226932 * safezoneW;
			h = 0.022 * safezoneH;
			colorDisabled[] = {0,0,0,0.8};
			colorBackground[] = {0,0,0,0.8};
			colorBackgroundDisabled[] = {0,0,0,0.3};
			colorBackgroundActive[] = {0,0,0,0.3};
			tooltip = "This is the member of the FIRETEAM 2. The squad composition usually entails a full squad of 12 men, which is split up into 3 fireteams."; //--- ToDo: Localize;
		};
		class RscText_1006: RscText
		{
			idc = 4817;

			text = "Select a Member of FIRETEAM 3:"; //--- ToDo: Localize;
			x = 0.381377 * safezoneW + safezoneX;
			y = 0.753 * safezoneH + safezoneY;
			w = 0.175356 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class FT3: RscCombo
		{
			idc = 4818;

			x = 0.386534 * safezoneW + safezoneX;
			y = 0.786 * safezoneH + safezoneY;
			w = 0.226932 * safezoneW;
			h = 0.022 * safezoneH;
			colorDisabled[] = {0,0,0,0.8};
			colorBackground[] = {0,0,0,0.8};
			colorBackgroundDisabled[] = {0,0,0,0.3};
			colorBackgroundActive[] = {0,0,0,0.3};
			tooltip = "This is the member of the FIRETEAM 3. The squad composition usually entails a full squad of 12 men, which is split up into 3 fireteams."; //--- ToDo: Localize;
		};
			
	}
};

class FU_VehComposition {
	idd = 4900;
	
	class Controls {
		class BG1: IGUIBack
		{
			idc = 4801;

			x = 0.376219 * safezoneW + safezoneX;
			y = 0.28 * safezoneH + safezoneY;
			w = 0.247562 * safezoneW;
			h = 0.55 * safezoneH;

			colorBackground[] = {0,0,0,0.5};
		};
		class BG2: IGUIBack
		{
			idc = 4802;

			x = 0.376219 * safezoneW + safezoneX;
			y = 0.225 * safezoneH + safezoneY;
			w = 0.2475 * safezoneW;
			h = 0.033 * safezoneH;

			colorBackground[] = {0,0,0,0.5};
		};
		class Title: RscStructuredText
		{
			idc = 4803;

			text = "<t size=""1.5"">Vehicle Composition Setup</t>"; //--- ToDo: Localize;
			x = 0.376219 * safezoneW + safezoneX;
			y = 0.225 * safezoneH + safezoneY;
			w = 0.2475 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class RscText_1000: RscText
		{
			idc = 4804;

			text = "Select an APC:"; //--- ToDo: Localize;
			x = 0.381377 * safezoneW + safezoneX;
			y = 0.368 * safezoneH + safezoneY;
			w = 0.113466 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class SL: RscCombo
		{
			idc = 4805;

			x = 0.386534 * safezoneW + safezoneX;
			y = 0.401 * safezoneH + safezoneY;
			w = 0.226932 * safezoneW;
			h = 0.022 * safezoneH;
			colorDisabled[] = {0,0,0,0.8};
			colorBackground[] = {0,0,0,0.8};
			colorBackgroundDisabled[] = {0,0,0,0.3};
			colorBackgroundActive[] = {0,0,0,0.3};
		};
		class ConfirmButton: RscButton
		{
			idc = 4806;
			colorDisabled[] = {0,0,0,0.8};
			colorBackground[] = {0,0,0,0.8};
			colorBackgroundDisabled[] = {0,0,0,0.3};
			colorBackgroundActive[] = {0,0,0,0.3};

			text = "Confirm"; //--- ToDo: Localize;
			x = 0.432952 * safezoneW + safezoneX;
			y = 0.852 * safezoneH + safezoneY;
			w = 0.12375 * safezoneW;
			h = 0.033 * safezoneH;
			tooltip = "Confirm the composition"; //--- ToDo: Localize;
		};
		class RscText_1001: RscText
		{
			idc = 4807;

			text = "Select a Car:"; //--- ToDo: Localize;
			x = 0.381377 * safezoneW + safezoneX;
			y = 0.291 * safezoneH + safezoneY;
			w = 0.0928357 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class Faction: RscCombo
		{
			idc = 4808;

			x = 0.386534 * safezoneW + safezoneX;
			y = 0.324 * safezoneH + safezoneY;
			w = 0.226932 * safezoneW;
			h = 0.022 * safezoneH;
			colorDisabled[] = {0,0,0,0.8};
			colorBackground[] = {0,0,0,0.8};
			colorBackgroundDisabled[] = {0,0,0,0.3};
			colorBackgroundActive[] = {0,0,0,0.3};
			tooltip = "Select a faction. The faction's side is displayed in square brackets, example: [WEST] NATO Pacific, [EAST] Spetsnaz"; //--- ToDo: Localize;
		};
		class RscText_1002: RscText
		{
			idc = 4809;

			text = "Select a Tank:"; //--- ToDo: Localize;
			x = 0.381377 * safezoneW + safezoneX;
			y = 0.445 * safezoneH + safezoneY;
			w = 0.113466 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class Medic: RscCombo
		{
			idc = 4810;

			x = 0.386534 * safezoneW + safezoneX;
			y = 0.478 * safezoneH + safezoneY;
			w = 0.226932 * safezoneW;
			h = 0.022 * safezoneH;
			colorDisabled[] = {0,0,0,0.8};
			colorBackground[] = {0,0,0,0.8};
			colorBackgroundDisabled[] = {0,0,0,0.3};
			colorBackgroundActive[] = {0,0,0,0.3};
		};
		class RscText_1003: RscText
		{
			idc = 4811;

			text = "Select a CAS Helicopter:"; //--- ToDo: Localize;
			x = 0.381377 * safezoneW + safezoneX;
			y = 0.522 * safezoneH + safezoneY;
			w = 0.113466 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class Rifleman: RscCombo
		{
			idc = 4812;

			x = 0.386534 * safezoneW + safezoneX;
			y = 0.555 * safezoneH + safezoneY;
			w = 0.226932 * safezoneW;
			h = 0.022 * safezoneH;
			colorDisabled[] = {0,0,0,0.8};
			colorBackground[] = {0,0,0,0.8};
			colorBackgroundDisabled[] = {0,0,0,0.3};
			colorBackgroundActive[] = {0,0,0,0.3};
		};
		class RscText_1004: RscText
		{
			idc = 4813;

			text = "Select a CAS Plane:"; //--- ToDo: Localize;
			x = 0.381377 * safezoneW + safezoneX;
			y = 0.599 * safezoneH + safezoneY;
			w = 0.123781 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class FT1: RscCombo
		{
			idc = 4814;

			x = 0.386534 * safezoneW + safezoneX;
			y = 0.632 * safezoneH + safezoneY;
			w = 0.226932 * safezoneW;
			h = 0.022 * safezoneH;
			colorDisabled[] = {0,0,0,0.8};
			colorBackground[] = {0,0,0,0.8};
			colorBackgroundDisabled[] = {0,0,0,0.3};
			colorBackgroundActive[] = {0,0,0,0.3};
			tooltip = "This is the member of the FIRETEAM 1. The squad composition usually entails a full squad of 12 men, which is split up into 3 fireteams."; //--- ToDo: Localize;
		};
		class RscText_1005: RscText
		{
			idc = 4815;

			text = "Select a Transport Truck:"; //--- ToDo: Localize;
			x = 0.381377 * safezoneW + safezoneX;
			y = 0.676 * safezoneH + safezoneY;
			w = 0.175356 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class FT2: RscCombo
		{
			idc = 4816;

			x = 0.386534 * safezoneW + safezoneX;
			y = 0.709 * safezoneH + safezoneY;
			w = 0.226932 * safezoneW;
			h = 0.022 * safezoneH;
			colorDisabled[] = {0,0,0,0.8};
			colorBackground[] = {0,0,0,0.8};
			colorBackgroundDisabled[] = {0,0,0,0.3};
			colorBackgroundActive[] = {0,0,0,0.3};
			tooltip = "This is the member of the FIRETEAM 2. The squad composition usually entails a full squad of 12 men, which is split up into 3 fireteams."; //--- ToDo: Localize;
		};
		class RscText_1006: RscText
		{
			idc = 4817;

			text = "Select a Transport Helicopter:"; //--- ToDo: Localize;
			x = 0.381377 * safezoneW + safezoneX;
			y = 0.753 * safezoneH + safezoneY;
			w = 0.175356 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class FT3: RscCombo
		{
			idc = 4818;

			x = 0.386534 * safezoneW + safezoneX;
			y = 0.786 * safezoneH + safezoneY;
			w = 0.226932 * safezoneW;
			h = 0.022 * safezoneH;
			colorDisabled[] = {0,0,0,0.8};
			colorBackground[] = {0,0,0,0.8};
			colorBackgroundDisabled[] = {0,0,0,0.3};
			colorBackgroundActive[] = {0,0,0,0.3};
			tooltip = "This is the member of the FIRETEAM 3. The squad composition usually entails a full squad of 12 men, which is split up into 3 fireteams."; //--- ToDo: Localize;
		};
			
	}
};