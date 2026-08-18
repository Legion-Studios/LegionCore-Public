#include "script_component.hpp"

if (missionNamespace getVariable ["ace_medical_enabled", false]) then {
    ["ace_unconscious", {
        params ["_unit", "_state"];
        if !(local _unit && _state) exitWith {};

        if (_unit isKindOf "ls_vehicle_atrt_base") then {
            _unit call FUNC(atrt_dismount);
            // [_unit, "...", 2] call EFUNC(common,doAnimation); // TODO
        } else {
            private _atrt = _unit getVariable [QGVAR(atrt_riding), objNull];
            if (!isNull _atrt) then {
                _atrt call FUNC(atrt_dismount);
            };
        };
    }] call CBA_fnc_addEventHandler;
};

if (hasInterface) then {
    ["featureCamera", {
        params ["_unit", "_featureCamera"];
        private _atrt = _unit getVariable [QGVAR(atrt_riding), objNull];
        if !(_featureCamera == "" && !isNull _atrt) exitWith {};
        TRACE_2("Fixing AT-RT controls",_unit,_featureCamera);
        [_unit, "ls_driver_atrt_state", 2] call EFUNC(common,doAnimation);
        _atrt switchCamera cameraView;
        _unit remoteControl _atrt;
    }, true] call CBA_fnc_addPlayerEventHandler;
    ["vehicle", LINKFUNC(disableAutoVectoring), true] call CBA_fnc_addPlayerEventHandler;
    [QGVAR(atrt_createEffects), LINKFUNC(atrt_createEffects)] call CBA_fnc_addEventHandler;
};
