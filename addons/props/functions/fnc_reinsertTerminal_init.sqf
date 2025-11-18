#include "..\script_component.hpp"
/*
 * Authors: DartRuffian
 * Adds a user action to an object that will notify pilots that there are reinserts ready.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Argument (optional, default: value) <OBJECT>
 *
 * Return Value:
 * Return description <NONE>
 *
 * Example:
 * this call ls_props_fnc_reinsertTerminal_init
 *
 * Public: Yes
 */

params [["_object", objNull, [objNull]]];
TRACE_1("fnc_reinsertTerminal_init",_object);

if !(hasInterface && alive _object) exitWith {};

_object addAction [
    "Notify Pilots", {
        params ["_target", "_caller"];
        private _players = [] call CBA_fnc_players;
        private _playerSide = side group _caller;
        _players = _players select { side group _x == _playerSide && { [_x, "pilot"] call EFUNC(common,getSkill) } };

        [QEGVAR(common,notify), format [
            GVAR(reinsertMessage), _caller getVariable ["ace_nameRaw", name _caller], groupId group _caller
        ], _players] call CBA_fnc_targetEvent;

        _target setVariable [QGVAR(activationCooldown), CBA_missionTime + GVAR(reinsertCooldown)];
    }, nil, 1.5, true, true, "", toString {
        private _cooldown = _target getVariable [QGVAR(activationCooldown), CBA_missionTime];
        _cooldown <= CBA_missionTime;
    }, 5
];
