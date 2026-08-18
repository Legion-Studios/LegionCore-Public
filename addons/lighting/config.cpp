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
        weapons[] = {
            "ls_nvg_headlamp_invisible",
            "ls_nvg_headlamp_invisible_double",
        };
        VERSION_CONFIG;
    };
};

#include "ls_lighting_presets.hpp"
#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
#include "CfgGlasses.hpp"
#include "CfgEventHandlers.hpp"
#include "ACE_Arsenal_Stats.hpp"
