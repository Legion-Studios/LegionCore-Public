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

    class Launcher_Base_F;
    class ls_launcher_base: Launcher_Base_F {
        class Single;
        class TopDown;
        class WeaponSlotsInfo;
    };

    #include "z6\CfgWeapons.hpp"
    #include "z7\CfgWeapons.hpp"
};
