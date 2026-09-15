class Mode_SemiAuto;

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

    class ItemCore;
    class InventoryOpticsItem_Base_F;
    class optic_LRPS: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class Snip;
            };
        };
    };
    #include "sniper\CfgWeapons.hpp"
};
