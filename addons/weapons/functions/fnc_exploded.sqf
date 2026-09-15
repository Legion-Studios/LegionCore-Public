#include "..\script_component.hpp"
/*
 * Authors: DartRuffian
 * Handles an explosive detonating.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Explosive <OBJECT>
 * 1: Position <ARRAY>
 * 2: Velocity <ARRAY>
 *
 * Return Value:
 * None
 *
 * Example:
 * [_explosive, getPosASL _explosive, velocity _explosive] call ls_weapons_fnc_exploded
 *
 * Public: No
 */

params ["_explosive"];
TRACE_1("fnc_exploded",_explosive);

if (!local _explosive) exitWith {};

private _isBreachingCharge = (typeOf _explosive call FUNC(getAmmoData)) param [4, false];

if (_isBreachingCharge) then {
    call FUNC(breachingCharge);
};
