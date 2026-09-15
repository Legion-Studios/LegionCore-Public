#include "..\script_component.hpp"
/*
 * Authors: Tennesse Timmy, CrimzonKat, Ragwolf
 * Rewritten by DartRuffian
 * Updates a holoprojector's display for the client.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for the 101st Doom Battalion, and used in Legion Studios: Core with permission.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Object <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * _holomap call ls_holoprojector_fnc_updateDisplay;
 *
 * Public: No
 */

#define PARTICLE_SIZE 0.02

params ["_object"];
TRACE_1("fnc_updateDisplay",_object);

if (!alive _object or
    {!hasInterface} or
    {_object getVariable [QGVAR(pfhRunning), false]}
) exitWith {};

_object setVariable [QGVAR(pfhRunning), true];

private _function = {
    params ["_object", "_handle"];

    // Only render if player is not in Zeus and is close enough OR zeus camera is close enough
    private _featureCamera = [] call CBA_fnc_getActiveFeatureCamera;
    if ((ls_player distance _object) > GVAR(maxDistance) and _featureCamera != "curator") exitWith {};
    if (_featureCamera == "curator" and {
        (curatorCamera distance _object) > GVAR(maxDistance)
    }) exitWith {};

    private _isDespawning = !(_object getVariable [QGVAR(isProjecting), true]);

    _object say3D QGVAR(refresh);
    private _center = GET_CENTER(_object);
    private _terrainMode = GET_TERRAINMODE(_object);
    private _mapLength = GET_LENGTH(_object);
    private _mapSize = GET_SIZE(_object);
    private _scaleFactor = _mapSize / _mapLength;
    private _particlePositions = _object getVariable [QGVAR(particlePosCache), []];

    if (_particlePositions isEqualTo []) then {
        _particlePositions = [_object, _center, _mapLength, _mapSize] call FUNC(calculateParticlePositions);
        _object setVariable [QGVAR(particlePosCache), _particlePositions];
    };

    private _mapScale = GET_SCALE(_object);
    private _particleScale = PARTICLE_SIZE * _mapScale;

    [_object, _particleScale, _mapScale, _scaleFactor, _terrainMode, _particlePositions, _isDespawning] call FUNC(spawnParticles);
    if (_isDespawning) then {
        _handle call CBA_fnc_removePerFrameHandler;
        _object setVariable [QGVAR(pfhRunning), false];
        [QGVAR(deactivated), [_object]] call CBA_fnc_localEvent;
    };
};

private _condition = {
    params ["_object"];
    alive _object;
};

private _exitCode = {
    params ["_object"];
    _object setVariable [QGVAR(pfhRunning), false];
    [QGVAR(deactivated), [_object]] call CBA_fnc_localEvent;
};

[
    _function, _condition, _exitCode,
    REFRESH_SOUND_LENGTH, [_object]
] call EFUNC(common,tempPFH);
