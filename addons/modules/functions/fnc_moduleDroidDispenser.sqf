#include "..\script_component.hpp"
/*
 * Authors: DartRuffian
 * A modified version of BIS_fnc_moduleProjectile. We need to pass extra data to the created projectile, so we use our own function.
 * Irrelevant parts of the function have also been stripped out, like the radio messages or logic that handles other simulation types.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Logic <OBJECT>
 * 1: Affected units (unused) <ARRAY>
 * 2: Activated <BOOL>
 *
 * Return Value:
 * None
 *
 * Example:
 * [_logic, [], true] call ls_modules_fnc_moduleDroidDispenser
 *
 * Public: No
 */

if (canSuspend) exitWith {
    [FUNC(moduleDroidDispenser), _this] call CBA_fnc_directCall;
};

params ["_logic", "", "_activated"];
TRACE_2("fnc_moduleDroidDispenser",_logic,_activated);

// Only show circle to Zeuses
if (isObjectHidden _logic && { objectCurators _logic findIf { local _x } > -1 }) then {
    _logic hideObject false;
};

if !(isServer && _activated) exitWith {};

private _logicConfig = configOf _logic;
private _ammo = _logic getVariable [QGVAR(ammo), getText (_logicConfig >> "ammo")];

private _positionLogicATL = getPosATL _logic; // Starting position of logic
private _positionAmmoATL = +_positionLogicATL;
_positionAmmoATL set [2, 1000];

private _sound = if (getNumber (configFile >> "CfgAmmo" >> _ammo >> "hit") < 200) then {
    selectRandom ["mortar1", "mortar2"]
} else {
    selectRandom ["shell1", "shell2", "shell3", "shell4"]
};
[_logic, _sound] call EFUNC(common,say3D);

private _spawnGroup = getArray (_logicConfig >> QEGVAR(dispenser,group));
if (_spawnGroup isEqualTo []) then {
    _spawnGroup = getText (_logicConfig >> QEGVAR(dispenser,group));

    if (_spawnGroup == "") then {
        _spawnGroup = _logic getVariable [QGVAR(dispenserGroupCustom), "[]"];
        if (_spawnGroup in ["", "[]"]) then {
            _spawnGroup = (_logic getVariable [QGVAR(dispenserGroup), DISPENSER_GROUP_DEFAULT]) select 1;
        };
        _spawnGroup = parseSimpleArray _spawnGroup;
    };
};

private _dispenserClass = getText (_logicConfig >> QEGVAR(dispenser,vehicle));
if (_dispenserClass == "") then {
    _dispenserClass = "ls_droidDispenser";
};

private _spawnLimit =  if (isNumber (_logicConfig >> QEGVAR(dispenser,limit))) then {
    getNumber (_logicConfig >> QEGVAR(dispenser,limit))
} else {
    _logic getVariable [QGVAR(spawnLimit), SPAWN_LIMIT_DEFAULT];
};

// Handle a zeus editing a module that already started
private _projectile = _logic getVariable [QGVAR(projectile), objNull];
if (isNull _projectile) then {
    _projectile = [createHashMapFromArray [
        ["spawnGroup", _spawnGroup],
        ["dispenserClass", _dispenserClass],
        ["ammoClass", _ammo],
        ["spawnLimit", _spawnLimit]
    ], _positionAmmoATL] call EFUNC(dispenser,dropDispenser);
    _logic setVariable [QGVAR(projectile), _projectile];
} else {
    private _params = _projectile getVariable [QEGVAR(dispenser,dispenserData), []];
    _params set [1, _dispenserClass];
    _params set [2, _spawnGroup];
    _params set [3, _spawnlimit];
    _projectile setVariable [QEGVAR(dispenser,dispenserData), _params];
};

[{
    params ["_args", "_handle"];
    _args params ["_logic", "_projectile", "_positionLogicATL", "_direction"];

    // Cleanup if logic / projectile are deleted (e.g. round landed)
    if (isNull _logic || isNull _projectile) exitWith {
        deleteVehicle _logic;
        deleteVehicle ((_projectile getVariable [QGVAR(dispenserData), []]) param [3, objNull]);
        deleteVehicle _projectile;
        _handle call CBA_fnc_removePerFrameHandler;
    };

    // Update position if logic is moved after being placed
    if (
        getPosATL _logic distance _positionLogicATL > 0 ||
        direction _logic != _direction
    ) then {
        private _directionNew = getDir _logic;
        private _positionASL = [
            getPosASL _logic,
            getPosASL _projectile distance2D _positionLogicATL,
            _directionNew + 180
        ] call BIS_fnc_relPos;

        _positionASL set [2, (getPosASL _projectile) select 2];
        _projectile setVelocity ([velocity _projectile, -(_directionNew - _direction)] call BIS_fnc_rotateVector2D);
        _projectile setPosASL _positionASL;

        _args set [2, getPosATL _logic];
        _args set [3, _directionNew];
    };
}, 0.1, [_logic, _projectile, _positionLogicATL, getDir _logic]] call CBA_fnc_addPerFrameHandler;
