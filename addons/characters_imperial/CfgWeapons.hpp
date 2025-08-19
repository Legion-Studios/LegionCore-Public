class CfgWeapons {
    class H_HelmetO_ViperSP_hex_F;
    class ls_helmet_base: H_HelmetO_ViperSP_hex_F {
        class ItemInfo;
    };

    #include "helmets\army\CfgWeapons.hpp"
    #include "helmets\kepi\CfgWeapons.hpp"

    class U_I_CombatUniform;
    class ls_uniform_base: U_I_CombatUniform {
        class ItemInfo;
    };

    class V_PlateCarrier1_rgr;
    class ls_vest_base: V_PlateCarrier1_rgr {
        class ItemInfo;
    };

    #include "vests\army\CfgWeapons.hpp"
    #include "vests\pauldron\CfgWeapons.hpp"
    #include "vests\tacBelt\CfgWeapons.hpp"

    class ls_imperialUniform_base: ls_uniform_base {
        class ItemInfo: ItemInfo {
            containerClass = "Supply150";
            mass = 40;
        };
    };

    #include "uniforms\army\CfgWeapons.hpp"
};
