#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Deactivates active camo for a unit.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * player call ls_activeCamo_fnc_deactivateUnit;
 *
 * Public: No
 */

params ["_unit"];
TRACE_1("fnc_deactivateUnit",_unit);

// Swap items back to their pre-camo versions
[_unit, false] call FUNC(replaceLoadoutItems);

// Sound effect
[_unit, "ls_activeCamo_deactivate"] call EFUNC(common,say3D);

// Update face
[_unit, false] call EFUNC(common,hideHead);

// Cleanup
deleteVehicle (_unit getVariable [QGVAR(idleSoundSource), objNull]);
_unit setVariable [QGVAR(idleSoundSource), nil];
_unit setVariable [QGVAR(lastDeactivated), CBA_missionTime];
_unit setVariable [QGVAR(timesHit), nil];
true;
