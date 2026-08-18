#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        author = AUTHOR;
        authors[] = {"DartRuffian"};
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            QUOTE(ADDON)
        };
        units[] = {
            "ls_vehicle_mortar_base",
            "ls_vehicle_mortar_gar",
            "ls_vehicle_mortar_cis",
            "ls_vehicle_mortar_mercenary",
            "ls_backpack_mortar_base",
            "ls_backpack_mortar_gar",
            "ls_backpack_mortar_cis",
            "ls_backpack_mortar_mercenary"
        };
        weapons[] = {
            "ls_weapon_mortar_82mm",
            "ls_weapon_mortar_82mm_proxy",
            "ls_launcher_mortar_carry_base",
            "ls_launcher_mortar_carry_gar",
            "ls_launcher_mortar_carry_cis",
            "ls_launcher_mortar_carry_mercenary"
        };
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
#include "CfgMagazines.hpp"
#include "CfgAmmo.hpp"
#include "CfgVehicles.hpp"
#include "ACE_CSW_Groups.hpp"
