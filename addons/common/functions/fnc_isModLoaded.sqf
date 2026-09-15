#include "..\script_component.hpp"
/*
 * Author: Glowbal, Grim
 * Check in CfgPatches if modification is loaded.
 *
 * Arguments:
 * 0: Addon class name in CfgPatches <STRING>
 *
 * Return Value:
 * True if addon is present, otherwise false <BOOL>
 *
 * Example:
 * "TAG_myAddon" call ls_common_fnc_isModLoaded;
 *
 * Public: Yes
 */

params [
    ["_modName", "", [""]]
];

GVAR(isModLoadedCache) getOrDefaultCall [toLowerANSI _modName, {isClass (configFile >> "CfgPatches" >> _modName)}, true];
