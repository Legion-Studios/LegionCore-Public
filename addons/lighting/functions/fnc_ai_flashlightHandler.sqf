#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * waitAndExecute handler to periodically enable/disable flashlights for AI units.
 * Based on https://github.com/acemod/ACE3/blob/d56a3a6a95fefc813d4774be5ae327716415751a/addons/ai/functions/fnc_assignNVGpfh.sqf
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * None

 * Return Value:
 * None
 *
 * Example:
 * [] call ls_lighting_fnc_ai_flashlightHandler;
 *
 * Public: No
 */

private _units = allUnits select { !isPlayer _x and { alive _x }};
TRACE_1("fnc_ai_flashlightHandler",count _units);

if (!GVAR(ai_enableFlashlights)) exitWith {
    TRACE_1("Shutdown AI flashlight loop",_this);
    GVAR(ai_flashlightThread) = false;
};

GVAR(ai_enableFlashlightState) = sunOrMoon < 1 || { moonIntensity > 0.8 };
{
    _x call FUNC(ai_enableFlashlight);
} forEach _units;

[FUNC(ai_flashlightHandler), [], FLASHLIGHT_HANDLER_INTERVAL] call CBA_fnc_waitAndExecute;
nil;
