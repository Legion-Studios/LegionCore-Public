#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Deactivates active camo for a vehicle.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * _vehicle call ls_activeCamo_fnc_deactivateVehicle;
 *
 * Public: No
 */

params ["_object"];
TRACE_1("fnc_deactivateVehicle",_object);

private _textures = _object getVariable [QGVAR(originalTextures), []];
private _materials = _object getVariable [QGVAR(originalMaterials), []];

{
    _object setObjectTextureGlobal [_forEachIndex, _textures select _forEachIndex];
    _object setObjectMaterialGlobal [_forEachIndex, _materials select _forEachIndex];
} forEach _textures;

_object setVariable [QGVAR(active), nil, true];
[QGVAR(deactivatedVehicle), [_object]] call CBA_fnc_localEvent;
true;
