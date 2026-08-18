class ls_weapon_e5c_base: ls_rifle_base {
    scope = 0;
    author = AUTHOR;
    displayName = CSTRING(e5c_displayName);
    descriptionShort = ECSTRING(weapons,heavyBlasterRifle);

    model = QPATHTOF(e5c\ls_weapon_e5c.p3d);
    hiddenSelections[] = {"camo1", "camo2"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(e5\data\camo1_co.paa),
        QPATHTOF(e5c\data\camo2_co.paa)
    };
    picture = QPATHTOF(data\ui\e5c_ui_ca.paa);
    uiPicture = "\A3\weapons_f\data\UI\icon_mg_CA.paa";

    handAnim[] = {"OFP2_ManSkeleton", QPATHTOF(e5\anims\e5_handanim.rtm)};
    reloadAction = "ls_reload_e5";

    magazines[] = {"ls_magazine_e5c"};
    magazineWell[] = {"ls_magwell_eSeries", "ls_magwell_e5c"};

    reloadMagazineSound[] = {QPATHTOEF(sounds,weapons\reload\e5_reload.wss), 0.56234133, 1, 30};
    magazineReloadSwitchPhase = 0.4;
    cursor = "mg";
    nameSound = "Mgun";

    fireLightDiffuse[] = {FIRELIGHT_RED};

    aimTransitionSpeed = 0.8;
    maxRecoilSway = 0.008;
    swayDecaySpeed = 2;
    inertia = 0.7;
    initSpeed = -0.999327;
    dexterity = 1.3;
    recoil = "recoil_mk200";

    discreteDistanceInitIndex = 0;
    opticsZoomMin = 0.25;
    opticsZoomMax = 1.25;
    opticsZoomInit = 0.75;
    distanceZoomMin = 300;
    distanceZoomMax = 300;

    aiDispersionCoefX = 21;
    aiDispersionCoefY = 24;

    muzzles[] = {"this"};
    modes[] = {"manual", "Single", "close", "short", "medium", "far", "far_optic1", "far_optic2"};
    class manual: Mode_FullAuto {
        reloadTime = RPM(550);
        dispersion = 0.0009;
        maxRange = 10;
        maxRangeProbab = 0.04;
        midRange = 5;
        midRangeProbab = 0.7;
        minRange = 0;
        minRangeProbab = 0.3;

        recoil = "recoil_auto_mk200";
        recoilProne = "recoil_auto_prone_mk200";

        sounds[] = {"StandardSound"};
        class StandardSound {
            soundSetShot[] = {"ls_e5c_Shot_SoundSet", "ls_mediumBlaster_Shot_SoundSet"};
        };
    };
    class Single: manual {
        burst = 1;
        autofire = 0;
        dispersion = 0.0009 + 0.00073;
        displayName = "Semi"; // Vanilla doesn't stringtable these, and I don't think this is displayed anywhere in-game
        textureType = "semi";
    };
    class close: manual {
        showToPlayer = 0;
        burst = 10;
        maxRange = 50;
        maxRangeProbab = 0.04;
        midRange = 20;
        midRangeProbab = 0.7;
        minRange = 10;
        minRangeProbab = 0.05;
        aiRateOfFire = 0.5;
        aiRateOfFireDistance = 50;
    };
    class short: close {
        burst = 8;
        maxRange = 300;
        maxRangeProbab = 0.04;
        midRange = 150;
        midRangeProbab = 0.7;
        minRange = 50;
        minRangeProbab = 0.05;
        aiRateOfFire = 2;
        aiRateOfFireDistance = 300;
    };
    class medium: close {
        burst = 7;
        maxRange = 500;
        maxRangeProbab = 0.1;
        midRange = 300;
        midRangeProbab = 0.7;
        minRange = 200;
        minRangeProbab = 0.05;
        aiRateOfFire = 4;
        aiRateOfFireDistance = 600;
    };
    class far: medium {
        burst = "3 + round random 5";
        maxRange = 900;
        maxRangeProbab = 0.2;
        midRange = 700;
        midRangeProbab = 0.2;
        minRange = 500;
        minRangeProbab = 0.1;
        aiRateOfFire = 6;
        aiRateOfFireDistance = 900;
    };
    class far_optic1: medium {
        requiredOpticType = 1;
        burst = 3;
        maxRange = 750;
        maxRangeProbab = 0.01;
        midRange = 500;
        midRangeProbab = 0.4;
        minRange = 300;
        minRangeProbab = 0.05;
        aiRateOfFire = 6;
        aiRateOfFireDistance = 900;
    };
    class far_optic2: far_optic1 {
        requiredOpticType = 2;
        maxRange = 1100;
        maxRangeProbab = 0.01;
        midRange = 750;
        midRangeProbab = 0.7;
        minRange = 400;
        minRangeProbab = 0.05;
        aiRateOfFire = 10;
        aiRateOfFireDistance = 1100;
    };

    class GunParticles {
        class SecondEffect {
            positionName = "Nabojnicestart";
            directionName = "Nabojniceend";
            effectName = "CaselessAmmoCloud";
        };
    };

    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 176;
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

class ls_weapon_e5c: ls_weapon_e5c_base {
    scope = 2;
    author = AUTHOR;
    baseWeapon = "ls_weapon_e5c";
};
