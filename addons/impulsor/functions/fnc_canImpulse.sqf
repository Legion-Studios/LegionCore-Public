#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Checks if a vehicle has and can use an impulsor.
 *
 * Please provide proper credits to those who participate in development.
 * This module was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 *
 * Return Value:
 * True if vehicle can use impulse, otherwise false <BOOL>
 *
 * Example:
 * (objectParent ls_player) call ls_impulsor_fnc_canImpulse;
 *
 * Public: Yes
 */

params [
    ["_vehicle", objNull, [objNull]]
];
TRACE_1("fnc_canImpulse",_vehicle);

if (!alive _vehicle or
    {isTouchingGround _vehicle} or
    {!isEngineOn _vehicle} or
    {_vehicle getHitPointDamage "HitEngine" >= 0.7} or
    {fuel _vehicle == 0} or {
        private _settings = _vehicle call FUNC(getSettings);
        !(_settings get "enabled");
    }
) exitWith { false };

true;
