#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Checks if a given unit is alive and conscious.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 *
 * Return Value:
 * True if unit is awake <BOOL>
 *
 * Example:
 * player call ls_common_fnc_isAwake
 *
 * Public: Yes
 */

params [
    ["_unit", objNull, [objNull]]
];
TRACE_1("fnc_isAwake",_unit);

lifeState _unit in ["HEALTHY", "INJURED"];
