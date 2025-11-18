#include "..\script_component.hpp"
/*
 * Author: Crimzonkat, DartRuffian
 * Handle special LS weapon types.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * See https://community.bistudio.com/wiki/Arma_3:_Event_Handlers#Fired
 *
 * Return Value:
 * None
 *
 * Public: No
 */

params ["_unit", "_weapon", "_muzzle"/*, "_mode", "_ammo", "_magazine", "_projectile"*/];
TRACE_3("fnc_onFired",_unit,_weapon,_muzzle);

private _weaponType = getNumber (configFile >> "CfgWeapons" >> _weapon >> QGVAR(weaponType));

switch (_weaponType) do {
    case WEAPONTYPE_AKIMBO: {
        [_unit, _weapon, _muzzle] call FUNC(onFiredAkimbo);
    };
};

call FUNC(startMagazineRecharge);
