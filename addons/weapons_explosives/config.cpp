#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        author = AUTHOR;
        authors[] = {"Clock", "DartRuffian"};
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            QUOTE(ADDON)
        };
        units[] = {
            "ls_explosive_breachCharge",
            "ls_explosive_breachCharge_zeus",
            "ls_explosive_demoCharge",
            "ls_explosive_demoCharge_zeus",
            "ls_explosive_detpack",
            "ls_explosive_detpack_zeus",
            "ls_explosive_caltrops",
            "ls_explosive_caltrops_zeus"
        };
        weapons[] = {};
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
#include "CfgMagazines.hpp"
#include "CfgVehicles.hpp"
#include "CfgAmmo.hpp"
