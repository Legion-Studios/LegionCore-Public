#include "..\script_component.hpp"
/*
 * Authors: DartRuffian
 * Condition for the opening / closing door UserActions.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * You are free to repack and modify this function to suit your needs.
 * For suggestions for editing the function in Legion, create a suggestion in the Legion Studios Discord.
 *
 * Arguments:
 * 0: Door object <OBJECT>
 * 1: Door index <NUMBER>
 * 2: Is opening <BOOL>
 *
 * Return Value:
 * True if the action should be shown, otherwise false
 *
 * Example:
 * [this, 1, true] call ls_common_fnc_doorCondition
 *
 * Public: No
 */

// We can potentially tweak this per door, but lower value allows players to quickly shut the door after opening
// Can lead to funny "NOPE" moments if there's lot of enemies behind the door
#define DOOR_PHASE 0.35

params ["_doorObject", "_doorIndex", "_isOpening"];
TRACE_3("fnc_doorCondition",_doorObject,_doorIndex,_isOpening);

if !(cameraOn isKindOf "CAManBase" && alive _doorObject) exitWith { false };

private _animationPhase = _doorObject animationSourcePhase format ["Door_%1_sound_source", _doorIndex];
private _canOpenClose = if (_isOpening) then {
    _animationPhase < DOOR_PHASE
} else {
    // Only check disabled var on the close, on open the locked animation will be played instead of opening the door
    _animationPhase >= DOOR_PHASE && (_doorObject getVariable [format ["BIS_disabled_Door_%1", _doorIndex], 0]) != 1
};

_canOpenClose;
