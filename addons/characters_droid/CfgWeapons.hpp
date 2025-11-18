class CfgWeapons {
    class NVGoggles;
    class H_HelmetO_ViperSP_hex_F;
    class ls_helmet_base: H_HelmetO_ViperSP_hex_F {
        class ItemInfo;
    };

    #include "helmets\b1\CfgWeapons.hpp"

    class U_I_CombatUniform;
    class ls_uniform_base: U_I_CombatUniform {
        class ItemInfo;
    };
    class ls_droidUniform_base: ls_uniform_base {
        ls_isDroid = 1;
        JLTS_isDroid = 1;
        TAS_isDroid = 1;

        class ItemInfo: ItemInfo {
            containerClass = "Supply150";
            mass = 40;
        };
    };

    #include "uniforms\b1\CfgWeapons.hpp"
    #include "uniforms\b2\CfgWeapons.hpp"
    #include "uniforms\bx\CfgWeapons.hpp"

    class V_PlateCarrier1_rgr;
    class ls_vest_base: V_PlateCarrier1_rgr {
        class ItemInfo;
    };
    #include "vests\bx\CfgWeapons.hpp"

    class ls_nvg_base: NVGoggles {
        class ItemInfo;
    };
};
