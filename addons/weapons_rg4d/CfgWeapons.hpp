class Mode_SemiAuto;

class CfgWeapons {
    class Pistol_Base_F;
    class ls_pistol_base: Pistol_Base_F {
        class WeaponSlotsInfo {
            class CowsSlot;
            class MuzzleSlot;
            class PointerSlot;
        };
    };
    class ls_weapon_rg4d_base: ls_pistol_base {
        scope = 0;
        author = AUTHOR;
        displayName = CSTRING(displayName);
        descriptionShort = ECSTRING(weapons,blasterPistol);
        baseWeapon = "ls_weapon_rg4d";

        model = QPATHTOF(ls_weapon_rg4d.p3d);
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\camo1_co.paa),
        };
        picture = QPATHTOF(data\ui\rg4d_ui_ca.paa);

        magazines[] = {"ls_magazine_rg4d"};
        magazineWell[] = {"ls_magwell_rg4d"};

        drySound[] = {"\A3\Sounds_F\arsenal\weapons\Pistols\4-Five\dry_4_Five.wss", 0.39810717, 1, 20};
        reloadMagazineSound[] = {QPATHTOEF(sounds,weapons\dc17s\reload.wss), 0.56234133, 1, 30};

        fireLightDiffuse[] = {FIRELIGHT_RED};

        recoil = "recoil_pistol_4five";
        aimTransitionSpeed = 1.5;
        inertia = 0.3;
        dexterity = 1.7;
        initSpeed = -0.944882;
        maxRecoilSway = 0.008;
        swayDecaySpeed = 2;

        modes[] = {"Single"};
        class Single: Mode_SemiAuto {
            recoil = "recoil_pistol_heavy";
            recoilProne = "recoil_prone_pistol_heavy";
            reloadTime = RPM(300);
            dispersion = 0.001015;
            maxRange = 50;
            maxRangeProbab = 0.1;
            midRange = 25;
            midRangeProbab = 0.6;
            minRange = 5;
            minRangeProbab = 0.3;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 25;

            sounds[] = {"StandardSound"};
            class StandardSound {
            soundSetShot[] = {"ls_rg4d_Shot_SoundSet", "ls_mediumBlaster_Tail_SoundSet"};
            };
        };

        modelOptics = QPATHTOF(ls_optic_rg4d.p3d);
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
                opticsFlare = 1;
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
    };
};
