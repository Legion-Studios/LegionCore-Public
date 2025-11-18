#include "script_component.hpp"
#include "\a3\ui_f\hpp\defineCommonColors.inc"

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

// Cache for checking addons in CfgPatches
// If ACE is loaded, then both caches are combined and that will be used instead
GVAR(isModLoadedCache) = createHashMap;

ls_player = objNull;
uiNamespace setVariable ["ls_player", objNull];

// The RGBA macros are for config
GVAR(sideColors) = [
    [Map_OPFOR_RGB, Map_OPFOR_A],
    [Map_BLUFOR_RGB, Map_BLUFOR_A],
    [Map_Independent_RGB, Map_Independent_A],
    [Map_Civilian_RGB, Map_Civilian_A],
    [Map_Unknown_RGB, Map_Unknown_A]
] apply {
    _x apply { call compile _x };
};

GVAR(hiddenFaceHelmets) = createHashMap;
GVAR(biologies) = uiNamespace getVariable QGVAR(biologies);

// Create a copy from UI namespace, allows mod / mission makers to just add to the hashmap
lsb_common_spaceDebrisPresets = +(uiNamespace getVariable "lsb_common_spaceDebrisPresets");
lsb_common_distributions = +(uiNamespace getVariable "lsb_common_distributions");

// Hide heads of hologram units without faces
["CAManBase", "init", {
    params ["_unit"];
    if (headgear _unit != "" && {
        (_unit call FUNC(getBiology)) select 0 == "hologram"
    }) then {
        _unit call FUNC(hideHead);
    };
}, true, [], true] call CBA_fnc_addClassEventHandler;

if (is3DEN) then {
    GVAR(customSkills) = uiNamespace getVariable [QGVAR(customSkills), []];
    add3DENEventHandler ["OnEditableEntityAdded", LINKFUNC(onEditableEntityAdded)];
};
