#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Initializes the "Breach Door" Zeus module display.
 *
 * Arguments:
 * 0: Dummy control group <CONTROL>
 *
 * Return Value:
 * None
 *
 * Example:
 * _ctrl call ls_modules_fnc_ui_breahDoor
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
    case (_unit isKindOf "CAManBase"): {
        [LSTRING(onlyInfantry), _logic, _display] call FUNC(errorAndClose);
    };
    case (alive _unit): {
        [LSTRING(onlyAlive), _logic, _display] call FUNC(errorAndClose);
    };
    case (_unit call EFUNC(common,isAwake)): {
        [LSTRING(onlyConscious), _logic, _display] call FUNC(errorAndClose);
    };
    case (!isPlayer _unit): {
        [LSTRING(noPlayer), _logic, _display] call FUNC(errorAndClose);
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

    private _radius = _display getVariable [QGVAR(radius), RADIUS_DEFAULT];
    _logic setVariable [QGVAR(radius), _radius, true];

    private _lockState = lbCurSel (_display displayCtrl IDC_DOORLOCK_TOOLBOX);
    _logic setVariable [QGVAR(lockState), _lockState, true];

    [QGVAR(moduleBreachDoor), [_logic, [_unit], true], _unit] call CBA_fnc_targetEvent;
};

_display displayAddEventHandler ["Unload", _fnc_onUnload];
_ctrl ctrlAddEventHandler ["ButtonClick", _fnc_onConfirm];
