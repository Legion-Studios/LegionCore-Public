class CfgWeapons {
    class H_HelmetO_ViperSP_hex_F;
    class ls_helmet_base: H_HelmetO_ViperSP_hex_F {
        class ItemInfo;
    };
    #include "helmets\arcborne\CfgWeapons.hpp"
    #include "helmets\chadimusMaximus\CfgWeapons.hpp"

    class U_I_CombatUniform;
    class ls_uniform_base: U_I_CombatUniform {
        class ItemInfo;
    };
    #include "uniforms\theNut\CfgWeapons.hpp"
    #include "uniforms\killerRabbit\CfgWeapons.hpp"

    class V_PlateCarrier1_rgr;
    class ls_vest_base: V_PlateCarrier1_rgr {
        class ItemInfo;
    };
    #include "vests\blackbeard\CfgWeapons.hpp"

    class NVGoggles;
    class ls_nvg_base: NVGoggles {
        class ItemInfo;
    };
    #include "equipment\nvgs\splinterCell\CfgWeapons.hpp"
    #include "equipment\nvgs\zygerianDisguise\CfgWeapons.hpp"
};
