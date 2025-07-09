#include "..\script_component.hpp"
/*
 * Author: Crimzonkat
 * Rewritten by DartRuffian
 * Activates a vehicle's trauma center.
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
 * _vehicle call ls_vehicles_fnc_medevacActivate;
 *
 * Public: No
 */

params [
    ["_vehicle", objNull, [objNull]]
];
TRACE_1("fnc_medevacActivate",_vehicle);

if (!alive _vehicle) exitWith {};

_vehicle setVariable [QGVAR(traumaCenterActive), true, true];
