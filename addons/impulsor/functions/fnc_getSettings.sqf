#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Gets the given vehicle's impulse settings.
 *
 * Please provide proper credits to those who participate in development.
 * This module was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 *
 * Return Value:
 * The vehicle's impulse settings <HASHMAP>
 *
 * Example:
 * cursorObject call ls_impulsor_fnc_getSettings;
 *
 * Public: Yes
 */

params [
    ["_vehicle", objNull, [objNull]]
];
TRACE_1("fnc_getSettings",_vehicle);

private _class = typeOf _vehicle;
private _return = GVAR(vehicleCache) get _class;
if (isNil "return") then {
    private _config = (configOf _vehicle) >> QUOTE(ADDON);
    _return = createHashMapFromArray [
        ["enabled", getNumber (_config >> "enabled") >= 1],
        ["speed", getNumber (_config >> "speed")],
        ["fuelDrain", getNumber (_config >> "fuelDrain")],
        ["overchargeSpeed", getNumber (_config >> "overchargeSpeed")],
        ["overchargeFuelDrain", getNumber (_config >> "overchargeFuelDrain")],
        ["overchargeCooldown", getNumber (_config >> "overchargeCooldown")],
        ["impulseSoundOn", getText (_config >> "impulseSoundOn")],
        ["impulseSoundOff", getText (_config >> "impulseSoundOff")],
        ["repulseSoundOn", getText (_config >> "repulseSoundOn")],
        ["repulseSoundOff", getText (_config >> "repulseSoundOff")]
    ];

    GVAR(vehicleCache) set [_class, _return];
};

_return;
