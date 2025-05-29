#include "script_component.hpp"

// Reset biology cache on uniform change
["CAManBase", "SlotItemChanged", {
    params ["_unit", "", "_slot"];
    if (!local _unit) exitWith {};
    if (_slot == TYPE_UNIFORM) then {
        _unit setVariable [QGVAR(biology), nil, true];
    };
}] call CBA_fnc_addClassEventHandler;

GVAR(isModLoadedCache) = createHashMap;
GVAR(vehicleIcons) = createHashMap;

// https://github.com/acemod/ACE3/blob/master/addons/common/XEH_postInit.sqf#L211-L215
[QGVAR(playMove), {(_this select 0) playMove (_this select 1)}] call CBA_fnc_addEventHandler;
[QGVAR(playMoveNow), {(_this select 0) playMoveNow (_this select 1)}] call CBA_fnc_addEventHandler;
[QGVAR(playAction), {(_this select 0) playAction (_this select 1)}] call CBA_fnc_addEventHandler;
[QGVAR(playActionNow), {(_this select 0) playActionNow (_this select 1)}] call CBA_fnc_addEventHandler;
[QGVAR(switchMove), {(_this select 0) switchMove (_this select 1)}] call CBA_fnc_addEventHandler;
[QGVAR(setFace), {(_this select 0) setFace (_this select 1)}] call CBA_fnc_addEventHandler;

[QGVAR(ragdoll), LINKFUNC(ragdoll)] call CBA_fnc_addEventHandler;

[QGVAR(setUnitTrait), {
    params ["_unit", "_trait", "_level"];
    TRACE_3("setUnitTrait",_unit,_trait,_level);
    _unit setUnitTrait [_trait, _level];

    // If value is low enough, make all groups on other sides forget them
    if (_trait == "camouflageCoef" && {_level <= 0.1}) then {
        TRACE_1("Make enemy groups forget unit",_unit);
        {
            if (side _x != side group _unit) then {
                _x forgetTarget _unit;
            };
        } forEach allGroups;
    };
}] call CBA_fnc_addEventHandler;

if (hasInterface) then {
    call COMPILE_SCRIPT(XEH_postInitClient);
};