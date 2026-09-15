#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Used for the onLoad property for TFAR radio displays.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Display <DISPLAY>
 * 1: Radio "type", i.e. display class without prefix <STRING>
 *
 * Return Value:
 * None
 *
 * Example:
 * [_display, "CloneLR"] call ls_radio_fnc_onLoad;
 *
 * Public: No
 */

params ["_display", "_type"];
TRACE_2("fnc_onLoad",_display,_type);

private _texture = format [QPATHTOF(data\ui\%1), _type + "_night_ca.paa"];
if (sunOrMoon < 0.2 and {fileExists _texture}) then {
    private _ctrl = _display displayCtrl TFAR_IDC_BACKGROUND;
    _ctrl ctrlSetText _texture;
    _ctrl ctrlCommit 0;
};
nil;
