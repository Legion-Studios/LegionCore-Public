#include "script_component.hpp"

GVAR(dispenserCache) = createHashMap;

[QGVAR(activate), LINKFUNC(activateServer)] call CBA_fnc_addEventHandler;
[QGVAR(deactivate), LINKFUNC(deactivateServer)] call CBA_fnc_addEventHandler;
[QGVAR(setSpawnGroup), LINKFUNC(setSpawnGroup)] call CBA_fnc_addEventHandler;
[QGVAR(dropDispenser), LINKFUNC(dropDispenser)] call CBA_fnc_addEventHandler;
