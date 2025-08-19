#include "..\script_component.hpp"
/*
 * Authors: DartRuffian
 * Exports a formatted list of addons that should be placed in ls_loadorder's requiredAddons.
 * This script is not intended for normal gameplay.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * Array of addon names, formatted output is copied to clipboard <ARRAY>
 *
 * Example:
 * [] call compileScript ["\ls\core\addons\common\scripts\exportLoadorder.sqf"]
 *
 * Public: No
 */

private _addons = toString {
    private _name = configName _x;
    _name find QUOTE(MAINPREFIX) == 0 &&
    _name find "loadorder" == -1 &&
    _name find "deprecated" == -1 &&
    { getNumber (_x >> "skipWhenMissingDependencies") == 0 } &&
    { getNumber (_x >> "ls_isDeprecated") == 0 };
} configClasses (configFile >> "CfgPatches") apply { configName _x };

_addons sort true;

private _output = "";
private _spaces = "            "; // Pre-processor will remove leading spaces from lines

private _items = _addons apply {format ['"%1",
%2', _x, _spaces]} joinString "";
_items = _items select [0, count _items - 14]; // Remove last comma and spaces
_output = _output + _items;

copyToClipboard _output;
_addons;
