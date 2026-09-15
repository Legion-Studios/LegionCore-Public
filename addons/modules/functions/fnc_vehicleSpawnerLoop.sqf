#include "..\script_component.hpp"
/*
 * Authors: DartRuffian
 * Handles the vehicle spawner loop.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Module <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * _logic call ls_modules_fnc_vehicleSpawnerLoop
 *
 * Public: No
 */

#define PFH_INTERVAL 1

params ["_logic"];
TRACE_1("fnc_vehicleSpawnerLoop",_logic);

private _spawnTrigger = _logic getVariable [QGVAR(spawnTrigger), "WaveDestroyed"];
private _spawnDelay = _logic getVariable [QGVAR(spawnDelay), SPAWN_DELAY_DEFAULT];
private _waveSize = (_logic getVariable [QGVAR(waveSize), WAVE_SIZE_DEFAULT]) max 1;
private _vehicleTypes = _logic getVariable [QGVAR(vehicleTypes), VEHICLE_TYPES_DEFAULT];
_vehicleTypes = _vehicleTypes apply { _x select 1 }; // Grab vehicle class names, we don't need the tree paths
_vehicleTypes = _vehicleTypes select { _x != "" };
private _executeCode = compile (_logic getVariable [QGVAR(executeCode), ""]);
private _rallyPoint = _logic getVariable [QGVAR(rallyPoint), ZEN_POINT_NONE];

TRACE_CHAT_6("Added vehicle spawner",_spawnTrigger,_spawnDelay,_waveSize,_vehicleTypes,_executeCode,_rallyPoint);

if (_vehicleTypes isEqualTo []) exitWith {
    ERROR_1("Module '%1' has empty vehicleTypes",_logic);
};

private _currentSpawners = GVAR(vehicleSpawners) apply { _x select 0 };
if (_logic in _currentSpawners) then {
    private _index = _currentSpawners find _logic;
    private _isActive = (GVAR(vehicleSpawners) select _index) select 1;
    INFO_1("Module '%1' is already a vehicle spawner, updating parameters",_logic);
    GVAR(vehicleSpawners) set [_index, [_logic, _isActive, _spawnTrigger, _spawnDelay, _waveSize, _vehicleTypes, _executeCode, _rallyPoint]];
} else {
    GVAR(vehicleSpawners) pushBack [_logic, true, _spawnTrigger, _spawnDelay, _waveSize, _vehicleTypes, _executeCode, _rallyPoint];
};

if (missionNamespace getVariable [QGVAR(vehicleSpawnerLoopRunning), false]) exitWith {};
missionNamespace setVariable [QGVAR(vehicleSpawnerLoopRunning), true, true];

[{
    if (isGamePaused) exitWith {};

    params ["", "_handle"];
    if (GVAR(vehicleSpawners) isEqualTo []) exitWith {
        _handle call CBA_fnc_removePerFrameHandler;
        missionNamespace setVariable [QGVAR(vehicleSpawnerLoopRunning), nil, true];
    };

    {
        _x params ["_logic", "_spawnerActive", "_spawnTrigger", "_spawnDelay", "_waveSize", "_vehicleTypes", "_executeCode", "_rallyPoint"];
        if (isNull _logic) then { GVAR(vehicleSpawners) deleteAt _forEachIndex; continue };
        if (!_spawnerActive) then { continue }; //  API

        private _canSpawn = switch (_spawnTrigger) do {
            case "WaveDestroyed": {
                _logic getVariable [QGVAR(nextVehicleSpawnTime), 0] <= CBA_missionTime && {
                    ((_logic getVariable [QGVAR(vehicleSpawnerVehicles), []]) select { alive _x }) isEqualTo [];
                };
            };
            case "Continious": {
                if (_logic getVariable [QGVAR(nextVehicleSpawnTime), 0] <= CBA_missionTime) then {
                    _logic setVariable [QGVAR(nextVehicleSpawnTime), CBA_missionTime + _spawnDelay];
                    true;
                } else {
                    false
                };
            };
        };

        if (!_canSpawn) then { continue };

        private _spawnCode = {
            params ["_logic", "_spawnedVehicles", "_vehicleTypes", "_spawnTrigger", "_rallyPoint"];
            private _vehicleClass = selectRandom _vehicleTypes;
            private _offset = 5 * sizeOf _vehicleClass;

            // Using "FLY" mode in createVehicle causes them to all spawn at the same point and explode
            // Manually add some offset
            private _positionATL = (getPosATL _logic);
            private _direction = (getDir _logic) + (-10 + random 20); // +- 10 degrees

            private _mode = "NONE";

            // Give air vehicles more offset, and vertical offset
            private _isAir = _vehicleClass isKindOf "Air";
            if (_isAir) then {
                _mode = "FLY";
                _offset = 20 * sizeOf _vehicleClass;
                _positionATL = _positionATL vectorAdd [
                    -_offset + random 2 * _offset,
                    -_offset + random 2 * _offset,
                    random _offset
                ];
            } else {
                _positionATL = _positionATL vectorAdd [
                    -_offset + random 2 * _offset,
                    -_offset + random 2 * _offset,
                    0
                ];
            };

            private _vehicle = createVehicle [_vehicleClass, _positionATL, [], 0, _mode];
            _vehicle setPosATL _positionATL;
            _vehicle setVariable [QGVAR(vehicleSpawnerModule), _logic];
            _spawnedVehicles pushBack _vehicle;

            if (_spawnTrigger == "WaveDestroyed") then {
                private _fnc_cleanup = {
                    params ["_vehicle"];
                    private _logic = _vehicle getVariable [QGVAR(vehicleSpawnerModule), objNull];
                    if (isNull _logic) exitWith {};

                    private _waveVehicles = (_logic getVariable [QGVAR(vehicleSpawnerVehicles), []]);
                    _waveVehicles deleteAt (_waveVehicles find _vehicle);

                    if (_waveVehicles isEqualTo []) then {
                        _logic setVariable [QGVAR(nextVehicleSpawnTime), CBA_missionTime + (_logic getVariable [QGVAR(spawnDelay), SPAWN_DELAY_DEFAULT])];
                    };
                };
                _vehicle addEventHandler ["Killed", _fnc_cleanup];
                _vehicle addEventHandler ["Deleted", _fnc_cleanup];
            };

            _vehicle setDir _direction;
            createVehicleCrew _vehicle;
            _vehicle engineOn true;

            if (_isAir) then {
                private _maxSpeed = (getNumber (configOf _vehicle >> "maxSpeed")) / 10;
                _vehicle setVelocityModelSpace [0, _maxSpeed, 0];
            };

            if ("zen_position_logics" call EFUNC(common,isModLoaded)) then {
                private _point = ["zen_modules_moduleCreateRP", _rallyPoint] call zen_position_logics_fnc_select;
                if (!isNull _point) then {
                    TRACE_CHAT_1("Moving to rally point",_point);
                    (group driver _vehicle) addWaypoint [ASLToAGL getPosASL _point, 10];
                };
            };
        };

        private _spawnedVehicles = _logic getVariable [QGVAR(vehicleSpawnerVehicles), []];
        _logic setVariable [QGVAR(vehicleSpawnerVehicles), _spawnedVehicles]; // Set in case the variable wasn't defined

        // Spread load over 1/2 of pfh interval time
        private _interval = (PFH_INTERVAL / 2) / _waveSize;
        for "_i" from 0 to (_waveSize - 1) do {
            [_spawnCode, [_logic, _spawnedVehicles, _vehicleTypes, _spawnTrigger, _rallyPoint], _i * _interval] call CBA_fnc_waitAndExecute;
        };

        // Run wave spawn code after everything has been spawned
        if (_executeCode isNotEqualTo {}) then {
            [_executeCode, [_logic, _spawnedVehicles, _spawnTrigger, _spawnDelay], PFH_INTERVAL / 2] call CBA_fnc_waitAndExecute;
        };
    } forEachReversed GVAR(vehicleSpawners);
}, PFH_INTERVAL] call CBA_fnc_addPerFrameHandler;
