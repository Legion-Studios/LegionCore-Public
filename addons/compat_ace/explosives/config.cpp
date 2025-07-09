#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        author = AUTHOR;
        authors[] = {"DartRuffian"};
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            QUOTE(ADDON),
            "ace_explosives"
        };
        units[] = {
            "ls_explosive_breachCharge_place",
            "ls_explosive_demoCharge_place",
            "ls_explosive_detpack_place",
            "ls_explosive_caltrops_place",
            "ls_explosive_caltropsDispenser_place"
        };
        weapons[] = {};
        VERSION_CONFIG;

        skipWhenMissingDependencies = 1;
    };
};

#include "CfgMagazines.hpp"
#include "CfgVehicles.hpp"
