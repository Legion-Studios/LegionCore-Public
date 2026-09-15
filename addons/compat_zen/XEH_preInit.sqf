#include "script_component.hpp"

if (!hasInterface) exitWith {};

// https://github.com/zen-mod/ZEN/blob/master/addons/garage/XEH_preInit.sqf#L17-L23
[
    "Object",
    "STR_A3_Garage",
    {call zen_garage_fnc_openGarage},
    {zen_attributes_enableGarage && { call EFUNC(props,canEditAppearance) }},
    true
] call zen_attributes_fnc_addButton;
