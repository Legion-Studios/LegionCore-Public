#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        author = AUTHOR;
        authors[] = {"Cannon", "DartRuffian"};
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            QGVAR(laati)
        };
        units[] = {
            "ls_vehicle_hmp_base",
            "ls_vehicle_hmp",
            "ls_vehicle_hmp_transport",
            "ls_vehicle_hmp_wreck"
        };
        weapons[] = {
            "ls_weapon_hmp_turret_50mm_he",
            "ls_weapon_hmp_turret_50mm_ap",
            "ls_weapon_hmp_turret_50mm_apfsds"
        };
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
#include "CfgMagazines.hpp"
#include "CfgAmmo.hpp"
