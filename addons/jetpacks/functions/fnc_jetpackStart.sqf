#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Starts the jetpack sequence.
 *
 * Arguments:
 * 0: Whether to start the jetpack with a jump (if grounded) (optional, default: false) <BOOL>
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ls_jetpacks_fnc_jetpackStart;
 *
 * Public: No
 */

#define BOOST_MAX_VELOCITY 6

params [
    ["_boost", false, [false]]
];
TRACE_1("fnc_jetpackStart",_boost);

if (ls_player getVariable [QGVAR(usingJetpack), false] or {!(ls_player call FUNC(hasJetpack))}) exitWith {};

if !(ls_player call FUNC(canJetpack)) exitWith {
    ls_player call FUNC(playErrorSound);
};

private _jetpack = backpackContainer ls_player;
private _strength = getNumber (configOf _jetpack >> QGVAR(strength));
private _speed = getNumber (configOf _jetpack >> QGVAR(speed));
private _freefallHeight = getNumber (configOf _jetpack >> QGVAR(freefallHeight));

if (_freefallHeight > 0) then {
    private _originalHeight = (getUnitFreefallInfo ls_player) select 2;
    ls_player setVariable [QGVAR(freefallHeight), _originalHeight];
    ls_player setUnitFreefallHeight (_freefallHeight max _originalHeight);
};

private _velocity = velocity ls_player;
private _positionASL = getPosASL ls_player;
private _height = _positionASL select 2;

// Only jump player out of water if they're not too deep
if (_height < -GVAR(maxWaterJumpDepth)) exitWith {};

if (_boost and {isTouchingGround ls_player}) then {
    // Teleport is needed so player will actually move upwards
    _positionASL set [2, (_positionASL select 2) + 0.05];
    _velocity set [2, (_velocity select 2) + (_strength / 2 max BOOST_MAX_VELOCITY)];
    // Cap initial jump to avoid taking damage from a straight jump up

    ls_player setPosASL _positionASL;
    ls_player setVelocity _velocity;
};

if (ls_player call ace_common_fnc_isSwimming) then {
    [ls_player, "stand", 1] call ace_common_fnc_doAnimation;

    private _positionASLW = getPosASLW ls_player;
    if (_positionASLW#2 < -0.9) then {
        _positionASLW set [2, -0.9];
        ls_player setPosASLW _positionASLW;
    };
    _velocity = (velocity ls_player) vectorAdd [0, 0, (_strength / 2 max BOOST_MAX_VELOCITY)];
    ls_player setVelocity _velocity;
};

ls_player setVariable [QGVAR(usingJetpack), true, true];
private _arguments = [ls_player, _jetpack, _strength, _speed, _freefallHeight];
[QGVAR(jetpackFired), _arguments] call CBA_fnc_globalEvent;
_arguments call FUNC(jetpackPFH);

[ls_player, _jetpack] call FUNC(soundPFH);
ls_player call FUNC(fuelPFH);

nil;
