#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = AUTHOR;
        authors[] = {"Cannon", "DartRuffian"};
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "ls_weapons",
            "ls_impulsor",
            "ls_characters_clone_legions"
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