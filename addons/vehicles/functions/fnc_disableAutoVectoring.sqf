#include "..\script_component.hpp"
/*
 * Authors: DartRuffian
 * Disables auto-vectoring for vehicles if enabled.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 1: Vehicle <OBJECT>
 * 2: Old vehicle (unused) <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [player, vehicle player] call ls_vehicles_fnc_disableAutoVectoring;
 *
 * Public: No
 */

params ["_unit", "_vehicle"];
TRACE_2("fnc_disableAutoVectoring",_unit,_vehicle);

// Only disable av if setting is enabled and vehicle is a vtol
if !(GVAR(disableAutoVectoring) && { _unit isEqualTo (currentPilot _vehicle) } && { getNumber (configOf _vehicle >> "vtol") > 0 }) exitWith {};

_unit action ["VTOLVectoring", _vehicle];
