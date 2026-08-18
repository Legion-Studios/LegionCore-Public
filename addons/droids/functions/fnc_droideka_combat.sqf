#include "..\script_component.hpp"
/*
 * Authors: DartRuffian
 * Handles a droideka in the combat state.
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
 * Example:
 * cursorObject call ls_droids_fnc_droideka_combat
 *
 * Public: No
 */

params ["_unit"];
TRACE_1("fnc_droideka_combat",_unit);

// We run the state machine on all droidekas to prevent accidentally blocking spring on remote-controlled dekas
private _allowSprint = (_unit call EFUNC(common,isPlayer) || { [_unit, DROIDEKA_SAFE_DISTANCE] call EFUNC(common,isSafe) });
[_unit, "blockSprint", QGVAR(droidekaSprint), !_allowSprint] call CBA_fnc_setStatusEffect;
