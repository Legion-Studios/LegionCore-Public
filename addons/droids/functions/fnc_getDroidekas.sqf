#include "..\script_component.hpp"
/*
 * Authors: DartRuffian
 * Returns all conscious droidekas.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Include players (optional, default: true) <BOOL>
 *
 * Return Value:
 * Array of all conscious droidekas <ARRAY>
 *
 * Example:
 * [] call ls_droids_fnc_getDroidekas
 *
 * Public: No
 */

params [["_includePlayers", true]];
TRACE_1("fnc_getDroideka",_includePlayers);

// This function is called every frame from the state machine, so we use a cached call to only fetch all the units every 5 seconds
[_includePlayers, {
    params ["_includePlayers"];
    EGVAR(common,localUnits) select {
        (_includePlayers || { _x call EFUNC(common,isPlayer) }) && { _x call EFUNC(common,isAwake) } && { _x isKindOf "ls_droid_droideka_base" }
    };
}, missionNamespace, QGVAR(droidekas), 5] call EFUNC(common,cachedCall);
