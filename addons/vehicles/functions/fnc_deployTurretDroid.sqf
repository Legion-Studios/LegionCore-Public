#include "..\script_component.hpp"
/*
 * Authors: DartRuffian
 * Handles a turret droid being deployed.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 1: Turret <OBJECT>
 * 2: Item class (unused) <STRING>
 *
 * Return Value:
 * None
 *
 * Example:
 * [player, cursorObject, ""] call ls_vehicles_fnc_deployTurretDroid
 *
 * Public: No
 */

params ["_unit", "_turret"];
TRACE_2("fnc_deployTurretDroid",_unit,_turret);

(side group _unit) createVehicleCrew _turret;
_unit connectTerminalToUAV _turret;

if (GVAR(turretDroid_lifeTime) > 0) then {
    [{ _this setDamage 1 }, _turret, GVAR(turretDroid_lifeTime)] call CBA_fnc_waitAndExecute;
};
