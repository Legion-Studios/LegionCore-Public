#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Handles an AT-RT or its rider being deleted.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 *
 * Return Value:
 * None
 *
 * Examples:
 * player call ls_vehicles_fnc_atrt_handleKilled;
 *
 * Public: No
 */

params ["_unit"];
TRACE_1("fnc_atrt_handleKilled",_unit);

if (!local _unit) exitWith {};

if (_unit isKindOf "ls_vehicle_atrt_base") then {
    // TODO: Not sure if this will still be necessary once the death anim is working
    // if (NCA_atrt_deathEffectsDuration > 0) then {
    //     private _memPoint = selectRandom [
    //         "aiming_axis",
    //         "head_axis",
    //         "lelbow",
    //         "relbow"
    //     ];

    //     private _smoke = "#particlesource" createVehicle [0, 0, 0];
    //     _smoke setParticleClass "NCA_ATRT_Smoke";
    //     _smoke attachTo [_unit, [0, 0, 0], _memPoint];

    //     private _sparks = "#particlesource" createVehicle [0, 0, 0];
    //     _sparks setParticleClass "NCA_Standard_sparks";
    //     _sparks setDropInterval 0.05;
    //     _sparks attachTo [_unit, [0, 0, 0], _memPoint];

    //     private _effects = _unit getVariable ["TAS_ATRT_effects", []];
    //     _effects append [_smoke, _sparks];

    //     _unit setVariable ["TAS_ATRT_effects", _effects, true];

    //     [{
    //         deleteVehicle _this;
    //     }, _effects, NCA_atrt_deathEffectsDuration] call CBA_fnc_waitAndExecute;
    // };
    _unit call FUNC(atrt_dismount);

    // Clean up effects
    deleteVehicle (_unit getVariable [QGVAR(atrt_effects), []]);
    _unit setVariable [QGVAR(atrt_effects), nil];
    ATRT_EFFECTS_EVENT_ID(_unit) call CBA_fnc_removeGlobalEventJIP; // Remove from JIP queue

    // No stealing AT-RT guns
    { _unit removeWeapon _x } forEach (weapons _unit);
} else {
    private _atrt = _unit getVariable [QGVAR(atrt_riding), objNull];
    if (!isNull _atrt) then {
        _atrt call FUNC(atrt_dismount);
    };
};
