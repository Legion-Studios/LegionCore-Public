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
private _positionAGL = _dispenser modelToWorld (_dispenser selectionPosition [format ["spawn_%1", _hatchIndex], "Memory"]);

private _unit = _group createUnit [_unitType, _positionAGL, [], 0, "CAN_COLLIDE"];
_unit hideObjectGlobal true;

_dispenser animateSource [_hatchAnimation, 1];
[QEGVAR(common,say3D), [_dispenser, QGVAR(hiss), 100, 2]] call CBA_fnc_globalEvent;

// Could be made simpler, but this makes it look nice
[{
    _this hideObjectGlobal false;
}, _unit, 0.5] call CBA_fnc_waitAndExecute;
[{
    _this#0 animateSource [_this#1, 0];
}, [_dispenser, _hatchAnimation], 1] call CBA_fnc_waitAndExecute;

_unit;
