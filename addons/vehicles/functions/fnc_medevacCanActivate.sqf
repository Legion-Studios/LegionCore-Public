#include "..\script_component.hpp"
/*
 * Author: Crimzonkat
 * Rewritten by DartRuffian
 * Checks if a unit can activate a vehicle's trauma center.
 *
 * Please provide proper credits to those who participate in development.
 * This module was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 * 1: Unit <OBJECT>
 *
 * Return Value:
 * True if trauma center can be activated, otherwise false <BOOL>
 *
 * Example:
 * [_vehicle, _unit] call ls_vehicles_fnc_medevacCanActivate;
 *
 * Public: No
 */

params [
    ["_vehicle", objNull, [objNull]],
    ["_unit", objNull, [objNull]]
];
TRACE_2("fnc_medevacCanActivate",_vehicle,_unit);

if (!alive _vehicle or {!alive _unit}) exitWith { false };

!(_vehicle getVariable [QGVAR(traumaCenterActive), false]) and {[_vehicle, _unit] call EFUNC(common,isPilot)};
