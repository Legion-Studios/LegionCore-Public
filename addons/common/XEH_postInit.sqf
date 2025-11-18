#include "script_component.hpp"

if (isServer) then {
    [QGVAR(spawnSpaceDebris), LINKFUNC(spawnSpaceDebris)] call CBA_fnc_addEventHandler;
};

// Reset biology cache on uniform change
// Track current / previous helmet to automatically (un)hide heads
["CAManBase", "init", {
    params ["_unit"];
    _unit setVariable [QGVAR(oldHelmet), headgear _unit];
}, true, [], true] call CBA_fnc_addClassEventHandler;

["CAManBase", "SlotItemChanged", {
    params ["_unit", "_item", "_slot"];
    if (!local _unit) exitWith {};

    switch (_slot) do {
        case TYPE_UNIFORM: { _unit setVariable [QGVAR(biology), nil, true]; };
        case TYPE_HEADGEAR: {
            private _cfgWeapons = configFile >> "CfgWeapons";
            private _oldHelmet = _unit getVariable [QGVAR(oldHelmet), ""];

            private _fnc_hideFace = {
                params ["_helmetClass"];
                GVAR(hiddenFaceHelmets) getOrDefaultCall [_helmetClass, { getNumber (_cfgWeapons >> _helmetClass >> QGVAR(hideHead)) == 1 }, true];
            };

            if (!(_item call _fnc_hideFace) && { _oldHelmet call _fnc_hideFace }) then {
                [_unit, false] call FUNC(hideHead);
            } else {
                if (_item call _fnc_hideFace) then {
                    [_unit, true] call FUNC(hideHead);
                };
            };

            _unit setVariable [QGVAR(oldHelmet), _item];
        };
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
    // Lazy eval is needed because _level could be true/false for other traits
    if (_trait == "camouflageCoef" && {_level <= 0.1}) then {
        TRACE_1("Make enemy groups forget unit",_unit);
        private _unitSide = side group _unit;
        {
            if (side _x != _unitSide) then {
                _x forgetTarget _unit;
            };
        } forEach allGroups;
    };
}] call CBA_fnc_addEventHandler;

if (isServer) then {
    [QGVAR(addObjectToCurator), {
        params ["_objects"];
        if (_objects isEqualType objNull) then {
            _objects = [_objects];
        };

        {
            _x addCuratorEditableObjects [_objects, true];
        } forEach allCurators;
    }] call CBA_fnc_addEventHandler;
};

if (hasInterface) then {
    call COMPILE_SCRIPT(XEH_postInitClient);
};
