#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = AUTHOR;
        authors[] = {"DartRuffian"};
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "ls_loadorder",
            "ae3_main",
            "ae3_armaos",
            "ae3_filesystem",
            "ae3_flashdrive",
            "ae3_interaction",
            "ae3_network",
            "ae3_power"
        };
        units[] = {
            "Land_ls_terminal_01_AE3"
        };
        weapons[] = {};
        VERSION_CONFIG;

        skipWhenMissingDependencies = 1;
    };
};

#include "CfgVehicles.hpp"
#include "CfgEventHandlers.hpp"
