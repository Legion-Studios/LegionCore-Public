#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = AUTHOR;
        authors[] = {"Crimzonkat", "DartRuffian"};
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "ls_common"
        };
        units[] = {
            QGVAR(default),
            QGVAR(whiteHigh),
            QGVAR(whiteLow),
            QGVAR(redHigh),
            QGVAR(redLow),
            QGVAR(blueHigh),
            QGVAR(blueLow)
        };
        weapons[] = {};
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
#include "CfgEventHandlers.hpp"
#include "ls_lighting_presets.hpp"
#include "ACE_Arsenal_Stats.hpp"
