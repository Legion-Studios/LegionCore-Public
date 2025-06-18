#include "..\script_component.hpp"
/*
 * Author: Crimzonkat
 * Rewritten by DartRuffian
 * Checks if any nearby objects can be loaded into the carrier vehicle.
 * First vehicle that can be loaded is saved to `ls_vehicles_vivLoadTarget` in the carrier's namespace.
 *
 * Please provide proper credits to those who participate in development.
 * This module was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Carrier <OBJECT>
 * 1: Center for loading range (optional, default: first value in exits param) <STRING>
 * 2: Range to search for objects in (optional, default: vivLoadingRange setting) <STRING>
 *
 * Return Value:
 * True if a vehicle can be loaded, otherwise false <BOOL>
 *
 * Example:
 * [_carrier, "", 10] call ls_vehicles_fnc_vivCanLoad;
 *
 * Public: Yes
 */

params [
    ["_carrier", objNull, [objNull]],
    ["_loadPoint", "", [""]],
    ["_range", GVAR(vivLoadingRange), [0]]
];
TRACE_3("fnc_vivCanLoad",_carrier,_loadPoint,_range);

if (isNull _carrier || _range <= 0) exitWith { false };

if (_loadPoint == "") then {
    private _loadPoint = getArray (configOf _carrier >> "VehicleTransport" >> "Carrier" >> "exits");
    _loadPoint = _loadPoint select 0; // selecting empty array returns nil
};

// Lazy eval is needed because a command thas has nil passed is ignored and returns nil
// Meaning this check would never run correctly
if (isNil "_loadPoint" || { _loadPoint == "" }) exitWith { false };

private _positonAGL = _carrier modelToWorld (_carrier selectionPosition _loadPoint);
private _objects = nearestObjects [_positonAGL, [], _range];
_objects = _objects select {
    _carrier canVehicleCargo _x isEqualTo [true, true] || {
        getNumber (configOf _x >> "VehicleTransport" >> "Cargo" >> "canBeTransported") >= 1
    }
};

_carrier setVariable [QGVAR(vivLoadPoint), _positonAGL];
_carrier setVariable [QGVAR(vivCompatibleVehicles), _objects];
_carrier setVariable [QGVAR(vivLoadTarget), _objects#0]; // selecting index 0 on empty array is fine
count _objects > 0;
