#include "..\script_component.hpp"
/*
 * Author: commy2, DartRuffian
 * Makes a unit drop a specific weapon. Does not work with units within vehicles.
 * Inspriation was taken from CBA, ACE, and Clock's dropWeapon functions.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 1: Weapon (optional, default: current weapon) <STRING>
 *
 * Return Value:
 * Weapon holder <OBJECT>
 *
 * Example:
 * ls_player call ls_common_fnc_throwWeapon;
 *
 * Public: Yes
 */

#define OFFSET_LATERAL 0.59
#define THROW_ANGLE 63.43
#define THROW_VELOCITY 1.5
#define THROW_TORQUE 0.2

params [
    ["_unit", objNull, [objNull]],
    ["_weapon", "", [""]]
];
TRACE_2("fnc_throwWeapon",_unit,_weapon);

if (_weapon == "") then {
    _weapon = currentWeapon _unit;
};

if (!alive _unit || _weapon == "" || !isNull objectParent _unit) exitWith {objNull};

// weaponAccessories would be cleaner, but does not include magazines
private _weaponItems = (weaponsItems _unit select {_x#0 == _weapon})#0;

private _holder = createVehicle ["WeaponHolderSimulated", [0, 0, 0], [], 0, "CAN_COLLIDE"];
_holder addWeaponWithAttachmentsCargoGlobal [_weaponItems, 1]; // Adds weapon and its items
_unit removeWeapon _weapon;

private _vDir = _unit weaponDirection _weapon;
private _vLat = vectorNormalized (_vDir vectorCrossProduct [0, 0, 1]);
private _vUp = _vLat vectorCrossProduct _vDir;

private _position = _unit modelToWorldWorld (_unit selectionPosition "RightHand") vectorAdd (_vLat vectorMultiply OFFSET_LATERAL);
private _velocity = vectorNormalized (_vDir vectorAdd (_vUp vectorMultiply tan THROW_ANGLE)) vectorMultiply THROW_VELOCITY vectorAdd velocity _unit;

_holder setPosWorld _position;
_holder setVectorDirAndUp [_vUp, _vLat];
_holder setVelocity _velocity;
_holder addTorque ([] call CBA_fnc_randomVector3D vectorMultiply THROW_TORQUE);

_holder;
