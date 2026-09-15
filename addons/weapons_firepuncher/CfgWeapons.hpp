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
    class ls_weapon_firepuncher_base: ls_rifle_base {
        scope = 0;
        author = AUTHOR;
        displayName = CSTRING(displayName);
        descriptionShort = ECSTRING(weapons,sniperBlasterRifle);
        baseWeapon = "ls_weapon_firepuncher";

        model = QPATHTOF(ls_weapon_firepuncher.p3d);
        hiddenSelections[] = {"camo", "camo1"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\camo_co.paa),
            QPATHTOF(data\camo1_co.paa)
        };
        picture = QPATHTOF(data\ui\firepuncher_ui_ca.paa);
        handAnim[] = {"OFP2_ManSkeleton", QPATHTOF(anims\firepuncher_handanim.rtm)};
        cursor = "srifle";

        magazines[] = {"ls_magazine_firepuncher"};
        magazineWell[] = {"ls_magwell_firepuncher"};
        drySound[] = {QPATHTOEF(sounds,weapons\dry\generic.wss), 5, 1, 10};

        fireLightDiffuse[] = {FIRELIGHT_BLUE};

        aimTransitionSpeed = 0.7;
        maxRecoilSway = 0.008;
        swayDecaySpeed = 2;
        inertia = 0.9;
        dexterity = 1.68;
        swayCoef = 0.5;
        initSpeed = -1;
        recoil = "recoil_dmr_02";

        aiDispersionCoefX = 2;
        aiDispersionCoefY = 3;

        modes[] = {"Single", "single_close_optics1", "single_medium_optics1", "single_far_optics1"};
        class Single: Mode_SemiAuto {
            reloadTime = RPM(50);
            dispersion = 0.00044;
            maxRange = 500;
            maxRangeProbab = 0.05;
            midRange = 350;
            midRangeProbab = 0.7;
            minRange = 2;
            minRangeProbab = 0.3;

            recoil = "recoil_single_dmr";
            recoilProne = "recoil_single_prone_dmr";

            sounds[] = {"StandardSound", "SilencedSound"};
            class StandardSound {
                soundSetShot[] = {"ls_firepuncher_Shot_SoundSet", "ls_sniper_Tail_SoundSet"};
            };
            class SilencedSound {
                soundSetShot[] = {"ls_firepuncher_suppressed_Shot_SoundSet", "ls_sniper_Tail_SoundSet"};
            };
        };
        class single_close_optics1: Single {
            showToPlayer = 0;
            // requiredOpticType = 1; // Scope is built in
            maxRange = 500;
            maxRangeProbab = 0.01;
            midRange = 300;
            midRangeProbab = 0.8;
            minRange = 2;
            minRangeProbab = 0.05;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 300;
        };
        class single_medium_optics1: single_close_optics1 {
            maxRange = 700;
            maxRangeProbab = 0.05;
            midRange = 500;
            midRangeProbab = 0.7;
            minRange = 300;
            minRangeProbab = 0.05;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class single_far_optics1: single_close_optics1 {
            maxRange = 1000;
            maxRangeProbab = 0.05;
            midRange = 700;
            midRangeProbab = 0.5;
            minRange = 300;
            minRangeProbab = 0.05;
            aiRateOfFire = 4;
            aiRateOfFireDistance = 600;
        };

        weaponInfoType = "RscOptics_tws";
        modelOptics = "\A3\Weapons_f\acc\reticle_tws.p3d";
        class OpticsModes {
            class nctalkep {
                useModelOptics = 1;
                opticsFlare = 1;
                opticsID = 1;
                cameraDir = "";
                discreteDistance[] = {300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800, 1900, 2000, 2100, 2200, 2300, 2400};
                discreteDistanceInitIndex = 1;
                discreteInitIndex = 1;
                discretefov[] = {.25/1, .25/4, .25/8, .25/12};
                distanceZoomMin = 300;
                distanceZoomMax = 2400;
                memoryPointCamera = "opticView";
                modelOptics = "\A3\Weapons_F\acc\reticle_sniper_F.p3d";
                opticsPPEffects[] = {"OpticsCHAbera1"};
                weaponInfoType = "RscWeaponRangeZeroingFOV";
                opticsZoomMin = .25 / 24;
                opticsZoomMax = 0.25;
                opticsZoomInit = 0.25;
                thermalMode[] = {0, 5};
                visionMode[] = {"Normal", "NVG", "TI"};
                opticsDisplayName = "WFOV";
                opticsDisablePeripherialVision = 0;
            };
            class Iron: nctalkep {
                opticsID = 2;
                useModelOptics = 0;
                opticsPPEffects[] = {
                    "",
                    ""
                };
                opticsFlare = 0;
                opticsDisablePeripherialVision = 0;
                discreteDistance[] = {200};
                discreteDistanceInitIndex = 0;
                opticsZoomMin = 0.25;
                opticsZoomMax = 0.5;
                opticsZoomInit = 0.25;
                memoryPointCamera = "eye";
                visionMode[] = {};
            };
        };

        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 130;
            class CowsSlot: CowsSlot {
                class CompatibleItems {};
            };
            class UnderBarrelSlot: UnderBarrelSlot {
                class CompatibleItems {
                    bipod_01_f_blk = 1;
                };
            };
            class PointerSlot: PointerSlot {
                class CompatibleItems {
                    acc_flashlight = 1;
                    acc_pointer_IR = 1;
                };
            };
            class MuzzleSlot: MuzzleSlot {
                class CompatibleItems {};
            };
        };
    };

    class ls_weapon_firepuncher: ls_weapon_firepuncher_base {
        scope = 2;
        author = AUTHOR;

        GVAR(adsSounds)[] = {
            {QGVAR(sniperRifle_zoomIn01), QGVAR(sniperRifle_zoomIn02)},
            QGVAR(sniperRifle_zoomOut01)
        };
    };
};
