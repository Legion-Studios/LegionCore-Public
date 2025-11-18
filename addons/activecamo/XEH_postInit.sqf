#include "script_component.hpp"

// Hashmap of class names and their camo versions
GVAR(itemCache) = createHashMap;
GVAR(itemCacheReversed) = createHashMap;

[QGVAR(activate), LINKFUNC(activate)] call CBA_fnc_addEventHandler;
[QGVAR(deactivate), LINKFUNC(deactivate)] call CBA_fnc_addEventHandler;
