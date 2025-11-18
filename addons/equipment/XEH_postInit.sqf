#include "script_component.hpp"

if (!hasInterface) exitWith {};

GVAR(rangefinderPFH) = -1;

["unit", {
    params ["_unit"];
    TRACE_1("handlePlayerChanged",_unit);

    [_unit, currentVisionMode _unit] call FUNC(handleVisionMode);
}] call CBA_fnc_addPlayerEventHandler;

["featureCamera", {
    params ["_unit", "_featureCamera"];
    TRACE_2("handleFeatureCamera",_unit,_featureCamera);

    private _visionMode = [0, currentVisionMode _unit] select (_featureCamera == "");
    [_unit, _visionMode] call FUNC(handleVisionMode);
}] call CBA_fnc_addPlayerEventHandler;

["loadout", LINKFUNC(onLoadoutChange)] call CBA_fnc_addPlayerEventHandler;
["vehicle", LINKFUNC(onVehicleChange)] call CBA_fnc_addPlayerEventHandler;

// For ACE's "hide hud" keybind (Ctrl+F12)
["ace_ui_hideHud", {
    params ["_hide"];

    if (_hide) then {
        QGVAR(RscRangefinderLayer) cutFadeOut 0;
    } else {
        // Manually call handleVisionMode to not have duplicated logic
        // The player may also change their vision mode while having the hud disabled
        [ls_player, currentVisionMode ls_player] call FUNC(handleVisionMode);
    };
}] call CBA_fnc_addEventHandler;
