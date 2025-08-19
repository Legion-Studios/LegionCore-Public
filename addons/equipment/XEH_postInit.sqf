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
