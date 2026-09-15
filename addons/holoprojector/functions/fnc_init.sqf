#include "..\script_component.hpp"
/*
 * Authors: Tennesse Timmy, CrimzonKat, Ragwolf
 * Rewritten by DartRuffian
 * Initializes a holographic map.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for the 101st Doom Battalion, and used in Legion Studios: Core with permission.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Object <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * _holomap call ls_holoprojector_fnc_init;
 *
 * Public: Yes
 */

params [
    ["_object", objNull, [objNull]]
];
TRACE_1("fnc_init",_object);

// Manually check for object simulation, note that enableSimulation is local effect
// This technically allows for running the init on only certain clients, but isn't really recommended
if (!alive _object or !simulationEnabled _object) exitWith {};

_object setVariable [QGVAR(height), getNumber (configOf _object >> QGVAR(height))];
_object setVariable [QGVAR(mapScale), (getNumber (configOf _object >> QGVAR(mapScale))) max 0.1];
_object setVariable [QGVAR(mapSize), 1000];
_object setVariable [QGVAR(mapScaleHeight), 500];

if (hasInterface and {"ace_interaction" call EFUNC(common,isModLoaded)}) then {
    private _fnc_addActions = {
        params ["_object", "_actions", ["_parent", ["ACE_MainActions"]]];
        {
            [_object, 0, _parent, _x] call ace_interact_menu_fnc_addActionToObject;
        } forEach _actions;
    };


    private _actions = [];
    _actions pushBack ([QGVAR(mapWorld), "Map Planet", "", {
        _target setVariable [QGVAR(isProjecting), true, true];
        private _terrainMode = GET_TERRAINMODE(_target);
        [_target, _terrainMode] call FUNC(mapWorld);
    }, {true}] call ace_interact_menu_fnc_createAction);

    _actions pushBack ([QGVAR(selectArea), "Map Area", "", {
        _target setVariable [QGVAR(isProjecting), true, true];
        _target call FUNC(selectArea);
    }, {true}] call ace_interact_menu_fnc_createAction);

    _actions pushBack ([QGVAR(scale), "Scale", "", {}, {true}] call ace_interact_menu_fnc_createAction);
    _actions pushBack ([QGVAR(terrainMode), "Terrain Mode", "", {}, {true}] call ace_interact_menu_fnc_createAction);
    _actions pushBack ([QGVAR(disable), "<t color='#ff0000'>Deactivate</t>", "", {
        _target setVariable [QGVAR(isProjecting), false, true];
    }, {true}] call ace_interact_menu_fnc_createAction);
    [_object, _actions] call _fnc_addActions;

    _actions = [];
    _actions pushBack ([QGVAR(terrainMode_holographic), "Trackers", "", {
        [_target, QGVAR(terrainMode), MODE_HOLOGRAPHIC] call FUNC(changeSetting);
    }, {true}] call ace_interact_menu_fnc_createAction);
    _actions pushBack ([QGVAR(terrainMode_topographical), "Topographical", "", {
        [_target, QGVAR(terrainMode), MODE_TOPOGRAPHICAL] call FUNC(changeSetting);
    }, {true}] call ace_interact_menu_fnc_createAction);
    [_object, _actions, ["ACE_MainActions", QGVAR(terrainMode)]] call _fnc_addActions;

    _actions = [];
    _actions pushBack ([QGVAR(scale_reset), "Reset", "", {
        private _mapScale = getNumber (configOf _target >> QGVAR(mapScale)) max 0.1;
        [_target, QGVAR(mapScale), _mapScale] call FUNC(changeSetting);
    }, {true}] call ace_interact_menu_fnc_createAction);
    _actions pushBack ([QGVAR(scale_increase), "Increase", "", {
        private _mapScale = GET_SCALE(_target);
        [_target, QGVAR(mapScale), _mapScale + 1] call FUNC(changeSetting);
    }, {true}] call ace_interact_menu_fnc_createAction);
    _actions pushBack ([QGVAR(scale_decrease), "Decrease", "", {
        private _mapScale = GET_SCALE(_target);
        [_target, QGVAR(mapScale), _mapScale - 1] call FUNC(changeSetting);
    }, {true}] call ace_interact_menu_fnc_createAction);
    [_object, _actions, ["ACE_MainActions", QGVAR(scale)]] call _fnc_addActions;
};
