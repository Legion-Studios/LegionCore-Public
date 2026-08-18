#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Creates a light based on the equipment's modes.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Equipment <STRING>
 * 1: Mode (optional, default: 0) <NUMBER>
 *
 * Return Value:
 * The created lights <ARRAY>
 *
 * Example:
 * [headgear _unit, 0] call ls_lighting_fnc_createLights;
 *
 * Public: Yes
 */

params [
    ["_equipment", "", [""]],
    ["_mode", 0, [0]]
];
TRACE_2("fnc_createLights",_equipment,_mode);

private _data = _equipment call FUNC(getEquipmentData);

// Grab last mode if given current flashlight doesn't have that many
// Can happen from switching to a flashlight with less modes
private _allModes = (_data get "lightModes");
_mode = _mode min (count _allModes - 1);

private _lightMode = _allModes select _mode;
private _lights = [];

for "_i" from 0 to count (_data get "sources") - 1 do {
    private _light = _lightMode createVehicleLocal [0, 0, 0];
    _lights pushBack _light;
};

_lights;
