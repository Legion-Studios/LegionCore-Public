#include "script_component.hpp"

["CBA_settingsInitialized", {
    [QGVAR(updateDisplay), LINKFUNC(updateDisplay)] call CBA_fnc_addEventHandler;
}] call CBA_fnc_addEventHandler;
