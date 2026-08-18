#include "..\script_component.hpp"
/*
 * Authors: DartRuffian
 * Checks if a unit has a given item.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 1: Item class <STRING>
 *
 * Return Value:
 * True if unit has the item, otherwise false <BOOL>
 *
 * Example:
 * [player, "FirstAidKit"] call ls_common_fnc_hasItem
 *
 * Public: No
 */

#define CACHE_TTL 5

params ["_unit", "_item"];
TRACE_2("fnc_hasItem",_unit,_item);

private _items = [_unit, {
    private _items = (getItemCargo uniformContainer _this) select 0;
    _items append ((getItemCargo vestContainer _this) select 0);
    _items append ((getItemCargo backpackContainer _this) select 0);
    _items append (magazines _this);
    (_items arrayIntersect _items) apply { toLowerANSI _x };
}, _unit, QGVAR(items), CACHE_TTL] call FUNC(cachedCall);

(toLowerANSI _item) in _items;
