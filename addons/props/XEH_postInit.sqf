#include "script_component.hpp"

if (!hasInterface) exitWith {};

[QGVAR(initReinsertTerminal), LINKFUNC(reinsertTerminal_init)] call CBA_fnc_addEventHandler;

[QGVAR(reinsertMessage), {
    params ["_caller", "_locationName"];
    format [GVAR(reinsertMessage),
        _caller getVariable ["ace_nameRaw", name _caller],
        groupId group _caller, _locationName
    ] call CBA_fnc_notify;
}] call CBA_fnc_addEventHandler;
