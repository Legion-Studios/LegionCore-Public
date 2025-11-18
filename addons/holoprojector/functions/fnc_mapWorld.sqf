#include "..\script_component.hpp"
/*
 * Authors: Tennesse Timmy, CrimzonKat, Ragwolf
 * Rewritten by DartRuffian
 * Maps the general shape of the entire terrain.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for the 101st Doom Battalion, and used in Legion Studios: Core with permission.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Object <OBJECT>
 * 1: Terrain rendering mode (Optional, default: Topographical) <NUMBER>
 *
 * Return Value:
 * See ls_holoprojector_fnc_map
 *
 * Example:
 * _holomap call ls_holoprojector_fnc_mapWorld;
 *
 * Public: Yes
 */

params [
    ["_object", objNull, [objNull]],
    ["_terrainMode", MODE_HOLOGRAPHIC, [MODE_HOLOGRAPHIC]]
];
TRACE_2("fnc_mapWorld",_object,_terrainMode);

private _worldSize = worldSize;
_object setVariable [QGVAR(mapSize), _worldSize, true];
private _center = [_worldSize / 2, _worldSize / 2];
_object setVariable [QGVAR(mapScaleHeight), 5000, true];

[_object, _center, _terrainMode] call FUNC(map);
