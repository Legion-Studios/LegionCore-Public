#include "script_component.hpp"

[QGVAR(stunParticles), {
    params ["_unit"];
    private _particle = "#particlesource" createVehicleLocal [0, 0, 0];
    _particle setParticleClass "ls_electricSparks";
    _particle attachTo [_unit, [0, 0, -0.25], "Spine3"];
    [{ deleteVehicle _this }, _particle, 10] call CBA_fnc_waitAndExecute;
}] call CBA_fnc_addEventHandler;

["CBA_settingsInitialized", {
    ["CAManBase", "OpticsSwitch", {
        params ["_unit"];
        if (!GVAR(adsSound_enabled) or {_unit != ls_player}) exitWith {};
        call FUNC(adsSound);
    }] call CBA_fnc_addClassEventHandler;

    ["CAManBase", "OpticsModeChanged", {
        params ["_unit", "_opticsClass", "_newMode"];
        if (!GVAR(adsSound_enabled) or {_unit != ls_player}) exitWith {};
        [_unit, _opticsClass, _newMode] call FUNC(adsModeSound);
    }] call CBA_fnc_addClassEventHandler;
}] call CBA_fnc_addEventHandler;
