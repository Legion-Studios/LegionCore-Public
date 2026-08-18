class CfgWeapons {
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
    #include "uniforms\droideka\CfgWeapons.hpp"

    class V_PlateCarrier1_rgr;
    class ls_vest_base: V_PlateCarrier1_rgr {
        class ItemInfo;
    };
    class ls_droidVest: ls_vest_base {
        scope = 2;
        author = AUTHOR;
        displayName = CSTRING(vest);
        descriptionShort = "$STR_A3_V_rebreatherB0";

        class ItemInfo: ItemInfo {
            vestType = "Rebreather";
            containerClass = "Supply40";
            ARMOR_VEST_NONE;
        };
    };
    #include "vests\b1\pauldrons\CfgWeapons.hpp"

    class NVGoggles;
    class ls_nvg_base: NVGoggles {
        class ItemInfo;
    };
    #include "equipment\b1\headlamp\CfgWeapons.hpp"
    #include "equipment\b1\nvgs\sniper\CfgWeapons.hpp"
    #include "equipment\b1\nvgs\monocles\CfgWeapons.hpp"
};
