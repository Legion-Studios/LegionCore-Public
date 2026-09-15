#include "..\script_component.hpp"
/*
 * Authors: DartRuffian
 * Returns the animation that a droideka should be in.
 * Based on whether it is alive; dead; or unconscious.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Droideka <OBJECT>
 * 1: Default animation (optional, default: droideka_idle) <STRING>
 *
 * Return Value:
 * Animation name <STRING>
 *
 * Example:
 * cursorObject call ls_droids_fnc_getDroidekaAnim
 *
 * Public: No
 */

params ["_droideka", ["_default", "droideka_wakeUp"]];
TRACE_1("fnc_getDroidekaAnim",_droideka);

if (!alive _droideka) exitWith {
    selectRandom ["droideka_death1", "droideka_death3"];
};

["droideka_death2", _default] select (_droideka call EFUNC(common,isAwake));
