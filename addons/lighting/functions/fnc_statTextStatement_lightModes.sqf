#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Text statement for the light modes stat.
 *
 * Arguments:
 * 0: Stats (Unused) <ARRAY>
 * 1: Item config path <CONFIG>
 *
 * Return Value:
 * Stat Text <STRING>
 *
 * Example:
 * [[], _config] call ls_lighting_fnc_statTextStatement_lightModes;
 *
 * Public: No
 */

params ["", "_config"];
TRACE_1("fnc_statTextStatement_lightModes",_config);

private _lightingData = (configName _config) call FUNC(getEquipmentData);
private _modeNames = [];
{
    _modeNames pushBackUnique getText (configFile >> "CfgVehicles" >> _x >> "displayName");
} forEach (_lightingData get "modes");
_modeNames;
