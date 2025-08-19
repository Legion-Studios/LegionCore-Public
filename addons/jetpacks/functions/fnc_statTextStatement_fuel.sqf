#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Text statement for the jetpack fuel stat.
 *
 * Arguments:
 * 0: Stats <ARRAY>
 * 1: Item config path <CONFIG>
 *
 * Return Value:
 * Stat Text <STRING>
 *
 * Example:
 * ["ls_jetpacks_fuel", _config] call ls_jetpacks_fnc_statTextStatement_fuel;
 *
 * Public: No
 */

params ["_stats", "_config"];

private _fuel = getNumber (_config >> (_stats#0)) / 10;
format ["%1 liters", _fuel];
