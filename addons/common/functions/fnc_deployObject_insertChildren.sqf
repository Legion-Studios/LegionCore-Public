#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Creates child actions for each placeable item in the client's inventory.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Target that action is assigned to <OBJECT>
 * 1: ACE_player <OBJECT>
 *
 * Return Value:
 * Array of child actions <ARRAY>
 *
 * Example:
 * [ls_player, ls_player] call ls_common_fnc_deployObject_insertChildren;
 *
 * Public: No
 */

params ["_target", "_player"];
TRACE_2("fnc_deployObject_insertChildren",_target,_player);

private _cfgWeapons = configFile >> "CfgWeapons";
private _actions = [];
private _items = ([_player, false, true, true, true, false] call CBA_fnc_uniqueUnitItems) apply {
    private _objectClass = getText (_cfgWeapons >> _x >> QGVAR(deployObject));
    if (_objectClass != "") then {
        [_x, _objectClass];
    } else {
        nil;
    };
};
_items = _items select {
    !isNil "_x";
};

{
    _x params ["_item", "_objectClass", "_time"];
    private _config = configFile >> "CfgWeapons" >> _item;
    private _name = getText (_config >> "displayName");
    private _picture = getText (_config >> "picture");
    private _time = getNumber (_config >> QGVAR(deployTime));

    private _animation = getText (_config >> QGVAR(deployAnimation));
    if (_animation == "") then {
        _animation = "AinvPercMstpSrasWrflDnon_Putdown_AmovPercMstpSrasWrflDnon"; // CfgMoves version of PutDown action
    };

    private _action = [
        format [QUOTE(GVAR(deploy_%1)), _item],
        _name, _picture, {
            params ["_target", "_player", "_params"];
            _params params ["_objectClass", "_item", "_time", "_animation"];
            [LINKFUNC(deployObject), [_player, _objectClass, _item, _time, true, nil, _animation]] call CBA_fnc_execNextFrame;
        }, {true}, {}, [_objectClass, _item, _time, _animation]
    ] call ace_interact_menu_fnc_createAction;

    _actions pushBack [_action, [], _target];
} forEach _items;

_actions;
