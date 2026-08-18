#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        author = AUTHOR;
        authors[] = {"Cannon", "DartRuffian"};
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            QUOTE(ADDON),
            QEGVAR(weapons,repeaters)
        };
        units[] = {
            "ls_vehicle_mrbc_base",
            "ls_vehicle_mrbc",
            "ls_backpack_mrbc",
            "ls_vehicle_autoturret_base",
            "ls_vehicle_autoTurret_orsf",
            "ls_vehicle_autoTurret_pirate",
            "ls_vehicle_autoTurret_mercenary",
            "ls_vehicle_autoTurret_civilian",
            "ls_vehicle_autoTurret_cqc_base",
            "ls_vehicle_autoTurret_orsf_cqc",
            "ls_vehicle_autoTurret_pirate_cqc",
            "ls_vehicle_autoTurret_mercenary_cqc",
            "ls_vehicle_autoTurret_civilian_cqc",
        };
        weapons[] = {
            "ls_weapon_mrbc",
            "ls_weapon_mrbc_proxy",
            "ls_launcher_mrbc_carry",
            "ls_weapon_autoTurret_mg",
            "ls_weapon_autoTurret_cqc"
        };
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
#include "CfgMagazines.hpp"
#include "CfgVehicles.hpp"
