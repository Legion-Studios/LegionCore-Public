#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Damage handler for the scripted health system for the AT-RT.
 *
 * Arguments:
 * 0: AT-RT <OBJECT>
 * 1: Selection (unused) <STRING>
 * 2: Damage <NUMBER>
 * 3: Source unit that caused damage <OBJECT>
 * 4: Ammo <STRING>
 * 5: Hit part index (unused) <NUMBER>
 * 6: Is direct hit (unused) <BOOL>
 * 7: Context (unused) <NUMBER>
 *
 * Return Value:
 * Zero <NUMBER>
 *
 * Examples:
 * _atrt addEventHandler ["HandleDamage", ls_vehicles_fnc_atrt_handleDamage];
 *
 * Public: No
 */

// params ["_atrt", "", "_damage", "_source", "_ammo"];
// TRACE_4("fnc_handleDamage",_atrt,_damage,_source,_ammo);

// private _health = _atrt getVariable ["NCA_atrt_health", ATRT_HEALTH];
// if (_ammo == "3AS_FusionCutter_Ammo") then {
//     _damage = -_damage;

//     // 3AS will display a hint that the object can't be repaired, so get around it.
//     // Not 100% perfect because they base it on cursorObject which is view dependent :P
//     private _displayedHealth = floor ((_health / ATRT_HEALTH) * 100);
//     ["NCA_core_hint", format ["Repaired AT-RT to %1%2", _displayedHealth, "%"], _source] call CBA_fnc_targetEvent;
// };

// _health = ((_health - _damage) max 0) min ATRT_HEALTH;
// _atrt setVariable ["NCA_atrt_health", _health, true];

// // Update display before kicking off to make it clearer that it's dead
// [_atrt, 0.25] call FUNC(ui_updateHealth);

// if (_health <= 0) exitWith {
//     _atrt call FUNC(dismount);
//     #pragma hemtt ignore_variables ["_thisEvent", "_thisEventHandler"];
//     _atrt removeEventHandler [_thisEvent, _thisEventHandler];
//     _atrt setDamage 1; // handleDamage is also called from the wound handler, so we need to explicitly kill it
//     1;
// };

// 0; // Never allow the AT-RT to take actual damage
