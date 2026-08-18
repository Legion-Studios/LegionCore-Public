#include "..\script_component.hpp"
/*
 * Authors: DartRuffian
 * Returns a unit's skill level.
 * Legion's custom skills are all internally tracked as numbers.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 1: Skill name <STRING>
 *
 * Return Value:
 * Unit's skill level <NUMBER>
 *
 * Example:
 * [player, "medic"] call ls_common_fnc_getSkill
 *
 * Public: Yes
 */

params [
    ["_unit", objNull, [objNull]],
    ["_skill", "", [""]]
];
TRACE_2("fnc_getSkill",_unit,_skill);

if (isNull _unit || _skill == "") exitWith {};
_skill = toLowerANSI _skill;

// Switch cases handle "actual" skills from vanilla / ace
// While default case handles custom ones like pilots and crew members
private _return = switch (_skill) do {
    case "medic": {
        if (missionNamespace getVariable ["ace_medical_enabled", false]) then {
            _unit getVariable ["ace_medical_medicClass", 0];
        } else {
            parseNumber (_unit getUnitTrait "Medic");
        };
    };

    case "engineer": {
        private _isEngineer = _unit getVariable ["ACE_isEngineer", _unit getUnitTrait "engineer"];
        // Convert boolean to number
        [0, 1, 2] select _isEngineer;
    };

    case "eod": {
        // Neither ACE nor vanilla distinguish between different levels of eod
        parseNumber (_unit getVariable ["ACE_isEOD", _unit getUnitTrait "explosiveSpecialist"]);
    };

    case "tech": {
        _unit getVariable ["ls_skill_tech", parseNumber (_unit getUnitTrait "UAVHacker")];
    };

    default {
        _unit getVariable [format ["ls_skill_%1", _skill], 0];
    };
};

// API, allow mods to handle skills
private _eventParams = [_unit, _skill, _return];
[QGVAR(skillGet), _eventParams] call CBA_fnc_localEvent;

_eventParams select 2;
