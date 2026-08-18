class CfgWeapons {
    #include "helmets\cqcm\CfgWeapons.hpp"

    class ls_uniform_base;
    class ls_uniform_naval: ls_uniform_base {
        class ItemInfo;
    };
    #include "uniforms\naval\CfgWeapons.hpp"

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
    #include "vests\naval\CfgWeapons.hpp"
};
