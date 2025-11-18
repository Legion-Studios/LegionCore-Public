#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = AUTHOR;
        authors[] = {"Cannon", "DartRuffian"};
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "ls_common",
            "ls_weapons",
            "ls_impulsor",
            "ls_characters_civilian",
            "ls_characters_clone",
            "ls_characters_clone_legacy",
            "ls_characters_clone_legions",
            "ls_characters_csf",
            "ls_characters_droid",
            "ls_characters_imperial",
            "ls_characters_jabiim",
            "ls_characters_mandalorian",
            "ls_characters_orsf",
            "ls_characters_rebels"
        };
        units[] = {
            "ls_wreck_base",
            "ls_staticVehicle_base"
        };
        weapons[] = {
            "ls_weapon_CMFlareLauncher",
            "ls_gmg_40mm",
            "ls_lmg_127",
            "ls_speeder_AP"
        };
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
#include "CfgMagazines.hpp"
#include "CfgAmmo.hpp"
#include "CfgEventHandlers.hpp"
#include "ACE_CSW_Groups.hpp"
