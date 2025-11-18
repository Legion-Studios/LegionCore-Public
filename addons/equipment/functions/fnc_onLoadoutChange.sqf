#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Called when a player's loadout changes.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 1: Loadout (unused) <ARRAY>
 * 2: Old loadout <ARRAY>
 *
 * Return Value:
 * None
 *
 * Example:
 * ["loadout", ls_equipment_fnc_onLoadoutChange] call CBA_fnc_addPlayerEventHandler;
 *
 * Public: No
 */

params ["_unit", "", "_oldLoadout"];
TRACE_2("fnc_onLoadoutChange",_unit,_oldLoadout);

if (isNil "_oldLoadout") exitWith {}; // nil on mission start

(_oldLoadout select LOADOUT_INDEX_BACKPACK) params [["_backpack", ""], "_inventory"];

if (_backpack == "") exitWith {};

private _backpackConfig = configFile >> "CfgVehicles" >> _backpack;
if (getNumber (_backpackConfig >> QGVAR(saveParachuteInventory)) >= 1 && {
    getNumber (_backpackConfig >> "maximumLoad") > 0
}) then {
    _unit setVariable [QGVAR(savedParachuteInventory), [_backpack, _inventory]];
};
