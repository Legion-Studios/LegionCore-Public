#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Initializes the "Vehicle Spawner" Zeus module display.
 *
 * Arguments:
 * 0: Dummy control group <CONTROL>
 * 1: Base class (optional, default: "" for all vehicles) <STRING>
 *
 * Return Value:
 * None
 *
 * Example:
 * _ctrl call ls_modules_fnc_ui_breahDoor
 *
 * Public: No
 */

params ["_ctrl", ["_baseClass", ""]];
private _display = ctrlParent _ctrl;

_ctrl ctrlRemoveAllEventHandlers "SetFocus";

private _logic = GET_CURRENT_TARGET;
private _unit = attachedTo _logic;

private _exit = true;
switch (false) do {
    case (!isNull _unit): {
        [LSTRING(nothingSelected), _logic, _display] call FUNC(errorAndClose);
    };
    case (alive _unit): {
        [LSTRING(onlyAlive), _logic, _display] call FUNC(errorAndClose);
    };
    default {
        _exit = false;
    };
};

if (_exit) exitWith {};

private _tree = (_display displayCtrl IDC_VEHICLETYPES) controlsGroupCtrl IDC_VALUE;
[_tree, _baseClass] call FUNC(populateVehicleTypes);

// Load existing values if editing an already placed module
private _ctrlSpawnTrigger = (_display displayCtrl IDC_SPAWNTRIGGER) controlsGroupCtrl IDC_VALUE;
private _spawnTrigger = _logic getVariable [QGVAR(spawnTrigger), "WaveDestroyed"];
_ctrlSpawnTrigger lbSetCurSel (["WaveDestroyed", "Continious"] find _spawnTrigger);

private _ctrlSpawnDelayGroup = (_display displayCtrl IDC_SPAWNDELAY);
private _ctrlSpawnDelay = _ctrlSpawnDelayGroup controlsGroupCtrl IDC_VALUE;
private _spawnDelay = _logic getVariable [QGVAR(spawnDelay), SPAWN_DELAY_DEFAULT];
_ctrlSpawnDelay sliderSetPosition _spawnDelay;
[_ctrlSpawnDelay, _spawnDelay] call (_ctrlSpawnDelayGroup getVariable QGVAR(sliderTime_onSliderPosChanged));

private _ctrlWaveSize = (_display displayCtrl IDC_WAVESIZE) controlsGroupCtrl IDC_VALUE;
private _waveSize = _logic getVariable [QGVAR(waveSize), WAVE_SIZE_DEFAULT];
_ctrlWaveSize ctrlSetText (str _waveSize);

private _ctrlVehicleTypes = (_display displayCtrl IDC_VEHICLETYPES) controlsGroupCtrl IDC_VALUE;
private _vehicleTypePaths = (_logic getVariable [QGVAR(vehicleTypes), VEHICLE_TYPES_DEFAULT]) apply { _x select 0 };
[_ctrlVehicleTypes, true, _vehicleTypePaths] call EFUNC(common,tvSetSelected);

private _ctrlExecuteCode = (_display displayCtrl IDC_CODE) controlsGroupCtrl IDC_VALUE;
private _executeCode = _logic getVariable [QGVAR(executeCode), ""];
_ctrlExecuteCode ctrlSetText _executeCode;


private _fnc_onConfirm = {
    params [["_ctrlButtonOK", controlNull, [controlNull]]];

    private _display = ctrlParent _ctrlButtonOK;
    private _logic = GET_CURRENT_TARGET;
    private _object = attachedTo _logic;

    if (isNull _logic || isNull _display || !alive _object) exitWith {};

    private _ctrlSpawnTrigger = (_display displayCtrl IDC_SPAWNTRIGGER) controlsGroupCtrl IDC_VALUE;
    private _spawnTrigger = _ctrlSpawnTrigger lbData (lbCurSel _ctrlSpawnTrigger);
    _logic setVariable [QGVAR(spawnTrigger), _spawnTrigger, 2];

    private _ctrlSpawnDelay = (_display displayCtrl IDC_SPAWNDELAY) controlsGroupCtrl IDC_VALUE;
    _logic setVariable [QGVAR(spawnDelay), sliderPosition _ctrlSpawnDelay, 2];

    private _ctrlWaveSize = (_display displayCtrl IDC_WAVESIZE) controlsGroupCtrl IDC_VALUE;
    _logic setVariable [QGVAR(waveSize), parseNumber (ctrlText _ctrlWaveSize), 2];

    private _ctrlVehicleTypes = (_display displayCtrl IDC_VEHICLETYPES) controlsGroupCtrl IDC_VALUE;
    _logic setVariable [QGVAR(vehicleTypes), (tvSelection _ctrlVehicleTypes) apply { [_x, _ctrlVehicleTypes tvData _x] }, 2];

    _logic setVariable [QGVAR(rallyPoint), _display getVariable [QGVAR(rallyPoint), ZEN_POINT_NONE]];

    private _ctrlExecuteCode = (_display displayCtrl IDC_CODE) controlsGroupCtrl IDC_VALUE;
    _logic setVariable [QGVAR(executeCode), ctrlText _ctrlExecuteCode, 2];

    [QGVAR(moduleVehicleSpawner), [_logic, [_object], true]] call CBA_fnc_serverEvent;
};

_ctrl ctrlAddEventHandler ["ButtonClick", _fnc_onConfirm];
