class CfgWeapons {
    class H_HelmetO_ViperSP_hex_F;
    class ls_helmet_base: H_HelmetO_ViperSP_hex_F {
        class ItemInfo;
    };

    class U_I_CombatUniform;
    class ls_uniform_base: U_I_CombatUniform {
        class ItemInfo;
    };

    class ls_uniform_naval: ls_uniform_base {
        class ItemInfo: ItemInfo {};
    };

    #include "uniforms\honorGuard\CfgWeapons.hpp"
};
