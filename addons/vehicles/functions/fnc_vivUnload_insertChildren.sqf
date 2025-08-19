#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Adds child actions for loading specific vehicles with viv.
 * Only compatible with ACE's interaction framework.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * See https://ace3.acemod.org/wiki/framework/interactionmenu-framework
 *
 * Return Value:
 * Array of child actions <ARRAY>
 *
 * Example:
 * _vehicle call ls_vehicles_fnc_vivLoad_insertChildren;
 *
 * Public: No
 */

params ["_target"];

private _actions = [];

{
    private _config = configOf _x;
    private _name = getText (_config >> "displayName");
    private _icon = _x call EFUNC(common,getVehicleIcon);

    private _childStatement = {
        params ["", "", "_params"];
        _params params ["_object"];
        objNull setVehicleCargo _object;
    };
    private _action = [
        format [QGVAR(unloadVehicle_%1), _x],
        format ["%1 %2", localize "STR_VIV_UNLOAD", _name],
        _icon, _childStatement, {true}, {}, _x
    ] call ace_interact_menu_fnc_createAction;
    _actions pushBack [_action, [], _target];
} forEach (getVehicleCargo _target);

_actions;
