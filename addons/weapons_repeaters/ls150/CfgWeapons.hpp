class ls_weapon_ls150_base: ls_rifle_base {
    scope = 0;
    author = AUTHOR;
    displayName = CSTRING(ls150_displayName);
    descriptionShort = CSTRING(ls150_descriptionShort);
    baseWeapon = "ls_weapon_ls150";

    model = QPATHTOF(ls150\ls_weapon_ls150.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(ls150\data\camo1_co.paa)
    };
    picture = QPATHTOF(data\ui\ls150_ui_ca.paa);
    uiPicture = "\A3\weapons_f\data\UI\icon_mg_CA.paa";

    handAnim[] = {"OFP2_ManSkeleton", QPATHTOF(ls150\anims\ls150_handanim.rtm)};
    reloadAction = "ls_reload_ls150";
    cursor = "mg";

    magazines[] = {"ls_magazine_ls150"};
    magazineWell[] = {"ls_magwell_ls150"};

    drySound[] = {QPATHTOEF(sounds,weapons\dry\z6.wss), 2, 1, 20};
    reloadMagazineSound[] = {QPATHTOEF(sounds,weapons\ls150\reload.wss), 1, 1, 30};

    ace_overheating_mrbs = 100000;
    ace_overheating_slowdownFactor = 1e-06;
    ace_overheating_allowSwapBarrel = 1;
    ace_overheating_dispersion = 0;

    recoil = "recoil_mmg_01";
    magazineReloadSwitchPhase = 0.4;
    discreteDistanceInitIndex = 0;
    maxRecoilSway = 0.01;
    swayDecaySpeed = 2;
    inertia = 1.2;
    initSpeed = -1;
    aimTransitionSpeed = 0.5;

    fireLightDiffuse[] = {FIRELIGHT_YELLOW};

    opticsZoomMin = 0.25;
    opticsZoomMax = 1.25;
    opticsZoomInit = 0.75;
    distanceZoomMin = 300;
    distanceZoomMax = 300;

    aiDispersionCoefX = 20;
    aiDispersionCoefY = 25;

    modes[] = {"Manual", "burst", "close", "short", "medium", "far"};
    class Manual: Mode_FullAuto {
        reloadTime = RPM(1200);
        dispersion = 0.00145;
        maxRange = 80;
        maxRangeProbab = 0.04;
        midRange = 30;
        midRangeProbab = 0.58;
        minRange = 1;
        minRangeProbab = 0.2;

        sounds[] = {"StandardSound"};
        class StandardSound {
            soundSetShot[] = {"ls_ls150_Shot_SoundSet", "ls_mediumBlaster_Tail_SoundSet"};
        };
    };
    class burst: Mode_Burst {
        showToPlayer = 0;
        burst = 5;
        reloadTime = RPM(1200);
        dispersion = 0.00145;

        sounds[] = {"StandardSound"};
        class StandardSound {
            soundSetShot[] = {"ls_ls150_Shot_SoundSet", "ls_mediumBlaster_Tail_SoundSet"};
        };
    };
    class close: Manual {
        showToPlayer = 0;
        burst = 10;

        maxRange = 50;
        maxRangeProbab = 0.04;
        midRange = 25;
        midRangeProbab = 0.7;
        minRange = 0;
        minRangeProbab = 0.05;
        aiRateOfFire = 0.5;
        aiRateOfFireDistance = 100;
    };
    class short: close {
        burst = "3 + round random 4";

        maxRange = 400;
        maxRangeProbab = 0.04;
        midRange = 200;
        midRangeProbab = 0.7;
        minRange = 50;
        minRangeProbab = 0.05;
        aiRateOfFire = 2;
        aiRateOfFireDistance = 200;
    };
    class medium: burst {
        burst = "4 + round random 5";
        maxRange = 800;
        maxRangeProbab = 0.1;
        midRange = 600;
        midRangeProbab = 0.6;
        minRange = 400;
        minRangeProbab = 0.05;
        aiRateOfFire = 4;
        aiRateOfFireDispersion = 2;
        aiRateOfFireDistance = 600;
    };
    class far: medium {
        burst = "5 + round random 5";
        maxRange = 1100;
        maxRangeProbab = 0.2;
        midRange = 900;
        midRangeProbab = 0.2;
        minRange = 700;
        minRangeProbab = 0.1;
        aiRateOfFire = 6;
        aiRateOfFireDistance = 900;
    };

    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 206;
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

class ls_weapon_ls150: ls_weapon_ls150_base {
    scope = 2;
    author = AUTHOR;
};
