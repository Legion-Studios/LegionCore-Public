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
            "ls_hmp_gun",
            "ls_hmp_gun_2",
            "ls_hmp_gun_3"
        };
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
#include "CfgMagazines.hpp"
#include "CfgAmmo.hpp"