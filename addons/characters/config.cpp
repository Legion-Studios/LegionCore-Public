#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = AUTHOR;
        authors[] = {
            "Dart",
            "Crimzon",
            "Cannon",
            "Rogue",
            "Starman",
            "Dezi"
        };
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "ls_common",
            "ls_animations"
        };
        units[] = { UNITS_LIST };
        weapons[] = { WEAPONS_LIST };
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
#include "CfgGlasses.hpp"
