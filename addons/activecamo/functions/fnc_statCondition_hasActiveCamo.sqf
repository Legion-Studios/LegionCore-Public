#include "..\script_component.hpp"
/*
 * Authors: DartRuffian
 * Condition for active camo stats.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Stats (unused) <ARRAY>
 * 1: Config <CONFIG>
 *
 * Return Value:
 * Stat text <STRING>
 *
 * Example:
 * [[], _config] call ls_activecamo_fnc_statCondition_hasActiveCamo
 *
 * Public: No
 */

params ["", "_config"];
TRACE_1("fnc_statCondition_hasActiveCamo",_config);

private _item = configName _config;
_item call FUNC(getCamoItem) != _item;
