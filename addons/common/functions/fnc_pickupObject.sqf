#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Picks up an item placed with fnc_deployObject.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: The unit picking up the item <OBJECT>
 * 1: Object being picked up <OBJECT>
 * 2: Item class to give to _unit <STRING>
 * 3: Animation to play with playMoveNow (optional, default: "PutDown") <STRING>
 *
 * Return Value:
 * None
 *
 * Example:
 * [_unit, _object, ""] call ls_common_fnc_pickupObject;
 *
 * Public: Yes
 */

params [
    ["_unit", objNull, [objNull]],
    ["_object", objNull, [objNull]],
    ["_itemClass", "", [""]],
    ["_animation", "putDown", [""]]
];
TRACE_4("fnc_pickupObject",_unit,_object,_itemClass,_animation);

if (!alive _unit) exitWith {};

private _statement = compile getText (configFile >> "CfgWeapons" >> _itemClass >> QGVAR(pickupStatement));
if (_statement isEqualTo {}) then {
    _statement = { (_this select 2) setVariable [QGVAR(pickupReady), true]; };
};
[_unit, _object, _itemClass] call _statement;

private _fnc_pickup = {
    params ["_unit", "_object", "_itemClass", "_animation"];
    deleteVehicle _object;
    [_unit, _animation, 1] call FUNC(doAnimation);
    [_unit, _itemClass, true] call CBA_fnc_addItem;
};

[{
    params ["", "_object"];
    _object getVariable [QGVAR(pickupReady), false];
}, _fnc_pickup, [_unit, _object, _itemClass, _animation], 30, _fnc_pickup] call CBA_fnc_waitUntilAndExecute;

nil;
