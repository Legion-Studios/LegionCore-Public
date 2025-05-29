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
            "ls_vehicle_bawhag_base",
            "ls_vehicle_bawhag",
            "ls_vehicle_bawhag_static",
            "ls_vehicle_bawhag_wreck"
        };
        weapons[] = {};
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
