#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Handles a unit dying.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 *
 * Return Value:
 * None
 *
 * Public: No
 */

params ["_unit"];
TRACE_1("fnc_handleKilled",_unit);

if (!local _unit) exitWith {};

[{ call FUNC(deactivate) }, _unit, AUTO_SHUT_OFF_DELAY] call CBA_fnc_waitAndExecute;
