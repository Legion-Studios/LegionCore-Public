#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        author = AUTHOR;
        authors[] = {"Jenna", "Kharak"};
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            QUOTE(ADDON),
            QEGVAR(characters,clone)
        };
        units[] = {
            "ls_vehicle_starsaber_base",
            "ls_vehicle_starsaber"
        };
        weapons[] = {
            "ls_weapon_starsaber_cannon"
        };
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
