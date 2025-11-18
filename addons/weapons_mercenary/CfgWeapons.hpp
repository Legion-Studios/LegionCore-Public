class Mode_SemiAuto;
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

    class ItemCore;
    class InventoryOpticsItem_Base_F;

    #include "sniper\CfgWeapons.hpp"
};
