#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = AUTHOR;
        authors[] = {"DartRuffian", "Cannon"};
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "ls_common",
            "ls_animations",
            "ls_sounds"
        };
        units[] = {};
        weapons[] = {
            "ls_rifle_base",
            "ls_pistol_base",
            "ls_launcher_base",
            "ls_muzzle_impulsor"
        };
        VERSION_CONFIG;
    };
};

#include "CfgJointRails.hpp"
#include "CfgWeapons.hpp"
#include "CfgMagazines.hpp"
#include "CfgMagazineWells.hpp"
#include "CfgAmmo.hpp"
#include "CfgEffects.hpp"
#include "CfgCloudlets.hpp"
#include "CfgLights.hpp"
#include "CfgRecoils.hpp"
#include "CfgWeaponCursors.hpp"
#include "CfgEventHandlers.hpp"
