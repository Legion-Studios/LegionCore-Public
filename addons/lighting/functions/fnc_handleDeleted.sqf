#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Disables flashlights for deleted units.
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
 * _unit call ls_lighting_fnc_handleDeleted;
 *
 * Public: No
 */

params ["_unit"];
TRACE_1("fnc_handleDeleted",_unit);

if (!local _unit) exitWith {};
if (_unit getVariable [QGVAR(isLightOn), false]) then {
    _unit call FUNC(disable);
};

nil;
