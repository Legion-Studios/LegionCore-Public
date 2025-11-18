class ls_weapon_ls150_base: ls_rifle_base {
    scope = 0;
    author = AUTHOR;
    displayName = "LS-150 Heavy ACP Repeater";

    model = QPATHTOF(ls150\ls_weapon_ls150.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(ls150\data\camo1_co.paa)
    };
    picture = QPATHTOF(data\ui\ls150_ui_ca.paa);

    handAnim[] = {
        "OFP2_ManSkeleton",
        QPATHTOF(ls150\anims\ls150_handanim.rtm)
    };
    reloadAction = "ls_reload_ls150";

    magazines[] = {"ls_magazine_ls150"};
    magazineWell[] = {"ls_magwell_ls150"};

    selectionFireAnim = "zasleh";
    drySound[] = {QPATHTOEF(sounds,weapons\dry\z6.wss), 2, 1, 20};
    reloadMagazineSound[] = {QPATHTOEF(sounds,weapons\reload\ls150.ogg), 1, 1, 30};

    ace_overheating_mrbs = 100000;
    ace_overheating_slowdownFactor = 1e-06;
    ace_overheating_allowSwapBarrel = 1;
    ace_overheating_dispersion = 0;

    magazineReloadSwitchPhase = 0.4;
    discreteDistanceInitIndex = 0;
    maxRecoilSway = 0.01;
    swayDecaySpeed = 0.2;
    inertia = 3;
    initSpeed = 800;

    fireLightDuration = 0.05;
    fireLightIntensity = 0.4;
    fireLightDiffuse[] = {0.01, 0.01, 0};
    fireLightAmbient[] = {0, 0, 0};

    opticsZoomMin = 0.25;
    opticsZoomMax = 1.25;
    opticsZoomInit = 0.75;
    distanceZoomMin = 300;
    distanceZoomMax = 300;

    aiDispersionCoefY = 6;
    aiDispersionCoefX = 4;

    modes[] = {
        "FullAuto",
        "close",
        "short",
        "medium",
        "manual",
        "far_optic1",
        "far_optic2"
    };
    muzzles[] = {"this"};
    class FullAuto: Mode_FullAuto {
        sounds[] = {"StandardSound"};
        class StandardSound {
            begin1[] = {QPATHTOEF(sounds,weapons\ls150\shot1.wss), 1, 1, 800};
            soundBegin[] = {"begin1", 1};
        };
        reloadTime = 0.05;
        dispersion = 0.01;
        minRange = 0;
        minRangeProbab = 0.9;
        midRange = 15;
        midRangeProbab = 0.7;
        maxRange = 30;
        maxRangeProbab = 0.1;
    };
    class close: FullAuto {
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
    class manual: FullAuto {
        dispersion = 0.00073;
        recoilProne = "recoil_single_prone_mx_sw";
        minRange = 0;
        minRangeProbab = 0.3;
        midRange = 5;
        midRangeProbab = 0.7;
        maxRange = 10;
        maxRangeProbab = 0.04;
        showToPlayer = 1;
    };
    class far_optic1: close {
        burst = 3;
        requiredOpticType = 1;
        aiRateOfFire = 5;
        aiRateOfFireDistance = 650;
        minRange = 300;
        minRangeProbab = 0.05;
        midRange = 500;
        midRangeProbab = 0.4;
        maxRange = 650;
        maxRangeProbab = 0.01;
    };
    class far_optic2: far_optic1 {
        burst = 3;
        requiredOpticType = 2;
        minRange = 400;
        minRangeProbab = 0.05;
        midRange = 750;
        midRangeProbab = 0.7;
        maxRange = 900;
        maxRangeProbab = 0.01;
        aiRateOfFire = 10;
        aiRateOfFireDistance = 900;
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

class ls_weapon_ls150: ls_weapon_ls150_base {
    scope = 2;
    author = AUTHOR;
    baseWeapon = "ls_weapon_ls150";
};
