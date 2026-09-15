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
 * player call ls_vehicles_fnc_atrt_handleDeleted;
 *
 * Public: No
 */

params ["_unit"];
TRACE_1("fnc_atrt_handleDeleted",_unit);

if (_unit isKindOf "ls_vehicle_atrt_base") then {
    deleteVehicle (_unit getVariable [QGVAR(atrt_effects), []]);

    if (!local _unit) exitWith {};

    private _rider = _unit getVariable [QGVAR(atrt_rider), objNull];
    if (_rider call EFUNC(common,isPlayer)) then {
        _unit call FUNC(atrt_dismount);
    } else {
        deleteVehicle _rider;
    };
} else {
    private _atrt = _unit getVariable [QGVAR(atrt_riding), objNull];
    if (!isNull _atrt) then {
        _atrt call FUNC(atrt_dismount);
    };
};
