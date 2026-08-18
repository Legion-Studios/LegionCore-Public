#include "..\script_component.hpp"
/*
 * Authors: DartRuffian
 * Starts the recharging sequence for a magazine.
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
 * Example:
 * [...] call ls_weapons_fnc_startMagazineRecharge
 *
 * Public: No
 */

params ["_unit", "", "_muzzle", "", "", "_magazine"];
TRACE_3("fnc_startMagazineRecharge",_unit,_muzzle,_magazine);

if (_unit getVariable [QGVAR(magazineRechargePFH), -1] > -1) exitWith {};

(GVAR(rechargeMagazines) getOrDefaultCall [_magazine, {
    private _magazineConfig = configFile >> "CfgMagazines" >> _magazine;
    [getNumber (_magazineConfig >> QGVAR(rechargeRate)), getNumber (_magazineConfig >> "count")];
}, true]) params ["_rechargeRate", "_maxAmmo"];

if (_rechargeRate == 0) exitWith {};

private _pfhID = [{
    params ["_args", "_handle"];
    if (_args select -1) exitWith { _args set [-1, false] }; // Skip first loop

    _args params ["_unit", "_muzzle", "_maxAmmo"];
    (_unit weaponState _muzzle) params ["_weapon", "", "", "_magazine", "_ammo"];
    if (_ammo >= _maxAmmo || _magazine == "" || _weapon == "") exitWith {
        _unit setVariable [QGVAR(magazineRechargePFH), nil];
        _handle call CBA_fnc_removePerFrameHandler;
    };

    _unit setAmmo [_muzzle, _ammo + 1];
}, _rechargeRate, [_unit, _muzzle, _maxAmmo, true]] call CBA_fnc_addPerFrameHandler;
_unit setVariable [QGVAR(magazineRechargePFH), _pfhID];
