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
            "ls_vehicle_aat_base",
            "ls_vehicle_aat",
            "ls_vehicle_aat_cis",
            "ls_vehicle_aat_red",
            "ls_vehicle_aat_green",
            "ls_vehicle_aat_black",
            "ls_vehicle_aat_winter",
            "ls_vehicle_aat_wreck"
        };
        weapons[] = {};
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
