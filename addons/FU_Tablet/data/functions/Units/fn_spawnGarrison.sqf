params ["_pos", "_factionComp", ["_fillPercentage", 100], ["_customRadius", [100, 100, 0, false]], ["_doMove", "COMBAT"]];
//doMove modes: CANNOT_MOVE, CAN_MOVE, COMBAT
//private _group = [getPos _logic, _factionComp, _numberOfUnits, _radius, _type] call FU_fnc_spawnGarrison;

private _searchRadius = selectMax _customRadius;
_customRadius insert [0, [_pos]];
private _allBuildings = nearestObjects [_pos, ["Static","Building"], _searchRadius, true];
private _selectedBuildings = _allBuildings inAreaArray _customRadius;
private _allOutsideObjects = _pos nearObjects ["Land_Decal_RoadCrack_Grass_05_F", _searchRadius];
private _selectedObjects = _allOutsideObjects inAreaArray _customRadius;
private _allPositions = [];

private _squadComp = _factionComp select 0;
private _side = _factionComp select 2;
private _customLoadout = _factionComp select 3;

private _group = createGroup [_side, true];
private _countUnits = 0;

//Get all spots in nearby buildings
{
	private _spots = _x buildingPos -1;
	
	{_allPositions pushBack (AGLtoASL _x);}forEach _spots;
}foreach _selectedBuildings;

//Convert outside objects to positions;
{
	_allPositions pushBack (getPosASL _x);
}foreach _selectedObjects;

//Apply percentage to positions
_fillPercentage = _fillPercentage / 100;
private _positionCount = count _allPositions;
private _newPositionCount = _positionCount - (round(_positionCount * _fillPercentage));

for "_i" from 1 to _newPositionCount do {
	_positionCount = (count _allPositions) - 1;
	private _randomPos = [0, _positionCount] call BIS_fnc_randomInt;	
	_allPositions deleteAt _randomPos;
};

//Create units
{
	_countUnits = _countUnits + 1;

	_unitType = selectRandom _squadComp;
	_unit = _group createUnit [_unitType, _x, [], 0, "CAN_COLLIDE"];
	_unit setPosASL _x;

	sleep 0.1;

	//Convert unit loadouts
	if(_customLoadout select 0) then {
		private _loadouts = _customLoadout select 1;
		private _loadoutIndex = _squadComp find _unitType;
		[_unit, _loadouts select _loadoutIndex] call CBA_fnc_setLoadout;
	};

	sleep 0.4;

	switch _doMove do {
		case "CANNOT_MOVE": {_unit disableAI "PATH";};
		case "COMBAT": {
			_unit disableAI "PATH";
			_unit addEventHandler ["FiredNear", {
				params ["_unit", "_firer", "_distance", "_weapon", "_muzzle", "_mode", "_ammo", "_gunner"];
				
				if(_distance < 50 && isPlayer(_firer)) then {
					_unit enableAI "PATH";
					_unit removeAllEventHandlers "FiredNear";
				};
			}];
		};
	};

	if(_countUnits % 4 == 0) then {
		_group = createGroup [_side, true];
	};
}forEach _allPositions;

_group;