class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;

class CfgWeapons {
    class Rifle_Long_Base_F;
    class ls_rifle_base: Rifle_Long_Base_F {
        class WeaponSlotsInfo {
            class CowsSlot;
            class MuzzleSlot;
            class PointerSlot;
            class UnderBarrelSlot;
        };
    };

    class Pistol_Base_F;
    class ls_pistol_base: Pistol_Base_F {
        class WeaponSlotsInfo {
            class CowsSlot;
            class MuzzleSlot;
            class PointerSlot;
            class UnderBarrelSlot;
        };
    };

    class ItemCore;
    class InventoryMuzzleItem_Base_F;
    class InventoryUnderItem_Base_F;
    class InventoryOpticsItem_Base_F;

    class Binocular;
    class NVGoggles: Binocular {
        class ItemInfo;
    };

    #include "dc15a\CfgWeapons.hpp"
    #include "dc15ac\CfgWeapons.hpp"
    #include "dc15s\CfgWeapons.hpp"
    #include "dc17s\CfgWeapons.hpp"
    #include "dc17s_dual\CfgWeapons.hpp"
    #include "dc15sa\CfgWeapons.hpp"
    #include "dc15saw\CfgWeapons.hpp"
    #include "dc15x\CfgWeapons.hpp"
    #include "dc15br\CfgWeapons.hpp"
    #include "dc17m\CfgWeapons.hpp"
    #include "dp20\CfgWeapons.hpp"
};
