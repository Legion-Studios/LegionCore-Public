#include "..\script_component.hpp"
/*
 * Authors: DartRuffian
 * Custom ACE Medical wound handler while riding an AT-RT.
 *
 * Arguments:
 * See https://ace3.acemod.org/wiki/framework/medical-framework#44-wound-handler-function
 *
 * Return Value:
 * See https://ace3.acemod.org/wiki/framework/medical-framework#44-wound-handler-function
 *
 * Public: No
 */

params ["_unit", "_allDamages"];
TRACE_2("fnc_atrt_woundHandler",_unit,_allDamages);

/*
Example output of _allDamages. Note that body parts are sorted by the damage they recieved.
Values are:
    0: Actual damage
    1: Body part
    2: Damage *before armor reduction*
_allDamages = [
    [1.06597, "Body", 17.0556],
    [1.06597, "LeftLeg", 17.0556],
    [1.06597, "RightLeg", 17.0556],
    [0.411558, "RightArm", 6.58492],
    [0.353302, "LeftArm", 5.65284],
    [0.189946, "Head", 2.27935],
    [0.0527364, "#structural", 0.210946]
]
*/

// Redirect all damage if the unit is riding an AT-RT
private _atrt = _unit getVariable ["NCA_atrt_riding", objNull];
if (!isNull _atrt) then {
    private _totalDamage = 0;
    {
        _totalDamage = _totalDamage + (_x select 0);
    } forEach _allDamages;

    TRACE_2("AT-RT driver hit, redirecting damage to AT-RT instead",_atrt,_totalDamage);
    [_atrt, nil, _totalDamage] call FUNC(handleDamage);
    _allDamages resize 0;
};

// Pass state to later wound handlers
_this;
