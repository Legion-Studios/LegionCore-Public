#include "..\script_component.hpp"
/*
 * Authors: DartRuffian
 * Orders a unit to mount a selected AT-RT.
 *
 * Arguments:
 * 0: Logic <OBJECT>
 * 1: Affected units (unused) <ARRAY>
 * 2: Activated <BOOL>
 *
 * Return Value:
 * None
 *
 * Example:
 * [_logic, [], true] call ls_modules_fnc_moduleDismountATRT
 *
 * Public: No
 */

if (canSuspend) exitWith {
    [FUNC(moduleDismountATRT), _this] call CBA_fnc_directCall;
};

params ["_logic", "", "_activated"];
TRACE_2("fnc_moduleDismountATRT",_logic,_activated);

private _unit = attachedTo _logic;
if (!_activated) exitWith {};

deleteVehicle _logic;

if (isNull _unit) exitWith { [LSTRING(nothingSelected), _logic] call FUNC(errorAndClose) };

// Always get the AT-RT regardless if it was placed on the AT-RT or the rider
TRACE_CHAT_1("",typeOf _unit);
_unit = _unit getVariable [QEGVAR(vehicles,atrt_riding), _unit];
TRACE_CHAT_1("",typeOf _unit);

// AT-RT checks
private _exit = true;
switch (false) do {
    case (!isNull _unit): {
        [LSTRING(nothingSelected), _logic] call FUNC(errorAndClose);
    };
    case (_unit call EFUNC(common,isAwake)): {
        [LSTRING(onlyConscious), _logic] call FUNC(errorAndClose);
    };
    default {
        _exit = false;
    };
};

if (_exit) exitWith {};

if !(_unit isKindOf "ls_vehicle_atrt_base") exitWith {
    [LSTRING(onlyATRTorRider), _logic] call FUNC(errorAndClose);
};

// TODO: Add CBA event for dismount AT-RT
_unit call EFUNC(vehicles,atrt_dismount);
