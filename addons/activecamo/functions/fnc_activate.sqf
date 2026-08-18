#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Activates active camo for an object.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Unit or vehicle <OBJECT>
 * 1: Is curator (optional, default: false) <BOOL>
 *    - If true, some conditions are skipped
 *
 * Return Value:
 * True if camo was activated, otherwise false <BOOL>
 * **Only accessible where unit is local**
 *
 * Example:
 * player call ls_activeCamo_fnc_activate;
 * [player, true] call ls_activeCamo_fnc_activate;
 *
 * Public: Yes
 */

params [
    ["_object", objNull, [objNull]],
    ["_isCurator", false, [false]]
];
TRACE_2("fnc_activate",_object,_isCurator);

if (!local _object) exitWith {
    [QGVAR(activate), _this, _object] call CBA_fnc_targetEvent;
};
if (!([_object, _isCurator] call FUNC(canActivate))) exitWith { false };

_object setVariable [QGVAR(active), true, true];

// Set old camo trait; sometimes returns nil, so default to 1
private _oldCoef = [_object getUnitTrait "camouflageCoef"] param [0, 1];
_object setVariable [QGVAR(oldCamouflageCoef), _oldCoef, true];

private _return = true;
private _eventName = QGVAR(activated);
private _eventParams = [_object];

if (_object isKindOf "CAManBase") then {
    _return = _object call FUNC(activateUnit);
} else {
    _return = _object call FUNC(activateVehicle);
    _eventName = QGVAR(activatedVehicle);
};

[_eventName, _eventParams] call CBA_fnc_localEvent;
_return;
