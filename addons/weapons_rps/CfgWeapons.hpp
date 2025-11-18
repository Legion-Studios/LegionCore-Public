class Mode_SemiAuto;

class CfgWeapons {
    class Launcher_Base_F;
    class ls_launcher_base: Launcher_Base_F {
        class WeaponSlotsInfo;
    };
    class ls_weapon_rps6_base: ls_launcher_base {
        scope = 0;
        author = AUTHOR;
        displayName = "RPS-6 Rocket Launcher";
        descriptionShort = "Reusable Rocket Launcher";

        model = QPATHTOF(ls_weapon_rps6.p3d);
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\camo1_co.paa)
        };
        picture = QPATHTOF(data\ui\rps6_ui_ca.paa);

        handAnim[] = {
            "OFP2_ManSkeleton",
            QPATHTOF(anims\rps6_handanim.rtm)
        };
        reloadAction = "ReloadRPG";
        recoil = "recoil_rpg";

        magazines[] = {"ls_magazine_rps6_heat"};
        magazineWell[] = {"ls_magwell_rps6"};
        magazineReloadSwitchPhase = 0.55;

        ace_overpressure_angle = 45;
        ace_overpressure_damage = 0.7;
        ace_overpresssure_priority = 1;
        ace_overpressure_range = 5;

        cameraDir = "look";
        drySound[] = {"\A3\Sounds_F\arsenal\weapons\Launchers\RPG32\Dry_RPG32.wss", 0.4466836, 1, 20};
        reloadMagazineSound[] = {"\A3\Sounds_F\arsenal\weapons\Launchers\RPG32\reload_RPG32.wss", 0.25118864, 1, 10};
        canLock = 0;
        weaponLockDelay = 3;
        lockAcquire = 0;
        inertia = 1;
        aimTransitionSpeed = 0.5;
        dexterity = 1;
        cmImmunity = 0.1;
        weaponInfoType = "RscWeaponEmpty";

        class GunParticles {
            class effect1 {
                positionName = "konec hlavne";
                directionName = "usti hlavne";
                effectName = "RocketBackEffectsRPGNT";
            };
        };

        maxZeroing = 600;
        modelOptics = QPATHTOF(ls_optic_rps6.p3d);
        opticsZoomMin = 0.1083;
        opticsZoomMax = 0.1083;
        opticsZoomInit = 0.1083;
        class OpticsModes {
            class optic {
                opticsID = 1;
                useModelOptics = 1;
                opticsZoomMin = 0.0875;
                opticsZoomMax = 0.0875;
                opticsZoomInit = 0.0875;
                distanceZoomMin = 300;
                distanceZoomMax = 300;
                memoryPointCamera = "eye";
                opticsFlare = 1;
                opticsDisablePeripherialVision = 1;
                cameraDir = "look";
                visionMode[] = {"Normal", "NVG"};
                opticsPPEffects[] = {"OpticsCHAbera1", "OpticsBlur1"};
            };
        };

        modes[] = {"Single"};
        muzzles[] = {"this"};
        class Single: Mode_SemiAuto {
            sounds[] = {"StandardSound"};
            class StandardSound {
                begin1[] = {"\A3\Sounds_F\arsenal\weapons\Launchers\RPG32\rpg32.wss", 1.9952624, 1, 1500};
                soundBegin[] = {"begin1", 1};
            };
            recoil = "recoil_single_law";
            aiRateOfFire = 5;
            aiRateOfFireDistance = 500;
            aiRateOfFireDispersion = 2;
            minRange = 10;
            minRangeProbab = 0.3;
            midRange = 40;
            midRangeProbab = 0.85;
            maxRange = 600;
            maxRangeProbab = 0.85;
        };

        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = RPS6_MASS_LAUNCHER;
        };

        class EventHandlers;
    };

    class ls_weapon_rps6: ls_weapon_rps6_base {
        scope = 2;
        author = AUTHOR;
        baseWeapon = "ls_weapon_rps6";
    };

    class ls_weapon_rps6_disposable: ls_weapon_rps6_base {
        scope = 1;
        author = AUTHOR;
        displayName = "RPS-6 Rocket Launcher (Disposable)";
        descriptionShort = "Single-use Rocket Launcher";
        baseWeapon = "ls_weapon_rps6_loaded";

        magazines[] = {"ls_magazine_rps6_heat_disposable"};
        magazineWell[] = {};
        magazineReloadTime = 0.1;
        reloadMagazineSound[] = {"", 1, 1};

        class EventHandlers: EventHandlers {
            fired = QUOTE(call CBA_fnc_firedDisposable);
        };
    };

    class ls_weapon_rps6_loaded: ls_weapon_rps6_disposable {
        scope = 2;
        author = AUTHOR;

        magazines[] = {"CBA_FakeLauncherMagazine"};

        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = RPS6_MASS_LAUNCHER + RPS6_MASS_MAGAZINE;
        };
    };

    class ls_weapon_rps6_used: ls_weapon_rps6_disposable {
        scope = 1;
        author = AUTHOR;
        displayName = "Used RPS-6 Rocket Launcher";
        descriptionShort = "Used Rocket Launcher";

        magazines[] = {"CBA_FakeLauncherMagazine"};
    };
};
