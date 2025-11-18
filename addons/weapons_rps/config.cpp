#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        author = AUTHOR;
        authors[] = {"DartRuffian", "Cannon"};
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            QUOTE(ADDON)
        };
        units[] = {
            "ls_weapon_rps6_GH",
            "ls_weapon_rps6_loaded_GH"
        };
        weapons[] = {
            "ls_weapon_rps6_base",
            "ls_weapon_rps6",
            "ls_weapon_rps6_disposable",
            "ls_weapon_rps6_loaded",
            "ls_weapon_rps6_used"
        };
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
#include "CfgMagazines.hpp"
#include "CfgMagazineWells.hpp"
#include "CfgAmmo.hpp"
#include "CfgVehicles.hpp"
#include "CBA_DisposableLaunchers.hpp"
