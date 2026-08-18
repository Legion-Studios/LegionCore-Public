#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Returns the icon of a given vehicle. Works for CfgVehicles class names and objects.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Vehicle <OBJECT or STRING>
 *
 * Return Value:
 * Path to vehicle's icon <STRING>
 *
 * Example:
 * _vehicle call ls_common_fnc_getVehicleIcon
 * "TAG_myVehicle" call ls_common_fnc_getVehicleIcon
 *
 * Public: Yes
 */

params [
    ["_vehicle", "", [objNull, ""]]
];
TRACE_1("fnc_getVehicleIcon",_vehicle);

if (_vehicle isEqualType objNull) then {
    _vehicle = typeOf _vehicle;
};

private _icon = GVAR(vehicleIcons) getOrDefault [_vehicle, ""];

if (_icon == "") then {
    _icon = getText (configFile >> "CfgVehicles" >> _vehicle >> "icon");
    if !("\" in _icon) then {
        _icon = getText (configFile >> "CfgVehicleIcons" >> _icon);
    };
    GVAR(vehicleIcons) set [_vehicle, _icon];
};

_icon;
