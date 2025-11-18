class ls_weapon_dc15a_base: ls_rifle_base {
    scope = 0;
    author = AUTHOR;
    displayName = "DC-15A Blaster Rifle";

    model = QPATHTOF(dc15a\ls_weapon_dc15a.p3d);
    hiddenSelections[] = {
        "camo1",
        "stock",
        "reticle"
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(dc15a\data\camo1_co.paa),
        QPATHTOF(dc15a\data\camo1_co.paa),
        QPATHTOF(data\optic_ca.paa)
    };
    picture = QPATHTOF(data\ui\dc15a_ui_ca.paa);

    handAnim[] = {
        "OFP2_ManSkeleton",
        QPATHTOF(dc15a\anims\dc15a_handanim.rtm)
    };
    reloadAction = "ReloadMagazine";

    // TODO: Move stun/ion to separate muzzle?
    magazines[] = {"ls_magazine_dc15a"};
    magazineWell[] = {"ls_magwell_dc15a", "ls_magwell_stun", "ls_magwell_ion"};

    selectionFireAnim = "zasleh";
    drySound[] = {QPATHTOEF(sounds,weapons\dry\generic.wss), 0.39810717, 1, 20};
    reloadMagazineSound[] = {QPATHTOEF(sounds,weapons\reload\dc15a_reload.wss), 0.56234133, 1, 30};

    fireLightDuration = 0.05;
    fireLightIntensity = 0.4;
    fireLightDiffuse[] = {0, 0, 0.01};
    fireLightAmbient[] = {0, 0, 0};

    maxRecoilSway = 0.0125;
    recoil = "recoil_EBR";
    swayDecaySpeed = 1.25;
    dexterity = 1.7;
    initSpeed = -1;
    inertia = 0.6;

    muzzles[] = {"this"};
    modes[] = {"Single", "Burst", "close", "short", "medium"};
    class Single: Mode_SemiAuto {
        reloadTime = 0.2;
        dispersion = 0.0003;
        minRange = 5;
        minRangeProbab = 0.3;
        midRange = 25;
        midRangeProbab = 0.6;
        maxRange = 50;
        maxRangeProbab = 0.1;
        aiRateOfFire = 2;
        aiRateOfFireDistance = 25;

        sounds[] = {"StandardSound"};
        class StandardSound {
            soundSetShot[] = {"ls_dc15a_Shot_SoundSet", "ls_mediumBlaster_Tail_SoundSet"};
        };
    };
    class Burst: Mode_Burst {
        reloadTime = 0.08;
        dispersion = 0.0014545;
        minRange = 5;
        minRangeProbab = 0.3;
        midRange = 25;
        midRangeProbab = 0.6;
        maxRange = 50;
        maxRangeProbab = 0.1;
        aiRateOfFire = 2;
        aiRateOfFireDistance = 25;
        burst = 3;

        sounds[] = {"StandardSound"};
        class StandardSound {
            soundSetShot[] = {"ls_dc15a_Shot_SoundSet", "ls_mediumBlaster_Tail_SoundSet"};
        };
    };
    class FullAuto: Mode_FullAuto {
        reloadTime = 0.22;
        dispersion = 0.0014545;
        minRange = 5;
        minRangeProbab = 0.3;
        midRange = 25;
        midRangeProbab = 0.6;
        maxRange = 50;
        maxRangeProbab = 0.1;
        aiRateOfFire = 2;
        aiRateOfFireDistance = 25;

        sounds[] = {"StandardSound"};
        class StandardSound {
            soundSetShot[] = {"ls_dc15a_Shot_SoundSet", "ls_mediumBlaster_Tail_SoundSet"};
        };
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

    class OpticsModes {
        class sight {
            opticsID = 1;
            useModelOptics = 1;
            opticsPPEffects[] = {""};
            opticsDisablePeripherialVision = 0;
            opticsZoomMin = 0.25;
            opticsZoomMax = 0.5;
            opticsZoomInit = 0.75;
            discreteInitIndex = 0;
            distanceZoomMin = 200;
            distanceZoomMax = 200;
            memoryPointCamera = "eye";
            visionMode[] = {"Normal"};
            opticsFlare = "false";
            cameraDir = "";
        };

        class scope: sight {
            opticsID = 2;
            opticsZoomMin = 0.125;
            opticsZoomMax = 0.125;
            opticsZoomInit = 0.125;
            distanceZoomMin = 300;
            distanceZoomMax = 300;
        };
    };

    class FlashLight {
        color[] = {180, 160, 130};
        ambient[] = {0.9, 0.8, 0.7};
        intensity = 100;
        size = 1;
        innerAngle = 5;
        outerAngle = 100;
        coneFadeCoef = 10;
        position = "flash dir";
        direction = "flash";
        useFlare = 1;
        flareSize = 1.5;
        flareMaxDistance = 100;
        dayLight = 1;
        scale[] = {0};

        class Attenuation {
            start = 0;
            constant = 0.5;
            linear = 0.1;
            quadratic = 0.2;
            hardLimitStart = 27;
            hardLimitEnd = 34;
        };
    };

    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 130;
        class CowsSlot: ls_dcSeries_CowsSlot {
            class compatibleItems: compatibleItems {};
        };
        class MuzzleSlot: ls_dcSeries_MuzzleSlot {
            class compatibleItems: compatibleItems {};
        };
        class PointerSlot: ls_dcSeries_PointerSlot {
            class compatibleItems: compatibleItems {};
        };
        class UnderBarrelSlot: ls_dcSeries_UnderBarrelSlot {
            class compatibleItems: compatibleItems {
                bipod_01_F_blk = 1;
                bipod_02_F_blk = 1;
                bipod_03_F_blk = 1;
            };
        };
    };
};

class ls_weapon_dc15a: ls_weapon_dc15a_base {
    scope = 2;
    author = AUTHOR;
    baseWeapon = "ls_weapon_dc15a";
};

class ls_weapon_dc15a_wooden: ls_weapon_dc15a_base {
    scope = 2;
    author = AUTHOR;
    baseWeapon = "ls_weapon_dc15a_wooden";

    displayName = "DC-15A Blaster Rifle (Wooden Stock)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(dc15a\data\camo1_co.paa),
        QPATHTOF(dc15a\data\camo1_wooden_co.paa),
        QPATHTOF(data\optic_ca.paa)
    };
    hiddenSelectionsMaterials[] = {
        "",
        QPATHTOF(dc15a\data\camo1_wooden.rvmat)
    };
    picture = QPATHTOF(data\ui\dc15a_wooden_ui_ca.paa);
};
