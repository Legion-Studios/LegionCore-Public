#include "..\script_component.hpp"
/*
 * Authors: Root, y0014984
 * Modified by: DartRuffian
 * A modified version of ae3_interaction_fnc_initLaptop with some aspects removed to fit a static computer terminal, as well as cleaning up messy code.
 *
 * Arguments:
 * 0: Terminal <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * cursorObject call ls_compat_ae3_fnc_initTerminal
 *
 * Public: No
 */

params ["_object"];
TRACE_1("fnc_initTerminal",_object);

if (!hasInterface) exitWith {};

if (AE3_DebugMode) then {
    INFO_1("========== initTerminal CALLED on %1 ==========",_object);
    INFO_1("Call stack: %1",diag_stacktrace);
};

private _useAction = ["AE3_UseTerminalAction", localize "STR_AE3_ArmaOS_Config_UseDisplayName", "", {
    params ["_target", "_player"];
    _target setVariable ["AE3_computer_mutex", _player, true];
    _target call AE3_armaos_fnc_terminal_init;
}, {
    params ["_target"];
    (alive _target) && (_target getVariable ["AE3_power_powerState", -1] == 1) &&
    (isNull (_target getVariable ["AE3_computer_mutex", objNull]))
}] call ace_interact_menu_fnc_createAction;
[_object, 0, ["ACE_MainActions"], _useAction] call ace_interact_menu_fnc_addActionToObject;
