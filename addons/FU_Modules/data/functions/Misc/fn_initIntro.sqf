_logic = param [0,objNull,[objNull]];
_units = param [1,[],[[]]];
_activated = param [2,true,[true]];

private _line_1 = _logic getVariable ["FU_Line_1", ""];
private _line_2 = _logic getVariable ["FU_Line_2", ""];
private _displayDate = _logic getVariable ["FU_DateTime", false];
private _music = _logic getVariable ["FU_Music", ""];
private _before = _logic getVariable ["FU_Before", ""];
private _condition = _logic getVariable ["FU_Condition", ""];
private _after = _logic getVariable ["FU_After", ""];

private _beforeScript = compile _before;
private _conditionScript = compile _condition;
private _afterScript = compile _after;

[_logic] call _beforeScript;

waitUntil _conditionScript;

"FU_FadeLayer" cutText ["", "BLACK OUT", 0.1];
playMusic _music;

sleep 5;
"FU_FadeLayer" cutText ["", "BLACK IN", 5];
sleep 5;

_year = date select 0;
_month = date select 1;
_day = date select 2;
_hour = date select 3;
_minute = date select 4;

[ 
	[ 
		[format["%1", _line_1], "<t align = 'left' shadow = '1' size = '0.7' font='PuristaBold'>%1</t><br/>", 20],
		[format["%1", _line_2], "<t align = 'left' shadow = '1' size = '0.7' font='PuristaBold'>%1</t><br/>", 20],
		if(_displayDate) then {[format["%1/%2/%3 - %4:%5 LOCAL TIME", _day, _month, _year, [_hour, "HH"] call BIS_fnc_timeToString, [_minute, "HH"] call BIS_fnc_timeToString], "<t align = 'left' shadow = '1' size = '0.7' font='PuristaBold'>%1</t><br/>", 60]} else {["<br/>", "<t align = 'left' shadow = '1' size = '0.7' font='PuristaBold'>%1</t><br/>", 60]}
	], 0.0358213 * safezoneW + safezoneX, 0.808 * safezoneH + safezoneY
] spawn BIS_fnc_typeText;

[_logic] call _afterScript;