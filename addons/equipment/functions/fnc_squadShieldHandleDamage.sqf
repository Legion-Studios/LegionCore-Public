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
 * 7: Hitpoint <STRING>
 * 8: Direct hit (unused) <BOOL>
 * 9: Context (unused) <NUMBER>
 *
 * Return Value:
 * 0 <NUMBER>
 *
 * Example:
 * _shield addEventHandler ["HandleDamage", ls_equipment_fnc_squadShieldHandleDamage];
 *
 * Public: No
 */

params ["_shield", "", "_damage", "", "", "", "", "_hitpoint"];
TRACE_3("fnc_squadShieldHandleDamage",_shield,_damage,_hitpoint);

TRACE_CHAT_3("Shield hit",_shield,_damage,_hitpoint);

if !(local _shield && _hitpoint == "HitShield") exitWith {};

private _health = ((_shield getVariable [QGVAR(shieldHealth), GVAR(squadShieldHealth)]) - _damage) max 0;
_shield setVariable [QGVAR(shieldHealth), _health, true];

TRACE_CHAT_2("Shield Health",_health,_shield getHitPointDamage "HitShield");

if (_health <= 0) exitWith {
    _shield animateSource ["deploy_shield", 0, 2];
    _shield setVariable [QEGVAR(common,packedItemClass), QGVAR(squadShield_broken_packed), true];
    1;
};

// Convert shield health to 0-1 damage value, makes it so that checking health with getHitPointDamage is valid
linearConversion [0, GVAR(squadShieldHealth), _health, 0, 1, true];
