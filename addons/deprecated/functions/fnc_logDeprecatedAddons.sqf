#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Logs mods that have deprecated addons in their requiredAddons.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ls_deprecated_fnc_logDeprecatedAddons;
 *
 * Public: No
 */

private _allAddons = "true" configClasses (configFile >> "CfgPatches");
private _deprecatedAddons = _allAddons select { getNumber (_x >> 'ls_isDeprecated') >= 1 };
_deprecatedAddons = _deprecatedAddons apply { configName _x };

private _loggedHeader = false;

{
    private _name = getText (_x >> "name");
    if (_name == "") then {
        _name = configName _x;
    };

    private _requiredAddons = getArray (_x >> "requiredAddons");
    private _intersect = _requiredAddons arrayIntersect _deprecatedAddons;

    if (_intersect isNotEqualTo []) then {
        if !(_loggedHeader) then {
            WARNING("Some loaded mods require deprecated addons. Replace these dependencies with 'ls_loadorder'");
            _loggedHeader = true;
        };
        private _intersectPretty = _intersect joinString ", ";
        WARNING_3("%1 (%2) addon requires deprecated addons: %3",_name,configName _x,_intersectPretty);
    };
} forEach _allAddons;

nil;
