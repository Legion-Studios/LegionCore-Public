#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Initializes the "Rally Point" Zeus module attribute.
 *
 * Arguments:
 * 0: Rally point control group <CONTROL>
 *
 * Return Value:
 * None
 *
 * Example:
 * _control call ls_modules_fnc_ui_attributeRallyPoint
 *
 * Public: No
 */

params ["_ctrl", ["_defaultRP", ZEN_POINT_NONE]];
TRACE_1("fnc_ui_attributeRallyPoint",_ctrl);

_ctrl ctrlRemoveAllEventHandlers "SetFocus";

private _object = GET_CURRENT_TARGET;
private _combo = _ctrl controlsGroupCtrl IDC_VALUE;

if !("zen_position_logics" call EFUNC(common,isModLoaded)) exitWith {
    _combo lbAdd LLSTRING(requires_zen);
    _combo ctrlEnable false;
};

// -2 = nearest
[_combo, "zen_modules_moduleCreateRP", _defaultRP, true, _object] call zen_position_logics_fnc_initList;

private _fnc_onLBSelChanged = {
    params ["_ctrl", "_lbCurSel"];
    private _display = ctrlParent _ctrl;
    _display setVariable [QGVAR(rallyPoint), _ctrl lbValue _lbCurSel];
};

_combo call _fnc_onLBSelChanged;
_combo ctrlAddEventHandler ["LBSelChanged", _fnc_onLBSelChanged];
