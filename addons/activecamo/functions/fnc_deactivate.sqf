#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Deactivates active camo for a unit.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Unit or vehicle <OBJECT>
 *
 * Return Value:
 * True if camo was deactivated, otherwise false <BOOL>
 * **Only accessible where unit is local**
 *
 * Example:
 * player call ls_activeCamo_fnc_deactivate;
 *
 * Public: Yes
 */

params [["_object", objNull, [objNull]]];
TRACE_1("fnc_deactivate",_object);

if (!local _object) exitWith {
    [QGVAR(deactivate), _this, _object] call CBA_fnc_targetEvent;
};
if (!(_object call FUNC(canDeactivate))) exitWith { false };

_object setVariable [QGVAR(active), nil, true];

private _return = true;
private _eventName = QGVAR(activated);
private _eventParams = [_object];

if (_object isKindOf "CAManBase") then {
    _return = _object call FUNC(deactivateUnit);
} else {
    _return = _object call FUNC(deactivateVehicle);
    _eventName = QGVAR(deactivatedVehicle);
};

// Set camo trait
private _oldSkill = _object getVariable [QGVAR(oldCamouflageCoef), 1];
[QEGVAR(common,setUnitTrait), [_object, "camouflageCoef", _oldSkill]] call CBA_fnc_localEvent;

[_eventName, _eventParams] call CBA_fnc_localEvent;
_return
