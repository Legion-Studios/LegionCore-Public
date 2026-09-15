#include "..\script_component.hpp"
/*
 * Authors: DartRuffian
 * Adds an object to the map icon array if it has an icon.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Object <OBJECT>
 *
 * Return Value:
 * True if item was added, otherwise false <BOOL>
 *
 * Example:
 * cursorObject call ls_map_fnc_addObject
 *
 * Public: No
 */

params ["_object"];
TRACE_1("fnc_addObject",_object);

if (((_object call FUNC(getIcon)) select 0) == "") exitWith { false };

GVAR(objectIconObjects) pushBackUnique _object;
true;
