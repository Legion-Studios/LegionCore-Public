#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * This function only exists to get around some weirdness with compiling code directly from config.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Unit's face <STRING>
 * 1: Alien type to check <STRING>
 *
 * Return Value:
 * True alien type is included, otherwise false <BOOL>
 *
 * Example:
 * [face player, "chiss"] call ls_common_fnc_biologyCondition_isAlien;
 *
 * Public: No
 */

params ["_face", "_species"];
TRACE_2("fnc_biologyCondition_isAlien",_face,_species);

_species in toLowerANSI _face;
