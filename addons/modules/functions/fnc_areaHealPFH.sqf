#include "..\script_component.hpp"
/*
 * Authors: DartRuffian
 * Creates the PFH to heal players when they enter an area heal module's area of effect.
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
 * [] call ls_modules_fnc_areaHealPFH
 *
 * Public: No
 */

if (missionNamespace getVariable [QGVAR(areaHeals), []] isEqualTo []) exitWith {};

[{
    params ["", "_handle"];
    if (GVAR(areaHeals) isEqualTo []) exitWith {
        _handle call CBA_fnc_removePerFrameHandler;
    };

    if !(alive ls_player && { ls_player call EFUNC(common,isInjured) }) exitWith {};

    {
        if (ls_player inArea _x) exitWith {
            private _layer = QGVAR(areaHeal) cutText ["Recieving treatment...", "PLAIN DOWN"];
            QGVAR(areaHeal) cutText ["Recieving treatment...", "PLAIN DOWN"];
            [{
                ls_player call EFUNC(common,fullHeal);
                _this cutText ["You have been fully healed", "PLAIN DOWN"];
            }, _layer, 2] call CBA_fnc_waitAndExecute;
        };
    } forEach GVAR(areaHeals);
}, 5] call CBA_fnc_addPerFrameHandler;
