#include "script_component.hpp"

["CBA_settingsInitialized", {
    [QGVAR(activate), LINKFUNC(activateServer)] call CBA_fnc_addEventHandler;
    [QGVAR(deactivate), LINKFUNC(deactivateServer)] call CBA_fnc_addEventHandler;
    [QGVAR(setSpawnGroup), LINKFUNC(setSpawnGroup)] call CBA_fnc_addEventHandler;
}] call CBA_fnc_addEventHandler;
