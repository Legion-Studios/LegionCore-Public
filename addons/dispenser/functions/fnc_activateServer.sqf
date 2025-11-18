#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Activates a droid dispenser on the server's end.
 * Server execution only, no effect when run on the client.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * See fnc_activate.sqf
 *
 * Return Value:
 * None
 *
 * Public: No
 */

params ["_dispenser", "_spawnGroup"];
TRACE_2("fnc_activateServer",_dispenser,_spawnGroup);

if (!isServer || !alive _dispenser || _dispenser getVariable [QGVAR(active), false]) exitWith {};

_dispenser setObjectTextureGlobal ["camo2", "#(rgb,8,8,3)color(0.9,0,0.2,0.7)"];
_dispenser setVariable [QGVAR(active), true, true];

[_dispenser, _spawnGroup] call FUNC(setSpawnGroup);

GVAR(dispensers) pushBack _dispenser;
[] call FUNC(dispenserPFH);

nil;
