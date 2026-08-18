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
 *  0: PositionASL <ARRAY>
 *  1: Dispenser class <STRING>
 *  2: Spawn group <STRING|ARRAY>
 *  3: Spawn limit <NUMBER>
 * -1: Dummy dispenser <OBJECT>
 *     - Simple object that only exists for the visual effect, should always be last param
 *
 * Return Value:
 * None
 *
 * Example:
 * _projectile call ls_dispenser_fnc_initDispenserOrdnance
 *
 * Public: No
 */

params ["_positionASL", "_dispenserClass", "_spawnGroup", "_spawnLimit"/*, "_dummyDispenser"*/];
TRACE_4("fnc_initDispenserOrdnance",_positionASL,_dispenserClass,_spawnGroup,_spawnLimit);

deleteVehicle (_this select -1); // Dummy dispenser object
private _dispenser = createVehicle [_dispenserClass, [0, 0, 0], [], 1];
_dispenser setPosASL _positionASL; // Try to keep the dispenser settled when being spawned
_dispenser setDir (random 360);
_dispenser setVectorUp (surfaceNormal _positionASL);
[QEGVAR(common,addCuratorEditableObjects), _dispenser] call CBA_fnc_serverEvent;
[LINKFUNC(activate), [_dispenser, _spawnGroup, _spawnLimit], 3] call CBA_fnc_waitAndExecute;
