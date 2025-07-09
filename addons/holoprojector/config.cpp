#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = AUTHOR;
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "ls_common",
            "ls_sounds"
        };
        units[] = {
            QGVAR(base),
            QGVAR(bountyPuck_static),
            QGVAR(table_circle),
            QGVAR(table_rectangle)
        };
        weapons[] = {
            QGVAR(bountyPuck)
        };
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
#include "CfgEditorSubcategories.hpp"
#include "CfgEventHandlers.hpp"
