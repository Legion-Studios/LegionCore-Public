#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = AUTHOR;
        authors[] = {"DartRuffian", "Crimzonkat"};
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "ls_loadorder",
            "3AS_Main_Loadorder",
            "3AS_Main_Intro" // I don't trust 3AS to maintain their loadorder
        };
        units[] = {};
        weapons[] = {};
        VERSION_CONFIG;

        skipWhenMissingDependencies = 1;
    };
};

#include "CfgVehicles.hpp"
#include "RscDisplayMain.hpp"
