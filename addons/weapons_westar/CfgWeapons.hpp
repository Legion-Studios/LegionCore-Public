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
    class acc_pointer_IR: ItemCore {
        class ItemInfo;
    };
    class acc_flashlight;
    class InventoryMuzzleItem_Base_F;
    class InventoryOpticsItem_Base_F;

    class GrenadeLauncher;
    class UGL_F: GrenadeLauncher {
        class Single;
    };
    class ls_scatterMuzzle_base;

    #include "westar35c\CfgWeapons.hpp"
    #include "westar35s\CfgWeapons.hpp"
    #include "westar35sa\CfgWeapons.hpp"
    #include "westarM5\CfgWeapons.hpp"
};
