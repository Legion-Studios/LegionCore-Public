#include "script_component.hpp"

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

private _category = [QUOTE(MOD_NAME), QUOTE(COMPONENT_BEAUTIFIED)];

#include "initSettings.inc.sqf"
// #include "initKeybinds.inc.sqf"

[QGVAR(addShieldEH), {
    params ["_shield"];
    if (_shield getVariable [QGVAR(hasHandleDamageEH), false]) exitWith {};
    _shield setVariable [QGVAR(hasHandleDamageEH), true];

    // exitWith does not work properly when run from the event handler scope, so use {} to add an extra layer to work correctly
    _shield addEventHandler ["HandleDamage", { call FUNC(shieldHandleDamage) }];
}] call CBA_fnc_addEventHandler;

GVAR(droidekaStateMachine) = (configFile >> "ls_droideka_statemachine") call CBA_statemachine_fnc_createFromConfig; // Core functionality
GVAR(droidekaAIStateMachine) = (configFile >> "ls_droidekaAI_statemachine") call CBA_statemachine_fnc_createFromConfig; // AI specific behavior

if (!hasInterface) exitWith {};

if (missionNamespace getVariable ["ace_medical_enabled", false]) then {
    ["ace_unconscious", {
        params ["_unit", "_isUnconscious"];
        if !(local _unit && {IS_DROIDEKA(_unit)}) exitWith {};

        if (_isUnconscious) then {
            _unit call FUNC(deactivateShield);
        } else {
            _unit call FUNC(activateShield);
        };

        private _animation = _unit call FUNC(getDroidekaAnim);
        [EFUNC(common,doAnimation), [_unit, _animation, 2]] call CBA_fnc_execNextFrame;
    }] call CBA_fnc_addEventHandler;
};

if ("ace_dragging" call EFUNC(common,isModLoaded)) then {
    ["ace_dragging_startedDrag", {
        params ["", "_target"];
        if !(IS_DROIDEKA(_target)) exitWith {};

        [EFUNC(common,doAnimation), [_target, "droideka_death0", 2]] call CBA_fnc_execNextFrame;
    }] call CBA_fnc_addEventHandler;

    ["ace_dragging_stoppedDrag", {
        params ["", "_target"];
        if !(IS_DROIDEKA(_target)) exitWith {};

        private _animation = _target call FUNC(getDroidekaAnim);
        [EFUNC(common,doAnimation), [_target, _animation, 2]] call CBA_fnc_execNextFrame;
    }] call CBA_fnc_addEventHandler;

    ["ace_dragging_startedCarry", {
        params ["", "_target"];
        if !(IS_DROIDEKA(_target)) exitWith {};

        [EFUNC(common,doAnimation), [_target, "droideka_carried", 2]] call CBA_fnc_execNextFrame;
    }] call CBA_fnc_addEventHandler;

    ["ace_dragging_stoppedCarry", {
        params ["", "_target"];
        if !(IS_DROIDEKA(_target)) exitWith {};

        private _animation = _target call FUNC(getDroidekaAnim);
        [EFUNC(common,doAnimation), [_target, _animation, 2]] call CBA_fnc_execNextFrame;
    }] call CBA_fnc_addEventHandler;
};
