#include "..\script_component.hpp"
/*
 * Author: BiT
 * Adapted by Crimzonkat
 * Rewritten by DartRuffian
 * A CBA PFH to handle a vehicle using impulse.
 *
 * Please provide proper credits to those who participate in development.
 * This module was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 * 1: Vehicle impulse settings <ARRAY>
 *    - See fnc_impulse
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ls_impulsor_fnc_impulsePFH;
 *
 * Public: No
 */

params [
    ["_vehicle", objNull, [objNull]],
    ["_impulseSettings", createHashMap, [createHashMap]]
];
TRACE_2("fnc_impulsePFH",_vehicle,_impulseSettings);

private _sound = switch GET_LEVEL(_vehicle) do {
    case MODE_REPULSE: {
        _impulseSettings get "repulseSoundOn";
    };
    case MODE_IMPULSE: {
        _impulseSettings get "impulseSoundOn";
    };
    default { "" };
};

[_vehicle, _sound] call EFUNC(common,say3D);
[QGVAR(activated), [_vehicle]] call CBA_fnc_globalEvent;

private _function = {
    params ["_vehicle", "_impulseSettings"];

    private _impulseLevel = GET_LEVEL(_vehicle);
    private _velocity = velocity _vehicle;
    private _speed = (vectorDir _vehicle) vectorDotProduct _velocity;

    if (_impulseLevel > MODE_DISABLED) then {
        private _levelSettings = switch (_impulseLevel) do {
            case MODE_IMPULSE: {
                [
                    _impulseSettings get "speed",
                    _impulseSettings get "fuelDrain"
                ];
            };
            case MODE_OVERCHARGE: {
                [
                    _impulseSettings get "overchargeSpeed",
                    _impulseSettings get "overchargeFuelDrain"
                ];
            };
        };
        _levelSettings params ["_impulseSpeed", "_fuelCost"];

        private _speedCoef = SPEED_KPH(_impulseSpeed) - _speed;
        _speedCoef = CLAMP(_speedCoef * 5,-30,30);

        private _fuelCost = _fuelCost * (getFuelConsumptionCoef _vehicle);
        _vehicle setFuel (fuel _vehicle - _fuelCost);
        private _speedChange = (vectorDir _vehicle) vectorMultiply (0.2 * _speedCoef);
        _vehicle setVelocity (_velocity vectorAdd _speedChange);
    };

    // Repulsor, math is only copy/pasted to potentially tweak slowdown amounts separately
    if (_impulseLevel < MODE_DISABLED) then {
        if (_speed > SPEED_KPH(REPULSE_SPEED + 1)) then {
            private _speedCoef = SPEED_KPH(REPULSE_SPEED) - _speed;
            _speedCoef = CLAMP(_speedCoef * 5,-30,30);
            private _speedChange = (vectorDir _vehicle) vectorMultiply (0.2 * _speedCoef);
            _vehicle setVelocity (_velocity vectorAdd _speedChange);
        } else {
            _vehicle setVariable [QGVAR(levelOriginal), _impulseLevel]; // Only exists to play the correct sound in _exitCode
            _vehicle setVariable [QGVAR(level), MODE_DISABLED, true];
            [QGVAR(levelChanged), [_vehicle, _impulseSettings, MODE_DISABLED, _impulseLevel]] call CBA_fnc_localEvent;
        };
    };
};

private _condition = {
    params ["_vehicle"];

    alive _vehicle and
    {_vehicle getVariable [QGVAR(level), 0] != 0} and
    {isEngineOn _vehicle} and
    {_vehicle getHitPointDamage "HitEngine" < DAMAGE_RED} and
    {!isTouchingGround _vehicle} and
    {fuel _vehicle > 0};
};

private _exitCode = {
    params ["_vehicle", "_impulseSettings"];
    _vehicle setVariable [QGVAR(active), false, true];
    _vehicle setVariable [QGVAR(level), MODE_DISABLED, true];
    [QGVAR(deactivated), [_vehicle]] call CBA_fnc_globalEvent;

    if (alive _vehicle) then {
        private _sound = _impulseSettings get "impulseSoundOff";
        if (_vehicle getVariable [QGVAR(levelOriginal), MODE_DISABLED] == MODE_REPULSE) then {
            _sound = _impulseSettings get "repulseSoundOff";
        };
        _vehicle setVariable [QGVAR(levelOriginal), nil];
        [_vehicle, _sound] call EFUNC(common,say3D);
    };
};

[_function, _condition, _exitCode, 0.1, [_vehicle, _impulseSettings]] call EFUNC(common,tempPFH);
