class CfgWeapons {
    class H_HelmetO_ViperSP_hex_F;
    class ls_helmet_base: H_HelmetO_ViperSP_hex_F {
        class ItemInfo;
    };
    #include "helmets\nationalist\CfgWeapons.hpp"
    #include "helmets\nimbusCommando\CfgWeapons.hpp"

    class U_I_CombatUniform;
    class ls_uniform_base: U_I_CombatUniform {
        class ItemInfo;
    };
    #include "uniforms\nimbusCommando\CfgWeapons.hpp"

    class NVGoggles;
    class ls_nvg_base: NVGoggles {
        class ItemInfo;
    };
    #include "equipment\goggles\CfgWeapons.hpp"
};
