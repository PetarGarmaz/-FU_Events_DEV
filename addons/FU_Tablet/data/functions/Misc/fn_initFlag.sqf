//Create fade layer, because Melee mod dude fucked the default one.
_fadeEffectLayer = "FU_FadeLayer" call BIS_fnc_rscLayer;

//Does the flag exist
if(!isNil "FU_Flag") then {
	private _playerGroups = allGroups select {isPlayer (leader _x)};

	//Spawn action on the flag
	FU_Flag addAction["<img image='\A3\ui_f\data\igui\cfg\simpleTasks\types\meet_ca.paa'/> Teleport to your Leader", { 
		params ["_target", "_caller", "_actionId", "_arguments"];
		
		private _tpTarget = leader _caller;
		private _tpName = name _tpTarget;
		
		"FU_FadeLayer" cutText ["", "BLACK OUT", 2];
		_caller allowDamage false;
		playSound "outro_Truck";
		playSound "outro_Truck";
		playSound "outro_Truck";
		sleep 2;

		[
			[  
				["TELEPORTING TO:", "<t align = 'center' shadow = '1' size = '0.7' font='PuristaBold'>%1</t><br/>", 10], 
				[format["%1", _tpName], "<t align = 'center' shadow = '1' size = '0.7' font='PuristaBold'>%1</t><br/>", 30] 
			], 0, 0.5  
		] spawn BIS_fnc_typeText;
	
		if(vehicle _tpTarget != _tpTarget) then { 
			_caller moveInAny (vehicle _tpTarget);  
		} else { 
			_caller setPosASL (getPosASL _tpTarget);  
		};
		
		"FU_FadeLayer" cutText ["", "BLACK IN", 5];
		sleep 5; 
		
		_caller allowDamage true; 
	}, nil, 1.5, true, true, "", "_this != leader (group _this)", 5];

	FU_Flag addAction["<img image='\A3\ui_f\data\igui\cfg\simpleTasks\types\meet_ca.paa'/> Teleport to your Squadmates", { 
		params ["_target", "_caller", "_actionId", "_arguments"];
		
		private _tpTarget = objNull;
		private _tpName = "";

		private _units = units (group _caller);
		private _farUnits = _units select {_x distance2D _caller >= 300};

		if(count _farUnits > 0) then {
			_tpTarget = selectRandom _farUnits;
			_tpName = name _tpTarget;
		};
		
		if(!isNull _tpTarget) then {
			"FU_FadeLayer" cutText ["", "BLACK OUT", 2];
			_caller allowDamage false;
			playSound "outro_Truck";
			playSound "outro_Truck";
			playSound "outro_Truck";
			sleep 2;
			
			[
				[  
					["TELEPORTING TO:", "<t align = 'center' shadow = '1' size = '0.7' font='PuristaBold'>%1</t><br/>", 10], 
					[format["%1", _tpName], "<t align = 'center' shadow = '1' size = '0.7' font='PuristaBold'>%1</t><br/>", 30] 
				], 0, 0.5  
			] spawn BIS_fnc_typeText;
		
			if(vehicle _tpTarget != _tpTarget) then { 
				_caller moveInAny (vehicle _tpTarget);  
			} else { 
				_caller setPosASL (getPosASL _tpTarget);  
			};
			
			"FU_FadeLayer" cutText ["", "BLACK IN", 5];
			sleep 5; 
			
			_caller allowDamage true;
		} else {
			hint "All squadmates are within 300 meters.";
		}; 
	}, nil, 1.5, true, true, "", "_this == leader (group _this)", 5];
};