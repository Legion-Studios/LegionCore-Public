#include "..\script_component.hpp"
/*
 * Authors: DartRuffian
 * Makes a unit drop an AT-RT.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 1: AT-RT <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [player, _atrt] call ls_vehicles_fnc_atrt_drop
 *
 * Public: No
 */

params ["_unit", "_atrt"];
TRACE_2("fnc_atrt_drop",_unit,_atrt);

detach _atrt;
_atrt setVariable [QGVAR(atrt_isBeingCarried), nil, true];
_unit setVariable [QGVAR(atrt_carriedObject), nil];

[_unit, "DefaultAction", _unit getVariable [QGVAR(atrt_dropActionID), -1]] call EFUNC(common,removeActionEventHandler);
_unit setVariable [QGVAR(atrt_dropActionID), nil];

[] call EFUNC(common,hideMouseHint);
