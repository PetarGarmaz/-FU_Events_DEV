params ["_entity"];

{
	_x setUnitTrait ['engineer', 1];
}forEach (crew _entity); 

_entity addEventHandler ['GetOut', {
	params ['_vehicle', '_role', '_unit', '_turret', '_isEject'];

	if(!isPlayer _unit) then {
		[_unit, _vehicle] spawn {
			params ['_unit', '_vehicle'];

			if(alive _unit && alive _vehicle) then {
				private _allHitPointsDamage = getAllHitPointsDamage _vehicle;
				_allHitPointsDamage params ["_hitPoints", "", "_damageValues"];

				waitUntil {sleep 1; !alive _unit || !alive _vehicle || behaviour _unit != 'COMBAT'};

				{
					if(_x > 0) then {
						if(alive _unit && alive _vehicle) then {
							[_unit, 'Acts_carFixingWheel'] remoteExec ['playMoveNow', 0];
							sleep 20;

							if(alive _unit && alive _vehicle) then {
								[_unit, _vehicle, _foreachindex, 'MiscRepair'] call ace_repair_fnc_doRepair;
							};
						};
					};
				}foreach _damageValues;
			};
		};
	};
}];