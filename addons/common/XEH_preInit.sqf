#include "script_component.hpp"

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

// Cache for checking addons in CfgPatches
// If ACE is loaded, then both caches are combined and that will be used instead
GVAR(isModLoadedCache) = createHashMap;

ls_player = objNull;
uiNamespace setVariable ["ls_player", objNull];

GVAR(hiddenFaceHelmets) = createHashMap;
GVAR(biologies) = uiNamespace getVariable QGVAR(biologies);

// Hide heads of hologram units without faces
["CAManBase", "init", {
    params ["_unit"];
    if (headgear _unit != "" && {
        (_unit call FUNC(getBiology)) select 0 == "hologram"
    }) then {
        _unit call FUNC(hideHead);
    };
}, true, [], true] call CBA_fnc_addClassEventHandler; //Starts all current cars and those created later
