#include "..\script_component.hpp"
/*
 * Authors: DartRuffian
 * Gets the distance to wherever the player is looking.
 * Returns -1 if distance is greater than the player's view distance, e.g. looking at the sky.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * Distance in meters <NUMBER>
 *
 * Example:
 * [] call ls_common_fnc_getDistanceToTarget
 *
 * Public: Yes
 */

private _distance = 0;

// If player is looking at an object, just use the distance to that
// Otherwise, we need to get where the player is aiming at, and get the position
private _cursorObject = cursorObject;
private _viewDistance = viewDistance * 2;
if (isNull _cursorObject) then {
    // Player is just looking at normal terrain
    private _vector = screenToWorldDirection [0.5, 0.5];
    private _start = AGLToASL positionCameraToWorld [0, 0, 0];
    private _end = _start vectorAdd (_vector vectorMultiply _viewDistance);
    private _positionAGL = ASLToAGL terrainIntersectAtASL [_start, _end];
    _distance = ls_player distance _positionAGL;
    GVAR(lastSeenPos) = _positionAGL;
} else {
    if (typeOf _cursorObject == "") then {
        // Player is looking at a unit's weapon, so just use the last seen unit instead
        // Weapon objects are weird, their position is considered [0, 0, 0] so most commands don't work
        _cursorObject = GVAR(lastSeenPos);
    } else {
        GVAR(lastSeenPos) = _cursorObject;
    };
    _distance = ls_player distance _cursorObject;
};

// If distance is greater than the player's view distance, just display "-"
// E.g. player is looking at the sky or a part of the map that isn't rendered
if (_distance > _viewDistance) then {
    _distance = -1;
};

_distance;
