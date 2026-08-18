#include "..\script_component.hpp"
/*
 * Authors: DartRuffian
 * Handles a breaching charge detonating.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Explosive <OBJECT>
 * 1: Position <ARRAY>
 * 2: Velocity (unused) <ARRAY>
 *
 * Return Value:
 * None
 *
 * Example:
 * [_explosive, getPosASL _explosive, velocity _explosive] call ls_weapons_fnc_breachingCharge
 *
 * Public: No
 */

params ["_explosive", "_explosivePosASL"];
TRACE_2("fnc_breachingCharge",_explosive,_explosivePosASL);

if (!local _explosive) exitWith {};

private _distanceOffset = (vectorUp _explosive) vectorMultiply BREACH_CHARGE_RAYCAST;
private _startPosASL = _explosivePosASL vectorAdd _distanceOffset;
private _endPosASL = _explosivePosASL vectorDiff _distanceOffset;
#ifdef DEBUG_MODE_FULL
if (isNil "start") then {
    start = createVehicle ["Sign_Sphere25cm_F", [0, 0, 0]];
    end = createVehicle ["Sign_Sphere25cm_F", [0, 0, 0]];
};

start setPosASL _startPosASL;
end setPosASL _endPosASL;
#endif

// We have to manually rotate the submunition, submunitionDirectionType won't behave as expected since the charge will be attached to an object
_explosive addEventHandler ["SubmunitionCreated", {
    params ["_parent", "_submunition"];

    private _vectorDir = (_parent modelToWorld [0, 0, 1]) vectorFromTo (_parent modelToWorld [0, 0, 0]);
    private _vectorUp = if (_vectorDir isEqualTo [0, 0, -1]) then {
        [1, 0, 0];
    } else {
        _vectorDir vectorCrossProduct [-(_vectorDir select 1), _vectorDir select 0, 0]
    };
    TRACE_CHAT_2("Calculated",_vectorDir,_vectorUp);
    _submunition setVectorDirAndUp [_vectorDir, _vectorUp];
    TRACE_CHAT_2("Actual",vectorDir _submunition,vectorUp _submunition);

    #ifdef DEBUG_MODE_FULL
    [{
        if (isNil "submunition") then {
            submunition = createVehicle ["Sign_Arrow_Direction_F", [0, 0, 0]];
        };
        submunition setPosASL (getPosASL _this);
        submunition setVectorDirAndUp [vectorDir _this, vectorUp _this];
    }, _submunition] call CBA_fnc_execNextFrame;
    #endif

    // setVectorDirAndUp seems to take a frame to apply when testing
    [{ triggerAmmo _this }, _submunition] call CBA_fnc_execNextFrame;
}];

// Normally you'd exclude the explosive from the intersect, but doing that seems to break it?
// Not sure why, but using _explosive instead of one of the objNulls makes it always return []
// Instead, we get every intersect and manually filter out ones where the intersect/parent objects are NOT the explosive
private _lineIntersects = lineIntersectsSurfaces [_startPosASL, _endPosASL, objNull, objNull, true, -1, "GEOM"];
_lineIntersects = _lineIntersects select {
    _x params ["", "", "_insersectObject", "_target"];
    !(_explosive in [_insersectObject, _target]);
};

(_lineIntersects param [0, []]) params ["", "", "", ["_target", objNull], ["_selectionNames", []]];

// _target is also objNull if only terrain was hit
if (isNull _target) exitWith {};

private _configOf = configOf _target;
private _modelName = toLowerANSI (getModelInfo _target select 0);

// Knock over / make a hole in things like wire fences, or if something is marked to be destroyed
// We have to check model name for terrain objects, since "simple" objects don't have a class
if ((_target call CBA_fnc_isTerrainObject && { "wall" in _modelName || "fence" in _modelName }) ||
    { _target isKindOf "Wall" } || { _target isKindOf "Fence" } ||
    { getNumber (_configOf >> QEGVAR(explosives,destroyWhenBreached)) == 1 }
) then {
    _target setDamage 1;
};

// Blow open doors and lock them open afterwards
if (_selectionNames isNotEqualTo [] && { getNumber (_configOf >> "numberOfDoors") > 0 }) then {
    // Get the first hit door's selection name
    private _firstDoorIndex = _selectionNames findIf { (toLowerANSI _x) find "door" != -1 };
    if (_firstDoorIndex == -1) exitWith {}; // Hit a selection that wasn't a door

    // https://regex101.com/r/h51h7d/1
    // Extract door number from selection name, e.g. door1 -> 1, door_5 -> 5, door_70b -> 70
    private _door = (_selectionNames select _firstDoorIndex) regexReplace [".*_(\d+)\w{0,1}", "$1"];
    TRACE_CHAT_2("Door regex",_door,parseNumber _door);
    _door = parseNumber _door;
    if (_door == 0) exitWith {}; // parseNumber returns 0 on bad string, door isn't configured properly

    _target setVariable [format ["BIS_disabled_door_%1", _door], 0]; // Unlock door
    [_target, _door, 1, 10] call EFUNC(common,doorStatement); // Open door
    _target setVariable [format ["BIS_disabled_door_%1", _door], 1, true]; // Lock door to prevent being closed
};

// TODO: Make LAAT/i doors fly off? We have prop versions of them and it'd be funny and cool
