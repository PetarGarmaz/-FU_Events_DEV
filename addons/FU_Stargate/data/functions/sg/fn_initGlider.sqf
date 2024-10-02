params ["_unit"];

_unit addAction["<img image='\A3\ui_f\data\igui\cfg\simpleTasks\types\takeoff_ca.paa'/> Take Off", { 
	params ["_target", "_caller", "_actionId", "_arguments"];

	_target setVelocityModelSpace [0, 50, 100];
	sleep 1;
	_target setVelocityModelSpace [0, 50, 0];
}, [], 10, true, true, "", "vehicle _this == _target && isTouchingGround _target", 5];

