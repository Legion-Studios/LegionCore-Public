#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Event handler for when the impulse level of a vehicle is changed.
 *
 * Please provide proper credits to those who participate in development.
 * This module was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 * 1: Vehicle impulse settings <HASHMAP>
 * 2: Current impulse level <NUMBER>
 * 3: Old impulse level <NUMBER>
 *
 * Return Value:
 * None
 *
 * Example:
 * ["ls_impulsor_levelChanged", ls_impulsor_fnc_levelChanged] call CBA_fnc_addEventHandler;
 *
 * Public: No
 */

params ["_vehicle", "", "_impulseLevel", "_impulseLevelOld"];
TRACE_3("fnc_levelChanged",_vehicle,_impulseLevel,_impulseLevelOld);

if (GVAR(enableOverchargeCooldown) && _impulseLevelOld > MODE_IMPULSE) then {
    private _settings = _vehicle call FUNC(getSettings);
    private _overchargeCooldown = _settings get "overchargeCooldown";
    _vehicle setVariable [QGVAR(overchargeDisabled), true, true];
    [{
        _this setVariable [QGVAR(overchargeDisabled), nil, true];
    }, _vehicle, _overchargeCooldown] call CBA_fnc_waitAndExecute;
};

call FUNC(displayHint);
nil;
