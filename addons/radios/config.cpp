#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = AUTHOR;
        authors[] = {"Clock", "DartRuffian"};
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "ls_common"
        };
        units[] = {
            QGVAR(cwp8_GH),
            QGVAR(cwp8_aurebesh_GH),
            QGVAR(dcs_GH),
            QGVAR(dcs_aurebesh_GH),
            QGVAR(hush98_GH),
            QGVAR(hush98_aurebesh_GH)
        };
        weapons[] = {
            QGVAR(base),
            QGVAR(cwp8),
            QGVAR(cwp8_aurebesh),
            QGVAR(dcs),
            QGVAR(dcs_aurebesh),
            QGVAR(hush98),
            QGVAR(hush98_aurebesh)
        };
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
#include "CfgEventHandlers.hpp"
