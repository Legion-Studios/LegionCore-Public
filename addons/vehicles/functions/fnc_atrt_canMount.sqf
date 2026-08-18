#include "..\script_component.hpp"
/*
 * Authors: DartRuffian
 * Determines if a unit can mount an AT-RT.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 1: AT-RT <OBJECT>
 *
 * Return Value:
 * True if unit can mount the AT-RT, otherwise false
 *
 * Example:
 * [player, _atrt] call ls_vehicles_fnc_atrt_canMount
 *
 * Public: No
 */

params ["_unit", "_atrt"];
TRACE_2("fnc_atrt_canMount",_unit,_atrt);

isNull attachedTo _unit && isNull attachedTo _atrt && {
    _atrt call EFUNC(common,isAwake) && _unit call EFUNC(common,isAwake) &&
    !(_unit call FUNC(isATRT)) && isNull (_atrt getVariable [QGVAR(atrt_rider), objNull])
};
