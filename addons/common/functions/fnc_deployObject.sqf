#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Deploys an object from a unit's inventory.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 1: Object class to create <STRING>
 * 2: Item class to remove (optional, default: "") <STRING>
 *    - If value is not empty string, _unit must have the given item in order to create the object.
 * 3: Time required to deploy object (optional, default: 0) <NUMBER>
 *    - If _time is <=0, no progressbar will be created
 * 4: Create ACE action to pick up object (optional, default: true) <BOOL>
 *    - Only works if ace_interaction is present
 * 5: Distance to spawn object from _unit <NUMBER>
 * 6: Animation to play with playMoveNow (optional, default: "putDown") <STRING>
 *
 * Return Value:
 * Created object <OBJECT>
 *
 * Example:
 * [_unit, "TAG_myItem", "TAG_myObject"] call ls_common_fnc_deployObject;
 *
 * Public: Yes
 */

params [
    ["_unit", objNull, [objNull]],
    ["_objectClass", "", [""]],
    ["_itemClass", "", [""]],
    ["_time", 0, [0]],
    ["_createAction", true, [true]],
    ["_distance", 1.5, [0]],
    ["_animation", "", [""]]
];
TRACE_7("fnc_deployObject",_unit,_objectClass,_itemClass,_time,_createAction,_distance,_animation);

if (!alive _unit or {_objectClass == ""}) exitWith {};

private _object = objNull;

private _fnc_deploy = {
    params ["_unit", "_objectClass", "_itemClass", "_createAction", "_distance", "_animation"];

    if (_itemClass == "" or {[_unit, _itemClass] call CBA_fnc_removeItem}) then {
        private _direction = getDir _unit;
        private _positionATL = getPosATL _unit vectorAdd [_distance * sin _direction, _distance * cos _direction, 0.02];

        [_unit, _animation, 1] call FUNC(doAnimation);
        _object = _objectClass createVehicle [0, 0, 0];
        _object setVectorUp surfaceNormal _positionATL;
        _object setPosATL _positionATL;

        _object setVariable [QGVAR(wasDeployed), true, true];
        private _statement = compile getText (configFile >> "CfgWeapons" >> _itemClass >> QGVAR(deployStatement));
        [_unit, _objectClass, _itemClass] call _statement;

        if (_createAction and {"ace_interaction" call EFUNC(common,isModLoaded)}) then {
            private _action = [
                format [QUOTE(GVAR(pickup_%1)), _itemClass],
                "Pick Up", "", {
                    params ["", "_player", "_params"];
                    _params params ["_object", "_itemClass", "_animation"];
                    [_player, _object, _itemClass, _animation] call FUNC(pickupObject);
                }, {true}, {},
                [_object, _itemClass, _animation]
            ] call ace_interact_menu_fnc_createAction;

            [_object, 0, ["ACE_MainActions"], _action] call ace_interact_menu_fnc_addActionToObject;
        };
    };
};

if (_time > 0) then {
    private _name = getText (configFile >> "CfgWeapons" >> _itemClass >> "displayName");
    [format ["Placing %1", _name], _time, {
        _this#0 params ["_unit"];
        _unit call FUNC(isAwake);
    }, {
        private _fnc_deploy = (_this select 0) select 6;
        (_this select 0) call _fnc_deploy;
    }, {}, [_unit, _objectClass, _itemClass, _createAction, _distance, _animation, _fnc_deploy]] call CBA_fnc_progressBar;
} else {
    [_unit, _objectClass, _itemClass, _createAction, _distance, _animation] call _fnc_deploy;
};

_object;
