#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Simplified version of CBA's Weapon Events system, just to play a sound / gesture after firing.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * See https://community.bistudio.com/wiki/Arma_3:_Event_Handlers#Fired
 *
 * Return Value:
 * None
 *
 * Public: No
 */

params ["_unit", "_weapon", "_muzzle"];

private _config = configFile >> "CfgWeapons" >> _weapon >> "ls_WeaponEvents";

if (isNull _config) exitWith {};

private _isEmpty = _unit ammo _weapon == 0;
private _onEmpty = getNumber (_config >> "onEmpty") == 1;

private _fnc_soundSource = {
    private _soundSourceName = format [QGVAR(soundSource_%1), _soundLocation];
    private _soundSource = _unit getVariable [_soundSourceName, objNull];

    if (isNull _soundSource) then {
        _soundSource = "#particlesource" createVehicleLocal [0, 0, 0];
    };

    if !(_soundSource in attachedObjects _unit) then {
        _soundSource attachTo [_unit, [0, 0, 0], _soundLocation];
        _unit setVariable [_soundSourceName, _soundSource];
    };

    _soundSource
};

if (_isEmpty) then {
    private _sound = getText (_config >> "soundEmpty");
    private _soundLocation = getText (_config >> "soundLocationEmpty");

    if (_sound != "") then {
        (call _fnc_soundSource) say3D _sound;
    };
};

if (!_isEmpty || _onEmpty) then {
    private _handAction = getText (_config >> "handAction");
    private _sound = getText (_config >> "sound");
    private _soundLocation = getText (_config >> "soundLocation");

    [{
        params ["_unit", "_handAction", "_sound", "_soundSource"];

        if (local _unit) then {
            _unit playAction _handAction;
        };

        if (_sound != "") then {
            _soundSource say3D _sound;
        };
    }, [_unit, _handAction, _sound, call _fnc_soundSource], getNumber (_config >> "delay")] call CBA_fnc_waitAndExecute;
};
