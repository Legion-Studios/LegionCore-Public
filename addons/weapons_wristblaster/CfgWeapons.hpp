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
    class ls_weapon_wristblaster_base: ls_rifle_base {
        model = QPATHTOF(ls_weapon_wristblaster.p3d);
        hiddenSelections[] = {};
        hiddenSelectionsTextures[] = {};

        handAnim[] = {
            "OFP2_ManSkeleton",
            QPATHTOF(anims\wristblaster_handanim.rtm)
        };

        magazines[] = {};
        magazineWell[] = {
            "ls_magwell_wristblaster"
        };

        fireLightDiffuse[] = {FIRELIGHT_RED};

        class Single: Mode_SemiAuto {
            dispersion = 0.00073;
            reloadTime = 0.2;

            maxRange = 50;
            maxRangeProbab = 0.3;
            midRange = 25;
            midRangeProbab = 0.6;
            minRange = 5;
            minRangeProbab = 0.1;

            aiRateOfFire = 1;
            aiRateOfFireDistance = 500;

            sounds[] = {"StandardSound"};
            class StandardSound {
                soundSetShot[] = {};
                soundSetShotWater[] = {};
            };
        };
        class close: Single {
            showToPlayer = 0;
            dispersion = 0.00073;

            maxRange = 400;
            maxRangeProbab = 0.2;
            midRange = 200;
            midRangeProbab = 0.7;
            minRange = 0;
            minRangeProbab = 0.05;

            aiRateOfFire = 0.5;
            aiRateOfFireDistance = 50;
        };
        class short: close {
            maxRange = 300;
            minRange = 50;
            minRangeProbab = 0.2;

            aiRateOfFireDistance = 200;
        };
        class medium: close {
            maxRange = 600;
            midRange = 450;
            minRange = 300;
            minRangeProbab = 0.2;

            aiRateOfFire = 1;
            aiRateOfFireDistance = 600;
        };
        class FullAuto: Mode_FullAuto {
            dispersion = 0.00174;
            reloadTime = 0.25;

            maxRange = 50;
            maxRangeProbab = 0.1;
            midRange = 25;
            midRangeProbab = 0.6;
            minRange = 5;
            minRangeProbab = 0.3;

            aiRateOfFireDispersion = 1;
            aiRateOfFireDistance = 900;

            recoil = "recoil_auto_pdw";
            recoilProne = "recoil_auto_prone_pdw";

            sounds[] = {"StandardSound"};
            class StandardSound {
                soundSetShot[] = {};
                soundSetShotWater[] = {};
            };
        };

        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 50;
            class CowsSlot: CowsSlot {
                class compatibleItems {};
            };
            class MuzzleSlot: MuzzleSlot {
                class compatibleItems {};
            };
            class PointerSlot: PointerSlot {
                class compatibleItems {};
            };
            class UnderBarrelSlot: UnderBarrelSlot {
                class compatibleItems {};
            };
        };
    };

    class ls_weapon_wristblaster_B2: ls_weapon_wristblaster_base {
        scope = 2;
        author = AUTHOR;
        displayName = "B2 Wrist Blaster";
        descriptionShort = "Built in repeating blaster";
        baseWeapon = "ls_weapon_wristblaster_B2";

        picture = QPATHTOF(data\ui\wristblaster_b2_ui_ca.paa);

        magazines[] = {"ls_magazine_wristblaster_B2"};
        magazineWell[] = {
            "ls_magwell_wristblaster",
            "ls_magwell_wristblaster_B2"
        };

        useModelOptics = 1;
        modelOptics = "\A3\weapons_f\reticle\Optics_Gunner_02_F.p3d";

        modes[] = {"Single", "close", "short", "medium", "FullAuto"};
        muzzles[] = {"this"};
        class Single: Single {
            class StandardSound {
                soundSetShot[] = {"ls_wristblaster_B2_Shot_SoundSet"};
                soundSetShotWater[] = {"ls_wristblaster_B2_Shot_SoundSet"};
            };
        };
        class close: close {
            class StandardSound {
                soundSetShot[] = {"ls_wristblaster_B2_Shot_SoundSet"};
                soundSetShotWater[] = {"ls_wristblaster_B2_Shot_SoundSet"};
            };
        };
        class short: short {
            class StandardSound {
                soundSetShot[] = {"ls_wristblaster_B2_Shot_SoundSet"};
                soundSetShotWater[] = {"ls_wristblaster_B2_Shot_SoundSet"};
            };
        };
        class medium: medium {
            class StandardSound {
                soundSetShot[] = {"ls_wristblaster_B2_Shot_SoundSet"};
                soundSetShotWater[] = {"ls_wristblaster_B2_Shot_SoundSet"};
            };
        };
        class FullAuto: FullAuto {
            class StandardSound {
                soundSetShot[] = {"ls_wristblaster_B2_Shot_SoundSet"};
                soundSetShotWater[] = {"ls_wristblaster_B2_Shot_SoundSet"};
            };
        };

        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 300;
        };
    };
    class ls_weapon_wristblaster_B2_junkyard: ls_weapon_wristblaster_B2 {
        scope = 2;
        author = AUTHOR;
        displayName = "B2 Wrist Blaster (Junkyard)";
        descriptionShort = "Built in repeating blaster";
        baseWeapon = "ls_weapon_wristblaster_B2_junkyard";

        picture = QPATHTOF(data\ui\wristblaster_b2_junkyard_ui_ca.paa);

        initSpeed = -0.5; // 0.5x initSpeed of magazine

        // Higher / lower values since it's all rusted
        class Single: Single {
            dispersion = 0.00073 * DISPERSION_MODIFIER;
            reloadTime = 0.2 * FIRE_RATE_MODIFIER;
            aiRateOfFire = 1 / FIRE_RATE_MODIFIER;

            class StandardSound {
                soundSetShot[] = {"ls_b2_Shot_SoundSet"};
                soundSetShotWater[] = {"ls_b2_Shot_SoundSet"};
            };
        };
        class close: close {
            dispersion = 0.00073 * DISPERSION_MODIFIER;
            aiRateOfFire = 0.5 / FIRE_RATE_MODIFIER;
        };
        class short: short {
            dispersion = 0.00073 * DISPERSION_MODIFIER;
            aiRateOfFire = 0.5 / FIRE_RATE_MODIFIER;
        };
        class medium: medium {
            aiRateOfFire = 1 / FIRE_RATE_MODIFIER;
        };
        class FullAuto: FullAuto {
            dispersion = 0.00174 * DISPERSION_MODIFIER;
            reloadTime = 0.25 * FIRE_RATE_MODIFIER;
            aiRateOfFireDispersion = 1 / FIRE_RATE_MODIFIER;
        };
    };

    class ls_weapon_wristblaster_droideka: ls_weapon_wristblaster_base {
        scope = 2;
        author = AUTHOR;
        displayName = "Twin Blaster Cannons";
        descriptionShort = "Twin repeating blaster cannons";
        baseWeapon = "ls_weapon_wristblaster_droideka";

        picture = QPATHTOF(data\ui\wristblaster_droideka_ui_ca.paa);

        magazines[] = {"ls_magazine_wristblaster_droideka"};
        magazineWell[] = {
            "ls_magwell_wristblaster",
            "ls_magwell_wristblaster_droideka"
        };

        useModelOptics = 1;
        modelOptics = "\A3\weapons_f\reticle\Optics_Gunner_02_F.p3d";

        modes[] = {"Burst", "close", "short", "medium"};
        muzzles[] = {"this"};
        class Burst: Mode_Burst {
            burst = 2;
            reloadTime = 0.15;
            sounds[] = {"StandardSound"};
            class StandardSound {
                soundSetShot[] = {"ls_wristblaster_droideka_Shot_SoundSet"};
                soundSetShotWater[] = {"ls_wristblaster_droideka_Shot_SoundSet"};
            };
        };
        class close: Burst {
            showToPlayer = 0;
            dispersion = 0.00073;

            maxRange = 400;
            maxRangeProbab = 0.2;
            midRange = 200;
            midRangeProbab = 0.7;
            minRange = 0;
            minRangeProbab = 0.05;

            aiRateOfFire = 0.5;
            aiRateOfFireDistance = 50;
        };
        class short: close {
            maxRange = 300;
            minRange = 50;
            minRangeProbab = 0.2;

            aiRateOfFireDistance = 200;
        };
        class medium: close {
            maxRange = 600;
            midRange = 450;
            minRange = 300;
            minRangeProbab = 0.2;

            aiRateOfFire = 1;
            aiRateOfFireDistance = 600;
        };

        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 300;
        };
    };
};
