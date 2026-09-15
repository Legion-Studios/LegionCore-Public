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

if (!(hasInterface && alive _object) || _object getVariable [QGVAR(hasReinsertAction), false]) exitWith {};

_object addAction [
    "Request Reinsert", {
        params ["_target", "_caller"];
        private _players = [] call CBA_fnc_players;
        private _playerSide = side group _caller;
        _players = _players select { side group _x == _playerSide && { [_x, "pilot"] call EFUNC(common,checkSkill) } };

        private _locationName = _target getVariable [QGVAR(name), ""];
        if (_locationName == "") then {
            _locationName = _target call BIS_fnc_locationDescription;
        } else {
            _locationname = "at " + _locationName; // TODO: Translate
        };

        [QGVAR(reinsertMessage), [_caller, _locationName], _players] call CBA_fnc_targetEvent;

        _target setVariable [QGVAR(lastUsedTime), CBA_missionTime];
        _target setVariable [QGVAR(activationCooldown), CBA_missionTime + GVAR(reinsertCooldown)];
        _target call FUNC(updateReinsertDisplay);
    }, nil, 100, true, true, "", toString {
        _target call FUNC(updateReinsertDisplay);
        private _cooldown = _target getVariable [QGVAR(activationCooldown), CBA_missionTime];
        _cooldown <= CBA_missionTime;
    }, 5
];

_object addAction [
    localize "STR_3DEN_Display3DENRename_Title_text", {
        params ["_target"];
        private _locationName = _target getVariable [QGVAR(locationName), ""];
        [localize "STR_A3_CombatPatrol_modules_4", _locationName, {
            params ["_ctrl", "_target"];
            private _name = ctrlText _ctrl;
            _target setVariable [QGVAR(name), _name, true];
            private _display = findDisplay (format [QGVAR(reinsertDisplay_%1), hashValue _target]);

            if (count _name > 12) then {
                _name = _name select [0, 12];
                _name = _name + "...";
            };
            (_display displayCtrl IDC_REINSERT_LOCATION) ctrlSetText _name;
            displayUpdate _display;
        }, {}, _target] call EFUNC(common,createEditBox);
    }, nil, 99, true, true, "", toString {
        [_this, "pilot"] call EFUNC(common,checkSkill) || { [_this, "engineer"] call EFUNC(common,checkSkill) }
    }, 5
];

_object setVariable [QGVAR(hasReinsertAction), true];
_object call FUNC(updateReinsertDisplay);
