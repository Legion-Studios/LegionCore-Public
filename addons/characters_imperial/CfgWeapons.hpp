class CfgWeapons {
    class H_HelmetO_ViperSP_hex_F;
    class ls_helmet_base: H_HelmetO_ViperSP_hex_F {
        class ItemInfo;
    };
    #include "helmets\army\CfgWeapons.hpp"
    #include "helmets\kepi\CfgWeapons.hpp"

    class ls_uniform_base;
    class ls_imperialUniform_base: ls_uniform_base {
        class ItemInfo;
    };
    #include "uniforms\army\CfgWeapons.hpp"

    class Vest_NoCamo_Base;
    class V_PlateCarrier1_rgr: Vest_NoCamo_Base {
        class ItemInfo;
    };
    class ls_vest_base: V_PlateCarrier1_rgr {
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo {
                class Chest;
                class Diaphragm;
                class Abdomen;
            };
        };
    };
    #include "vests\army\CfgWeapons.hpp"
    #include "vests\pauldron\CfgWeapons.hpp"
    #include "vests\tacBelt\CfgWeapons.hpp"
};
