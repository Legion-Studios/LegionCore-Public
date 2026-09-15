#include "script_component.hpp"

// Ruby reuploaded WebKnight droids with updated classes, so we can skip if that is loaded
#pragma hemtt flag pe23_ignore_has_include
#if __has_include("\WebKnightsRobotics\RubysRewrite.hpp") == 0
class CfgPatches {
    class ADDON {
        author = AUTHOR;
        authors[] = {"DartRuffian"};
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "ls_loadorder",
            "WBK_DifferentRobotics_1"
        };
        units[] = {};
        weapons[] = {};
        VERSION_CONFIG;

        skipWhenMissingDependencies = 1;
    };
};

#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
#endif
