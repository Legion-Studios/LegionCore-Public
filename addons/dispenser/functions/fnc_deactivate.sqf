#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Deactivates a droid dispenser from the client.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: The droid dispenser <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * _dispenser call ls_dispenser_fnc_deactivate;
 *
 * Public: Yes
 */

params [
    ["_dispenser", objNull, [objNull]]
];
TRACE_1("fnc_deactivate",_dispenser);

if !(_dispenser isKindOf "ls_droidDispenser_base") exitWith {
    WARNING_1("Tried to deactivate incompatible droid dispenser: %1",typeOf _dispenser);
};

if !(_dispenser getVariable [QGVAR(active), false]) exitWith {};

_dispenser say3D [QGVAR(buttonPress), 40, 1, 2];
[QGVAR(deactivate), [_dispenser]] call CBA_fnc_serverEvent;
