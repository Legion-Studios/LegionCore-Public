#include "..\script_component.hpp"
/*
 * Author: Crimzonkat
 * Modified by DartRuffian
 * (Un)locks given seats when a given animation source is enabled or disabled.
 *
 * Please provide proper credits to those who participate in development.
 * This module was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 * 1: Animation source <STRING>
 *    - If value is equal to _disabled, seats are unlocked, otherwise seats are locked.
 * 2: Turret index(es) to lock or unlock <ARRAY>
 * 3: Value to use for the disabled state (optional, default: 0) <NUMBER>
 *    - Added so that other vehicles can freely use this same function.
 *
 * Return Value:
 * None
 *
 * Example:
 * [_vehicle, "animation", [10, 11, 12]] call ls_vehicles_fnc_conditionalSeats;
 *
 * Public: No
 */

params ["_vehicle", "_animation", "_turrets", ["_disabled", 0]];
TRACE_4("fnc_conditionalSeats",_vehicle,_animation,_turrets,_disabled);

private _lock = (_vehicle animationSourcePhase _animation != _disabled);

{
    _vehicle lockTurret [[_x], _lock];
} forEach _turrets;
