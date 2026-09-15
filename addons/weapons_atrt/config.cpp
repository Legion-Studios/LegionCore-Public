#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        author = AUTHOR;
        authors[] = {"DartRuffian"};
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            QGVAR(zseries)
        };
        units[] = {};
        weapons[] = {
            "ls_weapon_atrt_laserCannon",
            "ls_weapon_atrt_rotaryBlaster",
            // "ls_weapon_atrt_flamethrower"
        };
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
#include "CfgMagazines.hpp"
#include "CfgMagazineWells.hpp"
#include "CfgRecoils.hpp"
