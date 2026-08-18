#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Starts the impulse sequence for a vehicle, and adjusts the impulse level by the given amount.
 *
 * Please provide proper credits to those who participate in development.
 * This module was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 * 1: Impulse level change <NUMBER>
 *
 * Return Value:
 * None
 *
 * Example:
 * [objectParent ls_player, 1] call ls_impulsor_fnc_impulse;
 *
 * Public: Yes
 */

params [
    ["_vehicle", objNull, [objNull]],
    ["_impulseChange", 1, [0]]
];
TRACE_2("fnc_impulse",_vehicle,_impulseChange);

if (_impulseChange == 0 or {!(_vehicle call FUNC(canImpulse))}) exitWith {};

// Most (if not all) impulse related variables should be synced, vehicle control can change, meaning a co-pilot
// could have different values, which would result in issues.

private _impulseSettings = _vehicle call FUNC(getSettings);
private _impulseLevel = _vehicle getVariable [QGVAR(level), MODE_DISABLED];
_impulseLevel = CLAMP(_impulseLevel,MODE_REPULSE,MODE_OVERCHARGE);
private _impulseLevelOriginal = _impulseLevel;

_impulseLevel = _impulseLevel + _impulseChange;
_impulseLevel = CLAMP(_impulseLevel,MODE_REPULSE,MODE_OVERCHARGE); // Double CLAMP so that both original and updated value are valid

if (_impulseLevel > MODE_IMPULSE) then {
    if (_vehicle getVariable [QGVAR(overchargeDisabled), false]) then {
        _impulseLevel = _impulseLevelOriginal;
        // TODO: engine sputter sound
    };

    if !(_vehicle getVariable [QGVAR(overchargeActive), false]) then {
        _vehicle call FUNC(overchargePFH);
        _vehicle setVariable [QGVAR(overchargeActive), true, true];
    };
};

if (_impulseLevel != _impulseLevelOriginal) then {
    _vehicle setVariable [QGVAR(level), _impulseLevel, true];
    [QGVAR(levelChanged), [_vehicle, _impulseSettings, _impulseLevel, _impulseLevelOriginal]] call CBA_fnc_localEvent;
};

if !(_vehicle getVariable [QGVAR(active), false]) then {
    _vehicle setVariable [QGVAR(active), true, true];
    [_vehicle, _impulseSettings] call FUNC(impulsePFH);
};
