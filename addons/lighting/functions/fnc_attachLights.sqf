#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Attaches lights to a given unit based on their equipment.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 1: Equipment <STRING>
 * 2: Lights <ARRAY>
 *
 * Return Value:
 * None
 *
 * Example:
 * [_unit, headgear _unit, _lights] call ls_lighting_fnc_attachLights;
 *
 * Public: No
 */

params [
    ["_unit", objNull, [objNull]],
    ["_equipment", "", [""]],
    ["_lights", [], [[]]]
];
TRACE_3("fnc_attachLights",_unit,_equipment,_lights);

if (isNull _unit || _equipment == "" || _lights isEqualTo []) exitWith {
    ERROR_3("Bad attach params _unit = '%1', _equipment = '%2', _light = '%3",_unit,_equipment,_lights);
};

private _data = _equipment call FUNC(getEquipmentData);

{
    private _lightData = (_data get "sources") select _forEachIndex;
    _x attachTo [
        _unit,
        _lightData get "attachOffset",
        _lightData get "attachBone",
        _lightData get "attachBoneFollow"
    ];

    _x setVectorDirAndUp [
        _lightData get "attachVectorDir",
        _lightData get "attachVectorUp"
    ];
} forEach _lights;

_unit setVariable [QGVAR(lights), _lights];
nil;
