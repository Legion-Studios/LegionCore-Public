#include "..\script_component.hpp"
/*
 * Authors: DartRuffian
 * Scans config.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ls_common_fnc_parseConfig
 *
 * Public: No
 */

private _biologies = createHashMap;

{
    private _config = _x;
    private _class = configName _x;

    // Species is the specific type for the biology
    // E.g. humans and zabraks are both "nearhuman" type, but the species is specific to each
    private _species = getText (_config >> "species");
    if (_species == "") then {
        _species = _class;
    };

    private _value = [
        getText (_config >> "type"),
        _species,
        [false, true] select (getNumber (_config >> "isOrganic")),
        compileFinal getText (_config >> "condition"),
        getNumber (_config >> "priority")
    ];
    private _bloodModels = getArray (_config >> "bloodModels");
    _bloodModels = _bloodModels apply {
        // Remove leading slash if present
        if (_x select [0, 1] == "\") then {
            _x = _x select [1, count _x];
        };
        _x;
    };
    _value pushBack _bloodModels;

    _biologies set [_class, _value];
} forEach (QUOTE(getNumber (_x >> 'scope') > 0) configClasses (configFile >> "ls_biologies"));

TRACE_1("Loaded biologies from config",_biologies);
uiNamespace setVariable [QGVAR(biologies), compileFinal _biologies];

private _skillsConfig = configFile >> "ls_skills";
private _skills = "getNumber (_x >> 'scope') == 2" configClasses _skillsConfig;
_skills = _skills apply {
    private _class = configName _x;
    private _config = _skillsConfig >> _class;
    [_class, [getText (_config >> "name"), getText (_config >> "tooltip")]];
};
uiNamespace setVariable [QGVAR(skills), compileFinal (createHashMapFromArray _skills)];

// Move to battlefields rewrite
private _presets = createHashMap;
{
    _presets set [configName _x, [getText (_x >> "displayName"), getArray (_x >> "objects")]];
} forEach ("true" configClasses (configFile >> "lsb_spaceDebrisPresets"));

uiNamespace setVariable ["lsb_common_spaceDebrisPresets", compileFinal _presets];

private _distributions = createHashMap;
{
    private _function = getText (_x >> "function");
    if (_function == "") then { ERROR_1("Distribution '%1' has no function defined",configName _x); continue };

    _distributions set [configName _x, [getText (_x >> "displayName"), compile _function]];
} forEach ("true" configClasses (configFile >> "lsb_distributions"));

uiNamespace setVariable ["lsb_common_distributions", compileFinal _distributions];
