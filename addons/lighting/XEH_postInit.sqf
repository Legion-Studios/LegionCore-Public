#include "script_component.hpp"

// Hashmap for storing config values for equipment
GVAR(equipmentCache) = createHashMap;

["CAManBase", "Deleted", LINKFUNC(handleDeleted)] call CBA_fnc_addClassEventHandler;
["CAManBase", "SlotItemChanged", {
    params ["_unit", "_item", "", "_assigned"];
    if (!local _unit) exitWith {};

    if (!_assigned and {_item == _unit getVariable [QGVAR(lightEquipment), ""]}) then {
        [_unit, _item] call FUNC(disable);
    };
}] call CBA_fnc_addClassEventHandler;

if (hasInterface) then {
    call COMPILE_SCRIPT(XEH_postInitClient);
};
