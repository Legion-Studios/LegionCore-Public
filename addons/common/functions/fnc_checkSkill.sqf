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
 * True if unit's skill level is greater than or equal to given skill level, otherwise false.
 *
 * Example:
 * [player, "medic", 1] call ls_common_fnc_checkSkill
 *
 * Public: Yes
 */

params [
    ["_unit", objNull, [objNull]],
    ["_skill", "", [""]],
    ["_level", 1, [1]]
];
TRACE_3("fnc_checkSkill",_unit,_skill,_level);

if (isNull _unit || _skill == "") exitWith {};

private _currLevel = [_unit, _skill] call FUNC(getSkill);
private _return = _currLevel >= _level;

// API, allow mods to handle skills
private _eventParams = [_unit, _skill, _level, _return];
[QGVAR(skillCheck), _eventParams] call CBA_fnc_localEvent;

_eventParams select 3;
