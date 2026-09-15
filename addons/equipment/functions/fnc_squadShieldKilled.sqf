#include "..\script_component.hpp"
/*
 * Authors: DartRuffian
 * Handles the squad shield being killed.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Shield <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * cursorObject call ls_equipment_fnc_squadShieldKilled
 *
 * Public: No
 */

params ["_shield"];
TRACE_1("fnc_squadShieldKilled",_shield);

_shield animateSource ["deploy_shield", 0];
