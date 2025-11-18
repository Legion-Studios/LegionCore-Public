#include "..\script_component.hpp"
/*
 * Authors: DartRuffian
 * Returns a list of LS classes that are not listed in any LS addon's units / weapons arrays.
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
 * Array of class names not listed in a units array <ARRAY>
 *
 * Example:
 * [] call compileScript ["\ls\core\addons\common\scripts\findMissingEntries.sqf"]
 *
 * Public: No
 */

private _addons = QUOTE(configName _x find 'MAINPREFIX' == 0) configClasses (configFile >> "CfgPatches");

private _listedObjects = [];
private _listedWeapons = [];
{
    _listedObjects append (getArray (_x >> "units"));
    _listedWeapons append (getArray (_x >> "weapons"));
} forEach _addons;

_listedObjects = _listedObjects arrayIntersect _listedObjects;
_listedWeapons = _listedWeapons arrayIntersect _listedWeapons;
_addons = _addons apply { configName _x };

private _condition = toString { configName _x find QUOTE(MAINPREFIX) == 0 && { getNumber (_x >> "scope") == 2 } };
private _allObjects = _condition configClasses (configFile >> "CfgVehicles") apply { configName _x };
private _allWeapons = _condition configClasses (configFile >> "CfgWeapons") apply { configName _x };

private _missingObjects = _allObjects select { !(_x in _listedObjects) };
private _missingWeapons = _allWeapons select { !(_x in _listedWeapons) };

private _output = [];

private _separatorIndex = count _missingObjects + 1;
private _output = flatten [_missingObjects, _missingWeapons];
_output = _output apply { format ["    %1", _x]; };
_output insert [0, ["-- Missing Objects --"]];
_output insert [_separatorIndex, ["
-- Missing Weapons --"]];

copyToClipboard (_output joinString "
");
flatten [_missingObjects, _missingWeapons]; // Lazy
