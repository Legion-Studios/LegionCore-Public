#include "script_component.hpp"

GVAR(lastSeenUnit) = objNull;

["unit", {
    ls_player = (_this select 0);
}, true] call CBA_fnc_addPlayerEventHandler;

[QGVAR(say3d), {
    params ["_object", "_sound", ["_distance", -1], ["_type", 0]];
    if (_sound == "" or {ls_player distance _object > _distance}) exitWith {};

    private _source = _object say3D [_sound, _distance, 1, _type];
    // if object not a unit, attach sound to object itself
    // Primarily meant for vehicles in motion
    if !(_object isKindOf "CAManBase") then {
        _source attachTo [_object];
    };
}] call CBA_fnc_addEventHandler;

[QGVAR(hint), {
    params ["_message", ["_silent", true]];

    if (_silent) then {
        hintSilent _message;
    } else {
        hint _message;
    };
}] call CBA_fnc_addEventHandler;
