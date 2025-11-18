#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Adds handlers for specific events to play animations on a unit in a vehicle.
 * Used for things like a character reload animation on a turret.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * _vehicle call ls_common_fnc_addAnimationHandlers;
 *
 * Public: No
 */

params ["_vehicle"];
TRACE_1("fnc_addAnimationHandlers",_vehicle);

if (_vehicle isKindOf "CAManBase") exitWith {};

private _triggers = configProperties [
    configOf _vehicle >> "ls_animations",
    "true",
    true
] select {
    getText _x != "";
};

{
    private _event = configName _x;

    private _code = switch (_event) do {
        case "reloaded": {
            {
                #pragma hemtt ignore_variables ["_thisEvent"];
                params ["_vehicle", "", "", "_newMag"];
                // EH doesn't give the unit who reloaded the mag, just what the EH is assigned to.
                // As a workaround, check if current magazine of each turret matches the newly loaded one.
                {
                    _x params ["_unit", "_role", "", "_turretPath", "_personTurret"];
                    TRACE_4("inner loop",_unit,_role,_turretPath,_personTurret);
                    if (_role == "cargo" || _personTurret) then { continue; };

                    private _magazine = _vehicle currentMagazineTurret _turretPath;
                    if (_magazine == _newMag#0) exitWith {
                        private _animation = getText (configOf _vehicle >> "ls_animations" >> _thisEvent);
                        [_unit, _animation, 2] call EFUNC(common,doAnimation);
                    };
                } forEach (fullCrew _vehicle);
            };
        };
        default { {} };
    };

    if (_code isNotEqualTo {}) then {
        _vehicle addEventHandler [_event, _code];
    };
} forEach _triggers;
nil;
