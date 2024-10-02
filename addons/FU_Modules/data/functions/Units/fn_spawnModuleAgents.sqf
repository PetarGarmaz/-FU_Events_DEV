_logic = param [0,objNull,[objNull]];
_units = param [1,[],[[]]];
_activated = param [2,true,[true]];

private _unitCount = _logic getVariable ["FU_UnitCount", 10];
private _vehicleCount = _logic getVariable ["FU_VehicleCount", 3];
private _condition = _logic getVariable ["FU_Condition", "this && alive ((thisTrigger getVariable 'FU_TriggerParams') select 0)"];
private _area = _logic getVariable ["objectArea", [500, 500]];
private _triggerParams = [_logic, _unitCount, _vehicleCount];

_logic setVariable ["FU_agents", []];

_trigger = createTrigger ["EmptyDetector", getPos _logic, false];
_trigger setTriggerArea [_area # 0, _area # 1, 0, false, -1];
_trigger setTriggerActivation ["ANYPLAYER", "PRESENT", true];
_trigger setTriggerInterval 5;
_trigger setVariable ["FU_TriggerParams", _triggerParams];
_trigger setTriggerStatements [_condition, "
	_triggerParams = thisTrigger getVariable 'FU_TriggerParams';
	_triggerParams spawn FU_fnc_spawnAgents;
", "
	_triggerParams = thisTrigger getVariable 'FU_TriggerParams';
	_logic = _triggerParams select 0;
	_agents = _logic getVariable 'FU_agents';

	{deleteVehicle _x} foreach _agents;
"];