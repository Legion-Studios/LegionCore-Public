class CfgWeapons {
    class H_HelmetO_ViperSP_hex_F;
    class ls_helmet_base: H_HelmetO_ViperSP_hex_F {
        class ItemInfo;
    };
    #include "helmets\traditional\CfgWeapons.hpp"
    #include "helmets\armorer\CfgWeapons.hpp"
    #include "helmets\dinDjarin\CfgWeapons.hpp"
    #include "helmets\elite\CfgWeapons.hpp"
    #include "helmets\executioner\CfgWeapons.hpp"
    #include "helmets\nightowl\CfgWeapons.hpp"
    #include "helmets\stalker\CfgWeapons.hpp"

    class U_I_CombatUniform;
    class ls_uniform_base: U_I_CombatUniform {
        class ItemInfo;
    };
    #include "uniforms\undersuit\CfgWeapons.hpp"
    #include "uniforms\protectorMale\CfgWeapons.hpp"
    #include "uniforms\traditionalWoman\CfgWeapons.hpp"

    class V_PlateCarrier1_rgr;
    class ls_vest_base: V_PlateCarrier1_rgr {
        class ItemInfo;
    };
    #include "vests\standard\CfgWeapons.hpp"
    #include "vests\protector\CfgWeapons.hpp"
    #include "vests\traditionalPouches\CfgWeapons.hpp"

    class NVGoggles;
    class ls_nvg_base: NVGoggles {
        class ItemInfo;
    };
    #include "equipment\nvgs\rangefinder\CfgWeapons.hpp"

    #include "units\deathwatch\CfgWeapons.hpp"
    #include "units\eldar\CfgWeapons.hpp"
    #include "units\ordo\CfgWeapons.hpp"
    #include "units\saxon\CfgWeapons.hpp"
    #include "units\superCommando\CfgWeapons.hpp"
    #include "units\vizsla\CfgWeapons.hpp"
};
