#include "..\script_component.hpp"
/*
 * Authors: DartRuffian
 * Exports selected Eden objects as a composition that can be placed into CfgGroups.
 * Select objects in Eden and run `[] call ls_groups_fnc_exportComposition`.
 * The output will be copied to your clipboard and returned from the function.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * Exported composition <STRING>
 *
 * Example:
 * [] call ls_groups_fnc_exportComposition
 *
 * Public: No
 */

// Only support stuff from Eden
if (!is3DEN) exitWith {
    hintSilent "Cannot export composition outside Eden";
    WARNING("Cannot export composition outside Eden");
};

private _objects = get3DENSelected "object";
if (_objects isEqualTo []) then {
    ["No selected objects to save", 0, 5] call BIS_fnc_3DENNotification;
};

private _center = ASLToAGL getPosASL (_objects select 0);

private _logic = createAgent ["Logic", _center, [], 0, "none"];
_logic setPos _center;
_logic setDir 0;

private _text = "";
private _br = toString [10];
private _count = count _objects;

{
    private _objPos = _logic worldToModel position _x;
    private _objSide = 8;
    private _objRank = "";

    if !(isNull group _x) then {
        _objSide = (_x call BIS_fnc_objectSide) call BIS_fnc_sideID;
        _objRank = rank _x;
    };

    private _objText = format [
        "        class Object%1 { side = %2; vehicle = ""%3""; rank = ""%4""; position[] = {%5, %6, %7}; dir = %8; };",
        _forEachIndex,
        _objSide,
        typeOf _x,
        _objRank,
        (_objPos select 0),
        (_objPos select 1),
        getPosATL _x select 2,
        (direction _x) % 360
    ];

    _text = _text + _objText;
    if (_forEachIndex + 1 != _count) then {
        _text = _text + _br;
    };
} forEach _objects;

deleteVehicle _logic;

[format ["Copied config for %1 objects to clipboard.", _count], 0, 5] call BIS_fnc_3DENNotification;
copyToClipboard _text;
_text
