#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = AUTHOR;
        authors[] = {"Cannon", "DartRuffian"};
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "ls_data"
        };
        units[] = {
            "ls_helmet_groundHolder_base",
            "ls_item_groundHolder_base",
            "ls_weapon_groundHolder_base"
        };
        weapons[] = {};
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
#include "CfgFactionClasses.hpp"
#include "CfgEditorCategories.hpp"
#include "CfgEditorSubcategories.hpp"
#include "CfgEventHandlers.hpp"
#include "CfgVehicleIcons.hpp"
#include "CfgFontFamilies.hpp"
#include "CfgWorlds.hpp"
#include "Cfg3DEN.hpp"
#include "ls_biologies.hpp"
#include "lsb_distributions.hpp"
#include "lsb_spaceDebrisPresets.hpp"
