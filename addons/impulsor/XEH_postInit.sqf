#include "script_component.hpp"

GVAR(vehicleCache) = createHashMap;

if (hasInterface) then {
    call COMPILE_SCRIPT(XEH_postInitClient);
};
