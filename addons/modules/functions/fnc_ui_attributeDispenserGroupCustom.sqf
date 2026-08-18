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

private _edit = _ctrl controlsGroupCtrl IDC_DISPENSER_GROUP_CUSTOM_EDIT;

_ctrl ctrlRemoveAllEventHandlers "SetFocus";

private _object = GET_CURRENT_TARGET;

private _value = if (_object isKindOf "Module_F") then {
    // Player is placing a module
    GVAR(dispenserLastOptions) param [1, "[]"];
} else {
    // Player is editing a placed dispenser
    str (_object getVariable [QEGVAR(dispenser,unitTypes), []]);
};

_edit ctrlSetText _value;
_edit ctrlSetTooltip format ["Parsed Value: %1", parseSimpleArray _value];

private _fnc_onKeyUp = {
    params ["_display"];

    private _edit = _display displayCtrl IDC_DISPENSER_GROUP_CUSTOM_EDIT;
    private _value = ctrlText _edit;
    if (_value == "") exitWith {};

    private _parsedValue = parseSimpleArray _value;
    TRACE_4("Custom group input",_value,count _value,_parsedValue,count str _parsedValue);

    // parseSimpleArray failed to parse string, user input error
    if (_value != "[]" && _parsedValue isEqualTo [] || count str _parsedValue < count _value) then {
        _edit ctrlSetTooltip LELSTRING(common,invalidValue);
        _edit ctrlSetTextColor [1, 0, 0, 1];
    } else {
        _edit ctrlSetTooltip format ["Parsed Value: %1", _parsedValue];
        _edit ctrlSetTextColor [1, 1, 1, 1];
        _display setVariable [QGVAR(dispenserGroupCustom), _value];
    };
};

_display call _fnc_onKeyUp;
_display displayAddEventHandler ["KeyUp", _fnc_onKeyUp];
