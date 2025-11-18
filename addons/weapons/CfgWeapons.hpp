class Mode_SemiAuto;

class CfgWeapons {
    class Rifle_Long_Base_F;
    class ls_rifle_base: Rifle_Long_Base_F {
        scope = 0;
        author = AUTHOR;
        picture = QPATHTOEF(main,data\ui\ls_logo_wide_ca.paa);

        displayName = "";
        descriptionShort = "";

        soundBullet[] = {};

        class WeaponSlotsInfo {
            mass = 100;
            allowedSlots[] = {TYPE_UNIFORM, TYPE_VEST, TYPE_BACKPACK};

            class CowsSlot: ls_CowsSlot {
                iconPosition[] = {0.0, 0.45}; // Icon position, would need tweaks per picture to be exact
            };
            class MuzzleSlot: ls_MuzzleSlot {
                iconPosition[] = {0.5, 0.35};
            };
            class PointerSlot: ls_PointerSlot {
                iconPosition[] = {0.20, 0.45};
            };
            class UnderBarrelSlot: ls_UnderBarrelSlot {
                iconPosition[] = {0.0, -0.45};
            };
        };

        class Library {
            libTextDesc = "";
        };

        class GunParticles;
    };

    class Pistol_Base_F;
    class ls_pistol_base: Pistol_Base_F {
        scope = 0;
        author = AUTHOR;
        picture = QPATHTOEF(main,data\ui\ls_logo_wide_ca.paa);

        displayName = "";
        descriptionShort = "";

        soundBullet[] = {};

        class WeaponSlotsInfo {
            mass = 20;
            allowedSlots[] = {TYPE_UNIFORM, TYPE_VEST, TYPE_BACKPACK};

            class CowsSlot: ls_CowsSlot {};
            class MuzzleSlot: ls_MuzzleSlot {};
            class PointerSlot: ls_PointerSlot {};
            class UnderBarrelSlot: ls_UnderBarrelSlot {};
        };

        class Library {
            libTextDesc = "";
        };

        class GunParticles;
    };

    class Launcher_Base_F;
    class ls_launcher_base: Launcher_Base_F {
        scope = 0;
        author = AUTHOR;
        picture = QPATHTOEF(main,data\ui\ls_logo_wide_ca.paa);

        displayName = "";
        descriptionShort = "";

        ace_overpressure_angle = 45;
        ace_overpressure_damage = 0.7;
        ace_overpresssure_priority = 1;
        ace_overpressure_range = 10;
        ace_reloadLaunchers_enabled = 1;

        modelOptics = "\A3\Weapons_F_Beta\acc\reticle_titan.p3d";
        inertia = 1.2;
        initSpeed = 40;
        cameraDir = "look";
        aimTransitionSpeed = 0.7;
        canLock = 2;
        dexterity = 0.8;
        drySound[] = {"\A3\Sounds_F\arsenal\weapons\Launchers\Titan\Dry_Titan.wss", 0.158489, 1, 18};
        lockedTargetSound[] = {"\A3\Sounds_F\arsenal\weapons\Launchers\Titan\locked_Titan.wss", 0.316228, 2.5};
        lockingTargetSound[] = {"\A3\Sounds_F\arsenal\weapons\Launchers\Titan\locking_Titan.wss", 0.316228, 1};
        reloadMagazineSound[] = {"\A3\Sounds_F\arsenal\weapons\Launchers\Titan\reload_Titan.wss", 1, 1, 20};
        maxZeroing = 2000;
        recoil = "recoil_titan_short";
        reloadAction = "ReloadRPG";
        shotPos = "usti hlavne";
        shotEnd = "konec hlavne";
        value = 20;
        weaponLockDelay = 3;
        weaponInfoType = "RscOptics_titan";

        modes[] = {"Single", "TopDown"};
        muzzles[] = {"this"};
        class Single: Mode_SemiAuto {
            ace_missileGuidance_attackProfile = "JAV_DIR";
            aiRateOfFire = 7;
            aiRateOfFireDistance = 1500;
            maxRange = 2000;
            maxRangeProbab = 0.8;
            midRange = 300;
            midRangeProbab = 0.8;
            minRange = 70;
            minRangeProbab = 0.9;
            recoil = "recoil_single_titan";
        };

        class TopDown: Single {
            displayName = "Top-down Attack";
            textureType = "topDown";
            ace_missileGuidance_attackProfile = "JAV_TOP";
            maxRange = 2000;
            maxRangeProbab = 0.95;
            midRange = 500;
            midRangeProbab = 0.95;
            minRange = 150;
            minRangeProbab = 0.8;
        };

        class WeaponSlotsInfo {
            mass = 140;
            allowedSlots[] = {};

            class CowsSlot: ls_CowsSlot {};
            class MuzzleSlot: ls_MuzzleSlot {};
            class PointerSlot: ls_PointerSlot {};
            class UnderBarrelSlot: ls_UnderBarrelSlot {};
        };

        class Library {
            libTextDesc = "";
        };
    };

    class UGL_F;
    class ls_scatterMuzzle_base: UGL_F {
        scope = 1;
        author = AUTHOR;
        displayName = "Scattergun";

        useModelOptics = 0;
        useExternalOptic = 1;

        magazines[] = {};
        magazineWell[] = {"ls_magwell_scatterMuzzle"};
        reloadMagazineSound[] = {QPATHTOEF(sounds,weapons\reload\scatter.wss), 0.56234133, 1, 30};

        cameraDir = "eye";
        memoryPointCamera = "";
        discreteDistance[] = {100};
        discreteDistanceCameraPoint[] = {"eye"};
        discreteDistanceInitIndex = 0;
        initSpeed = -1;
        cursor = "";
        recoil = "ls_recoil_scatterMuzzle";

        class Single: Mode_SemiAuto {
            minRange = 30;
            minRangeProbab = 0.1;
            midRange = 200;
            midRangeProbab = 0.7;
            maxRange = 400;
            maxRangeProbab = 0.05;

            sounds[] = {"StandardSound"};
            class StandardSound {
                begin1[] = {QPATHTOEF(sounds,weapons\shot\scatter.wss), 0.70794576, 1, 200};
                soundBegin[] = {"begin1", 1};
                closure1[] = {"\A3\Sounds_F\arsenal\weapons\UGL\Closure_UGL", 1,1, 10};
                soundClosure[] = {"closure1", 1};
            };
        };
    };

    #include "accessories\CfgWeapons.hpp"
};
