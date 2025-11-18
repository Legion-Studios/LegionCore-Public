#include "..\script_component.hpp"
/*
 * Author: Crimzonkat
 * Rewritten by DartRuffian
 * Plays a vehicle animation and sound on a keybind press.
 *
 * Please provide proper credits to those who participate in development.
 * This module was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 * 1: Animation trigger type <STRING>
 * 2: Check role (Optional, default: false) <BOOL>
 *    - If true, the vehicle's `ls_vehicles_lockState` variable will be checked.
 *    - If vehicle is locked, only (co)pilots can toggle animations. This check is local and uses ls_player.
 *
 * Return Value:
 * True if animations were played, otherwise false <BOOL>
 *
 * Example:
 * [_vehicle, _triggerType] call ls_vehicles_fnc_keybindAnimation;
 *
 * Public: Yes
 */

params [
    ["_vehicle", objNull, [objNull]],
    ["_triggerType", "", [""]]
];
TRACE_2("fnc_keybindAnimation",_vehicle,_triggerType);

private _fnc_checkRole = {
    params ["_vehicle"];
    if !(_vehicle getVariable [QGVAR(lockAnimations), false]) exitWith { true };
    [_vehicle, ls_player] call EFUNC(common,isPilot);
};

private _config = configOf _vehicle;
private _animations = getArray (_config >> format [QGVAR(%1Anims), _triggerType]);

if (!alive _vehicle or
    {_triggerType == ""} or
    {_animations isEqualTo []} or
    {!(_vehicle call _fnc_checkRole)}
) exitWith { false };

private _sounds = getArray (_config >> format [QGVAR(%1ToggleSounds), _triggerType]);
private _hasPlayedSound = false; // Only play one sound, no matter how many animations there are

{
    if (_vehicle animationSourcePhase (_animations select 0) == 1 and {_vehicle animationSourcePhase _x <= 1}) then {
        if (!_hasPlayedSound) then {
            [_vehicle, _sounds#0] call EFUNC(common,say3D);
            _hasPlayedSound = true;
        };
        _vehicle animateSource [_x, 0];
    } else {
        if (!_hasPlayedSound) then {
            [_vehicle, _sounds#1] call EFUNC(common,say3D);
            _hasPlayedSound = true;
        };
        _vehicle animateSource [_x, 1];
    };
} forEach _animations;

true;
