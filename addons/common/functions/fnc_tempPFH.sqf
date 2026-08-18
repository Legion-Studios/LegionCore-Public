#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Creates a CBA per-frame handler and runs the function as long as the condition is true.
 * Once condition returns false, the PFH is removed.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios: Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: Function to run <CODE>
 * 1: Condition to check, (optional, default: {true}) <CODE>
 * 2: Code to run after removing PFH (optional, default: {}) <CODE>
 * 3: The delay between each execution (optional, default: 0) <NUMBER>
 * 4: Parameters to pass to the PFH (optional, default: []) <ANY>
 *    - Parameters will have PFH handle appended to the end of the array
 *    - If only one element is passed, then parameters passed to _function will be [_parameter, _handle]
 *
 * Return Value:
 * The PFH id <NUMBER>
 *
 * Example:
 * [_function, _condition, _exitCode] call ls_common_fnc_tempPFH;
 *
 * Public: No
 */

params [
    ["_function", {}, [{}]],
    ["_condition", {true}, [{}]],
    ["_exitCode", {}, [{}]],
    ["_delay", 0, [0]],
    ["_parameters", []]
];
TRACE_5("fnc_tempPFH",_function,_condition,_exitCode,_delay,_parameters);

if (_function isEqualTo {}) exitWith {-1};

if !(_parameters isEqualType []) then {
    _parameters = [_parameters];
};

// Dummy value to use as placeholder for pfh id
_parameters pushBack -1;

[{
    params ["_args", "_handle"];
    _args params ["_function", "_condition", "_exitCode", "_parameters"];

    // In 99% of cases, you don't want to run a PFH while paused
    if (isGamePaused) exitWith {};

    // Replace dummy value with pfh id
    if (_parameters select -1 == -1) then {
        _parameters set [-1, _handle];
    };

    if (_parameters call _condition) then {
        _parameters call _function;
    } else {
        _handle call CBA_fnc_removePerFrameHandler;
        _parameters call _exitCode;
    };
}, _delay, [_function, _condition, _exitCode, _parameters]] call CBA_fnc_addPerFrameHandler;
