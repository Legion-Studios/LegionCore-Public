#include "..\script_component.hpp"
/*
 * Authors: DartRuffian
 * Sets a tree view control's selected items. Will expand parent categories if needed.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Tree <CONTROL>
 * 1: Seleceted <BOOL>
 * 2: Paths <ARRAY<ARRAY>>
 *
 * Return Value:
 * None
 *
 * Example:
 * [_tree, true, [[0], [1], [0, 1]]] call ls_common_fnc_tvSetSelected
 *
 * Public: No
 */

params ["_tree", "_selected", "_paths"];
TRACE_3("fnc_tvSetSelected",_tree,_selected,_paths);

// Expand parent items if selecting a sub item, since setSelected doesn't account for that
// Each item needs to be expanded as well, expand [0, 0, 0] only expands the third layer down.
private _fnc_expandTree = {
    params ["_path"];
    if (_path isEqualTo []) exitWith {};

    _tree tvExpand _path;
    _path deleteAt [-1];
    [_path] call _fnc_expandTree;
};

_tree tvSetCurSel (_paths param [0, []]);
{
    if (_selected) then {
        [+_x] call _fnc_expandTree;
    };
    _tree tvSetSelected [_x, _selected];
} forEach _paths;
