class ls_weapon_dc15br_base: ls_rifle_base {
    scope = 0;
    author = AUTHOR;
    displayname = "DC-15BR Blaster Rifle";

    model = QPATHTOF(dc15br\ls_weapon_dc15br.p3d);
    hiddenSelections[] = {
        "camo1",
        "optic",
        "ammo_counter",
        "sight"
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(dc15br\data\camo1_co.paa),
        QPATHTOF(data\optic_ca.paa),
        QPATHTOF(data\optic_ca.paa),
        QPATHTOF(dc15br\data\training_blue.paa)
    };
    picture = QPATHTOF(data\ui\dc15a_ui_ca.paa);

    handAnim[] = {
        "OFP2_ManSkeleton",
        QPATHTOF(dc15a\anims\dc15a_handanim.rtm)
    };
    reloadAction = "ReloadMagazine";

    magazines[] = {
        "ls_magazine_dc15br"
    };
    magazineWell[] = {
        "ls_magwell_dc15br",
        "ls_magwell_stun",
        "ls_magwell_ion"
    };

    selectionFireAnim = "zasleh";
    drySound[] = {QPATHTOEF(sounds,weapons\dry\generic.wss), 0.39810717, 1, 20};
    reloadMagazineSound[] = {QPATHTOEF(sounds,weapons\reload\dc15a_reload.wss), 0.56234133, 1, 30};

    fireLightDuration = 0.05;
    fireLightIntensity = 0.40;
    fireLightDiffuse[] = {0, 0, 0.01};
    fireLightAmbient[] = {0, 0, 0};

    maxRecoilSway = 0.025;
    recoil = "recoil_EBR";
    swayDecaySpeed = 1.25;
    dexterity = 1.7;
    initspeed = 800;
    modelOptics[] = {
        "\A3\Weapons_F_EPA\acc\reticle_marksman_F.p3d",
        "\A3\Weapons_F_EPA\acc\reticle_marksman_z_F.p3d"
    };

    modes[] = {
        "Single",
        "burst",
        "close",
        "short",
        "medium"
    };
    muzzles[] = {"this"};

    class Single: Mode_SemiAuto {
        reloadTime = 0.1714285714;
        dispersion = 0.00045;
        minRange = 5;
        minRangeProbab = 0.3;
        midRange = 25;
        midRangeProbab = 0.6;
        maxRange = 50;
        maxRangeProbab = 0.1;
        aiRateOfFire = 2;
        aiRateOfFireDistance = 25;

        // TODO: Convert to sound shader
        sounds[] = {"StandardSound"};
        class StandardSound {
            soundSetShot[] = {"ls_dc15a_Shot_SoundSet", "ls_mediumBlaster_Tail_SoundSet"};
        };
    };
    class Burst: Mode_Burst {
        burst = 2;
        reloadTime = 0.05;
        dispersion = 0.003149999;
        minRange = 5;
        minRangeProbab = 0.30000001;
        midRange = 25;
        midRangeProbab = 0.60000002;
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
        minRangeProbab = 0.050000001;
        midRange = 200;
        midRangeProbab = 0.69999999;
        maxRange = 400;
        maxRangeProbab = 0.2;
    };
    class short: close {
        aiRateOfFire = 0.5;
        aiRateOfFireDistance = 500;
        minRange = 300;
        minRangeProbab = 0.2;
        midRange = 400;
        midRangeProbab = 0.69999999;
        maxRange = 500;
        maxRangeProbab = 0.2;
    };
    class medium: close {
        aiRateOfFire = 1;
        aiRateOfFireDistance = 900;
        minRange = 400;
        minRangeProbab = 0.2;
        midRange = 700;
        midRangeProbab = 0.69999999;
        maxRange = 900;
        maxRangeProbab = 0.2;
    };

    class OpticsModes {
        class sight {
            opticsID = 2;
            useModelOptics = 0;
            opticsPPEffects[] = {
                "OpticsCHAbera5",
                "OpticsBlur5"
            };
            opticsDisablePeripherialVision = 0.67000002;
            opticsZoomMin = 0.375;
            opticsZoomMax = 1.1;
            opticsZoomInit = 0.75;
            discreteInitIndex = 0;
            distanceZoomMin = 100;
            distanceZoomMax = 700;
            discreteDistance[] = {100, 200, 300, 400, 500, 600, 700};
            discreteDistanceInitIndex = 0;
            memoryPointCamera = "eye";
            visionMode[] = {};
            opticsFlare = "true";
            cameraDir = "";
        };
        class scope: sight {
            opticsID = 1;
            useModelOptics = 1;
            opticsPPEffects[] = {
                "OpticsCHAbera2",
                "OpticsBlur3"
            };
            opticsZoomMin = 0.0625;
            opticsZoomMax = 0.125;
            opticsZoomInit = 0.125;
            memoryPointCamera = "optic_view";
            opticsFlare = 1;
            opticsDisablePeripherialVision = 1;
            visionMode[] = {"Normal", "NVG", "Ti"};
            thermalMode[] = {0, 1};
            discretefov[] = {0.125, 0.0625};
            discreteInitIndex = 0;
            discreteDistanceInitIndex = 0;
            discreteDistance[] = {100};
            distanceZoomMin = 300;
            distanceZoomMax = 1200;
            modelOptics[] = {"\A3\Weapons_F_EPA\acc\reticle_marksman_F.p3d", "\A3\Weapons_F_EPA\acc\reticle_marksman_z_F.p3d"};
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
        class Attenuation {
            start = 0;
            constant = 0.5;
            linear = 0.1;
            quadratic = 0.2;
            hardLimitStart = 27;
            hardLimitEnd = 34;
        };
        scale[] = {0};
    };

    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 130;
        class CowsSlot: CowsSlot {
            class compatibleItems {};
        };
    };
};

class ls_weapon_dc15br: ls_weapon_dc15br_base {
    scope = 2;
    author = AUTHOR;
    baseWeapon = "ls_weapon_dc15br";
};

class ls_weapon_dc15br_wooden: ls_weapon_dc15br_base {
    scope = 2;
    author = AUTHOR;
    displayName = "DC-15BR (Wooden Stock)";
    baseWeapon = "ls_weapon_dc15br_wooden";

    hiddenSelectionsTextures[] = {
        QPATHTOF(dc15br\data\camo1_wooden_co.paa),
        QPATHTOF(data\optic_ca.paa),
        QPATHTOF(data\optic_ca.paa),
        QPATHTOF(dc15br\data\training_blue.paa)
    };
};
