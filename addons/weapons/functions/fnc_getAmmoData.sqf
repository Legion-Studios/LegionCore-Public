#include "..\script_component.hpp"
/*
 * Authors: DartRuffian
 * Returns and caches custom data from an ammo class.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Ammo class <STRING>
 *
 * Return Value:
 * Custom ammo data <ARRAY>
 *   - 0: Ammo type <NUMBER>
 *   - 1: Stun duration <NUMBER>
 *   - 2: Ion engine damage <NUMBER>
 *   - 3: Ion fuel burn <NUMBER>
 *   - 4: Is breaching charge <BOOL>
 *
 * Example:
 * "ls_explosive_breachCharge_ammo" call ls_weapons_fnc_getAmmoData
 *
 * Public: No
 */

params ["_ammo"];
TRACE_1("fnc_getAmmoData",_ammo);

GVAR(ammoData) getOrDefaultCall [toLowerANSI _ammo, {
    private _ammoConfig = configFile >> "CfgAmmo" >> _ammo;
    [
        getNumber (_ammoConfig >> QGVAR(ammoType)),
        getNumber (_ammoConfig >> QGVAR(stunDuration)),
        getNumber (_ammoConfig >> QGVAR(ionEngineDamage)),
        getNumber (_ammoConfig >> QGVAR(ionFuelBurn)),
        getNumber (_ammoConfig >> QEGVAR(explosives,isBreachCharge)) == 1
    ]; // Return
}, true];
