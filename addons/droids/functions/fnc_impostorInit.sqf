#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Initalizes an impostor unit.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * _unit call ls_droids_fnc_impostorInit;
 *
 * Public: No
 */

params ["_unit"];
TRACE_1("fnc_impostorInit",_unit);

if (!local _unit) exitWith {};

// Only has "actual" players not Zeus controlled units
private _players = ([] call CBA_fnc_players) - ([] call BIS_fnc_listCuratorPlayers);

#ifdef DEBUG_MODE_FULL
// If debug, re-add zeuses for convienience
_players append ([] call BIS_fnc_listCuratorPlayers);
#endif

if (_players isEqualTo []) exitWith {};
private _player = selectRandom _players;

[_unit, (_player call CBA_fnc_getLoadout)] call CBA_fnc_setLoadout;
[QEGVAR(common,setFace), [_unit, "ls_bxDroid"]] call CBA_fnc_globalEvent;

if (missionNamespace getVariable ["ace_nametags_showPlayerNames", false]) then {
    // ACE sets ACE_name(Raw) one frame after unit is spawned, so we need to add a small delay
    [{
        params ["_unit", "_player"];
        private _name = _player call ace_common_fnc_getName;
        private _rawName = [_player, false, true] call ace_common_fnc_getName;
        _unit setVariable ["ace_name", _name, true];
        _unit setVariable ["ace_nameRaw", _rawName, true];
        _unit setVariable ["ace_setCustomName", true, true]; // Prevent the name being reset when changing units (e.g. zeus control)
    }, [_unit, _player], 0.5] call CBA_fnc_waitAndExecute;

    _unit setVariable ["ace_nametags_forceShowTags", true, true];

    // forceShowTags bypasses alive check, so reset on Killed
    _unit addEventHandler ["Killed", {
        params ["_unit"];
        _unit setVariable ["ace_nametags_forceShowTags", nil, true];
    }];
};
