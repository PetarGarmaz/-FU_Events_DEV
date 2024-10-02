FU_isCutting = false;
FU_abortCutting = false;

//Tree cutting
_cutting = {
	[] spawn {
		if(!FU_isCutting) then {
			private _trees = nearestTerrainObjects [getPos player, ["TREE"], 5, true, true];
			private _unit = player;

			if(count _trees > 0) then {
				FU_isCutting = true;
			
				[_unit, "Acts_TreatingWounded_in"] remoteExec ["playMoveNow", 0];

				//Create a progress bar
				with uiNamespace do {
					FU_barEmpty = findDisplay 46 ctrlCreate ["RscProgress", -1];  
					FU_barEmpty ctrlSetText "#(argb,8,8,3)color(0.1,0.1,0.1,1)";  
					FU_barEmpty ctrlSetPosition [0,0,1,0.02];  
					FU_barEmpty ctrlSetTextColor [0.1, 0.1, 0.1, 1];  
					FU_barEmpty progressSetPosition 1;  
					FU_barEmpty ctrlCommit 0;  

					FU_bar = findDisplay 46 ctrlCreate ["RscProgress", -1];  
					FU_bar ctrlSetPosition [0,0,1,0.02];  
					FU_bar ctrlCommit 0;
				};

				//Progress
				private _progress = 0;
				while {FU_isCutting && !FU_abortCutting && _progress <= 60} do {
					if(round(_progress) % 5 == 0) then {
						private _randomAct = [4, 6] call BIS_fnc_randomInt;
						[_unit, format["Acts_TreatingWounded0%1", _randomAct]] remoteExec ["playMoveNow", 0];
					};

					_progress = _progress + 0.1;

					with uiNamespace do {
						FU_bar progressSetPosition (_progress / 60);
						FU_bar ctrlCommit 0;
					};

					sleep 0.1;
				};

				with uiNamespace do {ctrlDelete FU_bar; ctrlDelete FU_barEmpty;};
				
				[_unit, "Acts_TreatingWounded_Out"] remoteExec ["playMoveNow", 0]; 

				if(!FU_abortCutting) then {
					private _tree = _trees select 0;
					_tree setDamage 1;
				};

				FU_isCutting = false;
				FU_abortCutting = false;
			} else {
				hint "There are no trees nearby.";
			};
		} else {
			hint "You are already cutting something!";
		};
	};
};

//Create ace action
private _aceAction = [
	"CutTree",
	"Cut Tree",
	"\FU_Events\data\FU_CutTree.paa",
	_cutting,
	{[player, "ACE_EntrenchingTool"] call BIS_fnc_hasItem && !FU_isCutting}
] call ace_interact_menu_fnc_createAction;

[player, 1, ["ACE_SelfActions", "ACE_Equipment"], _aceAction] call ace_interact_menu_fnc_addActionToObject;