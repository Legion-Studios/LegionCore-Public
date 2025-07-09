#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Enables first found flashlight for AI during night and disables it during the day.
 * Based on https://github.com/acemod/ACE3/blob/d56a3a6a95fefc813d4774be5ae327716415751a/addons/ai/functions/fnc_assignNVG.sqf
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * cursorObject call ls_lighting_fnc_ai_enableFlashlight;
 *
 * Public: No
 */

if (!GVAR(ai_enableFlashlights)) exitWith {};

params ["_unit"];
TRACE_1("fnc_ai_enableFlashlight",_unit);

private _equipment = _unit call FUNC(getFirstEquipment);
if (_equipment == "") exitWith {};

if (GVAR(ai_enableFlashlightState)) then {
    // Units don't seem to revert to normal vision if NVGs are unequipped, check hmd manually
    if (currentVisionMode _unit == 0 or {hmd _unit == ""}) then {
        if !(_unit getVariable [QGVAR(isLightOn), false]) then {
            _unit call FUNC(enable);
        };
    } else {
        _unit call FUNC(disable);
    };
} else {
    _unit call FUNC(disable);
};

nil;
