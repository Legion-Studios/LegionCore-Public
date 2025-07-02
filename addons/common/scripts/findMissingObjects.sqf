#include "..\script_component.hpp"
/*
 * Authors: DartRuffian
 * Returns a list of LS objects that are not listed in any LS addon's units array.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * Array of class names not listed in a units array
 *
 * Example:
 * [] call compileScript ["\ls\core\addons\common\scripts\findMissingObjects.sqf"]
 *
 * Public: No
 */

private _output = [];
private _lsAddons = "configName _x find 'ls' == 0" configClasses (configFile >> "CfgPatches") apply {configName _x};
private _allListedObjects = "configName _x find 'ls' == 0" configClasses (configFile >> "CfgPatches");
_allListedObjects = flatten (_allListedObjects apply {getArray (_x >> "units")});

// TODO: Also check CfgWeapons classes and the weapons array in CfgPatches
{
    private _name = configName _x;
    if ((configSourceAddonList _x) select 0 in _lsAddons && !(_name in _allListedObjects) && getNumber (_x >> "scope") == 2) then {
        _output pushBack _name;
    };
} forEach ("true" configClasses (configFile >> "CfgVehicles"));

_output;