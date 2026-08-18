#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Initializes the "Mount AT-RT" Zeus module display.
 *
 * Arguments:
 * 0: Dummy control group <CONTROL>
 *
 * Return Value:
 * None
 *
 * Example:
 * _ctrl call ls_modules_fnc_ui_mountATRT
 *
 * Public: No
 */

params ["_ctrl"];
private _display = ctrlParent _ctrl;

_ctrl ctrlRemoveAllEventHandlers "SetFocus";

private _logic = GET_CURRENT_TARGET;
private _unit = attachedTo _logic;

private _exit = true;
switch (false) do {
    case (!isNull _unit): {
        [LSTRING(nothingSelected), _logic, _display] call FUNC(errorAndClose);
    };
    case (IS_UNIT_EXCLUDE_ATRT(_unit)): {
        [LSTRING(onlyInfantry), _logic, _display] call FUNC(errorAndClose);
    };
    case (_unit call EFUNC(common,isAwake)): {
        [LSTRING(onlyConscious), _logic, _display] call FUNC(errorAndClose);
    };
    case (!isPlayer _unit): {
        [LSTRING(noPlayer), _logic, _display] call FUNC(errorAndClose);
    };
    case (isNull (_unit getVariable [QEGVAR(vehicles,atrt_riding), objNull])): {
        [LSTRING(alreadyRidingATRT), _logic, _display] call FUNC(errorAndClose);
    };
    default {
        _exit = false;
    };
};

if (_exit) exitWith {};

private _fnc_onUnload = {
    deleteVehicle GET_CURRENT_TARGET;
};

private _fnc_onConfirm = {
    params [["_ctrlButtonOK", controlNull, [controlNull]]];

    private _display = ctrlParent _ctrlButtonOK;
    private _logic = GET_CURRENT_TARGET;
    private _unit = attachedTo _logic;

    if (isNull _logic || isNull _display || !alive _unit) exitWith {};

    private _instant = [false, true] select (lbCurSel (_display displayCtrl IDC_MOUNT_ATRT_INSTANT_TOOLBOX));
    _unit setVariable [QGVAR(mountInstantly), _instant, true];

    [_logic, [], true] call FUNC(moduleMountATRT);
};

_display displayAddEventHandler ["Unload", _fnc_onUnload];
_ctrl ctrlAddEventHandler ["ButtonClick", _fnc_onConfirm];
