#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Disables flashlights for dead units after some delay.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Unit <OBJECT>

 * Return Value:
 * None
 *
 * Example:
 * _unit call ls_lighting_fnc_handleKilled;
 *
 * Public: No
 */

params ["_unit"];
TRACE_1("fnc_handleKilled",_unit);

if (!local _unit) exitWith {}; // Make sure it only runs once
if (_unit getVariable [QGVAR(isLightOn), false]) then {
    [{call FUNC(disable)}, _unit, 60] call CBA_fnc_waitAndExecute;
};

nil;
