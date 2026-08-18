#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Activates active camo for a vehicle.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 *
 * Return Value:
 * True if effect was applied, otherwise false <BOOL>
 *
 * Example:
 * _vehicle call ls_activeCamo_fnc_activateVehicle;
 *
 * Public: No
 */

params ["_object"];
TRACE_1("fnc_activateVehicle",_object);

private _textures = getObjectTextures _object;
_object setVariable [QGVAR(originalTextures), _textures, true];
_object setVariable [QGVAR(originalMaterials), getObjectMaterials _object, true];

{
    _object setObjectTextureGlobal [_forEachIndex, QPATHTOEF(data,textures\blank_ca.paa)];
    _object setObjectMaterialGlobal [_forEachIndex, QPATHTOEF(data,materials\activeCamo.rvmat)];
} forEach _textures;

private _camouflageCoef = GVAR(camouflageCoefficientVehicle);
private _camouflageCoefConfig = configOf _object >> QGVAR(camouflageCoef);
if (isNumber _camouflageCoefConfig) then {
    _camouflageCoef = getNumber _camouflageCoefConfig;
};
[QEGVAR(common,setUnitTrait), [_object, "camouflageCoef", _camouflageCoef]] call CBA_fnc_localEvent;

true;
