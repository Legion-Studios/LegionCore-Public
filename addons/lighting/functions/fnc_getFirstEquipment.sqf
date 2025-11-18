#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Returns the first flashlight equipped piece of gear.
 * Could be headgear, facewear, uniform, or vest.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 *
 * Return Value:
 * First equipment found <STRING>
 *
 * Example:
 * cursorObject call ls_lighting_fnc_getFirstEquipment;
 *
 * Public: Yes
 */

params [
    ["_unit", objNull, [objNull]]
];
TRACE_1("fnc_getFirstEquipment",_unit);

private _equipment = "";
private _gear = [headgear _unit, hmd _unit, goggles _unit, uniform _unit, vest _unit] select { _x != "" };

{
    private _data = _x call FUNC(getEquipmentData);
    if (_data get "enabled") exitWith {
        _equipment = _x;
    };
} forEach _gear;

_equipment;
