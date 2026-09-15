#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Checks if a given unit is a zombie.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: The unit to check <OBJECT>
 * 1: Uniform config path <CONFIG>
 * 2: Unit's face <STRING>
 *
 * Return Value:
 * True if unit is a zombie, otherwise false <BOOL>
 *
 * Example:
 * [_unit, _uniformConfig, face _unit] call ls_common_fnc_biologyCondition_isZombie
 *
 * Public: No
 */

params ["_unit"];
TRACE_1("fnc_biologyCondition_isZombie",_unit);

if ("zombie" in toLowerANSI (typeOf _unit) || {
    getNumber (configOf _unit >> "ls_isZombie") == 1
}) exitWith { true };

false;
