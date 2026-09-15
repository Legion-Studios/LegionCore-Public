#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Returns the color
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Side <NUMBER>
 *    - 0: OPFOR
 *    - 1: BLUFOR
 *    - 2: Independent
 *    - 3: Civilian
 *    - Anything else: Unknown
 *
 * Return Value:
 * Color in format [R, G, B, A] <ARRAY>
 *
 * Example:
 * 0 call ls_common_fnc_getSideColor;
 *
 * Public: Yes
 */

params [["_side", 0, [0]]];
TRACE_1("fnc_getSideColor",_side);

GVAR(sideColors) select CLAMP(_side,0,4);
