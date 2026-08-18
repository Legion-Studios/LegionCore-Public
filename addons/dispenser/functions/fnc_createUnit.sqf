#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Spawns a given unit from a droid dispenser.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: The droid dispenser <OBJECT>
 * 1: Group to add the unit to <GROUP>
 * 2: Type of unit to spawn <OBJECT>
 *
 * Return Value:
 * The spawned unit <OBJECT>
 *
 * Example:
 * [_dispenser, _group, "TAG_someUnit"] call ls_dispenser_fnc_createUnit;
 *
 * Public: No
 */

params ["_dispenser", "_group", "_unitType"];
TRACE_3("fnc_createUnit",_dispenser,_group,_unitType);

if (!(isServer && _dispenser getVariable [QGVAR(active), false]) || _dispenser getVariable [QGVAR(spawning), false]) exitWith { objNull };
_dispenser setVariable [QGVAR(spawning), true];

(_dispenser call FUNC(getDispenserData)) params ["_hatchCount", "_hatchAnimation", "_hatchDirections", "_activationSelection", "_unitAnimation", "_hatchHitpoint"];
private _hatchIndex = (_dispenser getVariable [QGVAR(currentHatch), 0]) + 1;
if (_hatchIndex > _hatchCount) then {
    _hatchIndex = 1;
};
_dispenser setVariable [QGVAR(currentHatch), _hatchIndex];

_hatchHitpoint = format [_hatchHitpoint, _hatchIndex];

// Fallback in case group is deleted from being empty
if (isNil "_group" || { isNull _group }) then {
    _group = createGroup [_dispenser getVariable [QGVAR(side), east], true];
    _dispenser setVariable [QGVAR(group), _group];
    PATROL(_group,_dispenser);
    TRACE_1("Old group is nil or null, created new group",_group);
} else {
    // Larger groups are more performant, but will react slower
    // 10 works as a decent middle ground
    if (count units _group >= 10) then {
        _group = createGroup [side _group, false];
        _dispenser setVariable [QGVAR(group), _group];
        PATROL(_group,_dispenser);
        TRACE_1("Reached max number of units per group (10), created new group",_group);
    };
};

_hatchAnimation params ["_animName", "_animDuration"];
_animName = format [_animName, _hatchIndex];
private _memPoint = format ["spawn%1", _hatchIndex];
private _positionAGL = _dispenser modelToWorld (_dispenser selectionPosition [_memPoint, "Memory"]);

// If hitpoint is destroyed, skip spawning unit but still delay
[{ _this setVariable [QGVAR(spawning), nil]; }, _dispenser, _animDuration * 3] call CBA_fnc_waitAndExecute;

if (_dispenser getHitPointDamage _hatchHitpoint >= 1) exitWith {
    _activationSelection params ["_selection", "_activeTexture", "_errorTexture"];
    _dispenser setObjectTextureGlobal [_selection, _errorTexture];
    _dispenser say3D [QGVAR(buttonPress), 40, 1, 2];
    [{
        params ["_dispenser", "_activationSelection"];
        // Check if dispenser is active, if all hitpoints are destroyed the lights will be disabled
        if (_dispenser getVariable [QGVAR(active), false]) then {
            _dispenser setObjectTextureGlobal _activationSelection;
        };
    }, [_dispenser, [_selection, _activeTexture]], _animDuration * 2] call CBA_fnc_waitAndExecute;
    objNull;
};

private _unit = _group createUnit [_unitType, _positionAGL, [], 0, "CAN_COLLIDE"];
[_unit, _unitAnimation, 2] call EFUNC(common,doAnimation);
_unit attachTo [_dispenser, [0, 0, 0], _memPoint];
_unit setDir (_hatchDirections select (_hatchIndex - 1));

_dispenser animateSource [_animName, 1];

[{
    detach _this;
    [_this, "", 2] call EFUNC(common,doAnimation);
    _this setPosASL ((getPosASL _this) vectorAdd (vectorDir _this)); // Move it forward slightly to not get stuck
}, _unit, _animDuration] call CBA_fnc_waitAndExecute;
[{ _this#0 animateSource [_this#1, 0] }, [_dispenser, _animName], _animDuration] call CBA_fnc_waitAndExecute;

[QGVAR(createdUnit), [_dispenser, _unit, _hatchIndex]] call CBA_fnc_serverEvent;
_unit;
