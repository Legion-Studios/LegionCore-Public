
#include "..\script_component.hpp"
/*
 * Authors: DartRuffian
 * Determines if a unit can dismount an AT-RT.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 1: AT-RT <OBJECT>
 *
 * Return Value:
 * True if unit can dismount the AT-RT, otherwise false
 *
 * Example:
 * [player, _atrt] call ls_vehicles_fnc_atrt_canDismount
 *
 * Public: No
 */

params ["_unit", "_atrt"];
TRACE_2("fnc_atrt_canDismount",_unit,_atrt);

_unit isEqualTo (_atrt getVariable [QGVAR(atrt_rider), objNull]);
