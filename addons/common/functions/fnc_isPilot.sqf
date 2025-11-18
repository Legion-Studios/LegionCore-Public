#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Checks if a given unit is current pilot OR copilot of a specific vehicle.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 * 1: Unit <OBJECT>
 *
 * Return Value:
 * True if unit is (co)pilot, otherwise false <BOOL>
 *
 * Example:
 * [_vehicle, _unit] call ls_common_fnc_isPilot
 *
 * Public: Yes
 */

params [
    ["_vehicle", objNull, [objNull]],
    ["_unit", objNull, [objNull]]
];
TRACE_2("fnc_isPilot",_vehicle,_unit);

if (isNull _vehicle or {isNull _unit}) exitWith {};

_unit == currentPilot _vehicle or {call FUNC(isCopilot)};
