#include "..\script_component.hpp"
/*
 * Author: Crimzonkat, DartRuffian
 * Handle akimbo weapons firing.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 1: Weapon <STRING>
 * 2: Muzzle <STRING>
 *
 * Return Value:
 * None
 *
 * Public: No
 */

params ["_unit", "_weapon", "_muzzle"];
TRACE_3("fnc_onFiredAkimbo",_unit,_weapon,_muzzle);

private _weaponConfig = configFile >> "CfgWeapons" >> _weapon;
(getArray (_weaponConfig >> "muzzles")) params ["_right", "_left"];

if (_muzzle == _right and {_unit ammo _left > 0}) then {
    _unit selectWeapon _left;
};
if (_muzzle == _left and {_unit ammo _right > 0}) then {
    _unit selectWeapon _right;
};
nil;
