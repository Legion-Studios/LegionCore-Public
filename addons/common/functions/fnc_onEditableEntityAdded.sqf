#include "..\script_component.hpp"
/*
 * Authors: DartRuffian
 * Handles an Eden entity being created.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * _entity call ls_common_fnc_onEditableEntityAdded
 *
 * Public: No
 */

params ["_entity"];
TRACE_1("fnc_onEditableEntityAdded",_entity);

// Entities also includes groups, modules, etc.
// isEqualType check is for weird edge case where first parameter was a number, instead of a Eden entity
// Couldn't reproduce after adding log messages, so just adding the check
if (!(_entity isEqualType objNull) || { isNull _entity || !(_entity isKindOf "CAManBase") }) exitWith {};

// Fix for weird attribute logic, manually toggle skill values.
// The `expression` for Eden properties only runs if the value is actually saved to the mission.sqm
// If the set value matches the defaultValue, then the value is not saved to the mission.sqm.
{
    private _level = (_entity get3DENAttribute _x);
    if (_level isEqualTo []) then { continue };
    _level = _level select 0;

    if (_level > 0) then {
        _entity set3DENAttribute [_x, 0];
        _entity set3DENAttribute [_x, _level];
    };
} forEach GVAR(customSkills);
