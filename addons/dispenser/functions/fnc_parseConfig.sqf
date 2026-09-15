#include "..\script_component.hpp"
/*
 * Authors: DartRuffian
 * Parses CfgGroups for dispener available groups and caches it to a hashmap.
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
 * [] call ls_dispenser_fnc_parseConfig
 *
 * Public: No
 */

// Returns GVAR(available) value, returns set value or -1 if undefined
#define IS_AVAILABLE(var1) getNumber (var1 >> QGVAR(available))

private _groupCache = createHashMap;
private _cfgFactionClasses = configFile >> "CfgFactionClasses";
private _cfgGroups = configFile >> "CfgGroups";

{
    {
        private _factionName = getText (_x >> "name");
        private _factionSide = getNumber (_cfgFactionClasses >> configName _x >> "side");
        private _factionClass = toLowerANSI configName _x;
        private _factionAvailable = IS_AVAILABLE(_x);

        {
            private _sectionName = getText (_x >> "name");
            private _sectionClass = toLowerANSI configName _x;
            private _sectionAvailable = IS_AVAILABLE(_x);
            // If undefined, use faction value
            if (_sectionAvailable == -1) then {
                _sectionAvailable = _factionAvailable;
            };

            {
                private _groupAvailable = IS_AVAILABLE(_x);
                if (_groupAvailable == -1) then {
                    _groupAvailable = _sectionAvailable;
                };

                #ifdef DEBUG_MODE_FULL
                INFO("Logging droid dispenser group data");
                diag_log format [
                    "%1>>%2>>%3 | _faction=%4, _section=%5, _group=%6",
                    _factionClass, _sectionClass, configName _x,
                    _factionAvailable, _sectionAvailable, _groupAvailable
                ];
                #endif
                // Thank you to Sh'moo and Gree for helping fix this
                if !(
                    (_factionAvailable > 0 && _sectionAvailable >= 0 && _groupAvailable >= 0) ||
                    (_factionAvailable == 0 && (_sectionAvailable + _groupAvailable > 0))
                ) then { continue };

                // Inherited units are *not* included
                // Fully inherited groups (i.e. class A: B {}) appear in Eden/Zeus, but don't contain any units
                private _units = ("(getText (_x >> 'vehicle')) isKindOf 'CAManBase'" configClasses _x) apply { getText (_x >> "vehicle") };
                if (_units isEqualTo []) then { continue };

                private _groupName = getText (_x >> "name");
                private _icon = getText (_x >> "icon");

                private _faction = _groupCache getOrDefault [_factionClass, [_factionName, _factionSide, createHashMap], true];
                private _section = (_faction select 2) getOrDefault [_sectionClass, [_sectionName, createHashMap], true];
                (_section select 1) set [toLowerANSI configName _x, [_groupName, _icon, _units]];
            } forEach ("true" configClasses _x);
        } forEach ("true" configClasses _x);
    } forEach ("true" configClasses (_cfgGroups >> _x));
} forEach ["East", "West", "Indep", "Civilian"];

uiNamespace setVariable [QGVAR(groups), compileFinal _groupCache];
