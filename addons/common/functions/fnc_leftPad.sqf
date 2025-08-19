#include "..\script_component.hpp"
/*
 * Author: PabstMirror, DartRuffian
 * Adds characters to the left side of a string up to a certain length.
 *
 * Please provide proper credits to those who participate in development.
 * This function was developed for Legion Studios Core.
 * Do not place in any other mod without permission.
 *
 * Arguments:
 * 0: String <STRING>
 * 1: Desired length <NUMBER>
 * 3: Character (optional, default " ") <STRING>
 *
 * Return Value:
 * The padded string <STRING>
 *
 * Example:
 * ["Example", 15] call ls_common_fnc_leftPad;
 *
 * Public: Yes
 */

params [
    ["_string", "", [""]],
    ["_length", -1, [0]],
    ["_character", " ", [""]]
];
TRACE_3("fnc_leftPad",_string,_length,_character);

if (_string == "" || _length <= count _string || _character == "") exitWith { _string };

private _array = [];
_array resize [_length - count _string, _character];
_array append (_string splitString "");
_array joinString "";
