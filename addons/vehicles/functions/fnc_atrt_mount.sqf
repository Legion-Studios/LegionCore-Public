#include "..\script_component.hpp"
/*
 * Authors: DartRuffian
 * Mounts a player to an AT-RT.
 *
 * Arguments:
 * 0: Rider <OBJECT>
 * 1: AT-RT <OBJECT>
 * 2: Instantly mount (optional, default: false) <BOOL>
 *
 * Return Value:
 * True if AT-RT was mounted, otherwise false <BOOL>
 *
 * Example:
 * [player, _atrt] call ls_vehicles_fnc_atrt_mount
 *
 * Public: No
 */

params ["_rider", "_atrt", ["_instant", false]];
TRACE_3("fnc_atrt_mount",_atrt,_rider,_instant);

if !([_rider, _atrt] call FUNC(atrt_canMount)) exitWith { false };

_atrt setVariable [QGVAR(atrt_rider), _rider, true];
_rider setVariable [QGVAR(atrt_riding), _atrt, true];
_rider setVariable [QGVAR(atrt_isRiding), true, true];

_rider attachTo [_atrt, [0, 0, 0], "seat", true];

[_atrt, "setCaptive", QGVAR(atrt_hasRider), false] call CBA_fnc_setStatusEffect;

[_atrt, "atrt_sitToStand", 2] call EFUNC(common,doAnimation);

if (_instant) then {
    [_rider, "ls_driver_atrt_state", 2] call EFUNC(common,doAnimation);
} else {
    [_rider, "ChopperLight_C_LIn_H", 2] call EFUNC(common,doAnimation);
    [{
        // Prevent animation if mounting and dismounting quickly
        if (_this getVariable [QGVAR(atrt_isRiding), false]) then {
            [_this, "ls_driver_atrt_state", 2] call EFUNC(common,doAnimation);
        }
    }, _rider, 1.5] call CBA_fnc_waitAndExecute;
};

// Create single JIP item for creating the effects
private _jipID = [QGVAR(atrt_createEffects), _atrt, ATRT_EFFECTS_EVENT_ID(_atrt)] call CBA_fnc_globalEventJIP;
[_jipID, _atrt] call CBA_fnc_removeGlobalEventJIP; // Automatically delete from queue if _atrt is deleted

// Everything below is specific to the local player
if (_rider != ls_player) exitWith {
    // If rider is an AI
    if (!isPlayer _rider) then {
        // private _jipID = [QEGVAR(common,disableAI), [_rider, ["ALL"], false], hashValue _rider] call CBA_fnc_globalEventJIP;
        // [_jipID, _rider] call CBA_fnc_removeGlobalEventJIP;
    };
    true;
};

inGameUISetEventHandler ["Action", "if ((_this select 3) isEqualTo ""BackFromUAV"") then {true};"]; // Disables "Release UAV Controls" action
_atrt switchCamera cameraView;
_rider remoteControl _atrt;

// Prevent throwing grenades
[_rider, "blockThrow", QGVAR(atrt_isRiding), true] call CBA_fnc_setStatusEffect;

true;
