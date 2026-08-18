#include "..\script_component.hpp"
/*
 * Authors: DartRuffian
 * Spawns particle effects for the AT-RT.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: AT-RT <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * _atrt call ls_vehicles_fnc_atrt_createEffects
 *
 * Public: No
 */

params ["_atrt"];
TRACE_1("fnc_atrt_createEffects",_atrt);

if (_atrt getVariable [QGVAR(atrt_effects), []] isNotEqualTo []) exitWith {};

private _positionAGL = ASLToAGL (getPosASL _atrt);
private _effects = [];
{
    private _cloudlet = "#particlesource" createVehicleLocal _positionAGL;
    _cloudlet setParticleClass _x;
    _cloudlet attachTo [_atrt, [0, 0, 0], "exhaust", true];
    _effects pushBack _cloudlet;
} forEach ["ls_cloudlet_RefractSmall", "ls_cloudlet_ExhaustATRT"];

_atrt setVariable [QGVAR(atrt_effects), _effects];
