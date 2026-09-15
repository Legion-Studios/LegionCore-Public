#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Handles breaking the glass bottle when shot.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Object <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * _bottle call ls_props_fnc_bottle_hitPart;
 *
 * Public: No
 */

params ["_object"];

_object setDamage 1;
[getPosASL _object, velocity _object, _object getVariable ["BIS_color", "gray"]] call FUNC(bottle_destructionEffect);

deleteVehicle _object;
