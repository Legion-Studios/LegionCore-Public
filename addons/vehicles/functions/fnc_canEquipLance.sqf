#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Determines if a unit can equip a lance.
 *
 * Please provide proper credits to those who participate in development.
 * This module was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 * 1: Unit <OBJECT>
 * 2: Weapon type (optional, default: isLance)
 *
 * Return Value:
 * True if lance can be equipped, otherwise false.
 *
 * Example:
 * [_vehicle, driver _vehicle, "isLance"] call ls_vehicles_fnc_equipLance;
 *
 * Public: Yes
 */

params [
    ["_vehicle", objNull, [objNull]],
    ["_unit", objNull, [objNull]],
    ["_weaponType", "isLance", [""]]
];
TRACE_3("fnc_canEquipLance",_vehicle,_unit,_weaponType);

_weaponType = format [QEGVAR(weapons,%1), _weaponType];
private _handgunConfig = configFile >> "CfgWeapons" >> handgunWeapon _unit;

_vehicle getVariable [QGVAR(equippedWeapon), ""] == "" and {
    getNumber (_handgunConfig >> _weaponType) >= 1
};
