#include "..\script_component.hpp"
/*
 * Author: Crimzonkat
 * Rewritten by DartRuffian
 * Unequips a player's lance to their vehicle.
 *
 * Please provide proper credits to those who participate in development.
 * This module was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 * 1: Unit (optional, default: objNull) <OBJECT>
 *    - If unit is passed, then unit will receive the stored weapon and/or play animation
 * 2: Driver animation to play (optional, default: "") <STRING>
 *
 * Return Value:
 * None
 *
 * Example:
 * [_vehicle, driver _vehicle] call ls_vehicles_fnc_equipLance;
 *
 * Public: Yes
 */

params [
    ["_vehicle", objNull, [objNull]],
    ["_unit", objNull, [objNull]],
    ["_animation", "", [""]]
];
TRACE_3("fnc_unequipLance",_vehicle,_unit,_animation);

if (isNull _vehicle) exitWith {};

private _weapon = _vehicle getVariable [QGVAR(equippedWeapon), ""];
private _lance = _vehicle getVariable [QGVAR(equippedLance), objNull];

deleteVehicle _lance;

if (!isNull _unit) then {
    // CBA_fnc_addWeapon creates ground holder if weapon can't be added
    [_unit, _weapon, true] call CBA_fnc_addWeapon;

    // Ideally "" would reset to animation for seat _unit is in
    // but I haven't found a good way to do that
    if (_animation != "") then {
        _unit switchMove _animation;
    };
};

_vehicle setVariable [QGVAR(equippedWeapon), nil, true];
_vehicle setVariable [QGVAR(equippedLance), nil, true];

[QGVAR(lanceUnequipped), [_vehicle, _unit, _weapon]] call CBA_fnc_globalEvent;
nil;
