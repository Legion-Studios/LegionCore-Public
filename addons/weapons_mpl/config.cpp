#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        author = AUTHOR;
        authors[] = {"Cannon", "DartRuffian"};
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            QUOTE(ADDON)
        };
        units[] = {
            "ls_weapon_mpl57_GH",
            "ls_weapon_mpl57_rebel_GH"
        };
        weapons[] = {
            "ls_weapon_mpl57_UGL",
            "ls_weapon_mpl57_base",
            "ls_weapon_mpl57",
            "ls_weapon_mpl57_rebel"
        };
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
#include "CfgMagazineWells.hpp"
#include "CfgVehicles.hpp"
