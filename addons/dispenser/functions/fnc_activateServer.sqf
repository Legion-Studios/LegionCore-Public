#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Activates a droid dispenser on the server's end.
 * Server execution only, no effect when run on the client.
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
 * _dispenser call ls_droidDispenser_fnc_activateServer;
 *
 * Public: No
 */

params ["_dispenser"];
TRACE_1("fnc_activateServer",_dispenser);

if (!isServer) exitWith {};

_dispenser setObjectTextureGlobal ["camo2", "#(rgb,8,8,3)color(0.9,0,0.2,0.7)"];
_dispenser setVariable [QGVAR(active), true, true];

private _group = createGroup [east, true];

private _function = {
    params ["_dispenser", "_group"];
};

private _condition = {
    params ["_dispenser"];
    _dispenser getVariable [QGVAR(active), false] and {alive _dispenser};
};

private _exitCode = {
    params ["_dispenser"];
    _dispenser setVariable [QGVAR(active), false, true];
};

[_function, _condition, _exitCode, 5, [_dispenser, _group]] call EFUNC(common,tempPFH);
nil;