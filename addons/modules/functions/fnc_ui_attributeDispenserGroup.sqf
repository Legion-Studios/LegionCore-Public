#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Initializes the "Dispenser Group" Zeus module attribute.
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
 * _ctrl call ls_modules_fnc_ui_attributeDispenserGroup
 *
 * Public: No
 */

params ["_ctrl"];

_ctrl ctrlRemoveAllEventHandlers "SetFocus";

_ctrl call FUNC(populateDispenserGroups);
if (!isNil QGVAR(droidDispenserLastOptions)) then {
    private _path = GVAR(droidDispenserLastOptions) select 0 select 0;
    _ctrl tvSetCurSel _path;
};

private _fnc_onTreeSelChanged = {
    params ["_ctrl", "_selectionPath"];
    if (isNil "_ctrl" || isNil "_selectionPath") exitWith {};

    private _display = ctrlParent _ctrl;
    _display setVariable [QGVAR(dispenserGroup), [_selectionPath, _ctrl tvData _selectionPath]];
};

_ctrl call _fnc_onTreeSelChanged;
_ctrl ctrlAddEventHandler ["TreeSelChanged", _fnc_onTreeSelChanged];
