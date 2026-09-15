class Mode_SemiAuto;

class CfgWeapons {
    class Rifle_Long_Base_F;
    class ls_rifle_base: Rifle_Long_Base_F {
        scope = 0;
        author = AUTHOR;
        displayName = "";
        descriptionShort = "";
        picture = QPATHTOEF(main,data\ui\ls_logo_wide_ca.paa);
        uiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";

        fireLightDuration = 0.05;
        fireLightIntensity = 0.4;
        fireLightDiffuse[] = {FIRELIGHT_BLUE};
        fireLightAmbient[] = {0, 0, 0};

        drySound[] = {QPATHTOEF(sounds,weapons\dry\generic.wss), 0.39810717, 1, 20};
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
    };

    class Rifle_Base_F;
    class ls_grenadeLauncher_base: Rifle_Base_F {
        scope = 0;
        author = AUTHOR;
        descriptionShort = "$STR_dn_staticGrenadeLauncher"; // "$STR_A3_CfgWeapons_3GL1" for 40mm GLs

        reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\UGL\Reload_UGL.wss", 0.562341, 1, 10};
        changeFiremodeSound[] = {"\A3\Sounds_F\arsenal\weapons\UGL\Firemode_ugl.wss", 0.31622776, 1, 5};
        drySound[] = {"\A3\Sounds_F\arsenal\weapons\UGL\Dry_ugl.wss", 0.562341, 1, 10};
        uiPicture = "\A3\Weapons_F\Data\UI\icon_gl_CA.paa";

        recoil = "recoil_gm6";

        weaponInfoType = "RscWeaponZeroing";
        cameraDir = "eye";

        modes[] = {"Single"};
        muzzles[] = {"this"};
        class Single: Mode_SemiAuto {
            reloadTime = RPM(20);
            maxRange = 400;
            maxRangeProbab = 0.05;
            midRange = 200;
            midRangeProbab = 0.7;
            minRange = 30;
            minRangeProbab = 0.1;
            dispersion = 0.001;

            recoil = "recoil_single_gm6";
            recoilProne = "recoil_single_prone_gm6";

            class StandardSound {
                begin1[] = {"\A3\Sounds_F\arsenal\weapons\UGL\UGL_01.wss", 0.707946, 1, 200};
                begin2[] = {"\A3\Sounds_F\arsenal\weapons\UGL\UGL_02.wss", 0.707946, 1, 200};
                soundBegin[] = {"begin1", 0.5, "begin2", 0.5};
                soundSetShot[] = {"UGL_shot_SoundSet", "UGL_Tail_SoundSet", "UGL_InteriorTail_SoundSet"};
                closure1[] = {"\A3\Sounds_F\arsenal\weapons\UGL\Closure_UGL.wss", 1, 1, 10};
                soundClosure[] = {"closure1", 1};
            };
        };

        class WeaponSlotsInfo {
            mass = 65;
            allowedSlots[] = {TYPE_UNIFORM, TYPE_VEST, TYPE_BACKPACK};

            class CowsSlot: ls_CowsSlot {};
            class MuzzleSlot: ls_MuzzleSlot {};
            class PointerSlot: ls_PointerSlot {};
            class UnderBarrelSlot: ls_UnderBarrelSlot {};
        };

        class GunParticles {
            class effect1 {
                positionName = "barrel_start";
                directionName = "barrel_end";
                effectName = "GrenadeLauncherCloud";
            };
        };
    };

    class Pistol_Base_F;
    class ls_pistol_base: Pistol_Base_F {
        scope = 0;
        author = AUTHOR;
        displayName = "";
        descriptionShort = "";
        picture = QPATHTOEF(main,data\ui\ls_logo_wide_ca.paa);

        fireLightDuration = 0.05;
        fireLightIntensity = 0.4;
        fireLightDiffuse[] = {FIRELIGHT_BLUE};
        fireLightAmbient[] = {0, 0, 0};

        drySound[] = {QPATHTOEF(sounds,weapons\dry\generic.wss), 0.39810717, 1, 20};
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
    };

    class Launcher_Base_F;
    class ls_launcher_base: Launcher_Base_F {
        scope = 0;
        author = AUTHOR;
        displayName = "";
        descriptionShort = "$STR_A3_CfgWeapons_launch_LAW1";
        picture = QPATHTOEF(main,data\ui\ls_logo_wide_ca.paa);

        ace_overpressure_angle = 45;
        ace_overpressure_damage = 0.7;
        ace_overpresssure_priority = 1;
        ace_overpressure_range = 10;
        ace_reloadLaunchers_enabled = 1;

        modelOptics = "\A3\Weapons_F_Beta\acc\reticle_titan.p3d";
        inertia = 1.1;
        initSpeed = -1;
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
        cmImmunity = 0.2;
        lockAcquire = 0;
        weaponLockSystem = WEAPONLOCK_INFRARED + WEAPONLOCK_RADAR;
        weaponLockDelay = 3;
        weaponInfoType = "RscOptics_titan";

        modes[] = {"Single", "TopDown"};
        muzzles[] = {"this"};
        class Single: Mode_SemiAuto {
            reloadTime = RPM(60);
            maxRange = 3450;
            maxRangeProbab = 0.85;
            midRange = 150;
            midRangeProbab = 0.85;
            minRange = 70;
            minRangeProbab = 0.6;
            aiRateOfFire = 7;
            aiRateOfFireDistance = 1500;

            ace_missileGuidance_attackProfile = "JAV_DIR";
            recoil = "recoil_single_titan";
        };

        class TopDown: Single {
            displayName = "Top-down Attack"; // Not stringtabled in vanilla, also not displayed anywhere?
            textureType = "topDown";

            maxRange = 2000;
            maxRangeProbab = 0.95;
            midRange = 500;
            midRangeProbab = 0.95;
            minRange = 150;
            minRangeProbab = 0.8;
            aiRateOfFire = 7;
            aiRateOfFireDistance = 1500;

            ace_missileGuidance_attackProfile = "JAV_TOP";
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
    class ls_muzzle_scattergun: UGL_F {
        scope = 1;
        author = AUTHOR;
        displayName = CSTRING(scattergun);

        useModelOptics = 0;
        useExternalOptic = 1;

        magazines[] = {};
        magazineWell[] = {"ls_magwell_scattergun"};
        reloadMagazineSound[] = {QPATHTOEF(sounds,weapons\scattergun\reload.wss), 0.56234133, 1, 30};

        cameraDir = "eye";
        memoryPointCamera = "";
        discreteDistance[] = {100};
        discreteDistanceCameraPoint[] = {"eye"};
        discreteDistanceInitIndex = 0;
        initSpeed = -1;
        recoil = "ls_recoil_scattergun";

        muzzleEnd = "shotgun pos";
        muzzlePos = "shotgun dir";

        cursor = "sgun";
        cursoraim = "CursorAim";
        cursorAimOn = "";

        modes[] = {"Single"};
        class Single: Mode_SemiAuto {
            reloadTime = RPM(50);
            dispersion = 0.00145;
            maxRange = 50;
            maxRangeProbab = 0.15;
            midRange = 10;
            midRangeProbab = 0.8;
            minRange = 1;
            minRangeProbab = 0.1;
            aiRateOfFire = 1;
            aiRateOfFireDistance = 20;

            sounds[] = {"StandardSound"};
            class StandardSound {
                soundSetShot[] = {"ls_dp20_Shot_SoundSet", "ls_mediumBlaster_Tail_SoundSet"};
            };
        };
    };

    #include "accessories\CfgWeapons.hpp"
};
