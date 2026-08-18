#include "..\script_component.hpp"
/*
 * Authors: DartRuffian
 * Modified version of BIS_fnc_door to allow using a custom animation speed parameter.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * You are free to repack and modify this function to suit your needs.
 * For suggestions for editing the function in Legion, create a suggestion in the Legion Studios Discord.
 *
 * Arguments:
 * 0: Door object <OBJECT>
 * 1: Door index <NUMBER>
 * 2: Animation phase <NUMBER>
 *    - 0: Close
 *    - 1: Open
 * 3: Animation speed (optional, default: 1) <NUMBER|BOOL>
 *    - Number: Multiplier for animation speed
 *    - True: Instantly animate door
 *
 * Return Value:
 * None
 *
 * Example:
 * [this, 1, 1] call ls_common_fnc_doorStatement
 *
 * Public: No
 */

params ["_doorObject", "_door", "_phase", ["_speed", 1]];
TRACE_4("fnc_doorStatement",_doorObject,_door,_phase,_speed);

if (isNull _doorObject) exitWith {};

if ((_doorObject getVariable [format ["BIS_disabled_Door_%1", _door], 0]) != 1) then {
    _doorObject animateSource [format ["Door_%1_sound_source", _door], _phase, _speed];
    _doorObject animateSource [format ["Door_%1_noSound_source", _door], _phase, _speed];
} else {
    _phase = (1 - (_doorObject animationSourcePhase (format ["Door_%1_locked_source", _door])));
    _doorObject animateSource [format ["Door_%1_locked_source", _door], _phase, _speed];
};

// if (_animationPhase == 1 && _autoCloseDelay > 0) then {
//     [{ call BIS_fnc_door }, [_doorObject, _doorIndex, 0], _autoCloseDelay] call CBA_fnc_waitAndExecute;
// };
