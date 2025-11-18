#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Forces a unit into ragdoll
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 1: Force in newtons (optional, default: [1, 1, 1]) <ARRAY>
 *    - Force vector in world space, format [x, y, z]
 * 2: Where to apply force too (optional, default: [0, 0, 0]) <ARRAY | STRING>
 *    - ARRAY: Relative position on object
 *    - STRING: Selection name
 * 3: Unconsciousness duration (optional, default: 3) <NUMBER>
 *    - Pass 0 to keep conscious
 *
 * Return Value:
 * None
 *
 * Example:
 * _unit call ls_common_fnc_ragdoll;
 *
 * Public: Yes
 */

params [
    ["_unit", objNull, [objNull]],
    ["_force", [1, 1, 1], [[]], 3],
    ["_position", [0, 0, 0], [[], ""], 3],
    ["_unconsciousTime", 3, [0]]
];
TRACE_4("fnc_ragdoll",_unit,_force,_position,_unconsciousTime);

// Unit is either dead or is already in ragdoll state
if (!alive _unit or alive _unit == isAwake _unit) exitWith {};

if (!local _unit) exitWith {
    [QGVAR(ragdoll), _this, _unit] call CBA_fnc_targetEvent;
};
_unit setVariable [QGVAR(isRagdolling), true];

if (_position isEqualType "") then {
    _position = _unit selectionPosition _position;
};

private _aceMedical = missionNamespace getVariable ["ace_medical_enabled", false];

if (_unconsciousTime > 0) then {
    if (_aceMedical and {!(lifeState _unit in ["HEALTHY", "INJURED"])}) then {
        [_unit, true, _unconsciousTime, true] call ace_medical_fnc_setUnconscious;
    };
    _unit addForce [_force, _position, !_aceMedical];
} else {
    _unit addForce [_force, _position, false];
};

[{
    _this setUnconscious false;
    _this setVariable [QGVAR(isRagdolling), nil];
    [{
        // Prevent animation mismatches on each client
        [_this, "", 2] call FUNC(doAnimation);
        [_this, "amovppnemstpsnonwnondnon", 2] call FUNC(doAnimation);
    }, _this] call CBA_fnc_execNextFrame;
}, _unit, _unconsciousTime] call CBA_fnc_waitAndExecute;
