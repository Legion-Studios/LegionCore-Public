#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Checks if a given unit is a hologram.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: The unit to check <OBJECT>
 * 1: Uniform config path <CONFIG>
 * 2: Unit's face (unused) <STRING>
 *
 * Return Value:
 * True if unit is a hologram, otherwise false <BOOL>
 *
 * Example:
 * [_unit, _uniformConfig, face _unit] call ls_common_fnc_biologyCondition_isHologram;
 *
 * Public: No
 */

params ["_unit", "_uniformConfig"];
TRACE_2("fnc_biologyCondition_isHologram",_unit,_uniformConfig);

if ("hologram" in toLowerANSI (typeOf _unit) || {
    getNumber (_uniformConfig >> "ls_isHologram") == 1
}) exitWith { true };

false;
