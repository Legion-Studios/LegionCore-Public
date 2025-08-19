class ls_weapon_z7_base: ls_launcher_base {
    scope = 0;
    author = AUTHOR;
    displayName = "Z-7 Rotary Chaingun";

    model = QPATHTOF(z7\ls_weapon_z7.p3d);
    hiddenSelections[] = {"_gun", "_barrel", "_mag"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(z7\data\gun_co.paa),
        QPATHTOF(z7\data\barrel_co.paa),
        QPATHTOF(z7\data\mag_co.paa)
    };
    picture = QPATHTOF(data\ui\z7_ui_ca.paa);

    handAnim[] = {
        "OFP2_ManSkeleton",
        QPATHTOF(z7\anims\z7_handanim.rtm)
    };
    reloadAction = "ReloadRPG";

    magazines[] = {"ls_magazine_z7"};
    magazineWell[] = {"ls_magwell_z7"};

    drySound[] = {"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\Dry_RPG32.wss", 0.44668359, 1, 20};
    reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\reload_RPG32.wss", 0.25118864, 1, 10};
    recoil = "ls_recoil_z6";

    cursor = "rocket"; // Vanilla arsenal seems to sort weapons by their `cursor`, so we need to leave this as one of the launcher cursors so it doesn't appear as both a rifle and launcher
    cursorAim = "CursorAim";

    ace_overpressure_angle = 0;
    ace_overpressure_damage = 0;
    ace_overpressure_priority = 1;
    ace_overpressure_range = 0;

    inertia = 0.9;
    initSpeed = 110;
    aimTransitionSpeed = 0.5;
    maxZeroing = 600;
    modelOptics = "";
    weaponInfoType = "RscWeaponEmpty";
    opticsZoomMin = 0.1083;
    opticsZoomMax = 0.1083;
    opticsZoomInit = 0.1083;
    cameraDir = "look";
    canLock = 0;
    weaponLockDelay = 3;
    lockAcquire = 0;
    dexterity = 1.1;

    fireLightDuration = 0.05;
    fireLightIntensity = 0.4;
    fireLightDiffuse[] = {0, 0, 0.01};
    fireLightAmbient[] = {0, 0, 0};

    modes[] = {"FullAuto"};
    muzzles[] = {"this"};
    class FullAuto: Mode_FullAuto {
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
        dispersion = 0.03015;

        sounds[] = {"StandardSound"};
        class StandardSound {
            soundSetShot[] = {"ls_z6_Shot_SoundSet", "ls_mediumBlaster_Tail_SoundSet"};
        };
    };

    class GunParticles {};

    class OpticsModes {
        class optic {
            opticsID = 1;
            useModelOptics = 0;
            opticsZoomMin = 0.1083;
            opticsZoomMax = 0.1083;
            opticsZoomInit = 0.1083;
            distanceZoomMin = 300;
            distanceZoomMax = 300;
            memoryPointCamera = "eye";
            opticsFlare = 1;
            opticsDisablePeripherialVision = 1;
            cameraDir = "look";
            visionMode[] = {"Normal"};
            opticsPPEffects[] = {
                "OpticsCHAbera1",
                "OpticsBlur1"
            };
        };
    };

    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 100;
    };
};

class ls_weapon_z7: ls_weapon_z7_base {
    scope = 2;
    author = AUTHOR;
    baseWeapon = "ls_weapon_z7";
};
