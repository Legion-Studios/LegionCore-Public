// class Mode_SemiAuto;
class ls_CowsSlot;
class ls_MuzzleSlot;
class ls_PointerSlot;
class ls_UnderBarrelSlot;

class CfgWeapons {
    // class ItemCore;
    // class InventoryMuzzleItem_Base_F;
    // class InventoryOpticsItem_Base_F;
    // class InventoryFlashLightItem_Base_F;
    // class InventoryUnderItem_Base_F;

    class Pistol;
    class Pistol_Base_F: Pistol {
        class WeaponSlotsInfo;
    };
    class ls_weapon_melee_base: Pistol_Base_F {
        scope = 0;
        author = AUTHOR;
        picture = QPATHTOEF(main,data\ui\ls_logo_wide_ca.paa);

        // TODO: Rebalance when Kharos's melee mod is released
        IMS_Melee_Param_Damage = 1;
        // IMS_Melee_Param_SoundOnDraw = "";
        // IMS_Melee_Param_SoundOnHide = "powerSword_out";
        // IMS_Melee_Param_SoundLoop = ["chainsword_loop",2.9];
        IMS_Melee_Param_Sounds = "[""lightSaber_attack_1"",""lightSaber_attack_2"",""lightSaber_attack_3"",""lightSaber_attack_4"",""lightSaber_attack_5"",""lightSaber_attack_6"",""lightSaber_attack_7"",""lightSaber_attack_8""]";
        IMS_Melee_Param_SoundsOnHit = "[""lightSaber_hit_1"",""lightSaber_hit_2"",""lightSaber_hit_3"",""lightSaber_hit_4"",""lightSaber_hit_5"",""lightSaber_hit_6"",""lightSaber_hit_7"",""lightSaber_hit_8""]";
        IMS_Melee_Param_SoundsOnBlock = "[""lightSaber_blockOther_1"",""lightSaber_blockOther_2"",""lightSaber_blockOther_3"",""lightSaber_blockOther_4"",""lightSaber_blockOther_5"",""lightSaber_blockOther_6"",""lightSaber_blockOther_7""]";
        IMS_WeaponType = "";
        IMS_ExecutionType = "None";
        // IMS_LightsaberColor = [r,g,b]; // Defines Lightsaber Color glow

        fireLightIntensity = 0;
        cursor = "EmptyCursor";
        cursorAim = "throw";
        cursorSize = 1;
        weaponInfoType = "RscWeaponEmpty";
        reloadAction = "Disable_Gesture";
        recoil = "recoil_pistol_zubr";

        magazines[] = {};
        magazineWell[] = {};

        modes[] = {};
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 50;

            // We never want any attachments by default
            class CowsSlot: ls_CowsSlot {
                class compatibleItems {};
            };
            class MuzzleSlot: ls_MuzzleSlot {
                class compatibleItems {};
            };
            class PointerSlot: ls_PointerSlot {
                class compatibleItems {};
            };
            class UnderBarrelSlot: ls_UnderBarrelSlot {
                class compatibleItems {};
            };
        };
        class GunParticles {};
    };
    #include "electrostaff\CfgWeapons.hpp"
    #include "goose\CfgWeapons.hpp"
    #include "verpinePowerLance\CfgWeapons.hpp"
    #include "lightsabers\CfgWeapons.hpp"
};
