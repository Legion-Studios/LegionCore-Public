#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        author = AUTHOR;
        authors[] = {"DartRuffian", "Cannon"};
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            QUOTE(ADDON),
            QGVAR(rps)
        };
        units[] = {
            "ls_weapon_plx1_at_GH",
            "ls_weapon_plx1_aa_GH"
        };
        weapons[] = {
            "ls_weapon_plx1_base",
            "ls_weapon_plx1_at",
            "ls_weapon_plx1_aa"
        };
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
#include "CfgMagazines.hpp"
#include "CfgMagazineWells.hpp"
#include "CfgAmmo.hpp"
#include "CfgVehicles.hpp"
