#include "..\script_component.hpp"
/*
* Authors: Tennesse Timmy, CrimzonKat, Ragwolf
* Rewritten by DartRuffian
* Calculates the position for each particle to be rendered.
*
* Please provide proper credits to those who participate in development.
* This function was developed for the 101st Doom Battalion, and used in Legion Studios: Core with permission.
* Do not place in any other mod without permission.
*
* Arguments:
* 0: Object <OBJECT>
* 1: Map center <ARRAY>
* 2: Length of map <NUMBER>
* 3: Size of map <NUMBER>
*
* Return Value:
* None
*
* Public: No
*/

#define MAP_SCALE_BASE 0.01875

params ["_object", "_center", "_mapLength", "_mapSize"];
TRACE_4("fnc_calculateParticlePositions",_object,_center,_mapLength,_mapSize);

private _particlePositions = [];

(_object modelToWorld [0, 0, 0]) params ["_posX", "_posY"];

private _mapScale = GET_SCALE(_object);
private _height = GET_HEIGHT(_object);

private _scaleFactor = _mapSize / _mapLength;
private _scaleHeight = GET_SCALEHEIGHT(_object);
private _posX = _posX / _scaleFactor;
private _posY = _posY / _scaleFactor;

private _particleSpaceFactor = (MAP_SCALE_BASE * _mapScale) - (1 / _scaleFactor);
private _mapCenterFactor = (_mapLength * (MAP_SCALE_BASE * _mapScale)) / 2;

private _offsetX = ((_center#0) - (_mapSize / 2));
private _offsetY = ((_center#1) - (_mapSize / 2));

private _minHeight = 100;

// _x and _y are reserved variables
for "_gridX" from 0 to _mapLength do {
    for "_gridY" from 0 to _mapLength do {
        private _originalHeight = getTerrainHeightASL [(_gridX * _scaleFactor) + _offsetX, (_gridY * _scaleFactor) + _offsetY];
        private _factorX = _gridX * _particleSpaceFactor - _mapCenterFactor;
        private _factorY = _gridY * _particleSpaceFactor - _mapCenterFactor;
        private _particleHeight = (_height + (_originalHeight / (_scaleHeight / _mapScale)));
        private _isCurrentPosition = false;

        if (_particleHeight < _minHeight) then {
            _minHeight = _particleHeight;
        };

        private _particlePosition = [
            (_gridX / _scaleFactor) + _factorX,
            (_gridY / _scaleFactor) + _factorY,
            _particleHeight
        ];

        // Check if current particle is projector's location
        if (abs (_posX - 1) < _gridX and _posX + 1 > _gridX and {
            abs (_posY - 1) < _gridY and _posY + 1 > _gridY
        }) then {
            _isCurrentPosition = true;
        };

        _particlePositions pushBack [_particlePosition, _originalHeight, _isCurrentPosition];
    };
};

// Lowest particle should be at holoprojector's display height
if (_minHeight != _height) then {
    private _difference = _height - _minHeight;
    {
        _x params ["_position"];
        _position set [2, ((_position#2) + _difference)];
    } forEach _particlePositions;
};

_particlePositions;
