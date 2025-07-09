#include "..\script_component.hpp"
/*
 * Author: Crimzonkat, DartRuffian
 * Speed boost for the Mynock Glidepack.
 *
 * Please provide proper credits to those who participate in development.
 * This module was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Glidepack <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * _glidepack call ls_vehicles_fnc_glidepackBoost;
 *
 * Public: No
 */

#define BOOST_SPEED 200
// ! WIP

params [
    ["_glider", objNull, [objNull]]
];
TRACE_1("fnc_glidepackBoost",_glider);

if (!alive _glider or {_vehicle getVariable [QGVAR(gliderBoostPFH), false]}) exitWith {};
_vehicle setVariable [QGVAR(gliderBoostPFH), true, true];

systemChat "boost pfh started";

private _function = {
    params ["_vehicle"];

    if !(_vehicle getVariable [QGVAR(gliderIsBoosting), false] or {speed _vehicle >= BOOST_SPEED}) exitWith {};

    private _velocity = velocity _vehicle;
    private _speed = (vectorDir _vehicle) vectorDotProduct _velocity;
    private _speedCoef = SPEED_KPH(BOOST_SPEED) - _speed;
    _speedCoef = CLAMP(_speedCoef * 3,-10,10);

    private _speedChange = (vectorDir _vehicle) vectorMultiply (0.2 * _speedCoef);
    private _velocity = _velocity vectorAdd _speedChange;
    _vehicle setVelocity _velocity;
    systemChat str _velocity;
};

private _condition = {
    params ["_vehicle"];
    alive _vehicle;
};

private _exitCode = {
    params ["_vehicle"];
    _vehicle setVariable [QGVAR(gliderBoostPFH), nil, true];
};

[_function, _condition, _exitCode, 0.1, [_vehicle]] call EFUNC(common,tempPFH);
