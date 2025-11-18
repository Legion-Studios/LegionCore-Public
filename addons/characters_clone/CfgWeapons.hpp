class CfgWeapons {
    class H_HelmetO_ViperSP_hex_F;
    class ls_helmet_base: H_HelmetO_ViperSP_hex_F {
        class ItemInfo;
    };
    class ls_cloneHelmet_base: ls_helmet_base {
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo {
                class Head {
                    hitpointName = "HitHead";
                    armor = 8;
                    passThrough = 0.5;
                };
                class Face {
                    hitpointName = "HitFace";
                    armor = 8;
                    passThrough = 0.5;
                };
            };
        };
    };
    #include "helmets\airborne\CfgWeapons.hpp"
    #include "helmets\arc\CfgWeapons.hpp"
    #include "helmets\arf\CfgWeapons.hpp"
    #include "helmets\phase1\CfgWeapons.hpp"
    #include "helmets\phase2\CfgWeapons.hpp"
    #include "helmets\phase2Pilot\CfgWeapons.hpp"
    #include "helmets\phase3Pilot\CfgWeapons.hpp"
    #include "helmets\scout\CfgWeapons.hpp"
    #include "helmets\atrtDriver\CfgWeapons.hpp"

    class U_I_CombatUniform;
    class ls_uniform_base: U_I_CombatUniform {
        class ItemInfo;
    };
    class ls_cloneUniform_base: ls_uniform_base {
        class ItemInfo: ItemInfo {
            containerClass = "Supply150";
            mass = 40;
        };
    };
    #include "uniforms\jediCommander\CfgWeapons.hpp"
    #include "uniforms\phase2\CfgWeapons.hpp"
    #include "uniforms\scout\CfgWeapons.hpp"

    class V_PlateCarrier1_rgr;
    class ls_vest_base: V_PlateCarrier1_rgr {
        class ItemInfo;
    };
    class ls_cloneVest_base: ls_vest_base {
        class ItemInfo: ItemInfo {
            containerClass = "Supply100";
        };
    };
    #include "vests\arc\CfgWeapons.hpp"
    #include "vests\gunner\CfgWeapons.hpp"
    #include "vests\officer\CfgWeapons.hpp"
    #include "vests\recon\CfgWeapons.hpp"
    #include "vests\scout\CfgWeapons.hpp"

    class NVGoggles;
    class ls_nvg_base: NVGoggles {
        class ItemInfo;
    };

    class Laserdesignator;

    #include "equipment\headlamps\CfgWeapons.hpp"
    #include "equipment\nvgs\visor\CfgWeapons.hpp"
    #include "equipment\nvgs\commander\CfgWeapons.hpp"
    #include "equipment\nvgs\phase3Pilot\CfgWeapons.hpp"
    #include "equipment\binoculars\CfgWeapons.hpp"
};
