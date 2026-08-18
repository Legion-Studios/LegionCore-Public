#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Draws custom object icons on the map. Runs once each frame while the map is open.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Map control <CONTROL>
 *
 * Return Value:
 * None
 *
 * Example:
 * _map call ls_map_fnc_drawIcons;
 *
 * Public: No
 */

params ["_ctrl"];
TRACE_1("fnc_drawIcons",_ctrl);

{
    if (isNull _x) then { GVAR(objectIconObjects) deleteAt _forEachIndex; continue };
    if (isObjectHidden _x) then { continue };

    (_x call FUNC(getIcon)) params ["_icon", "_name", "_size"];
    if (_icon == "") then { continue };

    // Not even BI knows where these numbers come from:
    // https://discord.com/channels/976165959041679380/976224730422063214/1369705725093351434
    private _scale = 6.4 * worldSize / 8192 * ctrlMapScale _ctrl;
    _size = _size / _scale;

    _ctrl drawIcon [
        _icon, [1, 1, 1, GVAR(objectMarkersOpacity)],
        getPosASLVisual _x,
        _size, _size,
        getDirVisual _x,
        ["", _name] select (_x getVariable [QGVAR(objectMarkerShowName), GVAR(objectMarkersShowName)]),
        1, ((0.1 * (_size / 50)) min 0.05)
    ];
} forEachReversed GVAR(objectIconObjects);
