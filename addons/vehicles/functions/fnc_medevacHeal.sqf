#include "..\script_component.hpp"
/*
 * Author: Crimzonkat
 * Rewritten by DartRuffian
 * Heals a unit using a vehicle's medevac.
 *
 * Please provide proper credits to those who participate in development.
 * This module was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 * 1: Unit <OBJECT>
 *
 * Return Value:
 * True if animations were played, otherwise false <BOOL>
 *
 * Example:
 * [_vehicle, _unit] call ls_vehicles_fnc_medevacHeal;
 *
 * Public: No
 */

params [
    ["_vehicle", objNull, [objNull]],
    ["_unit", objNull, [objNull]],
    ["_time", 45, [0]]
];
TRACE_2("fnc_medevacHeal",_vehicle,_unit);

private _onSuccess = {
    (_this#0) params ["", "_unit"];
    _unit call EFUNC(common,fullHeal);

    hintSilent "Bacta dispensed.";
    [{hintSilent ""}, [], 5] call CBA_fnc_waitAndExecute;
};

private _onFailure = {
    params ["", "", "", "", "_errorCode"];
    switch (_errorCode) do {
        case 1: { hintSilent "Treatment cancelled." };
        case 2: { hintSilent "Trauma center deactivated." };
    };
};

private _condition = {
    (_this#0) params ["_vehicle"];
    // Taken from fnc_canHeal so that there's not constant config lookups from ls_common_fnc_isPilot
    isEngineOn _vehicle and {_vehicle getVariable [QGVAR(traumaCenterActive), false]};
};

["Dispensing Bacta...", _time, _condition, _onSuccess, _onFailure, [_vehicle, _unit]] call CBA_fnc_progressBar;
