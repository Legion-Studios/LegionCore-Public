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
 * 0: Config path <CONFIG>
 * 1: Config path <CONFIG>
 *
 * Return Value:
 * String of differences, formatted output is copied to clipboard <STRING>
 *
 * Example:
 * [configFile >> "CfgAmmo" >> "BulletCore", configFile >> "CfgAmmo" >> "BulletBase"] call compileScript ["\ls\core\addons\common\scripts\compareConfig.sqf"]
 *
 * Public: No
 */

params [
    ["_config1", configFile, [configFile]],
    ["_config2", configFile, [configFile]]
];

if (isNull _config1 || isNull _config2) exitWith { "" };

private _hash1 = createHashMap;
{
    private _name = toLowerANSI (configName _x);
    _hash1 set [_name, [_config1, _name, "-undefined-"] call BIS_fnc_returnConfigEntry];
} forEach configProperties [_config1, "!isClass _x"];

private _hash2 = createHashMap;
{
    private _name = toLowerANSI (configName _x);
    _hash2 set [_name, [_config2, _name, "-undefined-"] call BIS_fnc_returnConfigEntry];
} forEach configProperties [_config2, "!isClass _x"];

private _mismatches = createHashMap;
{
    private _val1 = _y;
    private _val2 = _hash2 getOrDefault [_x, "-undefined-"];

    if (_val1 isNotEqualTo _val2) then {
        _mismatches set [_x, [_val1, _val2]];
    };
} forEach _hash1;

{
    private _val1 = _hash1 getOrDefault [_x, "-undefined-"];
    private _val2 = _y;

    if (_val1 isNotEqualTo _val2 && isNil { _mismatches get _x }) then {
        _mismatches set [_x, [_val1, _val2]];
    };
} forEach _hash2;

private _output = format ["Property,%1,%2
", configName _config1, configName _config2];
private _keys = keys _mismatches;
_keys sort true;
{
    (_mismatches get _x) params ["_val1", "_val2"];
    _output = _output + format ["%1,%2,%3
", _x, _val1, _val2];
} forEach _keys;

copyToClipboard _output;
_mismatches;
