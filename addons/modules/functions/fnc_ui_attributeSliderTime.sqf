#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Initializes the SliderTime Zeus module attribute.
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
 * _ctrl call ls_modules_fnc_ui_attributeSliderTime
 *
 * Public: No
 */

params ["_ctrl"];
TRACE_1("fnc_ui_attributeSliderTime",_ctrl);
private _ctrlGroup = ctrlParentControlsGroup _ctrl;

_ctrl ctrlRemoveAllEventHandlers "SetFocus";

private _slider = _ctrl controlsGroupCtrl IDC_VALUE;
private _fnc_onSliderPosChanged = {
    params ["_ctrlSlider", "_sliderPos"];
    private _ctrlGroup = ctrlParentControlsGroup _ctrlSlider;
    private _value = _sliderPos * (sliderSpeed _ctrlSlider select 1);
    private _valueHour = floor (_value / 3600);
    private _valueMinute = floor ((_value / 60) % 60);
    private _valueSecond = floor (_value % 60);

    private "_ctrl";
    {
        _x params ["_idc", "_value"];
        _value = if (_value < 10) then { "0" + str _value } else { str _value };
        _ctrl = _ctrlGroup controlsGroupCtrl _idc;
        _ctrl ctrlSetText _value;
    } forEach [
        [IDC_SLIDERTIME_HOUR, _valueHour],
        [IDC_SLIDERTIME_MINUTE, _valueMinute],
        [IDC_SLIDERTIME_SECOND, _valueSecond]
    ];
};

_ctrlGroup setVariable [QGVAR(sliderTime_onSliderPosChanged), _fnc_onSliderPosChanged];

// Runs when user stops editing the edit boxes
private _fnc_onKillFocus = {
    params ["_ctrl"];
    private _ctrlGroup = ctrlParentControlsGroup _ctrl;
    private _ctrlSlider = _ctrlGroup controlsGroupCtrl IDC_VALUE;
    private _ctrlHour = _ctrlGroup controlsGroupCtrl IDC_SLIDERTIME_HOUR;
    private _ctrlMinute = _ctrlGroup controlsGroupCtrl IDC_SLIDERTIME_MINUTE;
    private _ctrlSecond = _ctrlGroup controlsGroupCtrl IDC_SLIDERTIME_SECOND;

    private _value = (round (parseNumber ctrlText _ctrlHour) + round (parseNumber ctrlText _ctrlMinute) / 60 + round (parseNumber ctrlText _ctrlSecond) / 3600) * 3600;
    _ctrlSlider sliderSetPosition (_value / (sliderSpeed _ctrlSlider select 1));
    // Needs to manually call the slider's sliderPosChanged callback
    [_ctrlSlider, sliderPosition _ctrlSlider] call (_ctrlGroup getVariable QGVAR(sliderTime_onSliderPosChanged));
};

// Call it once manually to ensure everything's set correctly
[_slider, sliderPosition _slider] call _fnc_onSliderPosChanged;
_slider ctrlAddEventHandler ["SliderPosChanged", _fnc_onSliderPosChanged];

private "_ctrl";
{
    _ctrl = _ctrlGroup controlsGroupCtrl _x;
    _ctrl ctrlAddEventHandler ["KillFocus", _fnc_onKillFocus];
} forEach [IDC_SLIDERTIME_HOUR, IDC_SLIDERTIME_MINUTE, IDC_SLIDERTIME_SECOND];
