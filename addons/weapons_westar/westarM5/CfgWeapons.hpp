class ls_weapon_westarM5_base: ls_rifle_base {
    scope = 0;
    author = AUTHOR;
    displayname = "Westar-M5";

    model = QPATHTOF(westarM5\ls_weapon_westarM5.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(westarM5\data\camo1_co.paa)
    };
    picture = QPATHTOF(data\ui\westarM5_ui_ca.paa);

    handAnim[] = {
        "OFP2_ManSkeleton",
        QPATHTOF(westarM5\anims\westarM5_handanim.rtm)
    };
    reloadAction = "ReloadMagazine";

    magazines[] = {"ls_magazine_westarM5"};
    magazineWell[] = {"ls_magwell_westarM5"};

    selectionFireAnim = "zasleh";
    drySound[] = {QPATHTOEF(sounds,weapons\dry\westar.wss), 0.39810717, 1, 20};
    reloadMagazineSound[] = {QPATHTOEF(sounds,weapons\reload\dc17.wss), 0.56234133, 1, 30};

    fireLightDuration = 0.05;
    fireLightIntensity = 0.4;
    fireLightDiffuse[] = {0, 0, 0.01};
    fireLightAmbient[] = {0, 0, 0};

    recoil = "ls_recoil";
    dexterity = 1.7;
    initSpeed = 400;
    inertia = 0.3;

    modes[] = {"Single", "FullAuto", "close", "short", "medium"};
    muzzles[] = {"this"};
    class Single: Mode_SemiAuto {
        reloadTime = 0.15;
        dispersion = 0.002;
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
            soundSetShot[] = {"ls_westarM5_Shot_SoundSet", "ls_mediumBlaster_Tail_SoundSet"};
        };
    };
    class FullAuto: Mode_FullAuto {
        reloadTime = 0.15;
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
            soundSetShot[] = {"ls_westarM5_Shot_SoundSet", "ls_mediumBlaster_Tail_SoundSet"};
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
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 80;
        class CowsSlot: CowsSlot {
            class compatibleItems {
                ls_cows_westarM5_scope = 1;
            };
        };
    };
};

class ls_weapon_westarM5: ls_weapon_westarM5_base {
    scope = 2;
    author = AUTHOR;
    baseWeapon = "ls_weapon_westarM5";
};

class ls_weapon_westarM5_scoped: ls_weapon_westarM5 {
    scope = 1;
    author = AUTHOR;
    class LinkedItems {
        class LinkedItemsOptic {
            slot = "CowsSlot";
            item = "ls_cows_westarM5_scope";
        };
    };
};

class ls_weapon_westarM5_ugl: ls_weapon_westarM5_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Westar-M5 UGL";

    model = QPATHTOF(westarM5\ls_weapon_westarM5_ugl.p3d);
    handAnim[] = {
        "OFP2_ManSkeleton",
        QPATHTOF(westarM5\anims\westarM5_ugl_handanim.rtm)
    };

    muzzles[] = {"this", "UGL"};
    class UGL: UGL_F {
        displayName = "Underbarrel Grenade Launcher";
        magazines[] = {"ls_magazine_3Rnd_40mw_G76_HEF"};
        magazineWell[] = {
            "ls_magwell_ugl",
            "ls_magwell_westarM5_ugl"
        };

        useModelOptics = 0;
        useExternalOptics = 0;
        initSpeed = 75;
        cameraDir = "OP_look";
        discreteDistance[] = {100};
        discreteDistanceInitIndex = 1;
        discreteDistanceCameraPoint[] = {"OP_eye"};

        class Single: Single {
            class StandardSound {
                soundSetShot[] = {"ls_ugl_shot_SoundSet"};
            };
        };
    };
};

class ls_weapon_westarM5_ugl_scoped: ls_weapon_westarM5_ugl {
    scope = 1;
    author = AUTHOR;
    class LinkedItems {
        class LinkedItemsOptic {
            slot = "CowsSlot";
            item = "ls_cows_westarM5_scope";
        };
    };
};

class ls_cows_westarM5_scope: ItemCore {
    scope = 2;
    author = AUTHOR;
    displayName = "Westar-M5 Scope";
    descriptionShort = "";

    model = QPATHTOF(westarM5\ls_cows_westarM5_scope.p3d);
    picture = QPATHTOF(data\ui\westarM5_scope_ui_ca.paa);

    inertia = 0.1;
    weaponInfoType = "RscWeaponZeroing";
    class ItemInfo: InventoryOpticsItem_Base_F {
        mass = 8;
        opticType = 1;
        optics = 1;
        modelOptics = QPATHTOF(westarM5\ls_optic_westarM5.p3d);
        class OpticsModes {
            class Sights {
                opticsID = 1;
                useModelOptics = 0;
                opticsPPEffects[] = {"Default"};
                opticsFlare = 0;
                opticsDisablePeripherialVision = 0;
                opticsZoomMin = 0.25;
                opticsZoomMax = 1.25;
                opticsZoomInit = 0.75;
                memoryPointCamera = "eye";
                distanceZoomMin = 200;
                distanceZoomMax = 200;
                cameraDir = "";
                visionMode[] = {"Normal"};
            };
            class Scope: Sights {
                opticsID = 2;
                useModelOptics = 1;
                opticsPPEffects[] = {"OpticsCHAbera5", "OpticsBlur5"};
                opticsZoomMin = 0.125;
                opticsZoomMax = 0.125;
                opticsZoomInit = 0.125;
                memoryPointCamera = "opticView";
                opticsFlare = 1;
                opticsDisablePeripherialVision = 1;
                distanceZoomMin = 300;
                distanceZoomMax = 300;
            };
        };
    };
};
