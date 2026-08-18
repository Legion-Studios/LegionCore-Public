#include "..\script_component.hpp"
/*
* Authors: Tennesse Timmy, CrimzonKat, Ragwolf
* Rewritten by DartRuffian
* Spawns particles for a holoprojector.
*
* Please provide proper credits to those who participate in development.
* This function was developed for the 101st Doom Battalion, and used in Legion Studios: Core with permission.
* Do not place in any other mod without permission.
*
* Arguments:
* 0: Object <OBJECT>
* 1: Particle scale <NUMBER>
* 2: Map scale <NUMBER>
* 3: Scale factor <NUMBER>
* 4: Terrain rendering mode <NUMBER>
* 5: Particle positions <ARRAY>
*    - Return from fnc_calculateParticlePositions
*
* _currentFrame and _framesToSpawn should NOT be modified.
*
* Return Value:
* None
*
* Public: No
*/

params [
    "_object", "_particleScale",
    "_mapScale", "_scaleFactor",
    "_terrainMode", "_particlePositions",
    ["_isDisabled", false]
];
TRACE_7("fnc_spawnParticles",_object,_particleScale,_mapScale,_scaleFactor,_terrainMode,_particlePositions,_isDisabled);

// It's faster to just spawn all particles rather than trying to spread it out over multiple frames.

{
    _x params ["_particlePosition", "_height"];
    private _color = [_mapScale, _scaleFactor, _terrainMode, _x] call FUNC(calculateParticleColor);
    private _velocityUp = 0;
    private _particleSize = [_particleScale, _particleScale, _particleScale, _particleScale, _particleScale];

    if (_isDisabled) then {
        _velocityUp = linearConversion [-100, 1500, _height, -0.05, 0.5, true];
        _particleSize = [_particleScale, 0.008, 0.005, 0.001, 0];
    };

    // TODO: Create particles for buildings (include non-terrain buildings?)
    // Should be scaled based on building's size

    // See https://community.bistudio.com/wiki/ParticleArray
    drop [
        "\A3\data_f\kouleSvetlo.p3d", // shapeName
        "",                           // animation (obsolete)
        "Billboard",                  // type
        0,                            // timerPeriod
        REFRESH_SOUND_LENGTH + 0.1,   // lifetime
        _particlePosition,            // position
        [0, 0, _velocityUp],          // moveVelocity
        0,                            // rotationVelocity
        1.275,                        // weight
        1,                            // volume
        0,                            // rubbing
        _particleSize,                // size
        [_color],                     // color
        [0],                          // animationPhase
        0,                            // randomDirectionPeriod
        0,                            // randomDirectionIntensity
        "",                           // onTimer
        "",                           // beforeDestroy
        _object,                      // object
        0,                            // angle
        false,                        // onSurface
        -1,                           // bounceOnSurface
        [_color]                      // emissiveColor
    ];
} forEach _particlePositions;
nil;
