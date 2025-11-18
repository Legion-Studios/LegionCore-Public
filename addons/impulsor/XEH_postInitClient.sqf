#include "script_component.hpp"

["CBA_settingsInitialized", {
    [QGVAR(levelChanged), LINKFUNC(levelChanged)] call CBA_fnc_addEventHandler;
}] call CBA_fnc_addEventHandler;
