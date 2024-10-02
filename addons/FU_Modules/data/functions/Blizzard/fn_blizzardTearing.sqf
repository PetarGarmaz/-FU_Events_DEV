private _allowedMasks = missionNamespace getVariable "FU_BlizzardMasks";

while {true} do {
	waitUntil{sleep 1; missionNamespace getVariable "FU_Blizzard"};

	//Check if players isnt wearing a mask
	if(player getVariable "FU_BlizzardTearing" && player getVariable "FU_BlizzardProtection" == "NO" && !((goggles player) in _allowedMasks)) then {
		private _eyeTearing = ["DynamicBlur", 400, [1]] spawn { 
			params ["_name", "_priority", "_effect", "_handle"]; 
			
			while {_handle = ppEffectCreate [_name, _priority];	_handle < 0} do { 
				_priority = _priority + 1; 
			};
			
			_handle ppEffectEnable true; 
			_handle ppEffectAdjust _effect; 
			_handle ppEffectCommit 5;
			
			waitUntil {!(missionNamespace getVariable "FU_Blizzard") || ((goggles player) in (missionNamespace getVariable "FU_BlizzardMasks")) || !(player getVariable "FU_BlizzardTearing")};
			
			while {_priority > 0} do { 
				_priority = _priority - 1; 
			};
			
			_handle ppEffectAdjust _effect; 
			_handle ppEffectCommit 5;
			
			waitUntil {ppEffectCommitted _handle};
			
			_handle ppEffectEnable false; 
			ppEffectDestroy _handle; 
		};
		
		waitUntil {scriptDone _eyeTearing};
	};
};