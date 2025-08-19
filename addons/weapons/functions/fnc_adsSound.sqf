#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Plays a sound for when a player starts or stops using a scope.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 1: Is aiming down the sight <BOOL>
 *
 * Return Value:
 * None
 *
 * Examples:
 * [ls_player, true] call ls_weapons_fnc_adsSound;
 *
 * Public: No
 */

params ["_unit", "_isADS"];
TRACE_2("fnc_adsSound",_unit,_isADS);

if !(isNull (objectParent _unit)) exitWith {};

private _weapon = currentWeapon _unit;
private _opticsClass = (_unit weaponAccessories _weapon) select 2;

private _sounds = if (_opticsClass == "") then {
    getArray (configFile >> "CfgWeapons" >> _weapon >> QGVAR(adsSounds));
} else {
    getArray (configFile >> "CfgWeapons" >> _opticsClass >> QGVAR(adsSounds));
};

if (_sounds isEqualTo []) exitWith {};

private _sound = _sounds select !_isADS;
if (_sound isEqualType []) then {
    _sound = selectRandom _sound;
};

if (_sound != "") then {
    TRACE_1("Played ads sound",_sound);
    playSound _sound;
};
nil;
