#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Updates a unit's loadout, replacing them with either the active camo versions or revert from active camo.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 1: Convert to camo items (optional, default: true) <BOOL>
 *    - True : Convert to active camo items
 *    - False: Convert back to regular items
 *
 * Return Value:
 * None
 *
 * Example:
 * player call ls_activeCamo_fnc_replaceLoadoutItems;
 *
 * Public: No
 */

params ["_unit", ["_toCamo", true]];
TRACE_2("fnc_replaceLoadoutItems",_unit,_toCamo);

// setLoadout does nothing if the unit is switching weapons
// Exit and add a waitAndExecute to wait until the unit is no longer switching weapons
if (isSwitchingWeapon _unit) exitWith {
    [{
        !isSwitchingWeapon (_this select 0);
    }, LINKFUNC(replaceLoadoutItems), _this, 30, {
        WARNING_1("Unit %1 kept switching loadouts for 30 seconds, skipping setting loadout.",_this select 0);
    }] call CBA_fnc_waitUntilAndExecute;
};

(_unit call CBA_fnc_getLoadout) params ["_loadout", "_extended"];

private _oldBackpack = backpackContainer _unit;
private _allVariables = (allVariables _oldBackpack) apply {
    [_x, _oldBackpack getVariable _x, true];
};

// Get current equipped weapon, so that we can swap back the camo version after applying the loadout
// Use the index because the current weapon could change, like the DC-17M which has an active camo version
private _index = switch (currentWeapon _unit) do {
    case (secondaryWeapon _unit): { 1 };
    case (handgunWeapon _unit): { 2 };
    default { 0 };
};

// Only check _toCamo once
private ["_fnc_convert"];
if (_toCamo) then {
    _fnc_convert = { call FUNC(getCamoItem) };
} else {
    _fnc_convert = {
        GVAR(itemCacheReversed) getOrDefaultCall [_this, {
            // This is just a fallback for potential new items the unit got while in camo
            private _return = _this;
            {
                if (_this == _y) exitWith {
                    _return = _y;
                };
            } forEach GVAR(itemCache);
            _return;
        }, true];
    };
};

// Only initialize variables once
private ["_i", "_ii", "_iii", "_iv", "_itemI", "_itemII", "_itemIII", "_itemIV"];
private _emptyArray = [];

{
    _i = _forEachIndex;
    _itemI = _x;
    // TRACE_1("",_itemI);

    if (_itemI isEqualType "") then {
        _loadout set [_i, _itemI call _fnc_convert];
    } else {
        if (_itemI isEqualType _emptyArray) then {
            {
                _ii = _forEachIndex;
                _itemII = _x;
                // TRACE_1("",_itemII);

                if (_itemII isEqualType "") then {
                    _loadout select _i set [_ii, _itemII call _fnc_convert];
                } else {
                    if (_itemII isEqualType _emptyArray) then {
                        {
                            _iii = _forEachIndex;
                            _itemIII = _x;
                            // TRACE_1("",_itemIII);

                            if (_itemIII isEqualType "") then {
                                _loadout select _i select _ii set [_iii, _itemIII call _fnc_convert];
                            } else {
                                if (_itemIII isEqualType _emptyArray) then {
                                    {
                                        _iv = _forEachIndex;
                                        _itemIV = _x;
                                        // TRACE_1("",_itemIV);

                                        if (_itemIV isEqualType "") then {
                                            _loadout select _i select _ii select _iii set [_iv, _itemIV call _fnc_convert];
                                        };
                                    } forEach _itemIII;
                                };
                            };
                        } forEach _itemII;
                    };
                };
            } forEach _itemI;
        };
    };
} forEach _loadout;

[_unit, [_loadout, _extended]] call CBA_fnc_setLoadout;

// Re-select weapon
_unit selectWeapon (_loadout select _index select 0);

// Re-set variables if backpack changed
private _newBackpack = backpackContainer _unit;
if (_oldBackpack != _newBackpack) then {
    {
        _newBackpack setVariable _x;
    } forEach _allVariables;
};
