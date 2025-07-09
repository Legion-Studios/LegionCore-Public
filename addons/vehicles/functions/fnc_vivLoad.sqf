#include "..\script_component.hpp"
/*
 * Author: Crimzonkat
 * Rewritten by DartRuffian
 * Loads the vehicle saved to the carrier's namespace into the carrier.
 *
 * Please provide proper credits to those who participate in development.
 * This module was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Carrier <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * _carrier call ls_vehicles_fnc_vivLoad;
 *
 * Public: Yes
 */

params [
    ["_carrier", objNull, [objNull]]
];
TRACE_1("fnc_vivLoad",_carrier);

if (isNull _carrier) exitWith {};
private _object = _carrier getVariable [QGVAR(vivLoadTarget), objNull];

if (!isNull _object) then {
    _carrier setVehicleCargo _object;
};

_carrier setVariable [QGVAR(vivCompatibleVehicles), nil];
_carrier setVariable [QGVAR(vivLoadTarget), nil];
nil;
