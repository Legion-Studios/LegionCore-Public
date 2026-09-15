class Mode_SemiAuto;
class Mode_FullAuto;
class Mode_Burst;

class CfgWeapons {
    class Rifle_Long_Base_F;
    class ls_rifle_base: Rifle_Long_Base_F {
        class WeaponSlotsInfo {
            class CowsSlot;
            class MuzzleSlot;
        };
    };

    class Pistol_Base_F;
    class ls_pistol_base: Pistol_Base_F {
        class WeaponSlotsInfo {
            class CowsSlot;
            class MuzzleSlot;
            class PointerSlot;
        };
    };

    class InventoryOpticsItem_Base_F;
    class InventoryMuzzleItem_Base_F;

    class ItemCore;
    class acc_pointer_IR: ItemCore {
        class ItemInfo;
    };
    class optic_Holosight;
    class acc_flashlight;

    class GrenadeLauncher;
    class UGL_F: GrenadeLauncher {
        class Single;
    };
    class ls_muzzle_scattergun;

    #include "westar35c\CfgWeapons.hpp"
    #include "westar35s\CfgWeapons.hpp"
    #include "westar35sa\CfgWeapons.hpp"
    #include "westarM5\CfgWeapons.hpp"
};
