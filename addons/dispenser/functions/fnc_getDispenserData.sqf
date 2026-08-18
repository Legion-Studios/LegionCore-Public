#include "..\script_component.hpp"
/*
 * Authors: DartRuffian
 * Caches and returns dispenser data.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Dispenser <OBJECT>
 *
 * Return Value:
 * Return description <NONE>
 *
 * Example:
 * _dispenser call ls_dispenser_fnc_getDispenserData
 *
 * Public: No
 */

params ["_dispenser"];
TRACE_1("fnc_getDispenserData",_dispenser);

GVAR(dispenserCache) getOrDefaultCall [typeOf _dispenser, {
    private _configOf = configOf _dispenser;
    private _hatchAnim = getText (_configOf >> QGVAR(hatchAnimation)); // %1 is placeholder for hatch index
    [
        getNumber (_configOf >> QGVAR(hatchCount)),
        [
            _hatchAnim,
            (getNumber (_configOf >> "AnimationSources" >> format [_hatchAnim, 1] >> "animPeriod")) + 0.5
        ],
        getArray (_configOf >> QGVAR(hatchDirections)),
        getArray (_configOf >> QGVAR(activationSelection)),
        getText (_configOf >> QGVAR(unitAnimation)),
        getText (_configOf >> QGVAR(hatchHitpoint))
    ];
}, true];
