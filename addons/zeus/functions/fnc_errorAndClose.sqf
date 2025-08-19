#include "..\script_component.hpp"
/*
 * Authors: DartRuffian
 * Shows a message in the Zeus menu, and then deletes the given logic object.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Logic <OBJET>
 * 1: Message or stringtable key <STRING>
 *
 * Return Value:
 * None
 *
 * Example:
 * [_logic, "message"] call ls_zeus_fnc_errorAndClose
 *
 * Public: No
 */

params ["_logic", "_message"];
TRACE_1("fnc_errorAndClose",_message);

if (isLocalized _message) then {
    _message = localize _message;
};
[objNull, _message] call BIS_fnc_showCuratorFeedbackMessage;

deleteVehicle _logic;
