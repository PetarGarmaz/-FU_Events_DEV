while {true} do {
	private _nearestVehicle = (getPos player) nearEntities ["AllVehicles", 5];

	//Custom check for if players is inside or not
	private _pos = eyePos player;
	private _sides = [
		lineIntersects [_pos, [_pos select 0, _pos select 1, (_pos select 2) + 10], player],
		lineIntersects [_pos, [_pos select 0, (_pos select 1) + 10, _pos select 2], player],
		lineIntersects [_pos, [(_pos select 0) + 10, _pos select 1, _pos select 2], player],
		lineIntersects [_pos, [_pos select 0, (_pos select 1) - 10, _pos select 2], player],
		lineIntersects [_pos, [(_pos select 0) - 10, _pos select 1, _pos select 2], player]
	];// U, F, R, B, L
	private _inside = count(_sides select {_x});

	//For protection
	if(_inside < 2 || vehicle player == player || count _nearestVehicle <= 1) then {
		player setVariable ["FU_BlizzardSnowfall", true, true];
		player setVariable ["FU_BlizzardProtection", "NO", true];
		player setVariable ["FU_BlizzardTearing", true, true];
	};
	
	if(count _nearestVehicle > 1) then {
		player setVariable ["FU_BlizzardSnowfall", true, true];
		player setVariable ["FU_BlizzardProtection", "YES", true];
		player setVariable ["FU_BlizzardTearing", true, true];
	};
	
	if(_inside == 2) then {
		player setVariable ["FU_BlizzardSnowfall", true, true];
		player setVariable ["FU_BlizzardProtection", "YES", true];
		player setVariable ["FU_BlizzardTearing", false, true];		
	};

	if(_inside >= 3) then {
		player setVariable ["FU_BlizzardSnowfall", false, true];
		player setVariable ["FU_BlizzardProtection", "YES", true];
		player setVariable ["FU_BlizzardTearing", false, true];		
	};
	
	if(vehicle player != player) then {
		if(isTurnedOut player) then {
			player setVariable ["FU_BlizzardSnowfall", true, true];
			player setVariable ["FU_BlizzardProtection", "VEHICLE", true];
			player setVariable ["FU_BlizzardTearing", true, true];
		} else {
			player setVariable ["FU_BlizzardSnowfall", true, true];
			player setVariable ["FU_BlizzardProtection", "VEHICLE", true];
			player setVariable ["FU_BlizzardTearing", false, true];	
		};
	};
	
	sleep 1;
};