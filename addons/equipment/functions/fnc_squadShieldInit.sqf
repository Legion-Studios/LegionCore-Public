#include "..\script_component.hpp"
/*
 * Authors: DartRuffian
 * Handles the squad shield being initialized.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Shield <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * cursorObject call ls_equipment_fnc_squadShieldInit
 *
 * Public: No
 */

params ["_shield"];
TRACE_1("fnc_squadShieldInit",_shield);

// exitWith does not work properly when run from the event handler scope, so use {} to add an extra layer to work correctly
_shield addEventHandler ["HandleDamage", { call FUNC(squadShieldHandleDamage) }];

// Vanilla action conditions and ACE both define this variable for us, but HEMTT won't know that
#pragma hemtt ignore_variables ["_target", "_caller"];

private _activateStatement = {
    params ["_target"];
    _target animateSource ["deploy_shield", 1];
};
private _activateCondition = { alive _target && _target getHitPointDamage "HitShield" < 1 && (_target animationSourcePhase "deploy_shield") <= 0.5 };

private _deactivateStatement = {
    params ["_target"];
    _target animateSource ["deploy_shield", 0];
};
private _deactivateCondition = { _target animationSourcePhase "deploy_shield" > 0.5 };

private _repairStatement = {
    params ["_target", "_player"];
    [localize "STR_A3_MP_GroundSupport_progressBar_repairing", 5, {
        (_this select 0) params ["_target", "_player"];
        alive _target && { _player call EFUNC(common,isAwake) };
    }, {
        (_this select 0) params ["_target", "_player"];
        _target setHitPointDamage ["HitShield", 0];
        _target setVariable [QGVAR(shieldHealth), nil, true];
        _target setVariable [QEGVAR(common,packedItemClass), QGVAR(squadShield_packed), true];
    }, {}, [_target, _player]] call CBA_fnc_progressBar;
};
private _repairCondition = {
    private _tmp = _player; // Dumb workaround to work with ACE and vanilla actions
    if (isNil "_player") then { _tmp = _caller };

    _target getHitPointDamage "HitShield" >= 1 && {
        [_tmp, QGVAR(repairKit)] call EFUNC(common,hasItem)
    };
};

if (missionNamespace getVariable ["ace_interact_menu", false]) then {
    private _path = ["ACE_MainActions"];
    private _activateAction = [QGVAR(activateShield), LELSTRING(common,activateShield), "", _activateStatement, _activateCondition, {}, [], [], 5] call ace_interact_menu_fnc_createAction;
    private _deactivateAction = [QGVAR(deactivateShield), LELSTRING(common,deactivateShield), "", _deactivateStatement, _deactivateCondition, {}, [], [], 5] call ace_interact_menu_fnc_createAction;
    private _repairAction = [QGVAR(repairShield), LELSTRING(common,repairShield), "\A3\UI_F\data\IGUI\cfg\actions\repair_ca.paa", _repairStatement, _repairCondition, {}, [], [], 5] call ace_interact_menu_fnc_createAction;

    {
        [_shield, 0, _path, _x] call ace_interact_menu_fnc_addActionToObject;
    } forEach [_activateAction, _deactivateAction, _repairAction];
} else {
    _shield addAction [LELSTRING(common,activateShield), _activateStatement, nil, 50, true, true, "", toString _activateCondition, 5];
    _shield addAction [LELSTRING(common,deactivateShield), _deactivateStatement, nil, 50, true, true, "", toString _deactivateCondition, 5];
    _shield addAction [LELSTRING(common,repairShield), _repairStatement, nil, 50, true, true, "", toString _repairCondition, 5];
};

// if (!local _shield) exitWith {};
