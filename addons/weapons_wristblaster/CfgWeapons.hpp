class Mode_Burst;
class Mode_FullAuto;
class ls_muzzle_scattergun;

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

        handAnim[] = {"OFP2_ManSkeleton", QPATHTOF(anims\wristblaster_handanim.rtm)};

        magazines[] = {};
        magazineWell[] = {"ls_magwell_wristblaster"};

        fireLightDiffuse[] = {FIRELIGHT_RED};

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
        displayName = CSTRING(b2_displayName);
        descriptionShort = CSTRING(b2_descriptionShort);
        baseWeapon = "ls_weapon_wristblaster_B2";

        picture = QPATHTOF(data\ui\wristblaster_b2_ui_ca.paa);

        magazines[] = {"ls_magazine_wristblaster_B2"};
        magazineWell[] = {
            "ls_magwell_wristblaster",
            "ls_magwell_wristblaster_B2"
        };

        useModelOptics = 1;
        modelOptics = "\A3\weapons_f\reticle\Optics_Gunner_02_F.p3d";

        muzzles[] = {"this", "scatter"};
        modes[] = {"FullAuto", "fullauto_close", "fullauto_medium", "fullauto_far"};
        class FullAuto: Mode_FullAuto {
            reloadTime = RPM(300);
            dispersion = 0.00116;
            maxRange = 30;
            maxRangeProbab = 0.04;
            midRange = 15;
            midRangeProbab = 0.7;
            minRange = 0;
            minRangeProbab = 0.3;
            aiRateOfFire = 1e-06;
            aiRateOfFireDistance = 500;

            recoil = "recoil_auto_pdw";
            recoilProne = "recoil_auto_prone_pdw";

            sounds[] = {"StandardSound"};
            class StandardSound {
                soundSetShot[] = {"ls_wristblaster_B2_Shot_SoundSet", "ls_mediumBlaster_Tail_SoundSet"};
            };
        };
        class fullauto_close: FullAuto {
            showToPlayer = 0;
            burst = "3 + round random 5";
            maxRange = 150;
            maxRangeProbab = 0.04;
            midRange = 75;
            midRangeProbab = 0.7;
            minRange = 20;
            minRangeProbab = 0.05;
            aiRateOfFire = 0.5;
            aiRateOfFireDistance = 50;
        };
        class fullauto_medium: fullauto_close {
            burst = "4 + round random 3";
            maxRange = 300;
            maxRangeProbab = 0.1;
            midRange = 200;
            midRangeProbab = 0.7;
            minRange = 150;
            minRangeProbab = 0.05;
            aiRateOfFire = 4;
            aiRateOfFireDistance = 600;
        };
        class fullauto_far: fullauto_medium {
            burst = "2 + round random 4";
            maxRange = 450;
            maxRangeProbab = 0.01;
            midRange = 400;
            midRangeProbab = 0.7;
            minRange = 350;
            minRangeProbab = 0.05;
            aiRateOfFire = 10;
            aiRateOfFireDistance = 900;
        };

        class scatter: ls_muzzle_scattergun {
            displayName = CSTRING(b2_scatter_displayName);
            magazines[] = {"ls_magazine_wristblaster_B2_scatter"};
            magazineWell[] = {"ls_magwell_scattergun", "ls_magwell_wristblaster_B2_scatter"};

            muzzleEnd = "konec hlavne";
            muzzlePos = "usti hlavne";
        };

        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 300;
        };
    };
    class ls_weapon_wristblaster_B2_junkyard: ls_weapon_wristblaster_B2 {
        scope = 2;
        author = AUTHOR;
        displayName = CSTRING(b2_junkyard_displayName);
        baseWeapon = "ls_weapon_wristblaster_B2_junkyard";

        picture = QPATHTOF(data\ui\wristblaster_b2_junkyard_ui_ca.paa);

        initSpeed = -0.5; // 0.5x initSpeed of magazine

        // Worse values since it's all rusted
        class FullAuto: FullAuto {
            reloadTime = RPM(250) * JUNKYARD_FIRE_RATE_MODIFIER;
            dispersion = 0.00116 * JUNKYARD_DISPERSION_MODIFIER;
        };
        class fullauto_close: fullauto_close {
            reloadTime = RPM(250) * JUNKYARD_FIRE_RATE_MODIFIER;
            dispersion = 0.00116 * JUNKYARD_DISPERSION_MODIFIER;
        };
        class fullauto_medium: fullauto_medium {
            reloadTime = RPM(250) * JUNKYARD_FIRE_RATE_MODIFIER;
            dispersion = 0.00116 * JUNKYARD_DISPERSION_MODIFIER;
        };
        class fullauto_far: fullauto_far {
            reloadTime = RPM(250) * JUNKYARD_FIRE_RATE_MODIFIER;
            dispersion = 0.00116 * JUNKYARD_DISPERSION_MODIFIER;
        };
    };

    class ls_weapon_wristblaster_droideka: ls_weapon_wristblaster_base {
        scope = 2;
        author = AUTHOR;
        displayName = CSTRING(droideka_displayName);
        descriptionShort = CSTRING(droideka_descriptionShort);
        baseWeapon = "ls_weapon_wristblaster_droideka";

        picture = QPATHTOF(data\ui\wristblaster_droideka_ui_ca.paa);

        magazines[] = {"ls_magazine_wristblaster_droideka"};
        magazineWell[] = {"ls_magwell_wristblaster", "ls_magwell_wristblaster_droideka"};

        useModelOptics = 1;
        modelOptics = "\A3\weapons_f\reticle\Optics_Gunner_02_F.p3d";

        muzzles[] = {"this"};
        modes[] = {"Burst", "close", "short", "medium"};
        class Burst: Mode_Burst {
            burst = 2;
            textureType = "dual";
            reloadTime = RPM(400);
            dispersion = 0.00073;
            maxRange = 30;
            maxRangeProbab = 0.04;
            midRange = 15;
            midRangeProbab = 0.7;
            minRange = 0;
            minRangeProbab = 0.3;

            sounds[] = {"StandardSound"};
            class StandardSound {
                soundSetShot[] = {"ls_wristblaster_droideka_Shot_SoundSet", "ls_mediumBlaster_Tail_SoundSet"};
            };
        };
        class close: Burst {
            showToPlayer = 0;
            maxRange = 75;
            maxRangeProbab = 0.04;
            midRange = 50;
            midRangeProbab = 0.7;
            minRange = 20;
            minRangeProbab = 0.3;
            aiRateOfFire = 1;
            aiRateOfFireDistance = 50;
        };
        class short: close {
            maxRange = 150;
            maxRangeProbab = 0.04;
            midRange = 100;
            midRangeProbab = 0.7;
            minRange = 60;
            minRangeProbab = 0.05;
            aiRateOfFire = 1;
            aiRateOfFireDistance = 100;
        };

        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 300;
        };
    };
};
