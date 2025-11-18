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

private _actions = [];
private _items = ([_player, false, true, true, true, false] call CBA_fnc_uniqueUnitItems) apply {
    private _object = getText (configFile >> "CfgWeapons" >> _x >> QEGVAR(common,deployObject));
    if (_object != "") then {
        [_x, _object];
    } else {
        nil;
    };
};
_items = _items select {
    !isNil "_x";
};

{
    _x params ["_item", "_object", "_time"];
    private _config = configFile >> "CfgWeapons" >> _item;
    private _name = getText (_config >> "displayName");
    private _picture = getText (_config >> "picture");
    private _time = getNumber (_config >> QEGVAR(common,deployTime));
    private _distance = getNumber (_config >> QEGVAR(common,deployDistance));
    if (_distance == 0) then {
        _distance = 1.5;
    };
    private _animation = getText (_config >> QEGVAR(common,deployAnimation));
    if (_animation == "") then {
        _animation = "AinvPercMstpSrasWrflDnon_Putdown_AmovPercMstpSrasWrflDnon"; // CfgMoves version of PutDown action
    };

    private _action = [
        format [QUOTE(GVAR(deploy_%1)), _item],
        _name, _picture, {
            params ["_target", "_player", "_params"];
            _params params ["_object", "_item", "_time", "_distance", "_animation"];
            [_player, _object, _item, _time, true, _distance, _animation] call EFUNC(common,deployObject);
        }, {true}, {}, [_object, _item, _time, _distance, _animation]
    ] call ace_interact_menu_fnc_createAction;

    _actions pushBack [_action, [], _target];
} forEach _items;

_actions;
