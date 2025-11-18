#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = AUTHOR;
        authors[] = {"Crimzonkat", "DartRuffian"};
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "ls_common",
            "ls_activecamo",
            "ls_dispenser"
        };
        units[] = {
            QMODULE(ToggleCamo),
            QMODULE(AreaHeal),
            "lsb_moduleSpaceDebris",
            QMODULE(DroidDispenser),
            QMODULE(DroidDispenser_zeus),
            QMODULE(DroidDispenser_B1_zeus),
            QMODULE(DroidDispenser_B2_zeus),
            QMODULE(DroidDispenser_BX_zeus),
            "ls_module_protonMortar_ordnance"
        };
        weapons[] = {};
        VERSION_CONFIG;
    };
};

#include "Cfg3DEN.hpp"
#include "CfgVehicles.hpp"
#include "CfgVehicleIcons.hpp"
#include "CfgAmmo.hpp"
#include "CfgFactionClasses.hpp"
#include "CfgEventHandlers.hpp"
#include "ui\controls.hpp"
#include "ui\RscAttributes.hpp"
