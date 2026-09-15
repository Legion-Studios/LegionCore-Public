#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        author = AUTHOR;
        authors[] = {
            "Cannon",
            "Kharak"
        };
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            QUOTE(ADDON)
        };
        units[] = {
            "ls_prop_tibannaProp_base",
            "ls_prop_tibannaCollector",
            "ls_prop_tibannaCollector_bespin",
            "ls_prop_tibannaProcessor",
            "ls_prop_tibannaProcessor_bespin",
            "ls_prop_tibannaRefinery_hexContainers",
            "ls_prop_tibannaRefinery_hexContainers_bespin",
            "ls_prop_tibannaRefinery_spheres",
            "ls_prop_tibannaRefinery_spheres_bespin",
            "ls_prop_tibannaRefinery_tanks",
            "ls_prop_tibannaRefinery_tanks_bespin"
        };
        weapons[] = {};
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
