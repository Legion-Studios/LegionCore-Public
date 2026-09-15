#include "..\script_component.hpp"
/*
 * Authors: DartRuffian
 * Creates child actions for the hud color changer actions.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Target <OBJECT>
 *
 * Return Value:
 * Return description <NONE>
 *
 * Example:
 * _vehicle call ls_vehicles_fnc_hudChanger_insertChildren
 *
 * Public: No
 */

params ["_target"];

private _colors = [
    ["White", [1, 1, 1, 1], "#FFFFFF"],
    ["Black", [0, 0, 0, 1], "#000000"],
    ["Blue", [0, 0, 1, 1], "#0000FF"],
    ["Purple", [0.5, 0, 0.5, 1], "#800080"],
    ["Red", [1, 0, 0, 1], "#FF0000"],
    ["Orange", [1, 0.5, 0, 1], "#FF8000"],
    ["Yellow", [1, 1, 0, 1], "#FFFF00"],
    ["Green", [0, 1, 0, 1], "#00FF00"],
    ["Cyan", [0, 1, 1, 1], "#00FFFF"]
];

private _actions = [];

{
    _x params ["_name", "", "_colorHex"];
    private _action = [
        format ["ls_hudColor_%1", _name], _name, ["", _colorHex], {
            params ["", "", "_params"];
            [_target, _params select 1] call FUNC(setHudColor);
        }, {true}, {}, _x
    ] call ace_interact_menu_fnc_createAction;
    _actions pushBack [_action, [], _target];
} forEach _colors;

_actions pushBack [[
    "ls_hudColor_custom", "Custom", "", {
        [_target, EGVAR(vehicles,customHudColor)] call FUNC(setHudColor);
    }, {true}, nil, nil, nil, nil, nil, {
        // Use custom color for dot color, convert RGB array to hex
        // We don't need the alpha, so only grab first three elements (select takes start index + # of elements)
        private _hex = (EGVAR(vehicles,customHudColor) select [0, 3]) apply { (_x * 100) call ace_common_fnc_toHex };
        (_this select 3) set [2, ["", format ["#%1", _hex joinString ""]]];
    }
] call ace_interact_menu_fnc_createAction, [], _target];

_actions pushBack [[
    "ls_hudColor_noHud", "No Hud", QPATHTOEF(data,icons\hud\noHud_ca.paa), {
        [_target, [0, 0, 0, 0]] call FUNC(setHudColor);
    }, {true}
] call ace_interact_menu_fnc_createAction, [], _target];

_actions;
