_mode = param [0,"",[""]];
_input = param [1,[],[[]]];

switch _mode do {
	// Default object init
	case "init": {
		_logic = _input param [0,objNull,[objNull]]; // Module logic
		_isActivated = _input param [1,true,[true]]; // True when the module was activated, false when it is deactivated
		_isCuratorPlaced = _input param [2,false,[true]]; // True if the module was placed by Zeus
		
		_allEntities = all3DENEntities params ["_objects", "_groups", "_triggers", "_systems", "_waypoints", "_markers", "_layers", "_comments"];
		_allUnits = _objects select {_x isKindOf "Man"};
		_closestUnit = [_allUnits, getPos _logic] call BIS_fnc_nearestPosition;
		_group = group _closestUnit;

		private _allUnits = (units _group) apply {typeOf _x};
		private _return = "";

		{_return = _return + _x + ",";}foreach _allUnits;

		copyToClipboard _return;
		systemChat "[FU EVENTS]: Squad Composition copied to clipboard!";
		[_logic] spawn { params ["_logic"];	sleep 0.2; deleteVehicle _logic;};
	};

	// When some attributes were changed (including position and rotation)
	case "attributesChanged3DEN": {
		_logic = _input param [0,objNull,[objNull]]; // Module logic
		
		_allEntities = all3DENEntities params ["_objects", "_groups", "_triggers", "_systems", "_waypoints", "_markers", "_layers", "_comments"];
		_allUnits = _objects select {_x isKindOf "Man"};
		_closestUnit = [_allUnits, getPos _logic] call BIS_fnc_nearestPosition;
		_group = group _closestUnit;

		private _allUnits = (units _group) apply {typeOf _x};
		private _return = "";

		{_return = _return + _x + ",";}foreach _allUnits;

		copyToClipboard _return;
		systemChat "[FU EVENTS]: Squad Composition copied to clipboard!";
		[_logic] spawn { params ["_logic"];	sleep 0.2; deleteVehicle _logic;};
		
	};

	// When added to the world (e.g., after undoing and redoing creation)
	case "registeredToWorld3DEN": {
		_logic = _input param [0,objNull,[objNull]]; // Module logic
		
		_allEntities = all3DENEntities params ["_objects", "_groups", "_triggers", "_systems", "_waypoints", "_markers", "_layers", "_comments"];
		_allUnits = _objects select {_x isKindOf "Man"};
		_closestUnit = [_allUnits, getPos _logic] call BIS_fnc_nearestPosition;
		_group = group _closestUnit;

		private _allUnits = (units _group) apply {typeOf _x};
		private _return = "";

		{_return = _return + _x + ",";}foreach _allUnits;

		copyToClipboard _return;
		systemChat "[FU EVENTS]: Squad Composition copied to clipboard!";
		[_logic] spawn { params ["_logic"];	sleep 0.2; deleteVehicle _logic;};
	};
};

true;


