#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        author = AUTHOR;
        authors[] = {"DartRuffian", "Cannon"};
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            QUOTE(ADDON)
        };
        units[] = {
            "ls_vehicle_radarDish_base",
            "ls_vehicle_radarDish",
            "ls_vehicle_radarDish_desert",
            "ls_vehicle_radarDish_woodland",
            "ls_vehicle_radarDish_blufor",
            "ls_vehicle_radarDish_desert_blufor",
            "ls_vehicle_radarDish_woodland_blufor",
            "ls_vehicle_radarDish_opfor",
            "ls_vehicle_radarDish_desert_opfor",
            "ls_vehicle_radarDish_woodland_opfor",
            "ls_vehicle_radarDish_independent",
            "ls_vehicle_radarDish_desert_independent",
            "ls_vehicle_radarDish_woodland_independent"
        };
        weapons[] = {};
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
