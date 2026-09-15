#include "..\script_component.hpp"
/*
 * Author: bux578, commy2, akalegman
 * Checks if a unit is a player / remote controlled unit.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 1: Exclude remote controlled units (optional, default: false) <BOOL>
 *
 * Return Value:
 * True if unit is a player, otherwise false <BOOL>
 *
 * Example:
 * cursorTarget call ls_common_fnc_isPlayer;
 *
 * Public: Yes
 */

params ["_unit", ["_excludeRemoteControlled", false]];

(isPlayer _unit) || {(!_excludeRemoteControlled) && {!isNull (_unit getVariable ["bis_fnc_moduleRemoteControl_owner", objNull])}}
