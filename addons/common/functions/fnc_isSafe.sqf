#include "..\script_component.hpp"
/*
 * Authors: DartRuffian
 * Checks if an AI unit is "safe". Note that player groups do not change combat modes.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Unit/group <OBJECT|GROUP>
 * 1: Distance <NUMBER>
 *
 * Return Value:
 * True if AI is safe, otherwise false <BOOL>
 *
 * Example:
 * cursorObject call ls_common_fnc_isSafe
 *
 * Public: No
 */

params ["_unit", ["_distance", 100]];
TRACE_1("fnc_isSafe",_unit);

_unit targets [true, _distance] isEqualTo [];
