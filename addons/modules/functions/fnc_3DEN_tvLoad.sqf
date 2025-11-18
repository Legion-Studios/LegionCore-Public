#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Handles loading a tree view's value as an Eden attribute.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Control group <CONTROL>
 *
 * Return Value:
 * None
 *
 * Example:
 * _ctrlGroup call ls_modules_fnc_3DEN_tvLoad;
 *
 * Public: No
 */

#pragma hemtt ignore_variables ["_value"];
_value params ["_tvPath"];
(_this controlsGroupCtrl 500) tvSetCurSel _tvPath;
