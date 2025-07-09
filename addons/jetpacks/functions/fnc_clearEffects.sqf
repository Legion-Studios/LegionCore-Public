#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Deletes jetpack effects from a unit on all clients.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * ls_player call ls_jetpacks_clearEffects;
 *
 * Public: No
 */

params ["_unit"];
TRACE_1("fnc_clearEffects",_unit);

[QGVAR(clearEffects), [_unit]] call CBA_fnc_globalEvent;
nil;
