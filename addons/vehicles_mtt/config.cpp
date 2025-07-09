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
            "ls_vehicle_mtt_base",
            "ls_vehicle_mtt_cis",
            "ls_vehicle_mtt_federation",
            "ls_vehicle_mtt_cis_static",
            "ls_vehicle_mtt_federation_static",
            "ls_vehicle_mtt_wreck",
        };
        weapons[] = {
            "ls_weapon_mtt_cannon_120mm_l",
            "ls_weapon_mtt_cannon_120mm_r"
        };
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
