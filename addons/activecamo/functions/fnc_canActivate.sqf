#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Determines if a unit can activate active camo.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Unit or vehicle <OBJECT>
 * 1: Is curator (optional, default: false) <BOOL>
 *    - If true, some conditions are skipped
 *
 * Return Value:
 * True if active camo can be enabled, otherwise false <BOOL>
 *
 * Example:
 * player call ls_activeCamo_fnc_canActivate;
 * [player, true] call ls_activeCamo_fnc_canActivate;
 *
 * Public: Yes
 */

params [
    ["_object", objNull, [objNull]],
    ["_isCurator", false, [false]]
];
TRACE_2("fnc_canActivate",_object,_isCurator);

if (!GVAR(enabled) || !alive _object || _object getVariable [QGVAR(active), false] || {
    private _lastActivated = _object getVariable [QGVAR(lastDeactivated), -GVAR(cooldown)];
    (CBA_missionTime - _lastActivated) < GVAR(cooldown);
} || {
    if (_object isKindOf "CAManBase") then {
        private _uniform = uniform _object;
        _uniform call FUNC(getCamoItem) == _uniform;
    } else {
        !(_object getVariable [QGVAR(enabled), false] || {getNumber (configOf _object >> QGVAR(enabled)) >= 1});
    };
}) exitWith { false };
true;
