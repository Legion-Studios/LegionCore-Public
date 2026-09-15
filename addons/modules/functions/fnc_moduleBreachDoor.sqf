#include "..\script_component.hpp"
/*
 * Authors: DartRuffian
 * Orders a unit to move to the closest door and places a breaching charge on it.
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
 * [_logic, [], true] call ls_modules_fnc_moduleBreachDoor
 *
 * Public: No
 */

#define DOOR_LOCK_DISTANCE 10
#define BREACH_CHARGE_TIMER 5

if (canSuspend) exitWith {
    [FUNC(moduleBreachDoor), _this] call CBA_fnc_directCall;
};

params ["_logic", "", "_activated"];
TRACE_2("fnc_moduleBreachDoor",_logic,_activated);

private _unit = attachedTo _logic;
if !(local _unit && _activated) exitWith {};

private _radius = _logic getVariable [QGVAR(radius), RADIUS_DEFAULT];
private _lockState = _logic getVariable [QGVAR(lockState), 0];
deleteVehicle _logic;

private _door = [_unit, _radius, 2, _lockState] call EFUNC(common,findClosestDoor);
if (_door isEqualTo []) exitWith {
    [LSTRING(noClosedDoorFound), _logic] call FUNC(errorAndClose);
};
_door params ["_object", "", "", "_positionAGL"];

private _group = group _unit;
private _tempGroup = _group;

// If there are other units in the group, move the unit into a new group to not disrupt the original group's orders
if (count units _group > 1) then {
    _unit setVariable [QGVAR(originalGroup), _group];
    _tempGroup = createGroup [side _group, true];
    [_unit] joinSilent _tempGroup;
    TRACE_CHAT_2("Moving unit to temp group",_unit,_tempGroup);
};

// Give group move order to the door, and then a move order back to their original position
_unit setVariable [QGVAR(targetDoor), _door];

private _waypoint = _tempGroup addWaypoint [AGLToASL _positionAGL, -1, -1];
_waypoint setWaypointStatements [toString {
    (this getVariable [QGVAR(targetDoor), []]) params ["_object", "", "_door"];

    // Lock door to prevent being opened by the AI once close enough
    if (this distance _object < DOOR_LOCK_DISTANCE) then {
        TRACE_CHAT_0("Within 10 meters, locking door");
        _object setVariable [format ["BIS_disabled_door_%1", _door], 1, true];
    };

    true;
}, toString {
    (this getVariable [QGVAR(targetDoor), []]) params ["_object", "_selection", "_door", "_positionAGL"];

    if (!isNull (_object getVariable [QGVAR(breachCharge), objNull])) exitWith {};

    this lookAt _object;

    // Small delay to match explosive spawning to the animation
    this playActionNow "PutDown";
    [{
        params ["_unit", "_object", "_selection", "_positionAGL"];
        // PositionAGL is only used for water craft, but we just need it close enough to the door to attach properly
        private _charge = createVehicle ["ls_explosive_breachCharge_ammo", _positionAGL, [], 0, "CAN_COLLIDE"];
        _charge attachTo [_object, _object selectionPosition [_selection, "Geometry", "AveragePoint"]];

        // Not perfect, but good enough
        private _placeAngle = _charge getDir _unit;
        _charge setVectorDirAndUp [[0, 0, 1], [sin _placeAngle, cos _placeAngle, 0]];

        _object setVariable [QGVAR(breachCharge), _charge, true];
        _object addEventHandler ["Deleted", {
            params ["_object"];
            deleteVehicle (_object getVariable [QGVAR(breachCharge), objNull]);
            _object setVariable [QGVAR(breachCharge), nil, true];
        }];
        [{ triggerAmmo _this }, _charge, BREACH_CHARGE_TIMER] call CBA_fnc_waitAndExecute;
    }, [this, _object, _selection, _positionAGL], 0.9] call CBA_fnc_waitAndExecute;

    [{
        _this lookAt objNull;
        private _tempGroup = group _this;
        private _group = _this getVariable [QGVAR(originalGroup), _tempGroup];
        if (_group != _tempGroup) then {
            [_this] joinSilent _group;
            deleteGroup _tempGroup;
            TRACE_CHAT_2("Moving unit back to original, deleted temp group",_this,_group);
        };
    }, this, 2] call CBA_fnc_waitAndExecute;
}];

_tempGroup addWaypoint [getPosASL _unit, -1, -1];
