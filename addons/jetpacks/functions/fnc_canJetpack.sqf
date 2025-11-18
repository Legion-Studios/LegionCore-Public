#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Determines if a unit can use a jetpack.
 *
 * Arguments:
 * 0: The unit to check <OBJECT>
 *
 * Return Value:
 * True if unit can use a jetpack, otherwise false <BOOL>
 *
 * Example:
 * ls_player call ls_jetpacks_fnc_canJetpack;
 *
 * Public: Yes
 */

params [
    ["_unit", objNull, [objNull]]
];
TRACE_1("fnc_canJetpack",_unit);

if (_unit call ace_common_fnc_isAwake and
    {isNull objectParent _unit} and
    {!(_unit getVariable ["TAS_ATRT_isRiding", false])} and
    {!(_unit call EFUNC(core,inFeatureCamera))} and
    {_unit call FUNC(hasJetpack)} and
    {_unit call FUNC(getFuel) > 0}
) exitWith {true};

false;
