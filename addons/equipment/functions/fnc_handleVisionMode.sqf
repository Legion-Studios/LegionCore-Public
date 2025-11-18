#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Handles the player changing vision modes.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 1: Vision mode <NUMBER>
 * 2: TI index (unused) <NUMBER>
 * 3: Previous vision mode (unused) <NUMBER>
 * 3: Previous TI index (unused) <NUMBER>
 * 3: Vehicle (unused) <OBJECT>
 * 3: Turret path (unused) <ARRAY>
 *
 * Return Value:
 * None
 *
 * Example:
 * [player, _visionMode] call ls_equipment_fnc_handleVisionMode
 *
 * Public: No
 */

params ["_unit", "_visionMode"];
TRACE_2("fnc_handleVisionMode",_unit,_visionMode);

private ["_displayClass"];
if (!GVAR(enableRangefinderOverlay) || _unit isNotEqualTo ls_player || _visionMode == 0 || missionNamespace getVariable ["ace_ui_hideHud", false] || {
    _displayClass = getText (configFile >> "CfgWeapons" >> hmd _unit >> QGVAR(rangefinderDisplay));
    _displayClass == "";
}) exitWith {
    GVAR(rangefinderPFH) call CBA_fnc_removePerFrameHandler;
    GVAR(rangefinderPFH) = -1;
    QGVAR(RscRangefinderLayer) cutFadeOut 0;
};

// Only create display if it doesn't already exist
if (isNull (uiNamespace getVariable [QGVAR(RscRangefinder), displayNull])) then {
    QGVAR(RscRangefinderLayer) cutRsc [_displayClass, "PLAIN", 1, false];
};
