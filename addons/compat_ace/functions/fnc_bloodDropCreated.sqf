#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Updates the blood objects created by bleeding units based on the type of unit.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: The blood drop object <OBJECT>
 * 1: The bleeding unit <OBJECT>
 *
 * Return Value:
 * The new "blood" drop object, or the original if no change <OBJECT>
 *
 * Example:
 * [_bloodDrop, _unit] call ls_compat_ace_fnc_bloodDropCreated;
 *
 * Public: No
 */

params ["_bloodDrop", "_source"];
TRACE_2("fnc_bloodDropCreated",_bloodDrop,_source);

if !(GVAR(customBloodDropsEnabled)) exitWith {};

// Most medical functions require a local unit
if (!local _source) exitWith {
    [QGVAR(bloodDropCreated), _this, _source] call CBA_fnc_targetEvent;
};

_source call EFUNC(common,getBiology) params ["", "", "", "_bloodModels"];

// Unit type specifies it does not bleed, so delete the drop and return null
if (_bloodModels isEqualTo []) exitWith {
    deleteVehicle _bloodDrop;
    objNull;
};

// Source: https://github.com/acemod/ACE3/blob/master/addons/medical_blood/functions/fnc_onBleeding.sqf
private _bloodLoss = (_source call ace_medical_fnc_getBloodLoss) * 2.5;
private _model = _bloodModels select floor (_bloodLoss min (count _bloodModels - 1));

// Remove old blood drop object from ace's cleanup
{
    _x params ["", "_currentBloodDrop"];
    if (_bloodDrop isEqualTo _currentBloodDrop) then {
        ace_medical_blood_bloodDrops deleteAt _forEachIndex;
        deleteVehicle _bloodDrop;
    };
} forEachReversed ace_medical_blood_bloodDrops;

private _position = getPos _source;
_position = _position vectorAdd [random 0.4 - 0.2, random 0.4 - 0.2, 0];
_position set [2, 0];

private _newDrop = createSimpleObject [_model, [0, 0, 0]];
_newDrop setDir random 360;
_newDrop setPos _position;

ace_medical_blood_bloodDrops pushBack [CBA_missionTime + ace_medical_blood_bloodLifetime, _newDrop, _source];

_newDrop;
