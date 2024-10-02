params [["_type", "RIF"]]; //RIF, MED, SPC

private _selectedObjects = get3DENSelected "object";
private _selectedUnits = _selectedObjects select {_x isKindOf "Man"};

if(count _selectedUnits > 0) then {
	//Go through each unit
	{
		private _unit = _x;

	
		//Default items
		private _uniform = [
			["ACE_elasticBandage",15],
			["ACE_CableTie",2],
			["ACE_epinephrine",2],
			["ACE_morphine",2],
			["ACE_adenosine",2],
			["ACE_splint",2],
			["ACE_tourniquet",4],
			["ACE_MapTools",1],
			["ACE_Flashlight_XL50",1],
			["SmokeShellBlue",1]
		];
		private _vest = [
			["HandGrenade",1],
			["SmokeShell",2]
		];
		private _backpack = [
			["ACE_EntrenchingTool",1]
		];
		private _linked = ["ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","ItemWatch"];

		
		//Find all mags
		private _primaryMags = primaryWeaponMagazine _unit;
		private _handgunMags = handgunMagazine _unit;
		private _secondaryMags = secondaryWeaponMagazine _unit;


		//Current unit items
		private _uniformItems = uniformItems _unit;
		private _uniformMags = uniformMagazines _unit;

		private _vestItems = vestItems _unit;
		private _vestMags = vestMagazines _unit;

		private _backpackItems = backpackItems _unit;
		private _backpackMags = backpackMagazines _unit;


		//Assign magazines
		_vest pushBack [_handgunMags # 0, 1];
		_vest pushBack [_primaryMags # 0, 10];


		//Assign items to backpack
		switch (_type) do {
			case "MED": {
				_backpack = [["ACE_EntrenchingTool",1],["ACE_elasticBandage",70],["ACE_bloodIV",5],["ACE_bloodIV_500",10],["ACE_adenosine",15],["ACE_epinephrine",15],["ACE_morphine",15],["ACE_splint",20],["ACE_tourniquet",10]];
				_unit set3DENAttribute ["ace_isMedic", 2];
			};
			case "AT": {
				_backpack pushBack [_secondaryMags # 0, 2];

				if(count _secondaryMags >= 2) then {
					_backpack pushBack [_secondaryMags # 1, 3];
				};
			};
			case "MG": {
				_backpack pushBack [_primaryMags # 0, 3];
			};
			case "ENG": {
				_backpack = [["ACE_EntrenchingTool",1],["ToolKit",1],["MineDetector",1]];
				_unit set3DENAttribute ["ace_isEngineer", 2];
			};
			default {
				if(count _primaryMags >= 2) then {
					_backpack pushBack [_primaryMags # 1, 20];
				};
			};
		};


		//Remove all items from unit
		{
			_unit removeItemFromUniform _x;
		}foreach (_uniformItems + _uniformMags);
		
		{
			_unit removeItemFromVest _x;
		}foreach  (_vestItems + _vestMags);

		{
			_unit removeItemFromBackpack _x;
		}foreach  (_backpackItems + _backpackMags);


		//Add items to unit
		{
			private _item = _x # 0;
			private _count = _x # 1;

			for "_i" from 1 to _count do {
				_unit addItemToUniform _item;
			}
		}foreach _uniform;

		{
			private _item = _x # 0;
			private _count = _x # 1;

			for "_i" from 1 to _count do {
				_unit addItemToVest _item;
			}
		}foreach _vest;

		{
			private _item = _x # 0;
			private _count = _x # 1;

			for "_i" from 1 to _count do {
				_unit addItemToBackpack _item;
			}
		}foreach _backpack;

		{
			_unit linkItem _x;
		}foreach _linked;

		save3DENInventory [_unit];
	}foreach _selectedUnits;
} else {
	["There are no Human units selected!"] call BIS_fnc_error;
};