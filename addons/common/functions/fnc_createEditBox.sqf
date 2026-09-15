#include "..\script_component.hpp"
/*
 * Authors: DartRuffian
 * Creates an edit box for the player to add text to.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Title <STRING>
 * 1: Default text
 * 2: OK callback <CODE>
 * 3: Cancel callback <CODE>
 * 4: Parameters to pass to callbacks <ANY>
 *    - Passed as [_edit, _parameters]
 *
 * Return Value:
 * Display <DISPLAY>
 *
 * Example:
 * ["example", "placeholder", { systemChat "ok" }] call ls_common_fnc_createEditBox
 *
 * Public: No
 */

params [
    ["_title", ""],
    ["_defaultText", ""],
    ["_okCode", {}],
    ["_cancelCode", {}],
    ["_params", []]
];
TRACE_5("fnc_createEditBox",_title,_defaultText,_okCode,_cancelCode,_params);

// Another menu is already open
if (dialog) exitWith { displayNull };

private _display = createDialog [QGVAR(RscEditBox)];
(_display displayCtrl 100) ctrlSetText _title;
(_display displayCtrl 101) ctrlSetText _defaultText;

_display setVariable [QGVAR(params), _params];
_display setVariable [QGVAR(okCode), _okCode];
_display setVariable [QGVAR(cancelCode), _cancelCode];

private _ctrlButtonOk = _display displayCtrl 103;
_ctrlButtonOk ctrlAddEventHandler ["ButtonClick", {
    params ["_ctrl"];
    private _display = ctrlParent _ctrl;
    private _params = [_display displayCtrl 101];
    _params pushBack (_display getVariable [QGVAR(params), []]);

    private _callback = _display getVariable [QGVAR(okCode), {}];
    _params call _callback;
    closeDialog 1;
    false;
}];

private _ctrlButtonCancel = _display displayCtrl 102;
_ctrlButtonCancel ctrlAddEventHandler ["ButtonClick", {
    params ["_ctrl"];
    private _display = ctrlParent _ctrl;
    private _params = [_display displayCtrl 101];
    _params pushBack (_display getVariable [QGVAR(params), []]);

    private _callback = _display getVariable [QGVAR(cancelCode), {}];
    _params call _callback;
    closeDialog 2;
    false;
}];

_display;
