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
    private _vehicle = GET_CURRENT_TARGET;
    if (isNull _display || isNull _vehicle) exitWith {};

    private _group = (_display getVariable [QGVAR(dispenserGroup), DISPENSER_GROUP_DEFAULT]) select 1;
    private _units = _display getVariable [QGVAR(dispenserGroupCustom), "[]"];

    // No message because user might be setting something else
    if (_units == "[]") then {
        _units = _group;
    };
    if (_units in ["", "[]"]) exitWith {};
    _units = parseSimpleArray _units;

    if (_vehicle getVariable [QEGVAR(dispenser,active), false]) then {
        [_vehicle, _units] call EFUNC(dispenser,setSpawnGroup);
    } else {
        [_vehicle, _units] call EFUNC(dispenser,activate);
    };
};

_ctrl ctrlAddEventHandler ["ButtonClick", _fnc_onConfirm];
