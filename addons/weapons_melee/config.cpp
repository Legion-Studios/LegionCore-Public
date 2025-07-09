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
            // "ls_weapon_lightsaber_yellow_GH",
            "ls_meme_goose_GH",
            "ls_weapon_electrostaff_GH",
            "ls_weapon_verpinePowerLance_static",
            "ls_weapon_verpinePowerLance_GH",
            "ls_weapon_lightsaber_yellow_GH"
        };
        weapons[] = {
            "ls_weapon_melee_base",
            "ls_weapon_lightsaber_yellow",
            "ls_weapon_lightsaber_body_base",
            "ls_weapon_lightsaber_emitter_base",
            "ls_weapon_lightsaber_grip_base",
            "ls_weapon_lightsaber_pommel_base",
            "ls_meme_goose",
            "ls_weapon_electrostaff",
            "ls_weapon_electrostaff_black",
            "ls_weapon_verpinePowerLance"
        };
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
