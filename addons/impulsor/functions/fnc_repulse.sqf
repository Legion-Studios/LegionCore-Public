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
    ["_vehicle", objNull, [objNull]]
];
TRACE_1("fnc_repulse",_vehicle);

if (speed _vehicle <= REPULSE_SPEED) exitWith {};

[_vehicle, -1] call FUNC(impulse);