#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Initializes the Droid Dispenser Zeus module display.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Dummy control group <CONTROL>
 *
 * Return Value:
 * None
 *
 * Example:
 * _ctrl call ls_modules_fnc_ui_droidDispenser
 *
 * Public: No
 */


params ["_ctrl"];

_ctrl ctrlRemoveAllEventHandlers "SetFocus";

private _fnc_onConfirm = {
    params [["_ctrlButtonOK", controlNull, [controlNull]]];

    private _display = ctrlParent _ctrlButtonOK;
    private _dispenser = GET_CURRENT_TARGET;
    if (isNull _display || isNull _dispenser) exitWith {};

    private _emptyInput = ["", "[]"];
    private _group = (_display getVariable [QGVAR(dispenserGroup), DISPENSER_GROUP_DEFAULT]) select 1;
    private _units = _display getVariable [QGVAR(dispenserGroupCustom), "[]"];

    // No message because user might be changing some other property of the dispenser (damage, fuel, etc.)
    if (_units in _emptyInput) then {
        _units = _group;
    };
    if (_units in _emptyInput) exitWith {};

    _units = parseSimpleArray _units;

    private _isActive = _dispenser getVariable [QEGVAR(dispenser,active), false];

    // activate function handles setting spawn limit
    private _spawnLimit = _display getVariable [QGVAR(spawnLimit), SPAWN_LIMIT_DEFAULT];
    if (_isActive && { _spawnLimit != (_dispenser getVariable [QEGVAR(dispenser,spawnLimit), SPAWN_LIMIT_DEFAULT]) }) then {
        _dispenser setVariable [QEGVAR(dispenser,spawnLimit), _spawnLimit];
    };

    private _currentUnits = _dispenser getVariable [QEGVAR(dispenser,unitTypes), []];
    if (_units isNotEqualTo _currentUnits) then {
        if (_isActive) then {
            [_dispenser, _units] call EFUNC(dispenser,setSpawnGroup); // Resets spawn count
        } else {
            [_dispenser, _units, _spawnLimit] call EFUNC(dispenser,activate);
        };
    };
};

_ctrl ctrlAddEventHandler ["ButtonClick", _fnc_onConfirm];
