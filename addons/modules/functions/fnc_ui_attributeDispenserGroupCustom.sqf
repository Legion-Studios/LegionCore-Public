#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Initializes the "Custom Dispenser Group" Zeus module attribute.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Control group <CONTROL>
 *
 * Return Value:
 * None
 *
 * Example:
 * _ctrl call ls_modules_fnc_ui_attributeDispenserGroupCustom
 *
 * Public: No
 */

params ["_ctrl"];
private _display = ctrlParent _ctrl;

private _edit = _ctrl controlsGroupCtrl IDC_DISPENSER_GROUP_CUSTOM;

_ctrl ctrlRemoveAllEventHandlers "SetFocus";
if (isNil QGVAR(droidDispenserLastOptions)) then {
    _edit ctrlSetText "[]";
} else {
    private _saved = GVAR(droidDispenserLastOptions) select 1;
    if (_saved == "") then {
        _saved = "[]";
    };

    _edit ctrlSetText _saved;
};
_edit ctrlSetTooltip format ["Parsed Value: %1", parseSimpleArray (ctrlText _edit)];

private _fnc_onKeyUp = {
    params ["_display"];

    private _edit = _display displayCtrl IDC_DISPENSER_GROUP_CUSTOM;
    private _value = ctrlText _edit;
    if (_value == "") exitWith {};

    private _parsedValue = parseSimpleArray _value;

    TRACE_4("Custom group input",_value,count _value,_parsedValue,count str _parsedValue);

    // parseSimpleArray failed to parse string, user input error
    if (_value != "[]" && _parsedValue isEqualTo [] || count str _parsedValue < count _value) then {
        _edit ctrlSetTooltip "Invalid value";
        _edit ctrlSetTextColor [1, 0, 0, 1];
    } else {
        _edit ctrlSetTooltip format ["Parsed Value: %1", _parsedValue];
        _edit ctrlSetTextColor [1, 1, 1, 1];
        _display setVariable [QGVAR(dispenserGroupCustom), _value];
    };
};

_display call _fnc_onKeyUp;
_display displayAddEventHandler ["KeyUp", _fnc_onKeyUp];
