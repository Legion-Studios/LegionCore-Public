#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Handles a unit being hit.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * See https://community.bistudio.com/wiki/Arma_3:_Event_Handlers#HitPart
 *
 * Return Value:
 * None
 *
 * Public: No
 */

params ["_target"];
TRACE_1("fnc_onHit",_target);

if (GVAR(maxAllowedHits) == -1) exitWith {};

private _numHits = _target getVariable [QGVAR(timesHit), 0];
if (_numHits >= GVAR(maxAllowedHits)) then {
    [{ call FUNC(deactivate) }, _target, AUTO_SHUT_OFF_DELAY] call CBA_fnc_waitAndExecute;
    _target setVariable [QGVAR(timesHit), nil, true];
} else {
    _target setVariable [QGVAR(timesHit), _numHits + 1, true];
};
