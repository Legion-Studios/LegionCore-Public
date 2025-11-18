#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Disables a unit's flashlight.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 1: Equipment (optional, default: "") <STRING>
 *
 * Return Value:
 * None
 *
 * Example:
 * ls_player call ls_lighting_fnc_disable;
 *
 * Public: Yes
 */

params [
    ["_unit", objNull, [objNull]],
    ["_equipment", "", [""]]
];
TRACE_2("fnc_disable",_unit,_equipment);

if (_equipment == "") then {
    _equipment = _unit call FUNC(getFirstEquipment);
};

private _data = _equipment call FUNC(getEquipmentData);
private _sound = _data get "soundOff";
if (_unit == ls_player and {_sound != ""}) then {
    playSound (_data get "soundOff");
};

CREATE_EVENT_ID(_unit) call CBA_fnc_removeGlobalEventJIP;
[QGVAR(removeLights), _unit] call CBA_fnc_globalEvent;
nil;
