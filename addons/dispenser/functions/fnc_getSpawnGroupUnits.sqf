#include "..\script_component.hpp"
/*
 * Authors: DartRuffian
 * Returns an array of unit classes from a given spawn group.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Spawn group <STRING|ARRAY>
 *    - String: Spawn group defined in ls_dispenser_groups as "factionClass>>sectionClass>>groupClass"
 *    - Array : Array of unit class names
 *
 * Return Value:
 * Array of unit class names
 *
 * Example:
 * "ls_cis>>cis_baseInfantry>>base_b1_fireteam" call ls_dispenser_fnc_getSpawnGroupUnits
 *
 * Public: No
 */

params ["_spawnGroup"];
TRACE_1("fnc_getSpawnGroupUnits",_spawngroup);

private _return = _spawnGroup;
if (_spawnGroup isEqualType "") then {
    ((toLowerANSI _spawnGroup splitString ">>") apply { _x call CBA_fnc_removeWhitespace}) params ["_faction", "_section", "_group"];
    _return = (((GVAR(groups) get _faction select 2) get _section select 1) get _group) param [2, []];
};
private _cfgVehicles = configFile >> "CfgVehicles";
_return select { isClass (_cfgVehicles >> _x) };
