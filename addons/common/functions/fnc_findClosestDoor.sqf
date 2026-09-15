#include "..\script_component.hpp"
/*
 * Authors: DartRuffian
 * Finds the closest door to a given unit, can also include only locked doors.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 1: Radius <NUMBER>
 * 2: Door state <NUMBER>
 *    - 0: Any state (open or closed)
 *    - 1: Open only
 *    - 2: Closed only
 * 3: Lock state <NUMBER>
 *    - 0: Any state (locked or unlocked)
 *    - 1: Unlocked only
 *    - 2: Locked only
 *
 * Return Value:
 * Door data or [] if no door is found <ARRAY>
 *   0: Object <OBJECT>
 *   1: Door selection name <STRING>
 *   2: Door number <NUMBER>
 *   3: Door selection position in PositionAGL <ARRAY>
 *
 * Example:
 * [player, 15, 0, 0] call ls_common_fnc_findClosestDoor
 *
 * Public: No
 */

params ["_unit", "_radius", ["_openState", 0], ["_lockState", 0]];
TRACE_3("fnc_findClosestDoor",_unit,_radius,_lockState);

_openState = _openState - 1; // - 1 to check against variable directly
_lockState = _lockState - 1;

// When checking vanilla classes, most objects with doors inherit from at least Building, e.g. houses and wire gates
private _objects = nearestObjects [_unit, ["Building"], _radius];

private _doors = [];

// animationSourcePhase get be slightly inaccurate on remote objects, e.g. returning 0.59... when animated to 0.6
// To get around this, we just round to the first decimal
private _fnc_checkDoor = {
    params ["_object", "_door", "_phase"];
    private _animation = format ["Door_%1_sound_source", _door];
    ((_object animationSourcePhase _animation) toFixed 1) == (_phase toFixed 1);
};

{
    private _numberOfDoors = getNumber (configOf _x >> "numberOfDoors");
    if (_numberOfDoors <= 0) then { continue };

    // For all doors, filter out doors that don't meet the passed lock state
    for "_i" from 1 to _numberOfDoors do {
        if (_openState != -1 && { [_x, _i, _openState] call _fnc_checkDoor }) then { continue };
        if (_lockState != -1 && { _x getVariable [format ["BIS_disabled_door_%1", _i], 0] != _lockState }) then { continue };

        private _selection = format ["door_%1", _i];
        private _doorPosition = _x selectionPosition [_selection, "Geometry", "AveragePoint"];
        if (_doorPosition isEqualTo [0, 0, 0]) then {
            // Probably a multi-part door, which uses door_1a, door_1b, etc. so just use the first part of it
            _selection = _selection + "a";
            _doorPosition = _x selectionPosition [_selection, "Geometry", "AveragePoint"];
        };
        if (_doorPosition isEqualTo [0, 0, 0]) then { continue }; // Door isn't configured properly

        _doors pushBack [_x, _selection, _i, _x modelToWorld _doorPosition];
    };
} forEachReversed _objects;

if (_doors isEqualTo []) exitWith { [] };

// Sort doors by distance from unit to selection
private _unitPos = ASLToAGL (getPosASL _unit);
private _sortedDoors = _doors apply {[ _unitPos distance (_x select 3), _x ]};
_sortedDoors sort true;

_sortedDoors select 0 select 1; // Return closest door
