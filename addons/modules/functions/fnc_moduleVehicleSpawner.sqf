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
 * 1: Affected units <ARRAY>
 * 2: Activated <BOOL>
 *
 * Return Value:
 * None
 *
 * Example:
 * [_logic, [...], true] call ls_modules_fnc_moduleVehicleSpawners
 *
 * Public: No
 */

if (canSuspend) exitWith {
    [FUNC(moduleVehicleSpawner), _this] call CBA_fnc_directCall;
};

params ["_logic", "_objects", "_activated"];
TRACE_2("fnc_moduleVehicleSpawner",_logic,_activated);

if !(isServer && _activated) exitWith {};

// Filter out the trigger to activate the module
if (_objects isEqualTo []) exitWith {
    ERROR_1("VehicleSpawner '%1' has no non-Trigger synchronized objects!",_logic);
};

_objects = _objects select { alive _x };
if (_objects isEqualTo []) exitWith {}; // Objects were destroyed before being activated

_logic setVariable [QGVAR(vehicleSpawnerObjects), _objects];

{
    private _spawners = _x getVariable [QGVAR(vehicleSpawners), []];
    _spawners pushBack _logic;
    _x setVariable [QGVAR(vehicleSpawners), _spawners];

    private _fnc_cleanup = {
        params ["_object"];
        private _spawners = _object getVariable [QGVAR(vehicleSpawners), []] select { !isNull _x };
        if (_spawners isEqualTo []) exitWith {};

        // Disable spawners that have no more alive objects
        {
            private _objects = (_x getVariable [QGVAR(vehicleSpawnerObjects), []]) select { alive _x };
            if (_objects isEqualTo []) then {
                TRACE_CHAT_1("Deactivated vehicle spawner",_x);
                deleteVehicle _x;
            };
        } forEach _spawners;
    };
    _x addEventHandler ["Killed", _fnc_cleanup];
    _x addEventHandler ["Deleted", _fnc_cleanup];
} forEach _objects;

_logic call FUNC(vehicleSpawnerLoop);
