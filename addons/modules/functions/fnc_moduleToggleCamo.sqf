#include "..\script_component.hpp"
/*
 * Authors: DartRuffian
 * Toggles a unit's active camo.
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
 * _logic call ls_modules_fnc_moduleToggleCamo
 *
 * Public: No
 */

if (canSuspend) exitWith {
    [FUNC(moduleToggleCamo), _this] call CBA_fnc_directCall;
};

params ["_logic"];
TRACE_1("fnc_moduleToggleCamo",_logic);

if (!local _logic) exitWith {};

private _unit = attachedTo _logic;

private _exit = true;
switch (false) do {
    case (!isNull _unit): {
        [_logic, LSTRING(nothingSelected)] call FUNC(errorAndClose);
    };
    case (alive _unit): {
        [_logic, LSTRING(onlyAlive)] call FUNC(errorAndClose);
    };
    default {
        _exit = false;
    }
};

if (_exit) exitWith {};

// This does check the can(De)Activate conditions twice
// But we want to give the zeus feedback if the conditions returns false
// The (de)activate functions also can't return anything since they run local to the unit
private _params = [_unit, true];
if (_unit getVariable [QEGVAR(activeCamo,active), false]) then {
    if (_params call EFUNC(activeCamo,canDeactivate)) then {
        _params call EFUNC(activeCamo,deactivate);
    } else {
        [_logic, "Object cannot deactivate active camo"] call FUNC(errorAndClose);
    };
} else {
    if (_params call EFUNC(activeCamo,canActivate)) then {
        _params call EFUNC(activeCamo,activate);
    } else {
        [_logic, "Object cannot activate active camo"] call FUNC(errorAndClose);
    };
};

deleteVehicle _logic;
