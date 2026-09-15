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
if (_rider != ls_player) exitWith { true };

// Always force select the first fire mode, prevents players from accessing AI fire modes (vanilla bug)
private _weapon = currentWeapon _atrt;
private _modes = getArray (configFile >> "CfgWeapons" >> _weapon >> "modes");
_atrt selectWeapon [_weapon, _weapon, _modes select 0];

// Give AT-RT the same capabilities as the rider
// Not perfect, as the thermal modes won't be the same, but its the best we can do without making an NVG variant for every combination
private _visionModes = _rider call EFUNC(common,getVisionModes);
private _hasNV = "NVG" in _visionModes;
private _hasTI = "TI" in _visionModes;

switch (true) do {
    case (_hasNV && _hasTI): {
        _atrt linkItem "ls_nvg_nvti_invisible";
    };
    case (_hasNV): {
        _atrt linkItem "ls_nvg_invisible";
    };
    case (_hasTI): {
        _atrt linkItem "ls_nvg_ti_invisible";
    };
    default {
        // AT-RT might have NVGs from the last rider
        _atrt unlinkItem (hmd _atrt);
    };
};

inGameUISetEventHandler ["Action", "if ((_this select 3) isEqualTo ""BackFromUAV"") then {true};"]; // Disables "Release UAV Controls" action
_atrt switchCamera cameraView;
_rider remoteControl _atrt;

// Prevent throwing grenades
[_rider, "blockThrow", QGVAR(atrt_isRiding), true] call CBA_fnc_setStatusEffect;
true;
