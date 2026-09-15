#include "..\script_component.hpp"
/*
 * Authors: DartRuffian
 * Removes an object to the map icon array if it has an icon.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Object <OBJECT>
 *
 * Return Value:
 * True if item was removed, otherwise false <BOOL>
 *
 * Example:
 * cursorObject call ls_map_fnc_removeObject
 *
 * Public: No
 */

params ["_object"];
TRACE_1("fnc_removedObject",_object);

private _index = GVAR(objectIconObjects) findIf { _x == _object };

if (_index == -1) exitWith { false };

GVAR(objectIconObjects) deleteAt _index;
true;
