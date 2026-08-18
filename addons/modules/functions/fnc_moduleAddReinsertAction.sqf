#include "..\script_component.hpp"
/*
 * Authors: DartRuffian
 * Adds the reinsert terminal action to the synchronized / attached object(s). Works for JIP clients.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Logic <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * _logic call ls_modules_fnc_moduleAddReinsertAction
 *
 * Public: No
 */

if (canSuspend) exitWith {
    [FUNC(moduleAddReinsertAction), _this] call CBA_fnc_directCall;
};

params ["_logic"];
TRACE_1("fnc_moduleAddReinsertAction",_logic);

// synchronizedObjects is local arg, so we have to (annoyingly) run this only where the logic is local and then broadcast the addAction
if (!local _logic) exitWith {};

// Eden
private _objects = synchronizedObjects _logic;

// Zeus
private _attached = attachedTo _logic;
if (!isNull _attached) then {
    _objects pushBack _attached;
};

if ([] call EFUNC(common,inZeus)) then {
    switch (false) do {
        case (_objects isNotEqualTo []): {
            [_logic, LSTRING(nothingSelected)] call FUNC(errorAndClose);
        };
        default {
            [objNull, LLSTRING(addedReinsertAction)] call BIS_fnc_showCuratorFeedbackMessage;
        };
    };
};

{
    private _jipID = [QEGVAR(props,initReinsertTerminal), _x] call CBA_fnc_globalEventJIP;
    [_jipID, _x] call CBA_fnc_removeGlobalEventJIP;
} forEach _objects;

deleteVehicle _logic;
