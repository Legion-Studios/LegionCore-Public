#include "..\script_component.hpp"
/*
 * Authors: DartRuffian
 * Handles an object being placed in zeus.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Curator module (unused) <OBJECT>
 * 1: Object that was placed <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [objNull, _atrt] call ls_vehicles_fnc_onCuratorObjectPlaced
 *
 * Public: No
 */

params ["", "_object"];
TRACE_1("fnc_onCuratorObjectPlaced",_object);

if !(local _object && _object isKindOf "ls_vehicle_atrt_base") exitWith {};

private _crewType = getText (configOf _object >> "ls_crew"); // TODO: Cache?

// Spawn dummy rider if ZEN option is enabled
if (missionNamespace getVariable ["zen_editor_includeCrew", false] && _crewType != "") then {
    private _unit = (group _object) createUnit [_crewType, [0, 0, 0], [], 0, "CAN_COLLIDE"];
    _unit setPosASL (getPosASL _object);
    [_unit, _object, true] call FUNC(atrt_mount);
};
