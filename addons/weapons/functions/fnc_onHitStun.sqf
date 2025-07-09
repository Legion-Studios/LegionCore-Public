#include "..\script_component.hpp"
/*
 * Authors: DartRuffian
 * Handles a unit being hit by a stun round.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 1: Projectile config <CONFIG>
 *
 * Return Value:
 * None
 *
 * Example:
 * [player, _projectileConfig] call ls_weapons_fnc_onHitStun
 *
 * Public: No
 */

params ["_unit", "_projectileConfig"];
TRACE_2("fnc_onHitStun",_unit,_projectileConfig);

[_unit, getNumber (_projectileConfig >> QGVAR(stunDuration))] call FUNC(stun);
