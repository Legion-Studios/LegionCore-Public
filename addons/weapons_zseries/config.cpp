#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        author = AUTHOR;
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            QUOTE(ADDON)
        };
        units[] = {
            "ls_weapon_z6_GH",
            "ls_weapon_z7_GH"
        };
        weapons[] = {
            "ls_weapon_z6_base",
            "ls_weapon_z6",
            "ls_weapon_z6_hammer",
            "ls_weapon_z7_base",
            "ls_weapon_z7"
        };
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
#include "CfgMagazines.hpp"
#include "CfgAmmo.hpp"
#include "CfgVehicles.hpp"
#include "CfgMagazineWells.hpp"
#include "CfgRecoils.hpp"
