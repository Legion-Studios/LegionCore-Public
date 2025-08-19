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
            QUOTE(ADDON),
            "ls_lighting"
        };
        units[] = { UNITS_LIST };
        weapons[] = { WEAPONS_LIST };
        VERSION_CONFIG;
    };
};

class EGVAR(lighting,clone_phase1);
class EGVAR(lighting,clone_phase2);

#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
#include "CfgGlasses.hpp"
#include "CfgEditorSubcategories.hpp"
