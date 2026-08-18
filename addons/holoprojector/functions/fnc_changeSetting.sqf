#include "..\script_component.hpp"
/*
 * Authors: Ragwolf
 * Rewritten by DartRuffian
 * Changes a setting variable for a holoprojector and plays a sound.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for the 101st Doom Battalion, and used in Legion Studios: Core with permission.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Object <OBJECT>
 * 1: Setting <STRING>
 * 2: Value <ANY>
 * 3: Sync (optional, default: true) <BOOL>
 *
 * Return Value:
 * None
 *
 * Example:
 * [_holomap, "someSetting", _someValue] call ls_holoprojector_fnc_changeSetting;
 *
 * Public: No
 */

params ["_object", "_setting", "_value", ["_sync", true]];
TRACE_4("fnc_changeSetting",_object,_setting,_value,_sync);

_object setVariable [_setting, _value, _sync];

if (_sync) then {
    [_object, "beep"] call EFUNC(common,say3D);
} else {
    _object say3D "beep";
};
