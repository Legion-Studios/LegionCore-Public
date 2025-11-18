#include "..\script_component.hpp"
/*
 * Author: Crimzonkat
 * Rewritten by DartRuffian
 * Equips a player's lance to their vehicle.
 *
 * Please provide proper credits to those who participate in development.
 * This module was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 * 1: Unit equipping the weapon <OBJECT>
 * 2: attachTo offset for object (optional, default: [0, 0, 0]) <ARRAY>
 * 3: Unit animation to play (optional, default: "") <STRING>
 *
 * Return Value:
 * The created lance object <OBJECT>
 *
 * Example:
 * [_vehicle, driver _vehicle, [0.42, 0.3, -0.24], "ls_driver_105kLancerAttack_state"] call ls_vehicles_fnc_equipLance;
 *  - Example for the 105-K Lancer Bike
 *
 * Public: Yes
 */

params [
    ["_vehicle", objNull, [objNull]],
    ["_unit", objNull, [objNull]],
    ["_offset", [0, 0, 0], [[]], 3],
    ["_animation", "", [""]]
];
TRACE_4("fnc_equipLance",_vehicle,_unit,_offset,_animation);

if (!alive _vehicle or {!alive _unit}) exitWith {};

if (_animation != "") then {
    _unit switchMove _animation;
};

// Get static version of weapon, or assume lance if not set
private _weapon = handgunWeapon _unit;
private _static = getText (configFile >> "CfgWeapons" >> QEGVAR(weapons,static));
if (_static == "") then {
    _static = "ls_weapon_verpinePowerLance_static";
};

_unit removeWeapon _weapon;

private _lance = createVehicle [_static, [0, 0, 0], [], 0, "CAN_COLLIDE"];
_lance attachTo [_vehicle, _offset];

private _vectorDirAndUp = [[0, 1, 0], [0, 0, 1]];
_vectorDirAndUp = [_vectorDirAndUp, 168, -3, 0] call BIS_fnc_transformVectorDirAndUp;
_lance setVectorDirAndUp _vectorDirAndUp;

_vehicle setVariable [QGVAR(equippedUnit), _unit, true];
_vehicle setVariable [QGVAR(equippedWeapon), _weapon, true];
_vehicle setVariable [QGVAR(equippedLance), _lance, true];

if !(_vehicle getVariable [QGVAR(equippedEH_init), false]) then {
    _vehicle setVariable [QGVAR(equippedEH_init), true, true];

    _vehicle addEventHandler ["GetOut", {
        params ["_vehicle", "", "_unit"];
        private _equippedUnit = _vehicle getVariable [QGVAR(equippedUnit), objNull];

        if (_unit isEqualTo _equippedUnit) then {
            [_vehicle, _unit] call FUNC(unequipLance);
            _vehicle setVariable [QGVAR(equippedUnit), nil, true];
        };
    }];

    _vehicle addEventHandler ["Killed", {
        params ["_vehicle"];
        private _unit = _vehicle getVariable [QGVAR(equippedUnit), objNull];
        [_vehicle, _unit] call FUNC(unequipLance);
    }];
};

if !(_unit getVariable [QGVAR(equippedEH_init), false]) then {
    _unit setVariable [QGVAR(equippedEH_init), true, true];

    _unit addEventHandler ["Killed", {
        params ["_unit"];
        private _vehicle = objectParent _unit;
        if (_vehicle getVariable [QGVAR(equippedWeapon), ""] != "") then {
            [_vehicle, _unit] call FUNC(unequipLance);
        };
    }];
};

[QGVAR(lanceEquipped), [_vehicle, _unit, _weapon, _lance]] call CBA_fnc_globalEvent;
_lance;
