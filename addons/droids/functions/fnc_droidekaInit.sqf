#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Initalizes a droideka.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Droideka <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * _droideka call ls_droids_fnc_droidekaInit;
 *
 * Public: No
 */

params ["_droideka"];
TRACE_1("fnc_droidekaInit",_droideka);

_droideka setVariable ["ace_dragging_dragDirection", 0];
_droideka setVariable ["ace_dragging_carryPosition", [0.7, 0, -0.4]];
_droideka setVariable ["ace_dragging_carryDirection", 270];

if (!local _droideka) exitWith {};

_droideka call FUNC(activateShield);
