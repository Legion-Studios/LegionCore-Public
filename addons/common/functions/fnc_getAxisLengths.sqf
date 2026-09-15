#include "..\script_component.hpp"
/*
 * Author: Kingsley
 * Gets the longest axis of the bounding box of the given object.
 *
 * Arguments:
 * 0: Object <OBJECT>
 *
 * Return Value:
 * Lengths <ARRAY>
 *
 * Example:
 * _object call ls_common_fnc_getAxisLengths;
 *
 * Public: Yes
 */

params [["_object", objNull, [objNull]]];
TRACE_1("fnc_getAxisLengths",_object);

(boundingBoxReal [_object, "Geometry"]) params ["_p1", "_p2"];

[
    (abs ((_p2 select 0) - (_p1 select 0))),
    (abs ((_p2 select 1) - (_p1 select 1))),
    (abs ((_p2 select 2) - (_p1 select 2)))
];
