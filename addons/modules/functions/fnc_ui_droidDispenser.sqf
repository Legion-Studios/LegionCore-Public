#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Initializes the Droid Dispenser Zeus module display.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Dummy control group <CONTROL>
 *
 * Return Value:
 * None
 *
 * Example:
 * _ctrl call ls_modules_fnc_ui_droidDispenser
 *
 * Public: No
 */

private _logic = GET_CURRENT_TARGET;
if ({ local _x } count (objectCurators _logic) > 0) then {
    _logic hideObject false;
};

params ["_ctrl"];

private _display = ctrlParent _ctrl;
_ctrl ctrlRemoveAllEventHandlers "SetFocus";

// If module has a preset group, just use that
private _configOf = configOf _logic;
if !(getText (_configOf >> QEGVAR(dispenser,group)) == "" && getArray (_configOf >> QEGVAR(dispenser,group)) isEqualTo []) exitWith {
    _display closeDisplay 1;
    [QEGVAR(common,addObjectToCurator), _logic] call CBA_fnc_serverEvent;
    [QGVAR(moduleDroidDispenser), [_logic, [], true]] call CBA_fnc_globalEvent;
};

private _fnc_onUnload = {
    private _logic = GET_CURRENT_TARGET;
    if (_logic getVariable [QGVAR(moduleStarted), false]) exitWith {};
    deleteVehicle _logic;
};

private _fnc_onConfirm = {
    params [["_ctrlButtonOK", controlNull, [controlNull]]];

    private _display = ctrlParent _ctrlButtonOK;
    private _logic = GET_CURRENT_TARGET;
    if (isNull _display || isNull _logic) exitWith {};

    private _group = _display getVariable [QGVAR(dispenserGroup), DISPENSER_GROUP_DEFAULT];
    private _groupCustom = _display getVariable [QGVAR(dispenserGroupCustom), "[]"];


    // Units (_group select 1) is empty if user selects a faction / subcategory and not an actual group
    if ((_group select 1 == "" || _group isEqualTo DISPENSER_GROUP_DEFAULT) && _groupCustom == "[]") exitWith {
        [objNull, "No group selected!"] call BIS_fnc_showCuratorFeedbackMessage;
    };

    GVAR(droidDispenserLastOptions) = [_group, _groupCustom];
    _logic setVariable [QGVAR(dispenserGroup), _group, true];
    _logic setVariable [QGVAR(dispenserGroupCustom), _groupCustom, true];
    _logic setVariable [QGVAR(moduleStarted), true];
    [QEGVAR(common,addObjectToCurator), _logic] call CBA_fnc_serverEvent;
    [QGVAR(moduleDroidDispenser), [_logic, [], true]] call CBA_fnc_globalEvent;
};

_ctrl ctrlAddEventHandler ["ButtonClick", _fnc_onConfirm];
_display displayAddEventHandler ["Unload", _fnc_onUnload];
