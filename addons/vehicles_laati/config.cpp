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
            "ls_vehicle_laati_base",
            "ls_vehicle_laati",
            "ls_vehicle_laati_airborne",
            "ls_vehicle_laati_medevac",
            "ls_vehicle_laati_wreck",
            "ls_prop_laati_bl_door",
            "ls_prop_laati_br_door",
            "ls_prop_laati_fl_door",
            "ls_prop_laati_fr_door"
        };
        weapons[] = {
            "ls_weapon_laati_turret_50mm_he",
            "ls_weapon_laati_turret_50mm_ap"
        };
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
