#include "..\script_component.hpp"
/*
 * Authors: DartRuffian
 * Orders a unit to mount a selected AT-RT.
 *
 * Arguments:
 * 0: Logic <OBJECT>
 * 1: Affected units (unused) <ARRAY>
 * 2: Activated <BOOL>
 *
 * Return Value:
 * None
 *
 * Example:
 * [_logic, [], true] call ls_modules_fnc_moduleMountATRT
 *
 * Public: No
 */

#define SEARCH_RADIUS 3

if (canSuspend) exitWith {
    [FUNC(moduleMountATRT), _this] call CBA_fnc_directCall;
};

params ["_logic", "", "_activated"];
TRACE_2("fnc_moduleMountATRT",_logic,_activated);

private _unit = attachedTo _logic;
if !(_activated) exitWith {};

deleteVehicle _logic;

private _callback = {
    params ["_successful", "_unit", "_mousePosASL"];
    if (!_successful) exitWith {};

    // 2D distance search
    private _atrt = (nearestObjects [ASLToAGL _mousePosASL, ["ls_vehicle_atrt_base"], SEARCH_RADIUS, true]) param [0, objNull];

    private _exit = true;
    switch (false) do {
        case (!isNull _atrt): {
            [LSTRING(noATRTFound), _logic] call FUNC(errorAndClose);
        };
        case (_atrt isKindOf "ls_vehicle_atrt_base"): {
            [LSTRING(onlyATRT), _logic] call FUNC(errorAndClose);
        };
        case (_atrt call EFUNC(common,isAwake)): {
            [LSTRING(onlyConscious), _logic] call FUNC(errorAndClose);
        };
        case (isNull (_atrt getVariable [QEGVAR(vehicles,atrt_rider), objNull])): {
            ["STR_3DEN_notifications_vehicleFull_text", _logic] call FUNC(errorAndClose);
        };
        default {
            _exit = false;
        };
    };

    if (_exit) exitWith {};

    // TODO: Add CBA event for mount AT-RT
    private _instant = _unit getVariable [QGVAR(mountInstantly), false];
    if (_instant) exitWith {
        [_unit, _atrt, true] call EFUNC(vehicles,atrt_mount);
    };

    _unit setVariable [QGVAR(targetATRT), _atrt];

    // Give move order to AT-RT, mount when close enough
    private _waypoint = (group _unit) addWaypoint [getPosASL _atrt, -1];
    _waypoint setWaypointCompletionRadius 3;
    _waypoint setWaypointStatements ["true", toString {
        [this, this getVariable [QGVAR(targetATRT), objNull]] call EFUNC(vehicles,atrt_mount);
    }];
};

// If ACE is loaded, allow Zeus to click on an AT-RT, otherwise just search near the unit
if (isNil "ace_zeus_fnc_getModuleDestination") then {
    [true, _unit, getPosASL _unit] call _callback;
} else {
    [_unit, _callback, localize LSTRING(moduleMountATRT), "\A3\ui_f\data\IGUI\Cfg\Actions\loadVehicle_ca.paa"] call ace_zeus_fnc_getModuleDestination;
};
