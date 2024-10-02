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

if(!isNil "FU_Flag_Para") then {
	//Spawn action on the flag
	FU_Flag_Para addAction["<img image='\A3\ui_f_orange\data\cfgTaskTypes\airdrop_ca.paa'/> Paradrop to your Leader", { 
		params ["_target", "_caller", "_actionId", "_arguments"];
		
		private _tpTarget = leader _caller;
		private _tpName = name _tpTarget;
		
		"FU_FadeLayer" cutText ["", "BLACK OUT", 2];
		_caller allowDamage false;
		playSound "outro_Airport";
		playSound "outro_Airport";
		playSound "outro_Airport";
		sleep 2;

		[
			[  
				["HALO DROPPING TO:", "<t align = 'center' shadow = '1' size = '0.7' font='PuristaBold'>%1</t><br/>", 10], 
				[format["%1", _tpName], "<t align = 'center' shadow = '1' size = '0.7' font='PuristaBold'>%1</t><br/>", 30] 
			], 0, 0.5  
		] spawn BIS_fnc_typeText;
	
		systemChat "[SERVER]: Storing your current backpack...";
		private _backpackType = typeOf (unitBackpack _caller);
		private _backpackMagazines = backpackMagazines _caller;
		private _backpackItems = backpackItems _caller;
		removeBackpackGlobal _caller;

		sleep 1;

		systemChat "[SERVER]: Adding parachute and altimeter...";
		_caller addBackpackGlobal "B_Parachute";
		_caller linkItem "ACE_Altimeter";

		sleep 1;

		systemChat "[SERVER]: Good luck! Don't forget to open your Altimeter by pressing 'O' key.";

		_caller setPosASL [getPosASL _tpTarget select 0, getPosASL _tpTarget select 1, 3000];
		sleep 1;

		"FU_FadeLayer" cutText ["", "BLACK IN", 5];
		sleep 5; 
		
		waitUntil{sleep 1; isTouchingGround _caller};
		sleep 1;
		
		removeBackpackGlobal _caller;
		_caller addBackpackGlobal _backpackType;
		{_caller addItemToBackpack _x;}foreach _backpackMagazines;
		{_caller addItemToBackpack _x;}foreach _backpackItems;
		
		systemChat "[SERVER]: You have landed successfully! Your backpack has been restored!";
	}, nil, 1.5, true, true, "", "_this != leader (group _this)", 5];

	FU_Flag_Para addAction["<img image='\A3\ui_f_orange\data\cfgTaskTypes\airdrop_ca.paa'/> Paradrop to your Squadmates", { 
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
			playSound "outro_Airport";
			playSound "outro_Airport";
			playSound "outro_Airport";
			sleep 2;

			[
				[  
					["HALO DROPPING TO:", "<t align = 'center' shadow = '1' size = '0.7' font='PuristaBold'>%1</t><br/>", 10], 
					[format["%1", _tpName], "<t align = 'center' shadow = '1' size = '0.7' font='PuristaBold'>%1</t><br/>", 30] 
				], 0, 0.5  
			] spawn BIS_fnc_typeText;
		
			systemChat "[SERVER]: Storing your current backpack...";
			private _backpackType = typeOf (unitBackpack _caller);
			private _backpackMagazines = backpackMagazines _caller;
			private _backpackItems = backpackItems _caller;
			removeBackpackGlobal _caller;

			sleep 1;

			systemChat "[SERVER]: Adding parachute and altimeter...";
			_caller addBackpackGlobal "B_Parachute";
			_caller linkItem "ACE_Altimeter";

			sleep 1;

			systemChat "[SERVER]: Good luck! Don't forget to open your Altimeter by pressing 'O' key.";

			_caller setPosASL [getPosASL _tpTarget select 0, getPosASL _tpTarget select 1, 3000];
			sleep 1;

			"FU_FadeLayer" cutText ["", "BLACK IN", 5];
			sleep 5; 
			
			waitUntil{sleep 1; isTouchingGround _caller};
			sleep 1;
			
			removeBackpackGlobal _caller;
			_caller addBackpackGlobal _backpackType;
			{_caller addItemToBackpack _x;}foreach _backpackMagazines;
			{_caller addItemToBackpack _x;}foreach _backpackItems;
			
			systemChat "[SERVER]: You have landed successfully! Your backpack has been restored!";
		} else {
			systemChat "[SERVER]: All squadmates are within 300 meters.";
		}; 
	}, nil, 1.5, true, true, "", "_this == leader (group _this)", 5];
};

if(!isNil "FU_Flag_Request") then {
	FU_Flag_Request addAction["<img image='\A3\ui_f\data\igui\cfg\simpleTasks\types\heli_ca.paa'/> Request Transport", { 
		params ["_target", "_caller", "_actionId", "_arguments"];

		_target setVariable ['FU_requestDone', false, true];

		private _onlinePilots = allPlayers select {"FU_Pilot" in (vehicleVarName _x)};

		[_target, ["OMComputerReboot", 20]] remoteExec ["say3D", 0]; 
		[_target, ["OMIntelGrabPC_02", 20]] remoteExec ["say3D", 0];
		_target animateSource ["Terminal_source", 90, 2];

		sleep 2;

		//See if there are any pilots online
		if(count _onlinePilots > 0) then {		
			//Add caller to requests
			["FU_TransportRequest", ["You have requested transport."]] call BIS_fnc_showNotification;
			
			//Notify pilots and update their tasks
			{["FU_TransportRequest", [format["%1 has requested transport.", name _caller]]] remoteExecCall ["BIS_fnc_showNotification", _x];}foreach _onlinePilots;
		} else {
			hint "There are no pilots online.";
		};

		_target animateSource ["Terminal_source", 0, 2];
		sleep 1;
		_target setVariable ['FU_requestDone', true, true];
	}, [], 1.5, true, true, "", "_target getVariable ['FU_requestDone', true]", 5];
};