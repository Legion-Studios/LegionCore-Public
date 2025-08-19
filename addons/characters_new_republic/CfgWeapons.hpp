class CfgWeapons {
    class H_HelmetO_ViperSP_hex_F;
    class ls_helmet_base: H_HelmetO_ViperSP_hex_F {
        class ItemInfo;
    };

    // #include "helmets\marine\CfgWeapons.hpp"

    class U_I_CombatUniform;
    class ls_uniform_base: U_I_CombatUniform {
        class ItemInfo;
    };

    class ls_uniform_naval: ls_uniform_base {
        class ItemInfo: ItemInfo {};
    };

    #include "uniforms\naval\CfgWeapons.hpp"

    class V_PlateCarrier1_rgr;
    class ls_vest_base: V_PlateCarrier1_rgr {
        class ItemInfo;
    };

    #include "vests\naval\CfgWeapons.hpp"

    class NVGoggles;
    class ls_nvg_base: NVGoggles {
        class ItemInfo;
    };
};
