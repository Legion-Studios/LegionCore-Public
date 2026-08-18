#include "script_component.hpp"

GVAR(lastSeenUnit) = objNull;

["unit", {
    ls_player = (_this select 0);
}, true] call CBA_fnc_addPlayerEventHandler;

["MouseZChanged", {
    (_this select 1) call FUNC(handleScrollWheel);
}] call CBA_fnc_addDisplayHandler;

["MouseButtonDown", {
    // Cancel on right click
    params ["", "_button"];
    if (GVAR(isPlacing) == PLACE_WAITING && _button == 1) then {
        GVAR(isPlacing) = PLACE_CANCEL;
        true;
    };
    false;
}] call CBA_fnc_addDisplayHandler;

[QGVAR(say3d), {
    params ["_object", "_sound", ["_distance", -1], ["_type", 0]];
    private _player = [curatorCamera, ls_player] select (isNull curatorCamera);
    if (_sound == "" || {_player distance _object > _distance}) exitWith {};

    private _source = _object say3D [_sound, _distance, 1, _type];
    // if object not a unit, attach sound to object itself
    // Primarily meant for vehicles in motion
    if !(_object isKindOf "CAManBase") then {
        _source attachTo [_object];
    };
}] call CBA_fnc_addEventHandler;

[QGVAR(notify), {
    params ["_text", ["_args", []]];
    if (isLocalized _text) then { _text = localize _text };
    private _message = [_text];
    _message append _args;
    (format _message) call CBA_fnc_notify;
}] call CBA_fnc_addEventHandler;

[QGVAR(shakeZeusCamera), LINKFUNC(shakeZeusCamera)] call CBA_fnc_addEventHandler;
