_mode = param [0,"",[""]];
_input = param [1,[],[[]]];

switch _mode do {
	// Default object init
	case "init": {
		_logic = _input param [0,objNull,[objNull]]; // Module logic
		_isActivated = _input param [1,true,[true]]; // True when the module was activated, false when it is deactivated
		_isCuratorPlaced = _input param [2,false,[true]]; // True if the module was placed by Zeus
		
		_allEntities = all3DENEntities params ["_objects", "_groups", "_triggers", "_systems", "_waypoints", "_markers", "_layers", "_comments"];
		_allUnits = _objects select {_x isKindOf "LandVehicle"};
		_closestUnit = [_allUnits, getPos _logic] call BIS_fnc_nearestPosition;
		private _allVehicles = _closestUnit nearEntities [["LandVehicle", "Plane", "Helicopter"], 100];
		private _unsortedVehicles = [];
		private _unsortedDistances = [];
		private _sortedVehicles = [];
		private _i = 0;
		private _return = "";

		{
			private _dist = _closestUnit distance _x;
			_unsortedVehicles pushBack (typeOf _x);
			_unsortedDistances pushBack _dist;
		}foreach _allVehicles;

		while {count _sortedVehicles < count _allVehicles && _i < 7} do {
			private _min = selectMin _unsortedDistances;
			private _minIndex = _unsortedDistances find _min;
			private _minVehicle = _unsortedVehicles select _minIndex;

			_sortedVehicles pushBack _minVehicle;
			_unsortedVehicles = _unsortedVehicles - [_minVehicle];
			_unsortedDistances = _unsortedDistances - [_min];
			_i = _i + 1;
		};

		{_return = _return + _x + ",";}foreach _sortedVehicles;

		copyToClipboard _return;
		systemChat "[FU EVENTS]: Vehicle Composition copied to clipboard!";
		[_logic] spawn { params ["_logic"];	sleep 0.2; deleteVehicle _logic;};
	};

	// When some attributes were changed (including position and rotation)
	case "attributesChanged3DEN": {
		_logic = _input param [0,objNull,[objNull]]; // Module logic
		
		_allEntities = all3DENEntities params ["_objects", "_groups", "_triggers", "_systems", "_waypoints", "_markers", "_layers", "_comments"];
		_allUnits = _objects select {_x isKindOf "LandVehicle"};
		_closestUnit = [_allUnits, getPos _logic] call BIS_fnc_nearestPosition;
		private _allVehicles = _closestUnit nearEntities [["LandVehicle", "Plane", "Helicopter"], 100];
		private _unsortedVehicles = [];
		private _unsortedDistances = [];
		private _sortedVehicles = [];
		private _i = 0;
		private _return = "";

		{
			private _dist = _closestUnit distance _x;
			_unsortedVehicles pushBack (typeOf _x);
			_unsortedDistances pushBack _dist;
		}foreach _allVehicles;

		while {count _sortedVehicles < count _allVehicles && _i < 7} do {
			private _min = selectMin _unsortedDistances;
			private _minIndex = _unsortedDistances find _min;
			private _minVehicle = _unsortedVehicles select _minIndex;

			_sortedVehicles pushBack _minVehicle;
			_unsortedVehicles = _unsortedVehicles - [_minVehicle];
			_unsortedDistances = _unsortedDistances - [_min];
			_i = _i + 1;
		};

		{_return = _return + _x + ",";}foreach _sortedVehicles;

		copyToClipboard _return;
		systemChat "[FU EVENTS]: Vehicle Composition copied to clipboard!";
		[_logic] spawn { params ["_logic"];	sleep 0.2; deleteVehicle _logic;};
	};

	// When added to the world (e.g., after undoing and redoing creation)
	case "registeredToWorld3DEN": {
		_logic = _input param [0,objNull,[objNull]]; // Module logic
		
		_allEntities = all3DENEntities params ["_objects", "_groups", "_triggers", "_systems", "_waypoints", "_markers", "_layers", "_comments"];
		_allUnits = _objects select {_x isKindOf "LandVehicle"};
		_closestUnit = [_allUnits, getPos _logic] call BIS_fnc_nearestPosition;
		private _allVehicles = _closestUnit nearEntities [["LandVehicle", "Plane", "Helicopter"], 100];
		private _unsortedVehicles = [];
		private _unsortedDistances = [];
		private _sortedVehicles = [];
		private _i = 0;
		private _return = "";

		{
			private _dist = _closestUnit distance _x;
			_unsortedVehicles pushBack (typeOf _x);
			_unsortedDistances pushBack _dist;
		}foreach _allVehicles;

		while {count _sortedVehicles < count _allVehicles && _i < 7} do {
			private _min = selectMin _unsortedDistances;
			private _minIndex = _unsortedDistances find _min;
			private _minVehicle = _unsortedVehicles select _minIndex;

			_sortedVehicles pushBack _minVehicle;
			_unsortedVehicles = _unsortedVehicles - [_minVehicle];
			_unsortedDistances = _unsortedDistances - [_min];
			_i = _i + 1;
		};

		{_return = _return + _x + ",";}foreach _sortedVehicles;

		copyToClipboard _return;
		systemChat "[FU EVENTS]: Vehicle Composition copied to clipboard!";
		[_logic] spawn { params ["_logic"];	sleep 0.2; deleteVehicle _logic;};
	};
};

true;