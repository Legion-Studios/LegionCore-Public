#include "..\script_component.hpp"
/*
 * Authors: DartRuffian
 * Dismounts an AT-RT.
 *
 * Arguments:
 * 0: AT-RT <OBJECT>
 *
 * Return Value:
 * True if AT-RT was dismounted, otherwise false <BOOL>
 *
 * Example:
 * _atrt call ls_vehicles_fnc_atrt_dismount
 *
 * Public: No
 */

params ["_atrt"];
TRACE_1("fnc_atrt_dismount",_atrt);

private _rider = _atrt getVariable [QGVAR(atrt_rider), objNull];
if (isNull _rider || { !([_rider, _atrt] call FUNC(atrt_canDismount)) }) exitWith { false };

_atrt setVariable [QGVAR(atrt_rider), nil, true];
_rider setVariable [QGVAR(atrt_riding), nil, true];
_rider setVariable [QGVAR(atrt_isRiding), nil, true];
_atrt setVariable [QGVAR(atrt_lastRider), _rider, true];

[_atrt, "setCaptive", QGVAR(atrt_hasRider), true] call CBA_fnc_setStatusEffect;

private _direction = (direction _atrt) - 90;
private _positionASL = getPosASL _atrt vectorDiff [
    1.35 + sin _direction,
    1.3 + cos _direction,
    0
];

detach _rider;
_rider setDir _direction;
_rider setPosASL _positionASL;

[_atrt, "atrt_standToSit", 2] call EFUNC(common,doAnimation);

// Clean up effects when dismounting and no one remounts soon
[{
    if (isNull (_this getVariable [QGVAR(atrt_rider), objNull])) then {
        deleteVehicle (_this getVariable [QGVAR(atrt_effects), []]);
        _this setVariable [QGVAR(atrt_effects), nil];
        ATRT_EFFECTS_EVENT_ID(_this) call CBA_fnc_removeGlobalEventJIP; // Remove from JIP queue
    };
}, _atrt, random [3, 6, 10]] call CBA_fnc_waitAndExecute;

[_rider, "blockThrow", QGVAR(atrt_isRiding), false] call CBA_fnc_setStatusEffect;

[_rider, "", 2] call EFUNC(common,doAnimation);

// Everything below is specific to the local player
if (_rider != ls_player) exitWith {
    // If rider is an AI
    if (!isPlayer _rider) then {
        // private _jipID = [QEGVAR(common,enableAI), [_rider, ["ALL"], false], hashValue _rider] call CBA_fnc_globalEventJIP;
        // [_jipID, _rider] call CBA_fnc_removeGlobalEventJIP;
    };

    true;
};

inGameUISetEventHandler ["Action", ""];
_rider switchCamera cameraView;
objNull remoteControl _atrt;

true;
