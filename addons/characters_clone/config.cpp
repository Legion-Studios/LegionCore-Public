#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        author = AUTHOR;
        authors[] = {
            "Clock",
            "Poly",
            "Wubbsy",
            "Cannon",
            "DartRuffian"
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

#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
#include "CfgGlasses.hpp"
#include "CfgEditorSubcategories.hpp"
