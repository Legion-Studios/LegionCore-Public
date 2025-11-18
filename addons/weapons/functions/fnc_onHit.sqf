#include "..\script_component.hpp"
/*
 * Author: Crimzonkat, DartRuffian
 * Handle special LS ammo types.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * See https://community.bistudio.com/wiki/Arma_3:_Event_Handlers#HitPart
 *
 * Return Value:
 * None
 *
 * Public: No
 */

params ["_target", "_shooter", "_projectile", "", "", "_selection", "", "", "", "", "", "_instigator"];
TRACE_5("fnc_onHit",_target,_shooter,_projectile,_selection,_instigator);

private _config = configOf _projectile;
private _ammoType = getNumber (_config >> QGVAR(ammoType));
if (!alive _target || _ammoType == AMMOTYPE_NONE) exitWith {};
deleteVehicle _projectile;

// If using an ion round on a vehicle, exit early and just call that
if (_ammoType == AMMOTYPE_ION && !(_target isKindOf "CAManBase")) exitWith {
    [_target, _config, _shooter, _instigator, false] call FUNC(onHitIon);
};

_target call EFUNC(common,getBiology) params ["_type", "", "_isOrganic"];
if (_type == "hologram") exitWith {};

switch (_ammoType) do {
    case AMMOTYPE_STUN;
    case AMMOTYPE_ION: {
        if (_isOrganic && _ammoType == AMMOTYPE_STUN) exitWith {
            [_target, _config] call FUNC(onHitStun);
        };
        if (!_isOrganic && _ammoType == AMMOTYPE_ION) exitWith {
            [_target, _config, _shooter, _instigator, true] call FUNC(onHitIon);
        };
    };
    case AMMOTYPE_RAGDOLL: {
        [_target, nil, selectRandom _selection] call EFUNC(common,ragdoll);
    };
    // TODO: To be replaced with Dart's flamethrower system, see #474
    // case AMMOTYPE_FIRE: {
    //     if !("ace_fire" call EFUNC(common,isModLoaded)) exitWith {};
    //     private _intensity = (getNumber (_config >> QGVAR(fireIntensity))) min 1;
    //     ["ace_fire_burn", [_target, _intensity, _shooter], _target] call CBA_fnc_targetEvent;
    // };
};
