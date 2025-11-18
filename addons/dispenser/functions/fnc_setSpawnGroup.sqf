#include "..\script_component.hpp"
/*
 * Authors: DartRuffian
 * Sets the spawn group for a droid dispenser. Handles changing the side of the dispenser if needed.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Dispenser <OBJECT>
 * 1: Spawn group <STRING|ARRAY>
 *    - String: Spawn group defined in ls_dispenser_groups as "factionClass>>sectionClass>>groupClass"
 *    - Array : Array of unit class names
 *
 * Return Value:
 * None
 *
 * Example:
 * [_dispenser, "ls_cis>>cis_baseInfantry>>base_b1_fireteam"] call ls_dispenser_fnc_setSpawnGroup;
 * [_dispenser, ["ls_droid_b1", "ls_droid_b2"]] call ls_dispenser_fnc_setSpawnGroup;
 *
 * Public: Yes
 */

params [
    ["_dispenser", objNull, [objNull]],
    ["_spawnGroup", "", ["", []]]
];
TRACE_2("fnc_setSpawnGroup",_dispenser,_spawnGroup);

if (!alive _dispenser) exitWith {};

if (!isServer) exitWith {
    [QGVAR(setSpawnGroup), _this] call CBA_fnc_serverEvent;
};

_spawnGroup = [_spawnGroup] call FUNC(getSpawnGroupUnits); // Could be an array, so needs the []
if (_spawnGroup isEqualTo []) exitWith {};

_dispenser setVariable [QGVAR(unitTypes), _spawnGroup];

private _side = (getNumber (configFile >> "CfgVehicles" >> (_spawnGroup select 0) >> "side")) call BIS_fnc_sideType;

// Make dispenser the same side as the units its spawning
if (side group driver _dispenser != _side) then {
    deleteVehicleCrew _dispenser;
    _side createVehicleCrew _dispenser;
};

private _group = createGroup [_side, true];
_dispenser setVariable [QGVAR(side), _side];
_dispenser setVariable [QGVAR(group), _group];
PATROL(_group,_dispenser);
