class Mode_SemiAuto;
class ls_CowsSlot;
class ls_MuzzleSlot;
class ls_PointerSlot;
class ls_UnderBarrelSlot;

class CfgWeapons {

    class ItemCore;
    class InventoryMuzzleItem_Base_F;
    class InventoryOpticsItem_Base_F;
    class InventoryFlashLightItem_Base_F;
    class InventoryUnderItem_Base_F;

    class Pistol;
    class Pistol_Base_F: Pistol {
        class WeaponSlotsInfo;
    };
    class ls_weapon_melee_base: Pistol_Base_F {
        scope = 0;
        author = AUTHOR;
        picture = QPATHTOEF(main,data\ui\ls_logo_wide_ca.paa);

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
        modes[] = {"Single"};

        magazines[] = {};
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 20;

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

        class Single: Mode_SemiAuto {
            sounds[] = {"StandardSound"};
            class StandardSound {
                begin1[] = {"", 3, 1, 5};
                soundBegin[] = {"begin1", 1};
            };

            burst = 1;
            soundContinuous = 1;
            reloadSound[] = {"", 1, 1};

            recoil = "recoil_pistol_light";
            recoilProne = "recoil_prone_pistol_light";
            reloadTime = 0.2;
            dispersion = 0.0029;
            minRange = 5;
            minRangeProbab = 0.30000001;
            midRange = 25;
            midRangeProbab = 0.60000002;
            maxRange = 50;
            maxRangeProbab = 0.1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 25;
        };
    };

    class ls_weapon_lightsaber_body_base: ItemCore {
        scope = 0;
        author = AUTHOR;
        picture = QPATHTOEF(main,data\ui\ls_logo_ca.paa);
        class ItemInfo: InventoryUnderItem_Base_F {
            mass = 1;
            deployedPivot = "";
            hasBipod = 0;
            soundBipodDown[] = {"", "db0", 1, 1};
            soundBipodUp[] = {"", "db0", 1, 1};
        };
    };

    class ls_weapon_lightsaber_emitter_base: ItemCore {
        scope = 0;
        author = AUTHOR;
        picture = QPATHTOEF(main,data\ui\ls_logo_ca.paa);
        class ItemInfo: InventoryMuzzleItem_Base_F {
            mass = 1;
            muzzleEnd = "";
            alternativeFire = "";
        };
    };

    class ls_weapon_lightsaber_grip_base: ItemCore {
        scope = 0;
        author = AUTHOR;
        picture = QPATHTOEF(main,data\ui\ls_logo_ca.paa);
        class ItemInfo: InventoryOpticsItem_Base_F {
            mass = 1;
            modelOptics = "";
            class OpticsModes {};
        };
    };

    class ls_weapon_lightsaber_pommel_base: ItemCore {
        scope = 0;
        author = AUTHOR;
        picture = QPATHTOEF(main,data\ui\ls_logo_ca.paa);
        class ItemInfo: InventoryFlashLightItem_Base_F {
            mass = 1;
            class Flashlight {};
        };
    };


    #include "electrostaff\CfgWeapons.hpp"
    #include "goose\CfgWeapons.hpp"
    #include "lightsabers\CfgWeapons.hpp"
    #include "verpinePowerLance\CfgWeapons.hpp"
};
