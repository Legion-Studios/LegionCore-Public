#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Initializes the Spawn Limit Zeus module attribute.
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
 * _ctrl call ls_modules_fnc_ui_attributeSpawnLimit
 *
 * Public: No
 */

params ["_ctrl"];
private _display = ctrlParent _ctrl;

_ctrl ctrlRemoveAllEventHandlers "SetFocus";

// Specific onLoad stuff
private _edit = _ctrl controlsGroupCtrl IDC_SPAWNLIMIT_EDIT;

private _object = GET_CURRENT_TARGET;
private _value = if (_object isKindOf "Module_F") then {
    // Player is placing a module
    GVAR(dispenserLastOptions) param [2, SPAWN_LIMIT_DEFAULT];
} else {
    // Player is editing a placed dispenser
    _object getVariable [QEGVAR(dispenser,spawnLimit), SPAWN_LIMIT_DEFAULT];
};
_edit ctrlSetText str _value;

private _fnc_onKeyUp = {
    params ["_display"];

    private _edit = _display displayCtrl IDC_SPAWNLIMIT_EDIT;
    private _spawnLimit = parseNumber (ctrlText _edit);

    // Handle invalid number (non-numerical input and negative values other than -1)
    if (_spawnLimit <= 0 && _spawnLimit != -1) then {
        _edit ctrlSetTooltip LELSTRING(common,invalidValue);
        _edit ctrlSetTextColor [1, 0, 0, 1];
    } else {
        _edit ctrlSetTooltip "";
        _edit ctrlSetTextColor [1, 1, 1, 1];
        _display setVariable [QGVAR(spawnLimit), _spawnLimit];
    };
};

_display call _fnc_onKeyUp;
_display displayAddEventHandler ["KeyUp", _fnc_onKeyUp];
