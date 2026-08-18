#include "..\script_component.hpp"
/*
 * Authors: DartRuffian
 * Checks if a unit is an AT-RT.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 *
 * Return Value:
 * True if unit is an AT-RT, otherwise false <BOOL>
 *
 * Example:
 * player call ls_vehicles_fnc_isAtrt
 *
 * Public: No
 */

params ["_unit"];
TRACE_1("fnc_isAtrt",_unit);

_unit call EFUNC(common,getBiology) params ["", "_species"];
_species == "atrt";
