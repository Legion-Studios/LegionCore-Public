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
private _cfgVehicles = configFile >> "CfgVehicles";

private _modeNames = (_lightingData get "lightModes") apply {
    getText (_cfgVehicles >> _x >> "displayName");
};

// apply doesn't define the _forEachIndex variable
// Convert flat array to two columns
{
    if (_forEachIndex % 3 == 2) then {
        _modeNames insert [_forEachIndex, [endl]];
    } else {
        _modeNames set [_forEachIndex, format ["%1, ", _x]];
    };
} forEach _modeNames;

// Remove trailing comma
private _lastIndex = (count _modeNames) - 1;
private _lastItem = _modeNames select _lastIndex;
_modeNames set [_lastIndex, _lastItem select [0, count _lastItem - 2]];
_modeNames joinString "";
