#include "..\script_component.hpp"
/*
 * Authors: DartRuffian
 * Checks if a unit is sprinting, see https://community.bistudio.com/wiki/animationState for possible issues. Does not work for all custom skeletons.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 *
 * Return Value:
 * True if sprinting, otherwise false <BOOL>
 *
 * Example:
 * player call ls_common_fnc_isSprinting
 *
 * Public: No
 */

params ["_unit"];
TRACE_1("fnc_isSprinting",_unit);

private _state = animationState _unit;
_state select [9, 3] == "eva" || _state in ["droideka_intoball", "droideka_roll", "droideka_outofball"]; // TODO: Rename animation to match vanilla
