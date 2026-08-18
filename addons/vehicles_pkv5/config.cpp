#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        author = AUTHOR;
        authors[] = {"Cannon", "Ruby", "DartRuffian"};
        url = ECSTRING(main,url);
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {QUOTE(ADDON)};
        units[] = {
            "ls_vehicle_pkv5",
            "ls_vehicle_pkv5_aaa",
            "ls_vehicle_pkv5_mlrs",
            "ls_vehicle_pkv5_mortar",
            "ls_vehicle_pkv5_mp",
            "ls_vehicle_pkv5_imperial",
            // "ls_vehicle_pkv5_aaa_imperial",
            // "ls_vehicle_pkv5_mlrs_imperial",
            // "ls_vehicle_pkv5_mortar_imperial",
            // "ls_vehicle_pkv5_mp_imperial"
        };
        weapons[] = {};
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
