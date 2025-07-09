class Mode_SemiAuto;
class Mode_FullAuto;

class CfgWeapons {
    class Pistol_Base_F;
    class ls_pistol_base: Pistol_Base_F {
        class WeaponSlotsInfo {
            class CowsSlot;
            class MuzzleSlot;
            class PointerSlot;
            class UnderBarrelSlot;
        };
    };

    class ls_weapon_rg4d_base: ls_pistol_base {
        scope = 0;
        author = AUTHOR;
        displayName = "RG-4D Blaster Pistol";
        descriptionShort = "RG-4D Blaster Pistol";
        baseWeapon = "ls_weapon_lg4d_base";

        model = QPATHTOF(ls_weapon_rg4d.p3d);
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\camo1_co.paa),
        };
        picture = QPATHTOF(data\ui\rg4d_ui_ca.paa);

        magazines[] = {"ls_magazine_rg4d"};
        magazineWell[] = {"ls_magwell_rg4d"};

        drySound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\dry_4_Five.wss", 0.39810717, 1, 20};
        reloadMagazineSound[] = {QPATHTOEF(sounds,weapons\reload\dc17.wss), 0.56234133, 1, 30};

        soundBullet[] = {};

        fireLightDuration = 0.05;
        fireLightIntensity = 0.4;
        fireLightDiffuse[] = {0, 0, 0.01};
        fireLightAmbient[] = {0, 0, 0};

        modes[] = {
            "Single",
            "close",
            "short",
            "medium"
        };

        inertia = 1.4;
        dexterity = 1.7;
        initSpeed = 300;
        maxRecoilSway = 0.0125;
        swayDecaySpeed = 1.25;
        recoil = "recoil_pistol_4five";
        modelOptics = QPATHTOF(ls_optic_rg4d.p3d);

        class Single: Mode_SemiAuto {
            sounds[] = {"StandardSound"};
            class StandardSound {
                weaponSoundEffect = "";
                begin1[] = {QPATHTOEF(sounds,weapons\rg4d\shot1.wav), 1, 1, 1800};
                soundBegin[] = {"begin1", 1};
                closure1[] = {};
                closure2[] = {};
                soundClosure[] = {};
            };
            recoil = "recoil_pistol_heavy";
            recoilProne = "recoil_prone_pistol_heavy";
            reloadTime = 0.2;
            dispersion = 0.01015;
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

        class OpticModes {
            class Scope {
                opticsID = 1;
                useModelOptics = 1;
                opticsPPEffects[] = {"OpticsCHAbera5", "OpticsBlur5"};
                opticsDisablePeripherialVision = 0.67;
                opticsZoomMin = 0.122173;
                opticsZoomMax = 0.122173;
                opticsZoomInit = 0.122173;
                memoryPointCamera = "opticView";
                visionMode[] = {"Normal", "NVG", "TI"};
                thermalMode[] = {0, 1};
                opticsFlare = "true";
                distanceZoomMin = 300;
                distanceZoomMax = 300;
                cameraDir = "";
            };
        };

        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 24;
            class MuzzleSlot: MuzzleSlot {
                class compatibleItems {};
            };
            class CowsSlot: CowsSlot {
                class compatibleItems {};
            };
            class PointerSlot: PointerSlot {
                class compatibleItems {};
            };
        };
    };

    class ls_weapon_rg4d: ls_weapon_rg4d_base {
        scope = 2;
        author = AUTHOR;
        baseWeapon = "ls_weapon_rg4d";
    };
};
