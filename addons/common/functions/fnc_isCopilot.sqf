#include "..\script_component.hpp"
/*
 * Author: Crimzonkat
 * Checks if a given unit is the copilot of a specific vehicle.
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
 * True if unit is copilot, otherwise false <BOOL>
 *
 * Example:
 * [_vehicle, _unit] call ls_common_fnc_isCopilot
 *
 * Public: Yes
 */

params [
    ["_vehicle", objNull, [objNull]],
    ["_unit", objNull, [objNull]]
];
TRACE_2("fnc_isCopilot",_vehicle,_unit);

if (isNull _vehicle or {isNull _unit}) exitWith {};

private _turretConfig = _vehicle unitTurret _unit;
_turretConfig = ([typeOf _vehicle, _turretConfig] call BIS_fnc_turretConfig);

getNumber (_turretConfig >> "isCopilot") > 1;
