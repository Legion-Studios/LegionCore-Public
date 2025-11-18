#include "..\script_component.hpp"
/*
 * Authors: Tennesse Timmy, CrimzonKat, Ragwolf
 * Rewritten by DartRuffian
 * Maps a given area.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for the 101st Doom Battalion, and used in Legion Studios: Core with permission.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Object <OBJECT>
 * 1: Center for holomap (optional, default: []) <ARRAY>
 *    - Format Position2D, [x, y]
 *    - If empty array is passed, object position is used as center
 *
 * Return Value:
 * None
 *
 * Example:
 * [_holomap, [10, 10]] call ls_holoprojector_fnc_map;
 *
 * Public: Yes
 */

params [
    ["_object", objNull, [objNull]],
    ["_center", [], [[]], [0, 2, 3]], // Allow for 0 count array so default value can also be manually passed
    ["_terrainMode", MODE_HOLOGRAPHIC, [MODE_HOLOGRAPHIC]]
];
TRACE_3("fnc_map",_object,_center,_terrainMode);

if (!hasInterface or {!alive _object}) exitWith {};

if (_center isEqualTo []) then {
    _center = getPosASL _object;
};

_object setVariable [QGVAR(mapCenter), _center, true];
_object setVariable [QGVAR(particlePosCache), [], true];

// Make sure JIP players get the looping audio, but don't send the event if the object no longer exists
private _jipId = [QGVAR(activated), [_object]] call CBA_fnc_globalEventJIP;
[_jipId, _object] call CBA_fnc_removeGlobalEventJIP;

// Update pre-existing displays for JIP players
_jipId = [QGVAR(updateDisplay), [_object, _center, _terrainMode]] call CBA_fnc_globalEventJIP;
[_jipId, _object] call CBA_fnc_removeGlobalEventJIP;

nil;
