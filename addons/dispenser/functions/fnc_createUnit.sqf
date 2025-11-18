#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Spawns a given unit from a droid dispenser.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios Core.
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

if !(_dispenser getVariable [QGVAR(active), false]) exitWith {};

private _hatchIndex = (_dispenser getVariable [QGVAR(currentHatch), 0]) + 1;
if (_hatchIndex > 3) then {
    _hatchIndex = 1;
};
_dispenser setVariable [QGVAR(currentHatch), _hatchIndex];

private _hatchAnimation = format ["hatch%1_move", _hatchIndex];
private _memPoint = format ["spawn_%1", _hatchIndex];
private _positionAGL = _dispenser modelToWorld (_dispenser selectionPosition [_memPoint, "Memory"]);

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

private _unit = _group createUnit [_unitType, _positionAGL, [], 0, "CAN_COLLIDE"];
[_unit, "ls_droid_folded", 2] call EFUNC(common,doAnimation);
_unit attachTo [_dispenser, [0, 0, 0], _memPoint];
_unit setDir ([0, 90, 330, 210] select _hatchIndex); // 0 should never actually be used

_dispenser animateSource [_hatchAnimation, 1];

[{
    detach _this;
    [_this, "", 2] call EFUNC(common,doAnimation);
    _this setPosASL ((getPosASL _this) vectorAdd (vectorDir _this)); // Move it forward slightly to not get stuck
}, _unit, HATCH_ANIM_LENGTH + 0.5] call CBA_fnc_waitAndExecute;
[{ _this#0 animateSource [_this#1, 0] }, [_dispenser, _hatchAnimation], HATCH_ANIM_LENGTH + 1] call CBA_fnc_waitAndExecute;

_unit;
