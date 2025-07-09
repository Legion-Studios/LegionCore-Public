#include "script_component.hpp"

// When ACE is loaded, merge caches and update pointer to point to the merged hashmap
ace_common_vehicleIconCache merge EGVAR(common,vehicleIcons);
EGVAR(common,vehicleIcons) = ace_common_vehicleIconCache;

ace_common_isModLoadedCache merge EGVAR(common,isModLoadedCache);
EGVAR(common,isModLoadedCache) = ace_common_isModLoadedCache;

if (isServer) then {
    call COMPILE_SCRIPT(XEH_postInitServer);
};
