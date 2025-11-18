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
            "ace_chemlights"
        };
        units[] = {};
        weapons[] = {
            "ls_chemlightBlue_shield",
            "ls_chemlightGreen_shield",
            "ls_chemlightOrange_shield",
            "ls_chemlightRed_shield"
        };
        VERSION_CONFIG;

        skipWhenMissingDependencies = 1;
    };
};

#include "CfgWeapons.hpp"
