#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = AUTHOR;
        authors[] = {"DartRuffian"};
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "ls_loadorder"
        };
        units[] = {};
        weapons[] = {};
        VERSION_CONFIG;
    };

    #include "cfg\CfgPatches.hpp"
};

#include "CfgEventHandlers.hpp"
#include "Display3DEN.hpp"
