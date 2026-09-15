#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Handles a droideka being deleted.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Droideka <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * _droideka call ls_droids_fnc_droidekaDeleted;
 *
 * Public: No
 */

params ["_droideka"];
TRACE_1("fnc_droidekaDeleted",_droideka);

if (!local _droideka) exitWith {};

{
    deleteVehicleCrew _x;
    deleteVehicle _x;
} forEach (_droideka getVariable [QGVAR(cleanupObjects), []]);
