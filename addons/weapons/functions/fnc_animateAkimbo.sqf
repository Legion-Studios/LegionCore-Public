#include "..\script_component.hpp"
/*
 * Author: Crimzonkat, DartRuffian
 * Animates an akimbo weapon using a fake NVG item.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 1: Weapon <STRING>
 *
 * Return Value:
 * None
 *
 * Public: No
 */

params ["_unit", "_weapon"];
TRACE_2("fnc_animateAkimbo",_unit,_weapon);

private _weaponConfig = configFile >> "CfgWeapons" >> _weapon;
private _dummyNVG = getText (_weaponConfig >> QGVAR(akimboDummy));
if (_dummyNVG == "") exitWith {};

private _reloadTime = getNumber (_weaponConfig >> QGVAR(akimboReloadTime));

private _nvg = hmd _unit;
_unit unassignItem _nvg;
_unit removeItem _nvg;
_unit linkItem _dummyNVG;

[{
    params ["_unit", "_nvg", "_dummyNVG"];
    _unit unassignItem _dummyNVG;
    _unit removeItem _dummyNVG;
    _unit linkItem _nvg;
}, [_unit, _nvg, _dummyNVG], _reloadTime] call CBA_fnc_waitAndExecute;
nil;
