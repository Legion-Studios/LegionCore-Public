#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Activates active camo for a unit.
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
 * _vehicle call ls_activeCamo_fnc_activateUnit;
 *
 * Public: No
 */

params ["_unit"];
TRACE_1("fnc_activateUnit",_unit);

// TODO: Account for tracked magazines like ACE intel items
// It would be better to add API to CBA to handle tracked mags
// 1. Swap visible items (gear, weapons, and magazines)
[_unit, true] call FUNC(replaceLoadoutItems);

// We need to check isNumber because uniforms may set the camo coef to 0
// isNumber returns false when the property isn't defined, but getNumber returns 0 when not defined
private _camouflageCoef = GVAR(camouflageCoefficient);
private _camouflageCoefConfig = configFile >> "CfgWeapons" >> uniform _unit >> QGVAR(camouflageCoef);
if (isNumber _camouflageCoefConfig) then {
    _camouflageCoef = getNumber _camouflageCoefConfig;
};
[QEGVAR(common,setUnitTrait), [_unit, "camouflageCoef", _camouflageCoef]] call CBA_fnc_localEvent;

// Sound effect
[_unit, "ls_activeCamo_activate"] call EFUNC(common,say3D);
private _soundSource = createSoundSource ["ls_activeCamo_loop", _unit, [], 0];
_soundSource attachTo [_unit];
_unit setVariable [QGVAR(idleSoundSource), _soundSource];

// Hide face
// If wearing a helmet, just hide it completely, otherwise use a head with the camo material
private _face = ["", "ls_activeCamo"] select (headgear _unit == "");
[_unit, true, _face] call EFUNC(common,hideHead);
true;
