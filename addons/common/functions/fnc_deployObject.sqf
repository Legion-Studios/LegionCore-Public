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
 * 5: Distance (no longer used) <ANY>
 * 6: Animation to play with playMoveNow (optional, default: "putDown") <STRING>
 *
 * Return Value:
 * None
 *
 * Example:
 * [player, "TAG_myItem", "TAG_myObject"] call ls_common_fnc_deployObject;
 *
 * Public: Yes
 */

params [
    ["_player", objNull, [objNull]],
    ["_objectClass", "", [""]],
    ["_itemClass", "", [""]],
    ["_time", 0, [0]],
    ["_createAction", true, [true]],
    "",
    ["_animation", "", [""]]
];
TRACE_6("fnc_deployObject",_player,_objectClass,_itemClass,_time,_createAction,_animation);

if (!alive _player || _player != ls_player || _objectClass == "") exitWith {};

private _object = _objectClass createVehicleLocal [0, 0, 0];
_object disableCollisionWith _player;
_object allowDamage false;

GVAR(objectRotationX) = 0;
GVAR(objectRotationY) = 0;
GVAR(objectRotationZ) = 0;

GVAR(isPlacing) = PLACE_WAITING;

private _rotate = LLSTRING(rotate);
[LLSTRING(confirm), LLSTRING(cancel), LLSTRING(rotate), [
    ["alt", localize "STR_3DEN_display3DEN_EntityMenu_MoveSurface_text"],
    ["shift", localize "STR_Disp_Conf_XAxis" + " " + _rotate],
    ["ctrl", localize "STR_Disp_Conf_YAxis" + " " + _rotate]
]] call FUNC(showMouseHint);

private _mouseClickID = [_player, "DefaultAction", {GVAR(isPlacing) == PLACE_WAITING}, {GVAR(isPlacing) = PLACE_APPROVE}] call FUNC(addActionEventHandler);

[{
    params ["_args", "_handle"];
    _args params ["_unit", "_object", "_itemClass", "_time", "_createAction", "_animation", "_mouseClickID"];

    if (_unit != ls_player || isNull _object) then {
        GVAR(isPlacing) = PLACE_CANCEL;
    };

    if (GVAR(isPlacing) != PLACE_WAITING) exitWith {
        TRACE_3("exiting PFEH",GVAR(isPlacing),_handle,_mouseClickID);
        _handle call CBA_fnc_removePerFrameHandler;

        [] call FUNC(hideMouseHint);
        [_unit, "DefaultAction", _mouseClickID] call FUNC(removeActionEventHandler);

        if (GVAR(isPlacing) == PLACE_APPROVE) then {
            TRACE_1("deploying object",_object);
            GVAR(isPlacing) = PLACE_CANCEL;
            [_unit, _object, _itemClass, _time, _createAction, _animation] call FUNC(deployObject_confirm);
        } else {
            TRACE_1("deleting object",_object);
            deleteVehicle _object;
        };
    };

    (_object call FUNC(getAxisLengths)) params ["_width", "_length", "_height"];
    private _distance = ((_width max _length) + 0.5) max 2; // For saftey, move it a bit extra away from player's center

    private _basePos = eyePos _unit;
    private _camViewDir = getCameraViewDirection _unit;
    _basePos = _basePos vectorAdd (_camViewDir vectorMultiply _distance);
    _basePos set [2, ((_basePos select 2) - (_height / 2)) max (getTerrainHeightASL _basePos) + 0.01]; // Add a little extra height as a safety net

    _object setPosASL _basePos;

    private _vZ =  180 + GVAR(objectRotationZ) + getDir _unit;
    if (cba_events_alt) then {
        // Snap to terrain surface dir
        _object setDir _vZ;
        _object setVectorUp (surfaceNormal _basePos);
    } else {
        [_object, GVAR(objectRotationX), GVAR(objectRotationY), _vZ] call FUNC(setPitchBankYaw);
    };
}, 0, [_player, _object, _itemClass, _time, _createAction, _animation, _mouseClickID]] call CBA_fnc_addPerFrameHandler;
