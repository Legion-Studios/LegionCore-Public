#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = AUTHOR;
        authors[] = {"DartRuffian"};
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "ls_common"
        };
        units[] = { UNITS_LIST };
        weapons[] = { WEAPONS_LIST };
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
#include "CfgEditorSubcategories.hpp"
#include "CfgEventHandlers.hpp"
