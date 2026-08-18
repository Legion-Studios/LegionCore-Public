#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Deactivates a droid dispenser on the server's end.
 * Server execution only, no effect when run on the client.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: The droid dispenser <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * _dispenser call ls_dispenser_fnc_deactivateServer;
 *
 * Public: No
 */

params ["_dispenser"];
TRACE_1("fnc_deactivateServer",_dispenser);

if (!isServer) exitWith {};

GVAR(dispensers) deleteAt (GVAR(dispensers) find _dispenser);

private _selection = ((_dispenser call FUNC(getDispenserData)) select 3) select 0;
_dispenser setObjectTextureGlobal [_selection, "#reset"];

_dispenser setVariable [QGVAR(active), nil, true];
nil;
