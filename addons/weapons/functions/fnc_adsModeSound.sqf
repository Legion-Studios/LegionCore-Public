#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Plays a sound for when a player changes their optic mode.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 1: Optic class (optional, default: "") <STRING>
 * 2: Optic mode (optional, default: "") <STRING>
 *
 * Return Value:
 * None
 *
 * Examples:
 * ls_player call ls_weapons_fnc_adsModeSound;
 * [ls_player, "opticClass", "scope"] call ls_weapons_fnc_adsModeSound;
 *
 * Public: No
 */

params ["_unit", ["_opticsClass", ""], ["_mode", ""]];
TRACE_3("fnc_adsModeSound",_unit,_opticsClass,_mode);

if !(isNull (objectParent _unit)) exitWith {};

private _weapon = currentWeapon _unit;
private _sound = if (_opticsClass == "") then {
    selectRandom (getArray (configFile >> "CfgWeapons" >> _weapon >> QGVAR(adsModeSounds)));
} else {
    selectRandom (getArray (configFile >> "CfgWeapons" >> _opticsClass >> "ItemInfo" >> "OpticsModes" >> _mode >> QGVAR(adsModeSounds)));
};

if (_sound != "") then {
    TRACE_1("Played optic mode sound",_sound);
    playSound _sound;
};
nil;
