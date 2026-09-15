#include "..\script_component.hpp"
/*
 * Authors: DartRuffian
 * Adds a module's area to the areaHeals variable. Players' machines do the loop on their end.
 *
 * Arguments:
 * 0: Logic <OBJECT>
 * 1: Affected units (unused) <ARRAY>
 * 2: Activated <BOOL>
 *
 * Return Value:
 * None
 *
 * Example:
 * [_logic, [], true] call ls_modules_fnc_moduleAreaHeal
 *
 * Public: No
 */

if (canSuspend) exitWith {
    [FUNC(moduleAreaHeal), _this] call CBA_fnc_directCall;
};

params ["_logic", "", "_activated"];
TRACE_2("fnc_moduleAreaHeal",_logic,_activated);

if !(isServer && _activated) exitWith {};

private _areaHeals = missionNamespace getVariable [QGVAR(areaHeals), []];
_areaHeals pushBack ([_logic] + (_logic getVariable ["objectArea", [30, 30, 0, true, 15]]));

missionNamespace setVariable [QGVAR(areaHeals), _areaHeals, true];
