if(isServer) then {
	//Server side stuff
	FU_Stats = profileNamespace getVariable ["FU_Stats", []]; //Example structure: ["Bizo", [100, 2, 50, 200, 2, 90]]
	
	if(isNil "FU_Stats") then {
		profileNamespace setVariable ["FU_Stats", []];
	};

	

} else {
	//Client side stuff
	private _lifetime = 0;

	//Shots Fired
	player addEventHandler ["Fired", {
		params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_gunner"];
		
		[name _unit, 3, 1] remoteExec ["FU_addStats", 2];
	}];

	//Timeline tracker
	while {true} do {
		private _maxLifeTime = player getVariable "FU_maxLifeTime";

		if(alive player) then {
			_lifetime = _lifetime + 1;
			
			if(_lifetime > _maxLifeTime) then {
				_maxLifeTime = _lifetime;
			};
		} else {
			_lifetime = 0;
		};
		
		sleep 1;
		
	};
};