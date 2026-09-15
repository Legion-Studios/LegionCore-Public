#include "..\script_component.hpp"
/*
 * Authors: DartRuffian
 * Handles a droid dispenser being killed.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Dispenser <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * _dispenser call ls_dispenser_fnc_handleKilled
 *
 * Public: No
 */

params ["_dispenser"];
TRACE_1("fnc_handleKilled",_dispenser);

if (_dispenser getVariable [QGVAR(active), false]) then {
    _dispenser call FUNC(deactivate);
};
