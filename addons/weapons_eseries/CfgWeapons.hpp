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

    class Launcher_Base_F;
    class ls_launcher_base: Launcher_Base_F {
        class Single;
        class TopDown;
        class WeaponSlotsInfo;
    };

    class ItemCore;
    class InventoryMuzzleItem_Base_F;
    class InventoryUnderItem_Base_F;
    class InventoryOpticsItem_Base_F;

    #include "e5\CfgWeapons.hpp"
    #include "e5c\CfgWeapons.hpp"
    #include "e11\CfgWeapons.hpp"
    #include "e60r\CfgWeapons.hpp"
};
