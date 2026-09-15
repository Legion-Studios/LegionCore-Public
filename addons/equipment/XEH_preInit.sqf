#include "script_component.hpp"

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

private _category = [QUOTE(MOD_NAME), QUOTE(COMPONENT_BEAUTIFIED)];

#include "initSettings.inc.sqf"
// #include "initKeybinds.inc.sqf"

if (!hasInterface) exitWith {};

if (GVAR(createEquipmentCategory) && missionNamespace getVariable ["ace_arsenal", false]) then {
    private _items = [];
    private _condition = toString { getNumber (_x >> QUOTE(ADDON)) == 1 };
    {
        _items append (_condition configClasses (configFile >> _x));
    } forEach ["CfgWeapons", "CfgMagazines"];

    _items = _items apply { configName _x };
    _items append (uiNamespace getVariable [QGVAR(arsenalItems), []]);
    [_items, localize "STR_A3_showcase_jets_BIS_tskEquipment_title", "\A3\UI_F\data\IGUI\cfg\SimpleTasks\types\use_ca.paa"] call ace_arsenal_fnc_addRightPanelButton;
};
