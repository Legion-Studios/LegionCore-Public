#include "..\script_component.hpp"
/*
 * Authors: DartRuffian
 * Returns vision modes that a unit can use from their NVGs and Helmet.
 * Intentionally only checks NVGs and helmets.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 *
 * Return Value:
 * Vision modes <ARRAY>
 *
 * Example:
 * player call ls_common_fnc_getVisionModes
 *
 * Public: No
 */

params ["_unit"];
TRACE_1("fnc_getVisionModes",_unit);

if (isNull _unit || !(_unit isKindOf "CAManBase")) exitWith { [] };

private _cfgWeapons = configFile >> "CfgWeapons";
private _visionModes = ["Normal"];

private _nvg = hmd _unit;
if (_nvg != "") then {
    _visionModes append (getArray (_cfgWeapons >> _nvg >> "visionMode"));
};

private _helmet = headgear _unit;
if (_helmet != "") then {
    private _subItems = getArray (_cfgWeapons >> _helmet >> "subItems");
    {
        _visionModes append (getArray (_cfgWeapons >> _x >> "visionMode"));
    } forEach _subItems;
};

_visionModes arrayIntersect _visionModes;
