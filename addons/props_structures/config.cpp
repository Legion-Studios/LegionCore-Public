#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        author = AUTHOR;
        authors[] = {};
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            QUOTE(ADDON)
        };
        units[] = { UNITS_LIST };
        weapons[] = {};
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
