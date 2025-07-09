#include "..\script_component.hpp"
/*
* Authors: Tennesse Timmy, CrimzonKat, Ragwolf
* Rewritten by DartRuffian
* Calculates the color of a given particle.
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
* Public: No
*/

params ["_mapScale", "_scaleFactor", "_terrainMode", "_particlePosition"];
// This function is called once for each particle, be wary of file I/O operations

_particlePosition params ["", "_height", ["_isTracked", false]];

private _color = [0, 0, 1, 1];
private _intensityR = 0;
private _intensityG = 0;
private _intensityB = 0;

private _combinedScaleFactor = _mapScale * _scaleFactor;
private _upperLimitFactor = _mapScale * 100;
private _lowerLimitFactor = _mapScale * 10;
private _trailingUpperLimit = _upperLimitFactor - _combinedScaleFactor;

if (_isTracked and {_terrainMode == MODE_HOLOGRAPHIC}) then {
    _color = [1, 0, 0, 1];
} else {
    switch (_terrainMode) do {
        case MODE_TOPOGRAPHICAL: {
            _intensityR = linearConversion [-_lowerLimitFactor, _upperLimitFactor, _height, 0, 1, true];
            _intensityG = linearConversion [-_trailingUpperLimit, _trailingUpperLimit, _height, 0, (linearConversion [-_trailingUpperLimit, _trailingUpperLimit, _height, 1, 0, true]), true];
            _intensityB = linearConversion [ -_upperLimitFactor, _lowerLimitFactor, _height, 1, 0, true];
        };
        default {
            // Blue dots and important areas marked red
            _intensityR = 0;
            _intensityG = linearConversion [-_trailingUpperLimit, _upperLimitFactor, _height, 0, 0.2, true];
            _intensityB = linearConversion [-_upperLimitFactor, _upperLimitFactor, _height, 0, 1, true];
        };
    };

    _color set [0, _intensityR];
    _color set [1, _intensityG];
    _color set [2, _intensityB];
};

_color;
