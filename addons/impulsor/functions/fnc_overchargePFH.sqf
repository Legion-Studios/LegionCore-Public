#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * A CBA PFH to handle a vehicle using an overcharge mode.
 *
 * Please provide proper credits to those who participate in development.
 * This module was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * objectParent ls_player call ls_impulsor_fnc_overchargePFH;
 *
 * Public: No
 */

params ["_vehicle"];
TRACE_1("fnc_overchargePFH",_vehicle);

private _function = {
    params ["_vehicle"];

    if !(isDamageAllowed _vehicle) exitWith {
        TRACE_1("Attempted to damage vehicle, but has damage disabled",_vehicle);
    };

    private _random = random 1;
    TRACE_2("Overcharge damage check",_random,GVAR(overchargeDamageChance));

    if (_random <= GVAR(overchargeDamageChance)) then {
        // TODO: play engine damage sound
        private _engineHit = _vehicle getHitPointDamage "HitEngine";
        private _engineHitNew = _engineHit + 0.1;
        _vehicle setHitPointDamage ["HitEngine", _engineHitNew];
        [QGVAR(engineDamaged), [_vehicle, _engineHit, _engineHitNew]] call CBA_fnc_localEvent;
    };
};

private _condition = {
    params ["_vehicle"];
    GET_LEVEL(_vehicle) >= MODE_OVERCHARGE;
};

private _exitCode = {
    params ["_vehicle"];
    _vehicle setVariable [QGVAR(overchargeActive), nil, true];
};

[
    _function,
    _condition,
    _exitCode,
    10,
    _vehicle
] call EFUNC(common,tempPFH);
