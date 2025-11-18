#include "..\script_component.hpp"
/*
 * Authors: DartRuffian, Crimzonkat
 * Stuns a unit. If unit is already stunned, half of the given duration is added to their "stun timer".
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 1: Stun duration <NUMBER>
 *
 * Return Value:
 * None
 *
 * Example:
 * [player, 10] call ls_weapons_fnc_stun
 *
 * Public: No
 */

params ["_unit", "_duration"];
TRACE_2("fnc_stun",_unit,_duration);

if (!local _unit) exitWith {
    [QGVAR(stun), _this, _unit] call CBA_fnc_targetEvent;
};

_unit call FUNC(stunEffects);

// If unit is already stunned, just increase the stunnedUntil time and don't add a new waitAndExecute
if (_unit getVariable [QGVAR(isStunned), false]) exitWith {
    private _stunnedUntil = _unit getVariable [QGVAR(stunnedUntil), CBA_missionTime];
    _unit setVariable [QGVAR(stunnedUntil), _stunnedUntil + (_duration / 2), true];
};

_unit call EFUNC(common,throwWeapon);

// "Knock down" animation before setting them unconscious
if (_unit call EFUNC(common,isAwake)) then {
    private _delay = 0; // Added to stunnedUntil so that the actual stun time is consistent
    private _endAnim = "";

    switch (stance _unit) do {
        case "STAND": {
            [_unit, "Acts_stunned_Unconscious", 2] call EFUNC(common,doAnimation);
            _unit setAnimSpeedCoef 1.25;
            _delay = 7;
            _endAnim = "Acts_stunned_Unconscious_end";
            _unit setAnimSpeedCoef 1;
        };
        case "CROUCH": {
            [_unit, "passenger_boat_4_die", 2] call EFUNC(common,doAnimation);
            _delay = 1.1;
        };
    };

    _unit setVariable [QGVAR(isStunned), true, true];
    _unit setVariable [QGVAR(stunnedUntil), CBA_missionTime + _duration + _delay, true];

    [{
        params ["_unit", "_endAnim"];
        if (_endAnim != "") then {
            [_unit, _endAnim, 2] call EFUNC(common,doAnimation);
        };

        if (missionNamespace getVariable ["ace_medical_enabled", false]) then {
            // Stun time can change, so pick a big number and then force wake them up at a later point
            [_unit, true, 100000] call ace_medical_fnc_setUnconscious;
            [_unit, 0.1] call ace_medical_fnc_adjustPainLevel;
        } else {
            _unit setUnconscious true;
        };

        [QGVAR(stunned), [_unit]] call CBA_fnc_localEvent;
    }, [_unit, _endAnim], _delay] call CBA_fnc_waitAndExecute;
};

[{
    _this getVariable [QGVAR(stunnedUntil), 0] <= CBA_missionTime;
}, {
    _this setVariable [QGVAR(isStunned), nil, true];
    _this setVariable [QGVAR(stunnedUntil), nil, true];

    if !(call EFUNC(common,isAwake)) then {
        if (missionNamespace getVariable ["ace_medical_enabled", false]) then {
            [_this, false] call ace_medical_fnc_setUnconscious;
        } else {
            _this setUnconscious false;
        };
        [QGVAR(stunnedEnd), [_this]] call CBA_fnc_localEvent;
    };
}, _unit] call CBA_fnc_waitUntilAndExecute;
