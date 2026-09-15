#include "..\script_component.hpp"
/*
 * Authors: DartRuffian
 * Handles the AT-RT health bar being loaded.
 *
 * Arguments:
 * 0: Display <DISPLAY>
 *
 * Return Value:
 * None
 *
 * Example:
 * onLoad = "call ls_vehicles_fnc_atrt_ui_onLoad"
 *
 * Public: No
 */

params ["_display"];
TRACE_1("fnc_ui_onLoad",_display);

private _atrt = ace_player getVariable ["NCA_atrt_riding", objNull];
if (isNull _atrt) exitWith {
    (QGVAR(RscHealthLayer) call BIS_fnc_RscLayer) cutFadeOut 0.5;
};

uiNamespace setVariable ["NCA_atrt_RscHealth", _display];
[_atrt, 0] call FUNC(ui_updateHealth);
