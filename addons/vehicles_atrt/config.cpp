#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        author = AUTHOR;
        authors[] = {"Meaddle", "Ghoul", "DartRuffian"};
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            QUOTE(ADDON)
        };
        units[] = {
            "ls_vehicle_atrt",
            "ls_vehicle_atrt_rotaryBlaster",
            "ls_vehicle_atrt_flamethrower",
            "ls_vehicle_atrt_41strb",
            "ls_vehicle_atrt_rotaryBlaster_41strb",
            "ls_vehicle_atrt_flamethrower_41strb"
        };
        weapons[] = {
            "ls_uniform_atrt"
        };
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
