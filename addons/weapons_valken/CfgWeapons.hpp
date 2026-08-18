class Mode_SemiAuto;
// class Mode_FullAuto;

class CfgWeapons {
    class Rifle_Long_Base_F;
    class ls_rifle_base: Rifle_Long_Base_F {
        class WeaponSlotsInfo {
            class CowsSlot;
            // class MuzzleSlot;
            // class PointerSlot;
            class UnderBarrelSlot;
        };
    };

    class ItemCore;
    class optic_SOS: ItemCore {
        class ItemInfo;
    };
    class ls_cows_valken_optic: optic_SOS {
        author = AUTHOR;
        scope = 2;
        displayName = "Valken 38X Optic";
        picture = QPATHTOEF(main,data\ui\ls_logo_ca.paa);
        model = QPATHTOF(ls_acc_valken_optic.p3d);

        class ItemInfo: ItemInfo {
            mass = 12;
            modelOptics = "\A3\Weapons_F\acc\reticle_LRPS_F";
            class OpticsModes {
                class ls_optic_valken_38x {
                    opticsID=1;
                    useModelOptics=1;
                    opticsPPEffects[] = {
                        "OpticsCHAbera1",
                        "OpticsBlur1"
                    };
                    opticsZoomMin = 0.125;
                    opticsZoomMax = 0.04;
                    opticsZoomInit = 0.0625;
                    discreteDistance[] = {100,300,400,500,600,700,800,900,1000};
                    discreteDistanceInitIndex = 1;
                    distanceZoomMin = 100;
                    distanceZoomMax = 1000;
                    discreteFov[] = {0.125,0.0625};
                    discreteInitIndex = 0;
                    modelOptics = "\A3\Weapons_F\acc\reticle_LRPS_F";
                    memoryPointCamera = "opticview";
                    visionMode[] = {
                        "Normal",
                        "NVG",
                        "TI"
                    };
                    thermalMode[]= {1, 2};
                    opticsFlare = 1;
                    opticsDisablePeripherialVision = 1;
                };
                class IronSight {
                    discreteDistance[] = {200};
                    discreteDistanceInitIndex = 0;
                    discretefov[] = {};
                    discreteInitIndex = 0;
                    distanceZoomMax = 200;
                    distanceZoomMin = 200;
                    memoryPointCamera = "eye";
                    opticsDisablePeripherialVision = 0;
                    opticsFlare = 0;
                    opticsID = 2;
                    opticsPPEffects[] = {"",""};
                    opticsZoomInit = 0.75;
                    opticsZoomMax = 1.1;
                    opticsZoomMin = 0.375;
                    useModelOptics = 0;
                    visionMode[] = {};
                };
            };
        };
    };

    class ls_weapon_valken38x_base: ls_rifle_base {
        scope = 0;
        author = AUTHOR;
        displayName = "Valken-38X";
        ACE_railHeightAboveBore = 5;

        model = QPATHTOF(ls_weapon_valken.p3d);
        hiddenSelections[] = {
            // "camo1"
        };
        hiddenSelectionsTextures[] = {
            // QPATHTOF(data\Body_co.paa)
        };

        // handAnim[] = {"OFP2_ManSkeleton", QPATHTOF(anims\ls_valken_handanim.rtm)};
        reloadAction = "ReloadMagazine";

        magazines[] = {"ls_mag_valken_30rnd"};
        magazineWell[] = {"ls_valken38x_magwell"};

        selectionFireAnim = "zasleh";
        drySound[] = {QPATHTOEF(sounds,weapons\dry\generic.wss), 0.39810717, 1, 20};
        reloadMagazineSound[] = {QPATHTOEF(sounds,weapons\reload\dc15a_reload.wss), 0.56234133, 1, 30};

        fireLightDuration = 0.05;
        fireLightIntensity = 0.4;
        fireLightDiffuse[] = {FIRELIGHT_BLUE};
        fireLightAmbient[] = {0, 0, 0};

        class Library {
            libTextDesc = "";
        };

        modes[] = {
            "Single",
            "close",
            "short",
            "medium"
        };
        muzzles[] = {"this"};
        class Single: Mode_SemiAuto {
            sounds[] = {"StandardSound"};
            class StandardSound {
                soundSetShot[] = {
                    "ls_valken38x_Shot_SoundSet",
                    "ls_sniper_Tail_SoundSet"
                };
            };
            reloadTime = 0.7;
            dispersion = 0.0003015;
            minRange = 5;
            minRangeProbab = 0.3;
            midRange = 25;
            midRangeProbab = 0.6;
            maxRange = 50;
            maxRangeProbab = 0.1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 25;
        };

        class close: Single {
            showToPlayer = 0;
            aiRateOfFire = 0.25;
            aiRateOfFireDistance = 400;
            minRange = 0;
            minRangeProbab = 0.05;
            midRange = 200;
            midRangeProbab = 0.7;
            maxRange = 400;
            maxRangeProbab = 0.2;
        };

        class short: close {
            aiRateOfFire = 0.5;
            aiRateOfFireDistance = 500;
            minRange = 300;
            minRangeProbab = 0.2;
            midRange = 400;
            midRangeProbab = 0.7;
            maxRange = 500;
            maxRangeProbab = 0.2;
        };

        class medium: close {
            aiRateOfFire = 1;
            aiRateOfFireDistance = 900;
            minRange = 400;
            minRangeProbab = 0.2;
            midRange = 700;
            midRangeProbab = 0.7;
            maxRange = 900;
            maxRangeProbab = 0.2;
        };
        maxRecoilSway = 0.0125;
        recoil = "recoil_EBR";
        swayDecaySpeed = 1.25;
        dexterity = 1.7;
        initspeed = -1;
        inertia = 0.6;
        class OpticsModes {
            class sight {
                opticsID = 1;
                useModelOptics = 0;
                opticsPPEffects[] = {"OpticsCHAbera5","OpticsBlur5"};
                opticsDisablePeripherialVision = 0.5;
                opticsZoomMin = 0.25;
                opticsZoomMax = 0.5;
                opticsZoomInit = 0.75;
                discreteInitIndex = 0;
                distanceZoomMin = 200;
                distanceZoomMax = 200;
                memoryPointCamera = "eye";
                visionMode[] = {};
                opticsFlare = "false";
            };
        };

        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 130;
            class CowsSlot: CowsSlot {
                class compatibleItems {
                    ls_cows_valken_optic = 1;
                };
            };

            class UnderBarrelSlot: UnderBarrelSlot {
                class compatibleItems {
                    // ls_acc_valken_bipod = 1;
                };
            };
        };
    };
    class ls_weapon_valken38x: ls_weapon_valken38x_base {
        scope = 2;
        author = AUTHOR;
        baseWeapon = "ls_weapon_valken38x";

        class EventHandlers {
            fired = "call CBA_fnc_weaponEvents";
        };

        class CBA_WeaponEvents {
            delay = 0; // prevents firing for delay seconds
            sound = "ls_valken38x_rackBolt"; // plays after delay seconds
        };
    };
};
