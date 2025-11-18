#include "script_component.hpp"

#include "XEH_PREP.hpp"

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

private _customSkills = "true" configClasses (configFile >> "Cfg3DEN" >> "Object" >> "AttributeCategories" >> "ls_attributes" >> "Attributes");
_customSkills = _customSkills apply { getText (_x >> "property") };
uiNamespace setVariable [QGVAR(customSkills), _customSkills];

[] call FUNC(parseConfig); // Will be removed when space debris module is moved to battlefields
