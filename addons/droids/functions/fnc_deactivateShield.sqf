#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Deactivates a droideka's shield.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Droideka <OBJECT>
 *
 * Return Value:
 * True if shield was deactivated, otherwise false <BOOL>
 *
 * Example:
 * _droideka call ls_droids_fnc_deactivateShield;
 *
 * Public: No
 */

params ["_droideka"];
TRACE_1("fnc_deactivateShield",_droideka);

if (!local _droideka) exitWith { false };

private _shield = _droideka getVariable [QGVAR(shield), objNull];
_shield say3D "ls_shield_droideka_deactivate";

// No reason to keep the shield around if unit is dead
private _cleanupObjects = _droideka getVariable [QGVAR(cleanupObjects), []];
if (alive _droideka) then {
    [QEGVAR(common,hideObjectGlobal), [_cleanupObjects, true]] call CBA_fnc_serverEvent;
} else {
    {
        deleteVehicleCrew _x;
        deleteVehicle _x;
    } forEach _cleanupObjects;
};

true;
