#include "..\script_component.hpp"
/*
 * Author: Crimzonkat
 * Rewritten by DartRuffian
 * Adjusts a vehicle's MFD color.
 *
 * Please provide proper credits to those who participate in development.
 * This module was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Vehicle with MFD <OBJECT>
 * 1: Color array in format [red, blue, green, opacity] <ARRAY>
 *
 * Return Value:
 * None
 *
 * Example:
 * [_vehicle, [_r, _g, _b, _a]] call ls_vehicles_fnc_setHudColor;
 *
 * Public: Yes
 */

params [
    ["_vehicle", objNull, [objNull]],
    ["_color", [0, 0, 0, 0], [[]], 4]
];
TRACE_2("fnc_setHudColor",_vehicle,_color);

if (!alive _vehicle) exitWith {};
_color = _color apply { CLAMP(_x,0,1) }; // Apply returns a new array
_color insert [0, [0]]; // Starting index for values
_vehicle setUserMFDValue _color; // 0 is used for the starting index, meaning _color#0 is set as user0, _color#1 is set as user1, etc.
