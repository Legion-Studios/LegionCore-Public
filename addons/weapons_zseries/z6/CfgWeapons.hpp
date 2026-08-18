class ls_weapon_z6_base: ls_rifle_base {
    scope = 0;
    author = AUTHOR;
    displayName = CSTRING(z6_displayName);
    descriptionShort = ECSTRING(weapons,rotaryBlasterCannon);
    baseWeapon = "ls_weapon_z6";

    model = QPATHTOF(z6\ls_weapon_z6.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(z6\data\camo1_co.paa)
    };
    picture = QPATHTOF(data\ui\z6_ui_ca.paa);
    uiPicture = "\A3\weapons_f\data\UI\icon_mg_CA.paa";

    handAnim[] = {"OFP2_ManSkeleton", QPATHTOF(z6\anims\z6_handanim.rtm)};
    reloadAction = "ReloadMagazine";
    // memoryPointCamera = "eye";

    magazines[] = {"ls_magazine_z6"};
    magazineWell[] = {"ls_magwell_zSeries", "ls_magwell_z6"};

    drySound[] = {QPATHTOEF(sounds,weapons\dry\z6.wss), 2, 1, 20};
    reloadMagazineSound[] = {QPATHTOEF(sounds,weapons\reload\ls150.ogg), 1, 1, 30};
    recoil = "ls_recoil_z6";

    ace_overheating_mrbs = 3000;
    ace_overheating_slowdownFactor = 1;
    ace_overheating_allowSwapBarrel = 1;
    ace_overheating_dispersion = 0.75;

    magazineReloadSwitchPhase = 0.4;
    discreteDistanceInitIndex = 0;
    maxRecoilSway = 0.01;
    swayDecaySpeed = 0.2;
    inertia = 3;
    dexterity = 1.5;
    aimTransitionSpeed = 0.5;
    initSpeed = 800;

    fireLightDuration = 0.05;
    fireLightIntensity = 0.4;
    fireLightDiffuse[] = {FIRELIGHT_BLUE};
    fireLightAmbient[] = {0, 0, 0};

    cursor = "mg";
    flash = "gunfire";
    flashSize = 3;

    opticsZoomMin = 0.25;
    opticsZoomMax = 1.25;
    opticsZoomInit = 0.75;
    distanceZoomMin = 300;
    distanceZoomMax = 300;

    aiDispersionCoefX = 21;
    aiDispersionCoefY = 24;

    muzzles[] = {"this"};
    modes[] = {"manual", "close", "short", "medium"};
    class manual: Mode_FullAuto {
        reloadTime = RPM(500);
        recoil = "recoil_auto_mk200";
        recoilProne = "recoil_auto_prone_mk200";

        dispersion = 0.006;
        minRange = 0;
        minRangeProbab = 0.3;
        midRange = 5;
        midRangeProbab = 0.7;
        maxRange = 10;
        maxRangeProbab = 0.04;

        sounds[] = {"StandardSound"};
        class StandardSound {
            soundSetShot[] = {"ls_z6_Shot_SoundSet", "ls_mediumBlaster_Tail_SoundSet"};
        };
    };
    class close: manual {
        showToPlayer = 0;
        aiRateOfFire = 0.5;
        aiRateOfFireDistance = 50;
        burst = 10;

        minRange = 10;
        minRangeProbab = 0.05;
        midRange = 20;
        midRangeProbab = 0.7;
        maxRange = 50;
        maxRangeProbab = 0.04;
    };
    class short: close {
        aiRateOfFire = 2;
        aiRateOfFireDistance = 300;
        burst = 8;

        minRange = 50;
        minRangeProbab = 0.4;
        midRange = 150;
        midRangeProbab = 0.7;
        maxRange = 300;
        maxRangeProbab = 0.04;
    };
    class medium: close {
        aiRateOfFire = 4;
        aiRateOfFireDistance = 600;
        burst = 7;

        minRange = 200;
        minRangeProbab = 0.1;
        midRange = 300;
        midRangeProbab = 0.7;
        maxRange = 500;
        maxRangeProbab = 0.1;
    };

    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 120;
    };

    class GunParticles {
        class SecondEffect {
            positionName = "Nabojnicestart";
            directionName = "Nabojniceend";
            effectName = "CaselessAmmoCloud";
        };
    };
};

class ls_weapon_z6: ls_weapon_z6_base {
    scope = 2;
    author = AUTHOR;
};

class ls_weapon_z6_hammer: ls_weapon_z6 {
    scope = 1;
    author = AUTHOR;
    displayName = CSTRING(z6_hammer_displayName);
    descriptionShort = CSTRING(z6_hammer_descriptionShort);
};
