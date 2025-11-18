#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Handles a unit firing.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Unit or vehicle <OBJECT>
 * 1: Weapon (unused) <STRING>
 * 2: Muzzle (unused) <STRING>
 * 3: Mode (unused) <STRING>
 * 4: Ammo (unused) <STRING>
 * 5: Magazine (unused) <STRING>
 * 6: Projectile (unused) <STRING>
 * 7: Gunner (unused) <OBJECT>
 *
 * Return Value:
 * None
 *
 * Public: No
 */

params ["_unitOrVehicle"];
TRACE_1("fnc_onFired",_unitOrVehicle);

if (!local _unitOrVehicle) exitWith {};

if (!GVAR(allowFiring)) then {
    [{ call FUNC(deactivate) }, _unitOrVehicle, AUTO_SHUT_OFF_DELAY] call CBA_fnc_waitAndExecute;
};
