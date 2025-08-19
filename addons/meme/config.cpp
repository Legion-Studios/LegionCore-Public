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
            QGVAR(graciousGovernmentMix_GH),
            QGVAR(favoritesOfForce_GH)
        };
        weapons[] = {
            QGVAR(graciousGovernmentMix),
            QGVAR(favoritesOfForce),
            QGVAR(goose)
        };
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
#include "CfgEventHandlers.hpp"
