#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        author = AUTHOR;
        authors[] = {
            "Rogue771",
            "Cannon",
            "Crimzon",
            "Dart"
        };
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            QUOTE(ADDON)
        };
        units[] = { UNITS_LIST };
        weapons[] = { WEAPONS_LIST };
        VERSION_CONFIG;
    };
};

#include "CfgEditorSubcategories.hpp"
#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
#include "CfgGlasses.hpp"
