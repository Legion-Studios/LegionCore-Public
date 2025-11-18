#include "..\script_component.hpp"
/*
* Authors: DartRuffian
* Pickup statement for the bounty puck.
*
* Please provide proper credits to those who participate in development.
* This function was developed for the 101st Doom Battalion, and used in Legion Studios: Core with permission.
* Do not place in any other mod without permission.
*
* Arguments:
* 0: Unit <OBJECT>
* 1: Object <OBJECT>
* 2: Item class <STRING>
*
* Return Value:
* None
*
* Public: No
*/

params ["", "_object"];
TRACE_1("fnc_bountyPuck_pickup",_object);

_object setVariable [QGVAR(pfhRunning), false];
[QGVAR(deactivated), [_object]] call CBA_fnc_localEvent;

[{_this setVariable [QEGVAR(common,pickupReady), true];}, _object] call CBA_fnc_execNextFrame;
