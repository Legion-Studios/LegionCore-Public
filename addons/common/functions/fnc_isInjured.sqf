#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Checks if a given unit is injured.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 *
 * Return Value:
 * True if unit is injured, otherwise false <BOOL>
 *
 * Example:
 * _unit call ls_common_fnc_isInjured
 *
 * Public: Yes
 */

params [
    ["_unit", objNull, [objNull]]
];
TRACE_1("fnc_isInjured",_unit);

if (!local _unit) exitWith {
    ERROR_1("unit [%1] is not local",_unit);
    false;
};

if (missionNamespace getVariable ["ace_medical_enabled", false]) then {
    _unit call ace_medical_isInStableCondition;
} else {
    damage _unit > 0;
};
