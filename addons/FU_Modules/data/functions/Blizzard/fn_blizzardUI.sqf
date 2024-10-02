"FU_BlizzardHUD" cutRsc ["FU_BlizzardHUD", "PLAIN", 2, true];

private _HUD = uinamespace getVariable "FU_BlizzardHUD";

private _coverCtrl = _HUD displayCtrl 1201;
private _weatherCtrl = _HUD displayCtrl 1204;
private _frostBarCtrl = _HUD displayCtrl 1203;

private _coverImage = "";
private _weatherImage = "";

while {true} do {
	//cover
	if(player getVariable "FU_BlizzardProtection" == "NO") then {
		_coverImage = "Cover_Unprotected.paa";
	};
	
	if(player getVariable "FU_BlizzardProtection" == "STABLE") then {
		_coverImage = "Cover_Unprotected_Stabilized.paa";
	};
	
	if(player getVariable "FU_BlizzardProtection" == "Vehicle") then {
		_coverImage = "Cover_Vehicle.paa";
	};
	
	if(player getVariable "FU_BlizzardProtection" == "YES") then {
		_coverImage = "Cover_Protected.paa";
	};
	
	//weather
	if(missionNamespace getVariable "FU_Blizzard") then {
		_weatherImage = "Weather_Blizzard.paa";
	} else {
		_weatherImage = "Weather_Cloudy.paa";
	};
	
	_frostBarCtrl ctrlSetPositionW (0.0928357 * safeZoneW * (player getVariable "FU_BlizzardFrost"));
	_frostBarCtrl ctrlCommit 0;

	if(!((ctrlText _weatherCtrl) isEqualTo ("FU_Modules\data\Images\" + _weatherImage))) then {
		_weatherCtrl ctrlSetText "FU_Modules\data\Images\" + _weatherImage;
	};
	
	if(!((ctrlText _coverCtrl) isEqualTo ("FU_Modules\data\Images\" + _coverImage))) then {
		_coverCtrl ctrlSetText "FU_Modules\data\Images\" + _coverImage;
	};

	sleep 1;
};