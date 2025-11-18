#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Fully heals a unit.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 1: Log message in ACE Medical GUI (optional, default: false) <BOOLEAN>
 *
 * Return Value:
 * None
 *
 * Example:
 * _unit call ls_common_fnc_fullHeal
 *
 * Public: Yes
 */

params [
    ["_unit", objNull, [objNull]],
    ["_logMessage", false, [false]]
];
TRACE_1("fnc_fullHeal",_unit);

if (!alive _unit) exitWith {};

if (missionNamespace getVariable ["ace_medical_enabled", false]) then {
    [_unit, _unit, _logMessage] call ace_medical_fnc_fullHeal;
} else {
    _unit setDamage 0;
};

nil;
