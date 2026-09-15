#include "..\script_component.hpp"
/*
* Authors: DartRuffian
* Handles recharging droideka shields over time.
*
* Please provide proper credits to those who participate in development.
* This function was developed for Legion Studios: Core.
* Do not place in any other mod without permission.
*
* Arguments:
* None
*
* Return Value:
* None
*
* Example:
* [] call ls_droids_fnc_shieldRechargePFH
*
* Public: No
*/

if (missionNamespace getVariable [QGVAR(shieldRechargePFH), -1] > -1) exitWith {};

// PFH only handles local units, so don't broadcast variable
GVAR(shieldRechargePFH) = [{
    if (isGamePaused) exitWith {};

    params ["", "_handle"];
    private _droidekas = [] call FUNC(getDroidekas);

    if (_droidekas isEqualTo []) exitWith {
        missionNamespace setVariable [QGVAR(shieldRechargePFH), nil];
        _handle call CBA_fnc_removePerFrameHandler;
    };

    {
        private _health = GET_SHIELD_HEALTH(_x);
        private _maxHealth = _x getVariable [QGVAR(maxShieldHealth), GVAR(droidekaShieldHealth)];
        private _onCooldown = GET_SHIELD_COOLDOWN(_x) > CBA_missionTime;
        if (!alive _x || _onCooldown || _health >= _maxHealth) then { continue };

        // Only true if shield has a cooldown set and has passed that time
        if (!(_x isNil QGVAR(shieldDisabledUntil)) && !_onCooldown) then {
            _health = _maxHealth;
            _x setVariable [QGVAR(shieldHealth), _health]; // Code below handles syncing
            _x setVariable [QGVAR(shieldDisabledUntil), nil];
        };

        private _shield = _x getVariable [QGVAR(shield), objNull];
        private _isActive = !isObjectHidden _shield;
        private _regenHealth = _maxHealth * ([GVAR(droidekaShieldRegen), GVAR(droidekaShieldRegen) / 2] select _isActive);

        _x setVariable [QGVAR(shieldHealth), (_health + _regenHealth) min _maxHealth, true];

        if (!(_x call EFUNC(common,isSprinting)) && !_isActive) then { _x call FUNC(activateShield) };
    } forEach _droidekas;
}, 1] call CBA_fnc_addPerFrameHandler;
