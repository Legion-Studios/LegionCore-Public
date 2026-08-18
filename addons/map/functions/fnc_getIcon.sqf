#include "..\script_component.hpp"
/*
 * Authors: DartRuffian
 * Returns an object's custom icon, name, and size and caches it.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Object <OBJECT>
 *
 * Return Value:
 * Array <ARRAY>
 *   0: Icon path <STRING>
 *   1: Name <STRING>
 *   2: Size in meters <NUMBER>
 *
 * Example:
 * _object call ls_map_fnc_getIcon
 *
 * Public: No
 */

params [["_object", objNull, [objNull]]];
TRACE_1("fnc_getIcon",_object);

if (isNull _object) exitWith {};

private _typeOf = typeOf _object;
private _return = GVAR(objectIconCache) getOrDefaultCall [_typeOf, {
    private _configOf = configOf _object;
    private _icon = getText (_configOf >> QGVAR(icon));

    // We check isText because we want people to be able to use an empty string for the map name
    private _name = if (isText (_configOf >> QGVAR(name))) then {
        getText (_configOf >> QGVAR(name));
    } else {
        getText (_configOf >> "displayName");
    };

    // The "core" of a multipart object is what has the icon set, which would have no visual size
    // So we need a custom property in its config. Otherwise, we can just use the size of the visual lod
    private _size = getNumber (_configOf >> QGVAR(size));
    if (_size == -1 || !isNumber (_configOf >> QGVAR(size))) then {
        _size = (boundingBoxReal [_object, 1]) select 2;
    };
    [_icon, _name, _size];
}];

// We have to scan all objects at mission start, so only cache things that have an icon set for the first second of the mission.
// Probably not too necessary, but it does prevent the cache from getting huge on maps with lots of objects placed
if (CBA_missionTime < 1 && (_return select 0) != "") then {
    GVAR(objectIconCache) set [_typeOf, _return];
};

_return;
