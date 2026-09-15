#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Activates a droid dispenser on the server's end.
 * Server execution only, no effect when run on the client.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
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

params ["_dispenser", "_spawnGroup", "_spawnLimit"];
TRACE_2("fnc_activateServer",_dispenser,_spawnGroup);

if (!isServer || !alive _dispenser || _dispenser getVariable [QGVAR(active), false]) exitWith {};

((_dispenser call FUNC(getDispenserData)) select 3) params ["_selection", "_activeTexture"];
_dispenser setObjectTextureGlobal [_selection, _activeTexture];
_dispenser setVariable [QGVAR(active), true, true];
_dispenser setVariable [QGVAR(unitTypeIndex), nil];
_dispenser setVariable [QGVAR(spawnLimit), _spawnLimit];
_dispenser setVariable [QGVAR(spawnedUnitCount), nil]; // Reset # of spawned units

[_dispenser, _spawnGroup] call FUNC(setSpawnGroup);

GVAR(dispensers) pushBack _dispenser;
[] call FUNC(dispenserPFH);

nil;
