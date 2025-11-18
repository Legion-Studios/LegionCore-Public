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
    // Selecting empty array returns nil
    _loadPoint = (getArray (configOf _carrier >> "VehicleTransport" >> "Carrier" >> "exits")) select 0;
};

// Lazy eval is needed because a command thas has nil passed is ignored and returns nil
// Meaning this check would never run correctly
if (isNil "_loadPoint" || { _loadPoint == "" }) exitWith { false };

private _positonAGL = _carrier modelToWorld (_carrier selectionPosition _loadPoint);
private _objects = nearestObjects [_positonAGL, [], _range] apply {
    private _attachedTo = attachedTo _x;

    // Attached > parented > object itself
    // The if/else blocks here are faster than using a switch
    if (isNull _attachedTo) then {
        private _parent = objectParent _x;
        [_parent, _x] select (isNull _parent);
    } else {
        _attachedTo
    };
};
_objects = _objects arrayIntersect _objects;

_objects = _objects select {
    _carrier canVehicleCargo _x isEqualTo [true, true] && {
        // Viv does let you pick up units, but we want to filter out all units that aren't an AT-RT
        // We also want to filter out things like ground holders
        // We want to use Man instead of CAManBase here to also filter out animal units
        !(_x isKindOf "Man" && !(_x isKindOf "3AS_ATRT_Base")) && (toLowerANSI getText (configOf _x >> "model") != "\a3\weapons_f\dummyweapon.p3d")
    }
};

_carrier setVariable [QGVAR(vivLoadPoint), _positonAGL];
_carrier setVariable [QGVAR(vivCompatibleVehicles), _objects]; // Used for vehicle specific load ACE action
_carrier setVariable [QGVAR(vivLoadTarget), _objects#0]; // Selecting index 0 on empty array is fine
_objects isNotEqualTo [];
