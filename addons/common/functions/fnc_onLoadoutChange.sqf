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
 * 1: Loadout <ARRAY>
 * 2: Old loadout <ARRAY>
 *
 * Return Value:
 * None
 *
 * Example:
 * ["loadout", ls_common_fnc_onLoadoutChange] call CBA_fnc_addPlayerEventHandler;
 *
 * Public: No
 */

params ["_unit", "_loadout", "_oldLoadout"];
TRACE_3("fnc_onLoadoutChange",_unit,_loadout,_oldLoadout);

private _cfgWeapons = configFile >> "CfgWeapons";
private _helmet = _loadout select LOADOUT_INDEX_HELMET;
private _oldHelmet = _oldLoadout select LOADOUT_INDEX_HELMET;

if (getNumber (_cfgWeapons >> _helmet >> QGVAR(hideHead)) == 0 && {
    getNumber (_cfgWeapons >> _oldHelmet >> QGVAR(hideHead)) == 1
}) then {
    [_unit, false] call FUNC(hideHead);
} else {
    if (getNumber (_cfgWeapons >> _helmet >> QGVAR(hideHead)) >= 1) then {
        [_unit, true] call FUNC(hideHead);
    };
};