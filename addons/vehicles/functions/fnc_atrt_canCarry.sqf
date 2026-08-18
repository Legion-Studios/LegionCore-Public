#include "..\script_component.hpp"
/*
 * Authors: DartRuffian
 * Determines if a unit can carry an AT-RT.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 1: AT-RT <OBJECT>
 *
 * Return Value:
 * True if unit can carry AT-RT, otherwise false <BOOL>
 *
 * Example:
 * [_atrt, player] call ls_vehicles_fnc_atrt_canCarry
 *
 * Public: No
 */

params ["_unit", "_atrt"];
TRACE_2("fnc_atrt_canCarry",_unit,_atrt);

alive _atrt && _unit != _atrt && !(_atrt getVariable [QGVAR(atrt_isBeingCarried), false]) && isNull (_atrt getVariable [QGVAR(atrt_rider), objNull]) && {
    private _lastRider = _atrt getVariable [QGVAR(atrt_lastRider), objNull];
    isNull _lastRider || !alive _lastRider || _lastRider == _unit;
};
