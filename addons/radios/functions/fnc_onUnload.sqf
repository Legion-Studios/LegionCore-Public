#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Used for the onUnload property for TFAR radio dialogs.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: UI Class <STRING>
 * 1: Is long range radio (optional, default: true) <BOOL>
 *
 * Return Value:
 * None
 *
 * Example:
 * ["ls_radio_CloneLR"] call ls_radio_fnc_onUnload;
 *
 * Public: No
 */

params ["_display", ["_isLR", true]];
TRACE_1("fnc_onUnload",_dialog);

if (_isLR) then {
    ["OnRadioOpen", ls_player, [ls_player, TF_lr_dialog_radio, true, _display, false]] call TFAR_fnc_fireEventHandlers;
} else {
    ["OnRadioOpen", [ls_player, TF_sw_dialog_radio, false, _display, true]] call TFAR_fnc_fireEventHandlers;
};
nil;
