#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Initializes the Radius Zeus module attribute.
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
 * _ctrl call ls_modules_fnc_ui_attributeRadius
 *
 * Public: No
 */

params ["_ctrl"];
private _display = ctrlParent _ctrl;

_ctrl ctrlRemoveAllEventHandlers "SetFocus";

private _slider = _ctrl controlsGroupCtrl IDC_RADIUS_SLIDER;
_slider sliderSetPosition RADIUS_DEFAULT;
_slider sliderSetSpeed [10, 0, 1];

private _fnc_onSliderPosChanged = {
    params ["_ctrl", "_value"];

    private _display = ctrlParent _ctrl;
    private _edit = _display displayCtrl IDC_RADIUS_EDIT;
    _edit ctrlSetText str _value;

    if (_value <= 0) then {
        _edit ctrlSetTooltip LELSTRING(common,invalidValue);
        _edit ctrlSetTextColor [1, 0, 0, 1];
    } else {
        _edit ctrlSetTooltip "";
        _edit ctrlSetTextColor [1, 1, 1, 1];
        _display setVariable [QGVAR(radius), _value];
    };
};

private _fnc_onKeyUp = {
    params ["_display"];

    private _edit = _display displayCtrl IDC_RADIUS_EDIT;
    private _radius = parseNumber (ctrlText _edit);

    if (_radius <= 0) then {
        _edit ctrlSetTooltip LELSTRING(common,invalidValue);
        _edit ctrlSetTextColor [1, 0, 0, 1];
    } else {
        _edit ctrlSetTooltip "";
        _edit ctrlSetTextColor [1, 1, 1, 1];
        private _slider = _display displayCtrl IDC_RADIUS_SLIDER;
        _slider sliderSetPosition _radius;
        _display setVariable [QGVAR(radius), _radius];
    };
};

[_slider, sliderPosition _slider] call _fnc_onSliderPosChanged;
_slider ctrlAddEventHandler ["SliderPosChanged", _fnc_onSliderPosChanged];

_display displayAddEventHandler ["KeyUp", _fnc_onKeyUp];
