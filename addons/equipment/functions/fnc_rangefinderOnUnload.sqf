#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Handles the rangefinder display's onUnload event.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Display <DISPLAY>
 * 1: Exit code (unused) <NUMBER>
 *
 * Return Value:
 * None
 *
 * Example:
 * _display call ls_equipment_fnc_rangefinderOnUnload;
 *
 * Public: No
 */

// params ["_display"];
// TRACE_1("fnc_rangefinderOnUnload",_display);

if (GVAR(rangefinderPFH) >= 0) then {
    GVAR(rangefinderPFH) call CBA_fnc_removePerFrameHandler;
    GVAR(rangefinderPFH) = -1;
};

uiNamespace setVariable [QGVAR(RscRangefinder), nil];
