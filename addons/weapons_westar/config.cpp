#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        author = AUTHOR;
        authors[] = {"DartRuffian", "Cannon"};
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            QUOTE(ADDON)
        };
        units[] = {
            "ls_weapon_westar35c_GH",
            "ls_weapon_westar35s_GH",
            "ls_weapon_westar35sa_GH",
            "ls_weapon_westarM5_GH",
            "ls_weapon_westarM5_ugl_GH"
        };
        weapons[] = {
            "ls_weapon_westar35c_base",
            "ls_weapon_westar35c",
            "ls_weapon_westar35s_base",
            "ls_weapon_westar35s",
            "ls_weapon_westar35s_scoped",
            "ls_cows_westar35s_scope",
            "ls_muzzle_westar35s_suppressor",
            "ls_weapon_westar35sa_base",
            "ls_weapon_westar35sa",
            "ls_weapon_westar35sa_flashlight",
            "ls_weapon_westar35sa_laser",
            "ls_pointer_westar35sa_flashlight",
            "ls_pointer_westar35sa_laser",
            "ls_weapon_westarM5_base",
            "ls_weapon_westarM5",
            "ls_weapon_westarM5_scoped",
            "ls_weapon_westarM5_ugl",
            "ls_weapon_westarM5_ugl_scoped",
            "ls_cows_westarM5_scope"
        };
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
#include "CfgMagazines.hpp"
#include "CfgMagazineWells.hpp"
#include "CfgVehicles.hpp"
