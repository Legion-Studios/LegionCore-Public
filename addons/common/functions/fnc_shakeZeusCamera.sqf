#include "..\script_component.hpp"
/*
 * Authors: Karel Moricky, rewritten by DartRuffian
 * Shakes the zeus camera, modified version of BIS_fnc_shakeCuratorCamera to run unscheduled.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Strength (optional, default: 0.01) <NUMBER>
 * 1: Duration in seconds (optional, default: 0.07) <NUMBER>
 * 2: Center (optional, default: zeus camera position) <ARRAY>
 * 3: Radius in meters (optional, default: 0) <NUNBER>
 *
 * Return Value:
 * True if shake was applied, otherwise false
 *
 * Example:
 * [] call ls_common_fnc_shakeZeusCamera
 *
 * Public: No
 */

params [["_strength", 0.01], ["_duration", 0.7], ["_centerAGL", []], ["_radius", 0]];
TRACE_4("fnc_shakeZeusCamera",_strength,_duration,_centerAGL,_radius);

private _camera = curatorCamera;
if (isNull _camera) exitWith { false };

if (_centerAGL isEqualTo []) then {
    _centerAGL = position _camera;
};

if ((_camera distance _centerAGL) > _radius) exitWith { false };

private _timeStart = CBA_missionTime;
private _timeEnd = _timeStart + _duration;
[{
    params ["_args", "_handle"];
    _args params ["_timeStart", "_timeEnd", "_strength", "_duration", "_centerAGL", "_radius", "_strengthLocalOld"];

    private _currentTime = CBA_missionTime;
    private _camera = curatorCamera;
    if (_currentTime >= _timeEnd || isNull _camera) exitWith {
        _handle call CBA_fnc_removePerFrameHandler;
    };

    private _strengthLocal = linearConversion [0, _duration, _currentTime - _timeStart, _strength, 0];
    if (_radius > 0) then {
        _strengthLocal = _strengthLocal * linearConversion [0, _radius, _camera distance _centerAGL, 1, 0];
    };
    if (_strengthLocalOld > 0) then {_strengthLocal = -_strengthLocal;};
    private _vectorDir = vectorDir _camera;
    _vectorDir set [2, (_vectorDir select 2) - _strengthLocalOld + _strengthLocal];
    _camera setVectorDirAndUp [_vectorDir, vectorUp _camera];

    _args set [-1, _strengthLocal];
}, 0.05, [_timeStart, _timeEnd, _strength, _duration, _centerAGL, _radius, 0]] call CBA_fnc_addPerFrameHandler;
true;
