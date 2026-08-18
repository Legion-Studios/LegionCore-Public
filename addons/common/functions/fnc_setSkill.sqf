#include "..\script_component.hpp"
/*
 * Authors: DartRuffian
 * Sets a certain skill level for a unit.
 * Legion's custom skills are all internally tracked as numbers.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 1: Skill name <STRING>
 * 2: Skill level (optional, default: 1) <NUMBER>
 *    - Only some skills like medic and engineer distinguish between different skill levels
 *
 * Return Value:
 * None
 *
 * Example:
 * [player, "medic", 1] call ls_common_fnc_setSkill
 *
 * Public: Yes
 */

params [
    ["_unit", objNull, [objNull]],
    ["_skill", "", [""]],
    ["_level", 1, [1]]
];
TRACE_3("fnc_setSkill",_unit,_skill,_level);

if (isNull _unit || _skill == "") exitWith {};
if (!local _unit) exitWith {
    [QGVAR(setSkill), _this, _unit] call CBA_fnc_targetEvent
};

_skill = toLowerANSI _skill;

// Switch cases handle "actual" skills from vanilla / ace
// While default case handles custom ones like pilots and crew members
switch (_skill) do {
    case "medic": {
        if (missionNamespace getVariable ["ace_medical_enabled", false]) then {
            _unit setVariable ["ace_medical_medicClass", _level, true];
        } else {
            _unit setUnitTrait ["Medic", _level > 0];
        };
    };

    case "engineer": {
        if (missionNamespace getVariable ["ace_repair_enabled", false]) then {
             _unit setVariable ["ace_isEngineer", _level, true];
        } else {
            _unit setUnitTrait ["Engineer", _level > 0];
        };
    };

    case "eod": {
        if (missionNamespace getVariable ["ace_explosives", false]) then {
            _unit setVariable ["ACE_isEOD", _level > 0, true];
        } else {
            _unit setUnitTrait ["explosiveSpecialist", _level > 0];
        };
    };

    default {
        _unit setVariable [format ["ls_skill_%1", _skill], _level, true];
    };
};

// API, allow mods to handle skills
[QGVAR(skillSet), [_unit, _skill, _level], _unit] call CBA_fnc_targetEvent;
