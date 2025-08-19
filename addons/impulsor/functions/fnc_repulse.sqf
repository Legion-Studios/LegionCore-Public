#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Small public wrapper for decreasing impulse level.
 *
 * Please provide proper credits to those who participate in development.
 * This module was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 * 1: Level (optional, default: -1) <NUMBER>
 *
 * Return Value:
 * None
 *
 * Example:
 * (objectParent ls_player) call ls_impulsor_fnc_repulse;
 *
 * Public: Yes
 */

params [
    ["_vehicle", objNull, [objNull]],
    ["_level", nil, [0]]
];
TRACE_2("fnc_repulse",_vehicle,_level);

if (!alive _vehicle || speed _vehicle <= REPULSE_SPEED) exitWith {};

// If already in the repulsor mode, instead set it to off
// If level param is passed, used that, otherwise use default behavior
private _modeChange = 0;
if (isNil "_level") then {
    _modeChange = [-1, 1] select (_vehicle getVariable [QGVAR(level), MODE_DISABLED] == MODE_REPULSE);
} else {
    _modeChange = _level;
};

[_vehicle, _modeChange] call FUNC(impulse);
