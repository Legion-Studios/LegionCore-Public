#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = AUTHOR;
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "ls_main",
            // "ace_refuel",
            // "ace_parachute"
        };
        units[] = {
            "ls_resupply_jetpackFuel"
        };
        weapons[] = {
            QGVAR(fuelCan_empty),
            QGVAR(fuelCan_mag)
        };
        VERSION_CONFIG;
    };
};

// #include "CfgWeapons.hpp"
// #include "CfgMagazines.hpp"
// #include "CfgVehicles.hpp"
// #include "CfgRscTitles.hpp"
// #include "CfgUIGrids.hpp"
// #include "Cfg3DEN.hpp"
// #include "CfgEventHandlers.hpp"
// #include "ACE_Arsenal_Stats.hpp"
