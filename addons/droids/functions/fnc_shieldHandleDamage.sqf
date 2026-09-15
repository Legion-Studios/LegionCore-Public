#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Handles a droideka's shield being damaged
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Shield <OBJECT>
 * 1: Selection (unused) <STRING>
 * 2: Damage <NUMBER>
 * 3: Source (unused) <OBJECT>
 * 4: Projectile (unused) <OBJECT>
 * 5: Hit part index (unused) <NUMBER>
 * 6: Instigator (unused) <OBJECT>
 * 7: Hitpoint (unused) <STRING>
 * 8: Direct hit (unused) <BOOL>
 * 9: Context (unused) <NUMBER>
 *
 * Return Value:
 * 0 <NUMBER>
 *
 * Example:
 * _shield addEventHandler ["HandleDamage", ls_droids_fnc_shieldHandleDamage];
 *
 * Public: No
 */

params ["_shield", "", "_damage"];
TRACE_2("fnc_shieldHandleDamage",_shield,_damage);

if (!local _shield) exitWith { 0 };

private _droideka = attachedTo _shield;
if (!alive _droideka) exitWith {
    _droideka call FUNC(deactivateShield);
    0;
};

private _health = (GET_SHIELD_HEALTH(_droideka) - _damage) max 0;
_droideka setVariable [QGVAR(shieldHealth), _health, true];

if (_health <= 0) then {
    _droideka setVariable [QGVAR(shieldDisabledUntil), CBA_missionTime + GVAR(droidekaShieldCooldown)];
    _droideka call FUNC(deactivateShield);
};

0; // Never actually let it take damage, we re-use the same object
