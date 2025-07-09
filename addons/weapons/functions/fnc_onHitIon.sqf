#include "..\script_component.hpp"
/*
 * Authors: DartRuffian
 * Handles a unit or vehicle being hit by an ion round.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Unit or vehicle <OBJECT>
 * 1: Projectile config <CONFIG>
 * 2: Shooter <OBJECT>
 * 3: Instigator <OBJECT>
 * 4: Is unit <BOOL>
 *
 * Return Value:
 * None
 *
 * Example:
 * [player, _bulletConfig, true] call ls_weapons_fnc_onHitIon
 *
 * Public: No
 */

params ["_target", "_projectileConfig", "_shooter", "_instigator", "_isUnit"];
TRACE_5("fnc_onHitIon",_target,_projectileConfig,_shooter,_instigator,_isUnit);

// Biology checking is handled in fnc_onHit
if (_isUnit) exitWith {
    [_target, getNumber (_projectileConfig >> QGVAR(stunDuration))] call FUNC(stun);
};

private _engineDamage = _target getHitPointDamage "HitEngine";
_target setHitPointDamage [
    "HitEngine", _engineDamage + getNumber (_projectileConfig >> QGVAR(ionEngineDamage)),
    true, _shooter, _instigator
];
_target setFuel (fuel _target - getNumber (_projectileConfig >> QGVAR(ionFuelBurn)));

systemChat str (_target getHitPointDamage "HitEngine");
systemChat str (fuel _target);
