#include "..\script_component.hpp"
/*
 * Authors: DartRuffian
 * Checks if a unit has a certain skill.
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
 * True if has the skill, otherwise false <BOOL>
 *
 * Example:
 * [player, "medic", 1] call ls_common_fnc_getSkill
 *
 * Public: Yes
 */

params [
    ["_unit", objNull, [objNull]],
    ["_skill", "", [""]],
    ["_level", 1, [1]]
];
TRACE_3("fnc_getSkill",_unit,_skill,_level);

if (isNull _unit || _skill == "") exitWith {};

// Switch cases handle "actual" skills from vanilla / ace
// While default case handles custom ones like pilots and crew members
private _return = switch (toLowerANSI _skill) do {
    case "medic": {
        if (missionNamespace getVariable ["ace_common", false]) then {
            [_unit, _level] call ace_common_fnc_isMedic;
        } else {
            parseNumber (_unit getUnitTrait "Medic") >= _level;
        };
    };

    case "engineer": {
        if (missionNamespace getVariable ["ace_common", false]) then {
            [_unit, _level] call ace_common_fnc_isEngineer;
        } else {
            parseNumber (_unit getUnitTrait "Engineer") >= _level;
        };
    };

    case "eod": {
        // Neither ACE nor vanilla distinguish between different levels of eod
        _unit getVariable ["ACE_isEOD", _unit getUnitTrait "explosiveSpecialist"];
    };

    case "tech": {
        _unit getVariable ["ls_skill_tech", parseNumber (_unit getUnitTrait "UAVHacker")] >= _level;
    };

    default {
        _unit getVariable [format ["ls_skill_%1", _skill], 0] >= _level;
    };
};

// API, allow mods to handle skills
private _eventParams = [_unit, _skill, _level, _return];
[QGVAR(skillGet), _eventParams] call CBA_fnc_localEvent;

_eventParams select 3;
