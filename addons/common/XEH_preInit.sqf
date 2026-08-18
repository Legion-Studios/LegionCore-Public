#include "script_component.hpp"
#include "\a3\ui_f\hpp\defineCommonColors.inc"

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

GVAR(isPlacing) = PLACE_WAITING;
GVAR(objectRotationX) = 0;
GVAR(objectRotationY) = 0;
GVAR(objectRotationZ) = 0;

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

// Reversed to use same logic as ACE status effect
[QGVAR(blockSprint), {(_this select 0) allowSprint !(_this select 1)}] call CBA_fnc_addEventHandler;

// Hide heads of hologram units without faces
["CAManBase", "init", {
    params ["_unit"];
    if (headgear _unit != "" && {
        (_unit call FUNC(getBiology)) select 0 == "hologram"
    }) then {
        _unit call FUNC(hideHead);
    };
}, true, [], true] call CBA_fnc_addClassEventHandler;

[] call FUNC(addLocalUnitsHandlers);

[QGVAR(hideObjectGlobal), {
    params ["_objects", "_hide"];
    if (_objects isEqualType objNull) then { _objects = [_objects] };
    { _x hideObjectGlobal _hide } forEach _objects;
}] call CBA_fnc_addEventHandler;

GVAR(skills) = uiNamespace getVariable [QGVAR(skills), []];

GVAR(isPlacing) = PLACE_CANCEL;
if (hasInterface) then {
    ["ace_interactMenuOpened", { GVAR(isPlacing) = PLACE_CANCEL }] call CBA_fnc_addEventHandler;
};
