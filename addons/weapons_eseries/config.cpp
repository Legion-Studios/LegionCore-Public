#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        author = AUTHOR;
        authors[] = {
            "DartRuffian",
            "Cannon",
            "Starman",
            "Crimzon"
        };
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            QGVAR(plx)
        };
        units[] = {
            "ls_weapon_e5_GH",
            "ls_weapon_e5c_GH",
            "ls_weapon_e11_GH",
            "ls_weapon_e11_scoped_GH",
            "ls_weapon_e11_scopedThermal_GH",
            "ls_weapon_e60r_at_GH",
            "ls_weapon_e60r_aa_GH"
        };
        weapons[] = {
            "ls_weapon_e5_base",
            "ls_weapon_e5",
            "ls_weapon_e5_activeCamo",
            "ls_weapon_e5c_base",
            "ls_weapon_e5c",
            "ls_weapon_e11_base",
            "ls_weapon_e11",
            "ls_weapon_e11_scoped",
            "ls_weapon_e11_scopedThermal",
            "ls_cows_e11_optic",
            "ls_cows_e11_optic_thermal",
            "ls_muzzle_e11_coils",
            "ls_muzzle_e11_fins",
            "ls_weapon_e60r_base",
            "ls_weapon_e60r_at",
            "ls_weapon_e60r_aa"
        };
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
#include "CfgMagazines.hpp"
#include "CfgMagazineWells.hpp"
#include "CfgAmmo.hpp"
#include "CfgVehicles.hpp"
