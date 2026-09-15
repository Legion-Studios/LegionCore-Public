#include "..\script_component.hpp"
/*
 * Authors: DartRuffian
 * Makes a unit carry an AT-RT.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 1: AT-RT <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [player, _atrt] call ls_vehicles_fnc_atrt_carry
 *
 * Public: No
 */

params ["_unit", "_atrt"];
TRACE_2("fnc_atrt_carry",_unit,_atrt);

_atrt attachTo [_unit, [0, 2, 0.25]];
_atrt setVariable [QGVAR(atrt_isBeingCarried), true, true];
_unit setVariable [QGVAR(atrt_carriedObject), _atrt];

private _dropActionID = [_unit, "DefaultAction", {
    !isNull ((_this select 1) getVariable [QGVAR(atrt_carriedObject), objNull])
}, {
    params ["_player"];
    [_player, _player getVariable [QGVAR(atrt_carriedObject), objNull], true] call FUNC(atrt_drop);
}] call EFUNC(common,addActionEventHandler);

_unit setVariable [QGVAR(atrt_dropActionID), _dropActionID];

[localize "STR_VIV_DROP", ""] call EFUNC(common,showMouseHint);
