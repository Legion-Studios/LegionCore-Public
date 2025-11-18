#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Handles reloading for akimbo weapons. When one muzzle is loaded, the other will receive the same magazine.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 1: Weapon <STRING>
 * 2: Muzzle <STRING>
 * 3: Magazine
 *
 * Return Value:
 * None
 *
 * Public: No
 */

params ["_unit", "_weapon", "_muzzle", "_magazine"];
TRACE_4("fnc_onReloadAkimbo",_unit,_weapon,_muzzle,_magazine);

if (_unit getVariable [QGVAR(handlingAkimboReload), false]) exitWith {};
_unit setVariable [QGVAR(handlingAkimboReload), true];

private _weaponConfig = configFile >> "CfgWeapons" >> _weapon;
(getArray (_weaponConfig >> "muzzles")) params ["_right", "_left"];
_magazine params ["_magazineClass", "_ammoCount"];

if (_muzzle == _right) then {
    _unit addWeaponItem [_weapon, [_magazineClass, _ammoCount, _left], true];
} else {
    _unit addWeaponItem [_weapon, [_magazineClass, _ammoCount, _right], true];
};

[{_this setVariable [QGVAR(handlingAkimboReload), nil]}, _unit] call CBA_fnc_execNextFrame;

nil;
