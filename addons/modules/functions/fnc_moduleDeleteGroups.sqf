#include "..\script_component.hpp"
/*
 * Authors: DartRuffian
 * Deletes empty groups, only deletes groups that are flagged to be deleted when empty.
 *
 * Arguments:
 * 0: Module <OBJECT>
 * 1: Affected units (unused) <ARRAY>
 * 2: Activated <BOOL>
 *
 * Return Value:
 * None
 *
 * Example:
 * [_logic, [], true] call ls_modules_fnc_moduleDeleteGroups;
 *
 * Public: No
 */

params ["_logic", "", "_activated"];
TRACE_2("fnc_moduleDeleteGroups",_logic,_activated);

// Wiki doesn't have a locality for isGroupDeletedWhenEmpty, so only checking it where group is local
// deleteGroup is local arg as well, so we only want local groups anyway
private _groups = allGroups select { local _x && { isGroupDeletedWhenEmpty _x && units _x isEqualTo [] }};

if (!_activated) exitWith {};

private _count = count _groups;
{ deleteGroup _x } forEach _groups;

if (local _logic) then {
    [objNull, format [LLSTRING(deletedGroups), _count]] call BIS_fnc_showCuratorFeedbackMessage;
    deleteVehicle _logic;
};
