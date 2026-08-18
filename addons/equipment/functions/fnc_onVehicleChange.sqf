#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Called when a player's vehicle changes.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 1: Vehicle (unused) <OBJECT>
 * 2: Old vehicle <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * ["vehicle", ls_equipment_fnc_onVehicleChange] call CBA_fnc_addPlayerEventHandler;
 *
 * Public: No
 */

params ["_unit", "", "_oldVehicle"];
TRACE_2("fnc_onVehicleChange",_unit,_oldVehicle);

private _oldVehicleConfig = configOf _oldVehicle;

// Exited parachute
private _savedIventory = _unit getVariable [QGVAR(savedParachuteInventory), []];
if (_savedIventory isNotEqualTo [] && {_oldVehicle isKindOf "ParachuteBase"}) then {
    _savedIventory params ["_backpack", "_inventory"];
    _unit setVariable [QGVAR(savedParachuteInventory), nil];

    (_unit call CBA_fnc_getLoadout) params ["_loadout", "_extended"];

    private _loadoutBackpack = _loadout select LOADOUT_INDEX_BACKPACK;
    _loadoutBackpack set [0, _backpack];
    _loadoutBackpack set [1, _inventory];

    [_unit, [_loadout, _extended]] call CBA_fnc_setLoadout;
};

if (getNumber (_oldVehicleConfig >> QGVAR(deleteOnExit)) >= 1) then {
    deleteVehicle _oldVehicle;
};
