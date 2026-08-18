#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Handles reloading for special LS weapon types.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * See https://community.bistudio.com/wiki/Arma_3:_Event_Handlers/Reloaded
 *
 * Return Value:
 * None
 *
 * Public: No
 */

params ["_unit", "_weapon", "_muzzle", "_magazine"];
TRACE_4("fnc_onReload",_unit,_weapon,_muzzle,_magazine);

private _magazineClass = _magazine select 0;
[_unit, _weapon, _magazineClass] call FUNC(attachmentSwap);

private _weaponConfig = configFile >> "CfgWeapons" >> _weapon;
private _weaponType = getNumber (_weaponConfig >> QGVAR(weaponType));
if (_weaponType == WEAPONTYPE_NONE) exitWith {};

switch (_weaponType) do {
    case WEAPONTYPE_AKIMBO: {
        [_unit, _weapon, _muzzle, _magazine] call FUNC(onReloadAkimbo);
    };
};
