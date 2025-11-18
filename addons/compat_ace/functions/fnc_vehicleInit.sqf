#include "..\script_component.hpp"
/*
 * Authors: DartRuffian
 * Handles a vehicle being created.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Vehicle (optional, default: value) <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * _vehicle call ls_compat_ace_fnc_vehicleInit
 *
 * Public: No
 */

params ["_vehicle"];
TRACE_1("fnc_vehicleInit",_vehicle);

private _typeOf = typeOf _vehicle;
if (GVAR(vehicleActionCache) getOrDefault [_typeOf, false]) exitWith {};
GVAR(vehicleActionCache) set [_typeOf, true];

private _configOf = configOf _vehicle;
if (GVAR(addHudColorChangerActions) && { isClass (_configOf >> "MFD") }) then {
    [_typeOf, 1, ["ACE_SelfActions"], GVAR(hudColorChangerAction)] call ace_interact_menu_fnc_addActionToClass;
};

if (GVAR(addViVActions) && { getNumber (_configOf >> "VehicleTransport" >> "Carrier" >> "maxLoadMass") > 0 }) then {
    { [_typeOf, 1, ["ACE_SelfActions"], _x] call ace_interact_menu_fnc_addActionToClass } forEach GVAR(vivActions);
};
