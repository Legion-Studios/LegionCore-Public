#include "..\script_component.hpp"
/*
 * Authors: DartRuffian
 * Creates the PFH to spawn units for dispensers.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ls_dispenser_fnc_dispenserPFH
 *
 * Public: No
 */

private _pfhID = missionNamespace getVariable [QGVAR(dispenserPFH), -1];
if !(isServer && _pfhID == -1) exitWith {};

_pfhID = [{
    params ["", "_handle"];
    if (isGamePaused) exitWith {};

    if (GVAR(dispensers) isEqualTo []) exitWith {
        _handle call CBA_fnc_removePerFrameHandler;
        GVAR(dispenserPFH) = -1;
    };

    {
        if !(_x getVariable [QGVAR(active), false] && alive _x) then {
            _x call FUNC(deactivateServer);
            continue;
        };

        private _dispenserUnits = _x getVariable [QGVAR(unitTypes), []];
        if (_dispenserUnits isEqualTo []) then {
            WARNING_2("Dispenser '%1' has no defined unit classes to spawn (%2)",_x,_dispenserUnits);
            continue
        };

        private _group = _x getVariable [QGVAR(group), grpNull];
        private _groupIndex = (_x getVariable [QGVAR(unitTypeIndex), -1]) + 1;

        if (_groupIndex >= count _dispenserUnits) then {
            _groupIndex = 0;
        };
        _x setVariable [QGVAR(unitTypeIndex), _groupIndex];

        [_x, _group, _dispenserUnits select _groupIndex] call FUNC(createUnit);
    } forEachReversed GVAR(dispensers);
}, HATCH_ANIM_LENGTH * 3] call CBA_fnc_addPerFrameHandler;

missionNamespace setVariable [QGVAR(dispenserPFH), _pfhID];
