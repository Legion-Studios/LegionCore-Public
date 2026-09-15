#include "script_component.hpp"

["CBA_settingsInitialized", {
    if (missionNamespace getVariable ["ace_interaction", false]) then {
        GVAR(vehicleActionCache) = createHashMap;
        GVAR(vivActions) = [
            [
                "ls_loadVehicle", localize "STR_A3_ACTION_LOAD_VEHICLE", "\A3\3DEN\data\cfgwaypoints\load_ca.paa", {}, {
                    [_target, _player] call EFUNC(common,isPilot) && { _target call EFUNC(vehicles,vivCanLoad) }
                }, EFUNC(vehicles,vivLoad_insertChildren)
            ] call ace_interact_menu_fnc_createAction,
            [
                "ls_unloadVehicle", localize "STR_A3_ACTION_UNLOAD_ALL_VEHICLES", "\A3\3DEN\data\cfgwaypoints\unload_ca.paa",
                { _target call EFUNC(vehicles,vivUnload) }, { getVehicleCargo _target isNotEqualTo [] && { [_target, _player] call EFUNC(common,isPilot) } }, EFUNC(vehicles,vivUnload_insertChildren)
            ] call ace_interact_menu_fnc_createAction
        ];

        GVAR(hudColorChangerAction) = [
            "ls_hudChanger", "Change HUD Color", QPATHTOEF(data,icons\hud\colorWheel_ca.paa), {}, {
                isEngineOn _target && { [_target, _player] call EFUNC(common,isPilot) };
            }, EFUNC(vehicles,hudChanger_insertChildren)
        ] call ace_interact_menu_fnc_createAction;

        ["AllVehicles", "init", LINKFUNC(vehicleInit), true, ["Man"], true] call CBA_fnc_addClassEventHandler;
    };
}] call CBA_fnc_addEventHandler;
