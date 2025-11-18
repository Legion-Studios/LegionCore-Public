#include "..\script_component.hpp"
/*
 * Authors: DartRuffian
 * Stat text statement for the camoflauge coefficient.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Stats <ARRAY>
 * 1: Config <CONFIG>
 *
 * Return Value:
 * Stat text <STRING>
 *
 * Example:
 * [["ls_activeCamo_camouflageCoef"], _config] call ls_activecamo_fnc_statTextStatement_camouflageCoef
 *
 * Public: No
 */

params ["_stats", "_config"];
TRACE_2("fnc_statTextStatement_camouflageCoef",_stats,_config);

private _statConfig = _config >> (_stats select 0);
if (isNull _statConfig) exitWith { format ["%1x", GVAR(camouflageCoefficient)] };

format ["%1x", getNumber _statConfig];
