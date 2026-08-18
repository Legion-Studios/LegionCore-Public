#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Unloads all vehicles loaded into a vehicle.
 * Exists so that potential future functionality could be added.
 *
 * Please provide proper credits to those who participate in development.
 * This module was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Carrier <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * _carrier call ls_vehicles_fnc_vivUnload;
 *
 * Public: Yes
 */

params [
    ["_carrier", objNull, [objNull]]
];
TRACE_1("fnc_vivUnload",_carrier);

if (isNull _carrier) exitWith {};
_carrier setVehicleCargo objNull;

nil;
