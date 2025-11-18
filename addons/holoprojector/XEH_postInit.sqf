#include "script_component.hpp"

if (hasInterface) then {
    call COMPILE_SCRIPT(XEH_postInitClient)
};

["CBA_settingsInitialized", {
    [QGVAR(activated), {
        params ["_object"];
        if (isNull _object) exitWith {};
        _object say3D QGVAR(activate);

        if (isServer) then {
            private _loopSource = createSoundSource [QGVAR(loop), position _object, [], 0];
            _object setVariable [QGVAR(loopSource), _loopSource];

            if !(_object getVariable [QGVAR(addedDeleteEH), false]) then {
                _object setVariable [QGVAR(addedDeleteEH), true];
                _object addEventHandler ["Deleted", {
                    params ["_entity"];
                    private _loopSource = _entity getVariable [QGVAR(loopSource), objNull];
                    deleteVehicle _loopSource;
                }];
                _object addEventHandler ["Killed", {
                    params ["_entity"];
                    private _loopSource = _entity getVariable [QGVAR(loopSource), objNull];
                    deleteVehicle _loopSource;
                }];
            };
        };
    }] call CBA_fnc_addEventHandler;

    [QGVAR(deactivated), {
        params ["_object"];
        if (isNull _object) exitWith {};
        _object say3D QGVAR(deactivate);

        if (isServer) then {
            private _loopSource = _object getVariable [QGVAR(loopSource), objNull];
            deleteVehicle _loopSource;
            _object setVariable [QGVAR(loopSource), nil];
        };
    }] call CBA_fnc_addEventHandler;
}] call CBA_fnc_addEventHandler;
