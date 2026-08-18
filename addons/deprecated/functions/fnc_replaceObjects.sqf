#include "..\script_component.hpp"
/*
 * Authors: DartRuffian
 * Replaces deprecated 3DEN Entity objects with their new versions.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ls_deprecated_fnc_replaceObjects
 *
 * Public: No
 */

#define TYPE_INFO 0
#define TYPE_WARNING 1

TRACE_0("fnc_replaceObjects");

if (!is3DEN) exitWith {};

// This is not saved to the mission file, so we don't need to handle re-setting the variable on mission close
if !(missionNamespace getVariable [QGVAR(acceptedWarning), false]) exitWith {
    [
        "Please back up your mission before running this script. Select the option again to replace objects.<br/>Report any issues to Legion Studios.",
        TYPE_INFO, 7
    ] call BIS_fnc_3DENNotification;
    missionNamespace setVariable [QGVAR(acceptedWarning), true];
};

private _count = 0;
{
    private _replacementClass = getText (configOf _x >> "ls_replacementObject");
    if (_replacementClass == "" || typeOf _x == _replacementClass) then { continue };

    private _newObject = create3DENEntity ["Object", _replacementClass, getPosATL _x];
    {
        _newObject set3DENAttribute _x;
    } forEach (_x get3DENAttributes "");
    _newObject set3DENLayer (get3DENLayer _x);

    delete3DENEntities [_x];
    _count = _count + 1;
} forEach (all3DENEntities select 0);

[format ["Replaced %1 objects", _count], TYPE_INFO, 5] call BIS_fnc_3DENNotification;
