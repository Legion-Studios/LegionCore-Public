#include "..\script_component.hpp"
/*
 * Authors: DartRuffian
 * Hides a unit's face.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 1: Hide face (optional, default: true) <BOOL>
 * 2: Face to use (optional, default: "ls_hideHead") <STRING>
 *    - Only used if face is being hidden
 *
 * Return Value:
 * None
 *
 * Example:
 * [unit, true] call ls_common_fnc_hideHead
 *
 * Public: Yes
 */

params [
    ["_unit", objNull, [objNull]],
    ["_hide", true, [true]],
    ["_face", "ls_hideHead", [""]]
];
TRACE_3("fnc_hideFace",_unit,_hide,_face);

if (!alive _unit) exitWith {};

private _currentFace = face _unit;

if (_hide) then {
    private _oldFace = _unit getVariable [QGVAR(oldFace), _currentFace];
    _unit setVariable [QGVAR(oldFace), _oldFace, true]; // Set variable if not set
} else {
    _face = _unit getVariable [QGVAR(oldFace), face _unit];
};

if (_face != _currentFace) then {
    [QGVAR(setFace), [_unit, _face]] call CBA_fnc_globalEvent;
};
