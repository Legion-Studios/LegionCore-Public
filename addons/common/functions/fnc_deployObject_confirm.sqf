#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Confirms placing an object
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
 *    - Only works if ace_interact_menu is present
 * 5: Animation to play with playMoveNow (optional, default: "putDown") <STRING>
 *
 * Return Value:
 * None
 *
 * Example:
 * [_unit, "TAG_myItem", "TAG_myObject"] call ls_common_fnc_deployObject;
 *
 * Public: No
 */

params ["_player", "_object", "_itemClass", "_time", "_createAction", "_animation"];
TRACE_6("fnc_deployObject",_player,_object,_itemClass,_time,_createAction,_animation);

if (!alive _player || _player != ls_player || isNull _object) exitWith {};

private _fnc_deploy = {
    params ["_unit", "_objectClass", "_positionASL", "_vectorDirAndUp", "_itemClass", "_createAction", "_animation"];

    if (_itemClass == "" || { [_unit, _itemClass] call CBA_fnc_removeItem } ) then {
        _unit playAction "PutDown";

        private _object = createVehicle [_objectClass, [0, 0, 0], [], 0, "CAN_COLLIDE"];
        _object setPosASL _positionASL;
        _object setVectorDirAndUp _vectorDirAndUp;

        _object setVariable [QGVAR(wasDeployed), true, true];
        _object setVariable [QGVAR(packedItemClass), _itemClass, true]; // Set before deployStatement to allow it to be modified
        private _statement = getText (configFile >> "CfgWeapons" >> _itemClass >> QGVAR(deployStatement));
        if (_statement != "") then {
            [_unit, _object, _itemClass] call (compile _statement);
        };

        // Only create action if item is given and ACE is loaded
        _createAction = _createAction && _itemClass != "" && {
            "ace_interact_menu" call EFUNC(common,isModLoaded)
        };

        if (_createAction) then {
            private _action = [
                QGVAR(pickup), LLSTRING(pickUp), "", {
                    params ["_target", "_player", "_animation"];
                    // Variable to allow other scripts to modify the returned item
                    private _itemClass = _target getVariable [QGVAR(packedItemClass), ""];
                    [_player, _target, _itemClass, _animation] call FUNC(pickupObject);
                }, {
                    params ["_target"];
                    alive _target;
                }, {}, _animation
            ] call ace_interact_menu_fnc_createAction;

            // Frame delay so the pick up action shows last
            [ace_interact_menu_fnc_addActionToObject, [_object, 0, ["ACE_MainActions"], _action]] call CBA_fnc_execNextFrame;
        };
    };
};

private _params = [_player, typeOf _object, getPosASL _object, [vectorDir _object, vectorUp _object], _itemClass, _createAction, _animation];
deleteVehicle _object;

if (_time > 0) then {
    private _name = getText (configFile >> "CfgWeapons" >> _itemClass >> "displayName");
    [format [LLSTRING(placingProgress), _name], _time, {
        (_this select 0) params ["_player"];
        _player call FUNC(isAwake);
    }, {
        (_this select 0) params ["_params", "_fnc_deploy"];
        _params call _fnc_deploy;
    }, {}, [_params, _fnc_deploy]] call CBA_fnc_progressBar;
} else {
    _params call _fnc_deploy;
};
