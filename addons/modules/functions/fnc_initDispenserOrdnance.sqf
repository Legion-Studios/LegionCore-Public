#include "..\script_component.hpp"
/*
 * Authors: DartRuffian
 * Initializes a dispenser ammo round.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Projectile <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * _projectile call ls_modules_fnc_initDispenserOrdnance
 *
 * Public: No
 */

params ["_positionASL", "_dispenserClass", "_spawnGroup", "_dummyDispenser"];
TRACE_4("fnc_initDispenserOrdnance",_positionASL,_dispenserClass,_spawnGroup,_dummyDispenser);

deleteVehicle _dummyDispenser;
private _dispenser = createVehicle [_dispenserClass, [0, 0, 0], [], 1];
_dispenser setPosASL _positionASL; // Try to keep the dispenser settled when being spawned
_dispenser setDir (random 360);
_dispenser setVectorUp (surfaceNormal _positionASL);
[{ call EFUNC(dispenser,activate); }, [_dispenser, _spawnGroup], 3] call CBA_fnc_waitAndExecute;
