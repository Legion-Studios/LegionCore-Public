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
            "ls_weapon_dc15a_GH",
            "ls_weapon_dc15a_wooden_GH",
            "ls_weapon_dc15ac_GH",
            "ls_weapon_dc15s_GH",
            "ls_weapon_dc15sa_GH",
            "ls_weapon_dc15saw_GH",
            "ls_weapon_dc15saw_wooden_GH",
            "ls_weapon_dc15x_GH",
            "ls_weapon_dc17m_GH",
            "ls_weapon_dc17m_sniper_GH",
            "ls_weapon_dc17m_antiArmor_GH",
            "ls_weapon_dc17s_GH",
            "ls_weapon_dc17s_fordo_GH",
            "ls_weapon_dc15br_GH",
            "ls_weapon_dc15br_wooden_GH",
            "ls_weapon_dp20_GH"
        };
        weapons[] = {
            "ls_weapon_dc15a_base",
            "ls_weapon_dc15a",
            "ls_weapon_dc15a_wooden",
            "ls_weapon_dc15ac",
            "ls_weapon_dc15s_base",
            "ls_weapon_dc15s",
            "ls_weapon_dc15sa_base",
            "ls_weapon_dc15sa",
            "ls_weapon_dc15sa_activeCamo",
            "ls_weapon_dc15saw",
            "ls_weapon_dc15saw_wooden",
            "ls_weapon_dc15x_base",
            "ls_weapon_dc15x",
            "ls_weapon_dc17x_wooden",
            "ls_weapon_dc17m_base",
            "ls_weapon_dc17m",
            "ls_weapon_dc17m_activeCamo",
            "ls_weapon_dc17m_sniper",
            "ls_weapon_dc17m_sniper_activeCamo",
            "ls_weapon_dc17m_antiArmor",
            "ls_weapon_dc17m_antiArmor_activeCamo",
            "ls_weapon_dc17s_base",
            "ls_weapon_dc17s",
            "ls_weapon_dc17s_fordo",
            "ls_muzzle_dc17m_blaster",
            "ls_muzzle_dc17m_blaster_activeCamo",
            "ls_muzzle_dc17m_sniper",
            "ls_muzzle_dc17m_sniper_activeCamo",
            "ls_muzzle_dc17m_antiArmor",
            "ls_muzzle_dc17m_antiArmor_activeCamo",
            "ls_cows_dc17m_sniper",
            "ls_weapon_dc15br_base",
            "ls_weapon_dc15br",
            "ls_weapon_dc15br_wooden",
            "ls_weapon_dp20_base",
            "ls_weapon_dp20"
        };
        VERSION_CONFIG;
    };
};

#include "CfgJointRails.hpp"
#include "CfgWeapons.hpp"
#include "CfgMagazines.hpp"
#include "CfgMagazineWells.hpp"
#include "CfgVehicles.hpp"
