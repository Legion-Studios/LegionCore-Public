#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Activates a droideka's shield.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Droideka <OBJECT>
 *
 * Return Value:
 * True if shield was activated, otherwise false <BOOL>
 *
 * Example:
 * _droideka call ls_droids_fnc_activateShield;
 *
 * Public: No
 */

params ["_droideka"];
TRACE_1("fnc_droideka",_droideka);

if (!local _droideka || {
    GET_SHIELD_HEALTH(_droideka) <= 0 ||
    GET_SHIELD_COOLDOWN(_droideka) > CBA_missionTime ||
    animationState _droideka == "droideka_roll" || {
        getNumber (configOf _droideka >> QGVAR(hasShield)) < 1
    }
}) exitWith { false };

private _shield = _droideka getVariable [QGVAR(shield), objNull];
private _cleanupObjects = _droideka getVariable [QGVAR(cleanupObjects), []];

if (isNull _shield) then {
    private _droidekaSide = side group _droideka;
    _shield = createVehicle ["ls_droideka_shield", [0, 0, 0], [], 0, "CAN_COLLIDE"];
    private _dummyGroup = _droidekaSide createVehicleCrew _shield;

    private _droidekaPosASL = getPosASL _droideka;
    _shield setPosASL _droidekaPosASL;
    _shield attachTo [_droideka, [0, 0, 0], "shield", true];
    _droideka setVariable [QGVAR(shield), _shield, true];
    _droideka setVariable [QGVAR(maxShieldHealth), GVAR(droidekaShieldHealth), true];
    _droideka setVariable [QGVAR(shieldHealth), GVAR(droidekaShieldHealth), true];

    _cleanupObjects pushBack _shield;

    // Really jank and I hate it but it does make AI shoot at :/
    if (GVAR(droidekaShieldTargetsEnabled)) then {
        private _positions = [
            [1, 1, 0.5],
            [-1, -1, 0.5],
            [1, -1, 0.5],
            [-1, 1, 0.5]
        ];
        {
            private _target = createVehicle ["CBA_O_InvisibleTarget", [0, 0, 0], [], 0, "CAN_COLLIDE"];
            private _group = _droidekaSide createVehicleCrew _target;
            (units _group) joinSilent _dummyGroup;
            _target setPosASL _droidekaPosASL;
            _target attachTo [_droideka, _x, "shield", true];
            _cleanupObjects pushBack _target;
        } forEach _positions;
    };

    _droideka setVariable [QGVAR(cleanupObjects), _cleanupObjects, true];

    // Add on all machines in case the shield is transferred to a different machine
    [QGVAR(addShieldEH), _shield] call CBA_fnc_globalEvent;
} else {
    // No isObjectHidden check to make sure its synced on all machines
    [QEGVAR(common,hideObjectGlobal), [_cleanupObjects, false]] call CBA_fnc_serverEvent;
};

// Start pfh if needed
[] call FUNC(shieldRechargePFH);

_shield say3D "ls_shield_droideka_activate";
true;
