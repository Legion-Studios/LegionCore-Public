#include "..\script_component.hpp"
/*
 * Authors: DartRuffian
 * Updates the health bar for the AT-RT.
 *
 * Arguments:
 * 0: AT-RT <OBJECT>
 * 1: Duration (optional, default: 0.5) <NUMBER>
 *
 * Return Value:
 * None
 *
 * Example:
 * _atrt call ls_vehicles_fnc_atrt_ui_updateHealth
 *
 * Public: No
 */

// params ["_atrt", ["_duration", 0.5]];
// TRACE_2("fnc_ui_updateHealth",_atrt,_duration);

// private _display = uiNamespace getVariable ["NCA_atrt_RscHealth", displayNull];
// if (!hasInterface || { isNull _atrt || !alive _atrt || !local _atrt || isNull _display }) exitWith {};

// private _ctrlHealth = _display displayCtrl IDC_HEALTH_HEALTH;
// private _health = (_atrt getVariable ["NCA_atrt_health", ATRT_HEALTH]) / ATRT_HEALTH;
// private _color = _health call EFUNC(core,getHealthColor);

// _ctrlHealth ctrlSetTextColor _color;
// _ctrlHealth ctrlSetPositionW (HEALTH_HEALTH_W * safeZoneW * _health);
// _ctrlHealth ctrlCommit _duration;

// private _ctrlLabel = _display displayCtrl IDC_HEALTH_LABEL;
// _ctrlLabel ctrlSetTextColor _color;
// _ctrlLabel ctrlSetText format ["AT-RT: %1%2", round (_health * 100), "%"];
