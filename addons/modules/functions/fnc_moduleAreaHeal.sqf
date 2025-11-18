#include "..\script_component.hpp"
/*
 * Authors: DartRuffian
 * Adds a module's area to the areaHeals variable. Players' machines do the loop on their end.
 *
 * Arguments:
 * 0: Module <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * _logic call ls_modules_fnc_moduleAreaHeal
 *
 * Public: No
 */

if (canSuspend) exitWith {
    [FUNC(moduleAreaHeal), _this] call CBA_fnc_directCall;
};

params ["_logic"];
TRACE_1("fnc_moduleAreaHeal",_logic);

if (!isServer) exitWith {};

private _areaHeals = missionNamespace getVariable [QGVAR(areaHeals), []];
_areaHeals pushBack ([_logic] + (_logic getVariable ["objectArea", [30, 30, 0, true, 15]]));

missionNamespace setVariable [QGVAR(areaHeals), _areaHeals, true];
