#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Activates a droid dispenser from the client.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: The droid dispenser <OBJECT>
 * 1: Spawn group <STRING|ARRAY>
 *    - String: Spawn group defined in ls_dispenser_groups as "factionClass>>sectionClass>>groupClass"
 *    - Array : Array of unit class names
 *
 * Return Value:
 * None
 *
 * Example:
 * [_dispenser, "ls_cis>>cis_baseInfantry>>base_b1_fireteam"] call ls_dispenser_fnc_activate;
 * [_dispenser, ["ls_droid_b1", "ls_droid_b2"]] call ls_dispenser_fnc_activate;
 *
 * Public: Yes
 */

params [
    ["_dispenser", objNull, [objNull]],
    ["_spawnGroup", "", ["", []]]
];
TRACE_2("fnc_activate",_dispenser,_spawnGroup);

if (!alive _dispenser || _dispenser getVariable [QGVAR(active), false]) exitWith {};

if !(_dispenser isKindOf "ls_droidDispenser_base") exitWith {
    WARNING_1("Tried to activate incompatible droid dispenser: %1",typeOf _dispenser);
};

[{ CBA_missionTime > 3 }, {
    (_this select 0) say3D [QGVAR(buttonPress), 40, 1, 2];
    [QGVAR(activate), _this] call CBA_fnc_serverEvent;
}, [_dispenser, _spawnGroup]] call CBA_fnc_waitUntilAndExecute;
