#include "..\script_component.hpp"
/*
 * Authors: DartRuffian
 * Initializes an AT-RT.
 *
 * Arguments:
 * 0: AT-RT <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * _atrt call ls_vehicles_fnc_atrt_init
 *
 * Public: No
 */

params ["_atrt"];
TRACE_1("fnc_atrt_init",_atrt);

if (hasInterface) then {
    _atrt addAction [localize "STR_state_getIn", {
            params ["_atrt", "_unit"];
            [_unit, _atrt] call FUNC(atrt_mount);
        }, [], 1000, true, true, "", toString {
            [ls_player, _originalTarget] call FUNC(atrt_canMount)
        }, 4
    ];
    _atrt addAction [localize "STR_state_getOut", {
            (_this select 0) call FUNC(atrt_dismount);
        }, [], 1000, false, true, "GetOut", toString {
            [ls_player, _originalTarget] call FUNC(atrt_canDismount)
        }, 4
    ];

    // In case the AT-RT gets stuck
    _atrt addAction [LELSTRING(common,pickUp), {
            [ls_player, (_this select 0)] call FUNC(atrt_carry);
        }, [], 999, true, true, "", toString {
            [ls_player, _originalTarget] call FUNC(atrt_canCarry)
        }, 4
    ];
};

[{
    // Needs to done via script, ACE assumes all units are carryable
    _this setVariable ["ace_dragging_canDrag", false];
    _this setVariable ["ace_dragging_canCarry", false];
}, _atrt] call CBA_fnc_execNextFrame;

if (!local _atrt) exitWith {};

// initPost runs after CuratorObjectPlaced, so set the correct animation based on whether the AT-RT has a rider or not
private _rider = _atrt getVariable [QGVAR(atrt_rider), objNull];
if (isNull _rider) then {
    [_atrt, "atrt_sitIdle", 2] call EFUNC(common,doAnimation);

    // setCaptive to make enemy AI ignore the AT-RT when there's no driver
    [_atrt, "setCaptive", QGVAR(atrt_hasRider), true] call CBA_fnc_setStatusEffect;
};

// TODO: Think of a better solution to hide certain actions, can't be claimed as people need to treat it with ace med
if (missionNamespace getVariable ["ace_common", false]) then {
    // [_atrt, _atrt] call ace_common_fnc_claimSafeServer; // Claim itself to prevent ACE interacting
};

_atrt setVariable ["lambs_danger_disableAI", true, true];
_atrt enableStamina false;
// TODO: Disable ACE stamina?

// Prevent the AT-RT from turning on its flashlight automatically at night
_atrt setVariable [QEGVAR(lighting,aiAllowFlashlight), false, 2];
