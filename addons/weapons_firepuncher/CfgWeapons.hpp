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
        class GunClouds;
        class GunParticles;
    };
    class ls_weapon_firepuncher_base: ls_rifle_base {
        scope = 0;
        author = AUTHOR;
        displayName = "773 Firepuncher";
        descriptionShort = "Firepuncher";

        model = QPATHTOF(ls_weapon_firepuncher.p3d);
        hiddenSelections[] = {"camo", "camo1"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\camo_co.paa),
            QPATHTOF(data\camo1_co.paa)
        };
        picture = QPATHTOF(data\ui\firepuncher_ui_ca.paa);
        handAnim[] = {"OFP2_ManSkeleton", QPATHTOF(anims\firepuncher_handanim.rtm)};

        magazines[] = {"ls_magazine_firepuncher"};
        magazineWell[] = {"ls_magwell_firepuncher"};
        drySound[] = {QPATHTOEF(sounds,weapons\dry\generic.wss), 5, 1, 10};

        maxRecoilSway = 0.0125;
        swayDecaySpeed = 1.25;
        inertia = 0.5;
        dexterity = 1.5;
        swayCoef = 0.5;

        modes[] = {"Single", "single_medium_optics1", "single_far_optics2"};
        class Single: Mode_SemiAuto {
            reloadTime = 1.25;
            // dispersion = 0.00010; // dispersion test
            recoil = "recoil_single_mx";
            recoilProne = "recoil_single_prone_mx";
            dispersion = 0.00030;
            flash = "gunfire";
            flashSize = 0.1;
            soundBurst = 0;
            soundContinuous = 0;

            maxRange = 2000;
            maxRangeProbab = 0.3;
            midRange = 1000;
            midRangeProbab = 0.7;
            minRange = 200;
            minRangeProbab = 0.5;

            aiDispersionCoefX = 1.4;
            aiDispersionCoefY = 1.7;
            aiRateOfFire = 2;
            aiRateOfFireDispersion = 1;
            aiRateOfFireDistance = 500;

            sounds[] = {"StandardSound", "SilencedSound"};
            class StandardSound {
                soundSetShot[] = {"ls_firepuncher_Shot_SoundSet", "ls_sniper_Tail_SoundSet"};
            };
            class SilencedSound {
                soundSetShot[] = {"ls_firepuncher_suppressed_Shot_SoundSet", "ls_sniper_Tail_SoundSet"};
            };
        };
        class single_medium_optics1: Single {
            dispersion = 0.00073;
            requiredOpticType = 1;
            minRange = 2;
            minRangeProbab = 0.2;
            midRange = 450;
            midRangeProbab = 0.7;
            maxRange = 650;
            maxRangeProbab = 0.2;
            aiRateOfFire = 6;
            aiRateOfFireDistance = 600;
        };
        class single_far_optics2: single_medium_optics1 {
            dispersion = 0.00073;
            requiredOpticType = 2;
            minRange = 100;
            minRangeProbab = 0.2;
            midRange = 550;
            midRangeProbab = 0.7;
            maxRange = 800;
            maxRangeProbab = 0.05;
            aiRateOfFire = 8;
            aiRateOfFireDistance = 700;
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
            mass = 68;
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
        baseWeapon = "ls_weapon_firepuncher";

        GVAR(adsSounds)[] = {
            {QGVAR(sniperRifle_zoomIn01), QGVAR(sniperRifle_zoomIn02)},
            QGVAR(sniperRifle_zoomOut01)
        };

        // class EventHandlers {
        //     fired = "call CBA_fnc_weaponEvents";
        // };

        // class CBA_WeaponEvents {
        //     sound = "ls_firepuncher_rackBolt";
        //     delay = 1.5;
        // };
    };
};
