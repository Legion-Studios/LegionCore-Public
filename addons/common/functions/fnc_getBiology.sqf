#include "..\script_component.hpp"
/*
 * Author: Crimzonkat, DartRuffian
 * Returns the biology of a given unit, for example a zombie, human, droid, hologram, etc.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: The unit to check <OBJECT>
 * 1: Force refreshing biology (optional, default: false) <BOOL>
 *
 * Return Value:
 * Biology array <ARRAY>
 * - 0: Type of unit, defined in ls_biologies class <STRING>
 * - 1: "Species" of unit, more specific descriptor <STRING>
 *      - E.g. an alien race will have the "nearhuman" type, and the species will be the exact alien
 * - 2: True if unit is organic, otherwise false <BOOL>
 * - 3: Paths to blood models that this unit uses when bleeding <ARRAY>
 *     - Custom blood models only work when ACE Medical is loaded.
 *
 * Example:
 * _unit call ls_common_fnc_getBiology;
 *
 * Public: Yes
 */

params [
    ["_unit", objNull, [objNull]],
    ["_forceRefresh", false, [false]]
];
TRACE_2("fnc_getBiology",_unit,_forceRefresh);

if (isNull _unit || !(_unit isKindOf "CAManBase")) exitWith {};

private _biology = _unit getVariable [QGVAR(biology), []];
if (_forceRefresh) then {
    _biology = [];
};

if (_biology isNotEqualTo []) exitWith {
    TRACE_1("Fetching cached biology",_biology);
    _biology;
};

// Common things that biologies check
private _biologyParams = [_unit, configFile >> "CfgWeapons" >> uniform _unit, face _unit];
private _highestPriority = -1;
{
    _y params ["", "", "", "_condition", "_priority"];
    if (_priority > _highestPriority && {_biologyParams call _condition}) then {
        _highestPriority = _priority;
        _biology = _y;
    };
} forEach GVAR(biologies);

// No biology matched, use human as default
if (_biology isEqualTo []) then {
    _biology = GVAR(biologies) get "human";
};

_biology = +_biology; // Get a copy of the array
_biology deleteAt 3; // Remove condition
_biology deleteAt 3; // Remove priority

// Allow event handlers to modify the return
[QGVAR(biologySet), _biology] call CBA_fnc_localEvent;

_unit setVariable [QGVAR(biology), _biology, true];
_biology;
