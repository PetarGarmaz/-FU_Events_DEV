private _fullFreeze = missionNamespace getVariable "FU_BlizzardTimeToFreeze";
private _fullDereeze = missionNamespace getVariable "FU_BlizzardTimeToDefreeze";
private _weaponFiringHandler = 0;
private _animationChangedHandler = 0;


while {true} do {
	if(player getVariable "FU_BlizzardFrost" < 1) then {
		if(missionNamespace getVariable "FU_Blizzard" && player getVariable "FU_BlizzardProtection" == "NO" || missionNamespace getVariable "FU_Blizzard" && player getVariable "FU_BlizzardProtection" == "STABLE") then {
			private _frost = player getVariable "FU_BlizzardFrost";
			_frost = _frost + 1 / _fullFreeze;
			player setVariable ["FU_BlizzardFrost", _frost, true];
		};
	};
	
	if(player getVariable "FU_BlizzardFrost" > 0) then {
		if(!(missionNamespace getVariable "FU_Blizzard") || player getVariable "FU_BlizzardProtection" == "YES" || player getVariable "FU_BlizzardProtection" == "VEHICLE") then {
			private _frost = player getVariable "FU_BlizzardFrost";
			_frost = _frost - 1 / _fullDereeze;
			player setVariable ["FU_BlizzardFrost", _frost, true];
		};
	};	
	
	if(player getVariable "FU_BlizzardFrost" >= 1 && !(player getVariable "FU_BlizzardFreezing")) then {
		"FU_BlizzardHint" cutText ["Brrrrrrrhhhh, I-I-I-I'm freee-eee-ezing. I'v-v-v-ve become c-c-combat in-n-neffective.", "PLAIN DOWN", 5, true, false];
	
		//Prevent weapon switching
		[] spawn {
			player action ["SwitchWeapon", player, player, 1];
			player playActionNow "GestureAgonyCargo";
			player setVariable ["FU_BlizzardFreezing", true, true];

			private _weapon = currentWeapon player;
					
			while {player getVariable "FU_BlizzardFreezing"} do {
				if(currentWeapon player != _weapon) then {
					player action ["SwitchWeapon", player, player, 1];
					player playActionNow "GestureAgonyCargo";
				};
			};
		};
		
		_weaponFiringHandler = player addEventHandler ["Fired", {
			params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_gunner"];
			player action ["SwitchWeapon", player, player, 1];
			player playActionNow "GestureAgonyCargo";
		}];
		
		_animationChangedHandler = player addEventHandler ["AnimChanged", {
			params ["_unit", "_anim"];
			player action ["SwitchWeapon", player, player, 1];
			player playActionNow "GestureAgonyCargo";
		}];
	};
	
	if(player getVariable "FU_BlizzardFrost" < 0.95 && player getVariable "FU_BlizzardFreezing") then {
		"FU_BlizzardHint" cutText ["I've thawed out. I'm now once again combat effective.", "PLAIN DOWN", 5, true, false];
	
		player removeEventHandler ["Fired", _weaponFiringHandler];
		player removeEventHandler ["AnimChanged", _animationChangedHandler];
		
		player setVariable ["FU_BlizzardFreezing", false, true];
		player playActionNow "gestureNo";
	};

	sleep 1;
};