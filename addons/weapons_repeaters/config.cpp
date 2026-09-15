#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        author = AUTHOR;
        authors[] = {"Cannon"};
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            QUOTE(ADDON)
        };
        units[] = {
            "ls_weapon_acpa_GH",
            "ls_weapon_acpr_GH",
            "ls_weapon_ls150_GH"
        };
        weapons[] = {
            "ls_weapon_acpa_base",
            "ls_weapon_acpa",
            "ls_weapon_acpr_base",
            "ls_weapon_acpr",
            "ls_weapon_ls150_base",
            "ls_weapon_ls150"
        };
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
#include "CfgMagazines.hpp"
#include "CfgMagazineWells.hpp"
#include "CfgVehicles.hpp"
#include "CfgRecoils.hpp"
