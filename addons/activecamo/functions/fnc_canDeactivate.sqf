#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Determines if a unit can deactivate active camo.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 *
 * Return Value:
 * True if active camo can be disabled, otherwise false <BOOL>
 *
 * Example:
 * player call ls_activeCamo_fnc_canDeactivate;
 *
 * Public: Yes
 */

params [["_object", objNull, [objNull]]];
TRACE_1("fnc_canDeactivate",_object);

GVAR(enabled) && _object getVariable [QGVAR(active), false];
