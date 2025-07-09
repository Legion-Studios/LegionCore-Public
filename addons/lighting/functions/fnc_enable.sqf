#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Enables a unit's flashlight.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 1: Equipment projecting light (optional, default: first found) <STRING>
 *    - Default behavior will check if goggles can produce light.
 *    - If they cannot, helmet, uniform, and then vest will be checked.
 *
 * Return Value:
 * True if light was enabled, otherwise false <BOOL>
 *
 * Example:
 * ls_player call ls_lighting_fnc_enable;
 *
 * Public: Yes
 */

params [
    ["_unit", objNull, [objNull]],
    ["_equipment", "", [""]]
];
TRACE_2("fnc_enable",_unit,_equipment);

if (isNull _unit) exitWith { false };

if (_equipment == "") then {
    _equipment = _unit call FUNC(getFirstEquipment);
};

// Unit has no equipment with a flashlight
if (_equipment == "") exitWith { false };

private _data = _equipment call FUNC(getEquipmentData);
private _sound = _data get "soundOn";
if (_unit == ls_player and {_sound != ""}) then {
    playSound (_data get "soundOn");
};

[QGVAR(createLights), [_unit, _equipment], CREATE_EVENT_ID(_unit)] call CBA_fnc_globalEventJIP;
true;
