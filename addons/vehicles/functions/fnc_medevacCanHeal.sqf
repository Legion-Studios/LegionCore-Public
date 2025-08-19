#include "..\script_component.hpp"
/*
 * Author: Crimzonkat
 * Rewritten by DartRuffian
 * Plays a vehicle animation and sound on a keybind press.
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
 * True if animations were played, otherwise false <BOOL>
 *
 * Example:
 * [_vehicle, _unit] call ls_vehicles_fnc_medevacCanHeal;
 *
 * Public: No
 */

params [
    ["_vehicle", objNull, [objNull]],
    ["_unit", objNull, [objNull]]
];
TRACE_2("fnc_medevacCanHeal",_vehicle,_unit);

isEngineOn _vehicle and
{_vehicle getVariable [QGVAR(traumaCenterActive), false]} and
{_unit call EFUNC(common,isInjured)} and
{!([_vehicle, _unit] call EFUNC(common,isPilot))};
