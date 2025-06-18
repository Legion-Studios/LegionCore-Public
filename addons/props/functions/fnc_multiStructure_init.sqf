#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * A small wrapper for BIS_fnc_destroyer01Init to log errors from the object's config.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Multipart structure <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * _object call ls_props_fnc_multiStructure_init;
 *
 * Public: No
 */

if (!is3DEN) exitWith {};

params ["_object"];

private _typeOf = typeOf _object;
private _parts = getArray (configOf _object >> "multiStructureParts");
if (_parts isEqualTo []) exitWith {
    WARNING_1("Multi Structure init called on '%1', which has no multiStructureParts defined",_typeOf);
};

private _cfgVehicles = configFile >> "CfgVehicles";
{
    private _class = _x select 0; // _x is ["class", "memoryPoint"]
    if (!isClass (_cfgVehicles >> _class)) then {
        ERROR_2("Multi Structure '%1' is missing part: '%2'",_typeOf,_class);
    };
} forEach _parts;

call BIS_fnc_destroyer01Init;