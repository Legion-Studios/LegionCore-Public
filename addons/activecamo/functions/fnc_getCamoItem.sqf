#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Takes a class and returns the active camo version of that item.
 * If the item has no camo version or the class does not exist, the original class is returned.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Item class name <STRING>
 *
 * Return Value:
 * Active camo class <STRING>
 *
 * Example:
 * uniform player call ls_activeCamo_fnc_getCamoItem;
 *
 * Public: Yes
 */

params [["_itemClass", "", [""]]];
TRACE_1("fnc_getCamoItem",_itemClass);

if (_itemClass == "") exitWith { "" };

private _key = toLowerANSI _itemClass;

// exitWith doesn't work in a getOrDefaultCall
private _fnc_cache = {
    private _config = _itemClass call CBA_fnc_getItemConfig;
    private _camoItem = getText (_config >> QGVAR(camoItem));

    // If no camo item is set, use a "blank_activeCamo" version if it exists
    private _parentConfig = configHierarchy _config select -2;
    private _automaticItem = _itemClass + "_activeCamo";
    if (_camoItem == "" && isClass (_parentConfig >> _automaticItem)) exitWith {
        GVAR(itemCacheReversed) set [_automaticItem, _key];
        _automaticItem;
    };

    if (_camoItem == "") then {
        _camoItem = _itemClass;
    };

    // If the class doesn't exist, log a warning and use original class instead
    if (!isClass (_parentConfig >> _camoItem)) then {
        WARNING_2("Undefined Class: `%1` has `%2` set as camo version, but it does not exist.",_itemClass,_camoItem);
        _camoItem = _itemClass;
    };

    _camoItem;
};

private _return = GVAR(itemCache) getOrDefaultCall [_key, { call _fnc_cache }, true];
GVAR(itemCacheReversed) set [_return, _key]; // We always want reversed to be the latest value
_return;
