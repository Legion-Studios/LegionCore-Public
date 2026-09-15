#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Checks if a given unit is an AT-RT.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: The unit to check <OBJECT>
 * 1: Uniform config path (unused) <CONFIG>
 * 2: Unit's face (unused) <STRING>
 *
 * Return Value:
 * True if unit is a droid, otherwise false <BOOL>
 *
 * Example:
 * [_unit, _uniformConfig, face _unit] call ls_common_fnc_biologyCondition_isATRT;
 *
 * Public: No
 */

params ["_unit"];
TRACE_1("fnc_biologyCondition_isATRT",_unit);

_unit isKindOf "ls_vehicle_atrt_base" || { _unit isKindOf "3AS_ATRT_Base" };
