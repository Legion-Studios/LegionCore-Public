#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Cycles a unit's flashlight mode.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 1: Equipment to affect (optional, default: first found) <STRING>
 * 2: How many modes to cycle (optional, default: 1) <NUMBER>
 *    - Positive number, cycle "up" that many modes
 *    - Negative number, cycle "down" that many modes
 *
 * Return Value:
 * None
 *
 * Example:
 * [ls_player, 1] call ls_lighting_fnc_cycleMode;
 *
 * Public: Yes
 */

params [
    ["_unit", objNull, [objNull]],
    ["_modeChange", 1, [0]]
];
TRACE_3("fnc_cycleMode",_unit,_equipment,_modeChange);

private _isLightOn = _unit getVariable [QGVAR(isLightOn), false];
private _equipment = _unit getVariable [QGVAR(lightEquipment), ""];

if (!_isLightOn or {_equipment == ""}) exitWith {};

private _data = _equipment call FUNC(getEquipmentData);
private _sound = _data get "soundToggle";
if (_unit == ls_player and {_sound != ""}) then {
    playSound (_data get "soundToggle");
};

private _mode = (_unit getVariable [QGVAR(lightMode), 0]) + _modeChange;
private _lightModes = _data get "lightModes";
private _max = (count _lightModes) - 1;

if (_mode > _max) then {
    _mode = 0;
};
_mode = CLAMP(_mode,0,_max);

[QGVAR(setMode), [_unit, _equipment, _mode], SETMODE_EVENT_ID(_unit)] call CBA_fnc_globalEventJIP;
nil;
