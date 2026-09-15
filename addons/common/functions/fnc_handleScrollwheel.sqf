#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Handles scrolling while placing an object.
 *
 * Arguments:
 * 0: Scroll <NUMBER>
 *
 * Return Value:
 * True to block input, otherwise false <BOOL>
 *
 * Example:
 * 10 call ls_common_fnc_handleScrollWheel
 *
 * Public: No
 */

if (GVAR(isPlacing) != PLACE_WAITING) exitWith { false };

params ["_scroll"];
TRACE_1("fnc_handleScrollWheel",_scroll);

if (cba_events_shift) exitWith {
    GVAR(objectRotationX) = GVAR(objectRotationX) + (_scroll * 5);
    true
};

if (cba_events_control) exitWith {
    GVAR(objectRotationY) = GVAR(objectRotationY) + (_scroll * 5);
    true
};

GVAR(objectRotationZ) = GVAR(objectRotationZ) + (_scroll * 5);
true;
