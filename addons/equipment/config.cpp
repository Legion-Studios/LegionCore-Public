#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = AUTHOR;
        authors[] = {"DartRuffian"};
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ls_common"};
        units[] = {QGVAR(squadShield)};
        weapons[] = {
            QGVAR(squadShield_packed),
            QGVAR(squadShield_broken_packed),
            QGVAR(repairKit)
        };
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
#include "ui\controls.hpp"
#include "CfgRscTitles.hpp"
#include "CfgEventHandlers.hpp"
