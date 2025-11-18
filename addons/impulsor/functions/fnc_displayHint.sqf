#include "..\script_component.hpp"
/*
 * Author: BiT
 * Adapted by Crimzonkat
 * Rewritten by DartRuffian
 * A CBA PFH to handle a vehicle using impulse.
 *
 * Please provide proper credits to those who participate in development.
 * This module was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 * 1: Vehicle impulse settings <ARRAY>
 * 2: Current impulse level <NUMBER>
 *
 * Return Value:
 * None
 *
 * Example:
 * ["ls_impulsor_levelChanged", ls_impulsor_fnc_displayHint] call CBA_fnc_addEventHandler;
 *
 * Public: No
 */

params ["", "_impulseSettings", "_impulseLevel"];
TRACE_2("fnc_displayHint",_impulseSettings,_impulseLevel);

if (GVAR(hintDisplay) == 0) exitWith {};

private _message = "<t size=2>Impulsor <br/><t color='#427BF5'>On - %1 km/h</t></t>";
_message = switch (_impulseLevel) do {
    case MODE_REPULSE: {
        "<t size=2 color='#FF0000'>Repulsor</t>";
    };
    case MODE_DISABLED: {
        "<t size=2>Impulsor <br/>Deactivated</t>";
    };
    case MODE_IMPULSE: {
        format [_message, _impulseSettings get "speed"];
    };
    case MODE_OVERCHARGE: {
        format [_message, _impulseSettings get "overchargeSpeed"];
    };
    default {
        WARNING_1("Invalid impulsor level: '%1'",_impulseLevel);
        ""
    };
};

switch (GVAR(hintDisplay)) do {
    case 1: {
        hintSilent parseText _message;
    };
    case 2: {
        // Removes formatting from message
        systemChat str (parseText _message);
    };
};
