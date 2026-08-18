#include "..\script_component.hpp"
/*
 * Authors: DartRuffian
 * Drops a mortar round and creates/activates a droid dispenser when the round explodes.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Dispenser params <HASHMAP>
 *    - "spawnGroup" <STRING|ARRAY>
 *    - "spawnLimit" <NUMBER>
 *    - "dispenserClass" <STRING>
 *    - "ammoClass" <STRING>
 * 1: PositionATL <ARRAY>
 * 2: Velocity (optional, default: [0, 0, -100]) <ARRAY>
 *
 * Return Value:
 * The created projectile <OBJECT>
 *
 * Example:
 * [createHashMapFromArray [
 *     ["spawnGroup", "ls_cis>>cis_baseInfantry>>base_b1_fireteam"],
 * ], [0, 0, 1000]] call ls_dispenser_fnc_dropDispenser;
 * [createHashMapFromArray [
 *     ["spawnGroup", ["ls_droid_b1", "ls_droid_b2"]],
 *     ["spawnLimit", 3],
 *     ["dispenserClass", "ls_droidDispenser"],
 *     ["ammoClass", "ls_dispenser_ordnance"]
 * ], [0, 0, 1000]] call ls_dispenser_fnc_dropDispenser;
 *
 * Public: Yes
 */

#define DISPENSER_DEFAULT "ls_droidDispenser"
#define AMMO_DEFAULT QGVAR(ordnance)

// Using a hashmap does make this slightly more annoying to call, but makes it easy to edit parameters in the future
// The arguments can also be passed in any order

params [
    ["_dispenserParams", createHashMap, [createHashMap]],
    ["_positionATL", [], [[]]],
    ["_velocity", [0, 0, -100], [[]]]
];
TRACE_3("fnc_dropDispenser",_dispenserParams,_positionATL,_velocity);

if (!isServer) exitWith {
    [QGVAR(dropDispenser), _this] call CBA_fnc_serverEvent;
};

private _spawnGroup = _dispenserParams getOrDefault ["spawnGroup", []];

if (_spawnGroup isEqualTo "" || _spawnGroup isEqualTo [] || _positionATL isEqualTo []) exitWith {};

private _dispenserClass = _dispenserParams getOrDefault ["dispenserClass", DISPENSER_DEFAULT];
private _ammoClass = _dispenserParams getOrDefault ["ammoClass", AMMO_DEFAULT];
private _spawnLimit = _dispenserParams getOrDefault ["spawnLimit", SPAWN_LIMIT_DEFAULT];

if (!isClass (configFile >> "CfgVehicles" >> _dispenserClass)) then {
    WARNING_2("Dispenser class '%1' does not exist! Defaulting to '%2'.",_dispenserClass,DISPENSER_DEFAULT);
    _dispenserClass = DISPENSER_DEFAULT;
};

if (!isClass (configFile >> "CfgAmmo" >> _ammoClass)) then {
    WARNING_2("Ammo class '%1' does not exist! Defaulting to '%2'.",_ammoClass,AMMO_DEFAULT);
    _ammoClass = AMMO_DEFAULT;
};

private _projectile = createVehicle [_ammoClass, _positionATL, [], 0, "NONE"];
_projectile setPosATL _positionATL;
_projectile setVelocity _velocity;

// Takes ASL, but just needs to be close enough to attach properly
private _dummyDispenser = createSimpleObject [_dispenserClass, _positionATL, false];
_dummyDispenser attachTo [_projectile, [0, 0, 0]];
[{ _this setVectorDirAndUp [[0, -4.37114e-08, 1], [0, -1, -4.37114e-08]] }, _dummyDispenser, 0.1] call CBA_fnc_waitAndExecute; // Fix rotation

_projectile setVariable [QGVAR(dispenserData), [[0, 0, 0], _dispenserClass, _spawnGroup, _spawnLimit, _dummyDispenser]];
_projectile addEventHandler ["Explode", {
    params ["_projectile"];
    private _positionASL = getPosASL _projectile;
    [QEGVAR(common,shakeZeusCamera), [0.01, 0.7, ASLToAGL _positionASL, 300]] call CBA_fnc_globalEvent;

    private _params = _projectile getVariable QGVAR(dispenserData);
    _params set [0, _positionASL]; // Failsafe so we have the position if the projectile is deleted quickly
    [LINKFUNC(initDispenserOrdnance), _params, 2] call CBA_fnc_waitAndExecute;
}];

_projectile;
