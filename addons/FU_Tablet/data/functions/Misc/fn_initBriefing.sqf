//Create briefing - Subject
player createDiarySubject ["FU_player_loadouts", "Squad Loadouts", "\A3\ui_f\data\igui\cfg\simpleTasks\types\rifle_ca.paa"];
_entry = player createDiaryRecord ["FU_player_loadouts", ["",""]];

private _netMode = [] call BIS_fnc_getNetMode;
if(_netMode == "SinglePlayer") exitWith {};

[_entry] spawn {
	params ["_entry"];

	//Create briefing entries
	while {true} do {
		private _diaryRecords = [];
		private _unitCount = count (call BIS_fnc_listPlayers);
		private _separator = "============================================";
		private _breakRow = "<br/>";

		{
			private _player = _x;
			private _index = _forEachIndex + 1;
			private _name = name _player;
			private _groupName = groupID (group _player);
			private _class = getText (configFile >> "CfgVehicles" >> typeOf _player >> "displayName");
			private _roleDesc = roleDescription _player;
			private _roleDescText = _roleDesc splitString ":@";

			if(count _roleDescText >= 2) then {_class = _roleDescText select 1;};
			
			private _primaryWeapon = primaryWeapon _player;
			private _secondaryWeapon = handgunWeapon _player;
			private _launcherWeapon = secondaryWeapon _player;
			
			private _primaryWeaponItems = primaryWeaponItems _player;
			private _secondaryWeaponItems = handgunItems _player;
			private _launcherWeaponItems = secondaryWeaponItems _player;

			private _primaryWeaponText = getText (configFile >> "CfgWeapons" >> _primaryWeapon >> "displayName");
			private _secondaryWeaponText = getText (configFile >> "CfgWeapons" >> _secondaryWeapon >> "displayName");
			private _launcherWeaponText = getText (configFile >> "CfgWeapons" >> _launcherWeapon >> "displayName");

			private _primaryWeaponPicture = getText (configFile >> "CfgWeapons" >> _primaryWeapon >> "picture");
			private _secondaryWeaponPicture = getText (configFile >> "CfgWeapons" >> _secondaryWeapon >> "picture");
			private _launcherWeaponPicture = getText (configFile >> "CfgWeapons" >> _launcherWeapon >> "picture");
			
			private _uniform = uniform _player;
			private _vest = vest _player;
			private _backpack = backpack _player;
			private _headgear = headgear _player;
			private _goggles = goggles _player;
			private _additionalItems = assignedItems _player;
			
			private _uniformName = getText (configFile >> "CfgWeapons" >> _uniform >> "displayName");
			private _vestName = getText (configFile >> "CfgWeapons" >> _vest >> "displayName");
			private _backpackName = getText (configFile >> "CfgWeapons" >> _backpack >> "displayName");
			
			private _uniformPic = getText (configFile >> "CfgWeapons" >> _uniform >> "picture");
			private _vestPic = getText (configFile >> "CfgWeapons" >> _vest >> "picture");
			private _backpackPic = getText (configFile >> "CfgVehicles" >> _backpack >> "picture");
			if(!(".paa" in _backpackPic)) then {_backpackPic = _backpackPic + ".paa";};
			private _headgearPic = getText (configFile >> "CfgWeapons" >> _headgear >> "picture");
			private _gogglesPic = getText (configFile >> "CfgGlasses" >> _goggles >> "picture");
			
			private _uniformItems = uniformItems _player;
			private _vestItems = vestItems _player;
			private _backpackItems = backpackItems _player;
			
			private _diaryText = format["<br/><br/><font size='18'>NAME: %1</font><br/><font size='18'>CLASS:%2</font><br/><font size='18'>GROUP: %3</font><br/><br/>", _name, _class, _groupName];
			_diaryText = _diaryText + _separator;
			_diaryText = _diaryText + _breakRow;
			
			//Sort uniform items
			private _itemsNew = [];
			{
				private _item = _x;
				private _itemCount = {_x == _item}count _uniformItems;
				_itemsNew pushBackUnique [_x, _itemCount];
			}foreach _uniformItems;
			_uniformItems = _itemsNew;
			
			//Sort vest items
			private _itemsNew = [];
			{
				private _item = _x;
				private _itemCount = {_x == _item}count _vestItems;
				_itemsNew pushBackUnique [_x, _itemCount];
			}foreach _vestItems;
			_vestItems = _itemsNew;
			
			//Sort backpack items
			private _itemsNew = [];
			{
				private _item = _x;
				private _itemCount = {_x == _item}count _backpackItems;
				_itemsNew pushBackUnique [_x, _itemCount];
			}foreach _backpackItems;
			_backpackItems = _itemsNew;

			//Primary Weapon Info
			if(_primaryWeapon != "") then {
				_diaryText = _diaryText + format["<font size='16'>Primary Weapon: %1</font><br/><img image='%2' width='250'/><br/>", _primaryWeaponText, _primaryWeaponPicture];
				
				{
					private _itemPic = getText (configFile >> "CfgWeapons" >> _x >> "picture");
					if(_itemPic == "") then {_itemPic = getText (configFile >> "CfgMagazines" >> _x >> "picture");};
					_diaryText = _diaryText + format["<img image='%1' width='50'/>", _itemPic];
					if((_forEachIndex + 1) % 5 == 0)then {_diaryText = _diaryText + _breakRow;}
				}foreach _primaryWeaponItems;
				
				_diaryText = _diaryText + _separator;
				_diaryText = _diaryText + _breakRow;
			};
			
			//Secondary Weapon Info
			if(_secondaryWeapon != "") then {
				_diaryText = _diaryText + format["<font size='16'>Secondary Weapon: %1</font><br/><img image='%2' width='250'/><br/>", _secondaryWeaponText, _secondaryWeaponPicture];
				
				{
					private _itemPic = getText (configFile >> "CfgWeapons" >> _x >> "picture");
					if(_itemPic == "") then {_itemPic = getText (configFile >> "CfgMagazines" >> _x >> "picture");};
					_diaryText = _diaryText + format["<img image='%1' width='50'/>", _itemPic];
					if((_forEachIndex + 1) % 5 == 0)then {_diaryText = _diaryText + _breakRow;}
				}foreach _secondaryWeaponItems;
				
				_diaryText = _diaryText + _separator;
				_diaryText = _diaryText + _breakRow;
			};
			
			//Launcher Weapon Info
			if(_launcherWeapon != "") then {
				_diaryText = _diaryText + format["<font size='16'>Tertiary Weapon: %1</font><br/><img image='%2' width='250'/><br/>", _launcherWeaponText, _launcherWeaponPicture];
				
				{
					private _itemPic = getText (configFile >> "CfgWeapons" >> _x >> "picture");
					if(_itemPic == "") then {_itemPic = getText (configFile >> "CfgMagazines" >> _x >> "picture");};
					_diaryText = _diaryText + format["<img image='%1' width='50'/>", _itemPic];
					if((_forEachIndex + 1) % 5 == 0)then {_diaryText = _diaryText + _breakRow;}
				}foreach _launcherWeaponItems;
				
				_diaryText = _diaryText + _separator;
				_diaryText = _diaryText + _breakRow;
			};
			
			//Equipment info
			_diaryText = _diaryText + "<font size='16'>Equipment:</font><br/>";
			
			{
				if(_x != "" && _x != ".paa") then {
					_diaryText = _diaryText + format["<img image='%1' width='62.5'/>", _x];
				};
			}foreach [_uniformPic, _vestPic, _backpackPic, _headgearPic];
			
			_diaryText = _diaryText + _breakRow;
			
			//Other equipment info
			{
				if(_x != "") then {
					private _pic =  getText (configFile >> "CfgWeapons" >> _x >> "picture");
					if(_pic == "") then {_pic = getText (configFile >> "CfgGlasses" >> _x >> "picture");};
					_diaryText = _diaryText + format["<img image='%1' width='62.5'/>", _pic];
					if((_forEachIndex + 1) % 4 == 0)then {_diaryText = _diaryText + _breakRow;}
				};
			}foreach (_additionalItems + [_goggles]);
			
			_diaryText = _diaryText + _breakRow;
			_diaryText = _diaryText + _separator;
			_diaryText = _diaryText + _breakRow;
			
			//Uniform info
			if(_uniform != "") then {
				_diaryText = _diaryText + "<font size='16'>Uniform Items:</font><br/>";
				{
					private _itemName = _x select 0;
					private _itemCount = _x select 1;
					private _itemPic = getText (configFile >> "CfgWeapons" >> _itemName >> "picture");
					if(_itemPic == "") then {_itemPic = getText (configFile >> "CfgMagazines" >> _itemName >> "picture");};
					
					_diaryText = _diaryText + format["<img image='%1' width='25'/>", _itemPic];
					_diaryText = _diaryText + format["<font size='15' valign='middle'> x %1</font>", _itemCount];
					
					for "_i" from 1 to (5 - count(str(_itemCount))) do {_diaryText = _diaryText + "  ";};
					
					if((_forEachIndex + 1) % 4 == 0)then {_diaryText = _diaryText + _breakRow;}
				}foreach _uniformItems;
				
				_diaryText = _diaryText + _breakRow;
				_diaryText = _diaryText + _separator;
				_diaryText = _diaryText + _breakRow;
			};
			
			//Vest info
			if(_vest != "") then {
				_diaryText = _diaryText + "<font size='16'>Vest Items:</font><br/>";
				{
					private _itemName = _x select 0;
					private _itemCount = _x select 1;
					private _itemPic = getText (configFile >> "CfgWeapons" >> _itemName >> "picture");
					if(_itemPic == "") then {_itemPic = getText (configFile >> "CfgMagazines" >> _itemName >> "picture");};
					
					_diaryText = _diaryText + format["<img image='%1' width='25'/>", _itemPic];
					_diaryText = _diaryText + format["<font size='15' valign='middle'> x %1</font>", _itemCount];
					
					for "_i" from 1 to (5 - count(str(_itemCount))) do {_diaryText = _diaryText + "  ";};
					
					if((_forEachIndex + 1) % 4 == 0)then {_diaryText = _diaryText + _breakRow;}
				}foreach _vestItems;
				
				_diaryText = _diaryText + _breakRow;
				_diaryText = _diaryText + _separator;
				_diaryText = _diaryText + _breakRow;
			};
			
			//Backpack info
			if(_backpack != "") then {
				_diaryText = _diaryText + "<font size='16'>Backpack Items:</font><br/>";
				{
					private _itemName = _x select 0;
					private _itemCount = _x select 1;
					private _itemPic = getText (configFile >> "CfgWeapons" >> _itemName >> "picture");
					if(_itemPic == "") then {_itemPic = getText (configFile >> "CfgMagazines" >> _itemName >> "picture");};
					
					_diaryText = _diaryText + format["<img image='%1' width='25'/>", _itemPic];
					_diaryText = _diaryText + format["<font size='15' valign='middle'> x %1</font>", _itemCount];
					
					for "_i" from 1 to (5 - count(str(_itemCount))) do {_diaryText = _diaryText + "  ";};
					
					if((_forEachIndex + 1) % 4 == 0)then {_diaryText = _diaryText + _breakRow;}
				}foreach _backpackItems;
				
				_diaryText = _diaryText + _breakRow;
				_diaryText = _diaryText + _separator;
				_diaryText = _diaryText + _breakRow;
			};

			_entry = player createDiaryRecord [
				"FU_player_loadouts", 
				[
					format["[%1]: %2", _index, _name],
					_diaryText
				]
			];
			
			_diaryRecords pushBack _entry;
		}foreach (call BIS_fnc_listPlayers);

		sleep 60;
		
		{
			player removeDiaryRecord ["FU_player_loadouts", _x];
		}foreach _diaryRecords;
	};
};