class ls_weapon_mercenarySniper_base: ls_rifle_base {
    scope = 0;
    author = AUTHOR;
    displayName = "Mercenary Sniper Rifle";

    model = QPATHTOF(sniper\ls_weapon_mercenarySniper.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(sniper\data\camo1_co.paa)
    };
    picture = QPATHTOF(data\ui\sniper_ui_ca.paa);

    handAnim[] = {
        "OFP2_ManSkeleton",
        QPATHTOEF(weapons_dcseries,dc15x\anims\dc15x_handanim.rtm)
    };
    reloadAction = "ReloadMagazine";

    magazines[] = {
        "ls_magazine_mercenarySniper"
    };
    magazineWell[] = {"ls_magwell_mercenarySniper"};

    selectionFireAnim = "zasleh";
    drySound[] = {QPATHTOEF(sounds,weapons\dry\generic.wss), 0.39810717, 1, 20};
    reloadMagazineSound[] = {QPATHTOEF(sounds,weapons\reload\dc17.wss), 0.56234133, 1, 30};

    fireLightDuration = 0.05;
    fireLightIntensity = 0.4;
    fireLightDiffuse[] = {0, 0, 0.01};
    fireLightAmbient[] = {0, 0, 0};
    maxRecoilSway = 0.0125;
    recoil = "ls_recoil";
    swayDecaySpeed = 1.25;
    dexterity = 1.7;
    initspeed = 800;
    inertia = 1.4;

    modes[] = {
        "Single",
        "close",
        "short",
        "medium"
    };

    class Single: Mode_SemiAuto {
        // TODO: Convert to sound shader
        sounds[] = {"StandardSound"};
        class StandardSound {
            weaponSoundEffect = "";
            begin1[] = {QPATHTOEF(sounds,weapons\mercenarySniper\shot1.wss), 1, 1, 1800};
            soundBegin[] = {"begin1", 1};
        };
        reloadTime = 0.1;
        dispersion = 0.00058;
        initSpeed = 940;
        recoil = "recoil_single_ebr";
        recoilProne = "recoil_single_prone_ebr";
        minRange = 2;
        minRangeProbab = 0.3;
        midRange = 350;
        midRangeProbab = 0.7;
        maxRange = 500;
        maxRangeProbab = 0.05;
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
        mass = 130;
        class CowsSlot: CowsSlot {
            class compatibleItems {
                ls_cows_mercenarySniper_scope = 1;
            };
        };
    };
};

class ls_weapon_mercenarySniper: ls_weapon_mercenarySniper_base {
    scope = 2;
    author = AUTHOR;
    baseWeapon = "ls_weapon_mercenarySniper";
};

class ls_weapon_mercenarySniper_scoped: ls_weapon_mercenarySniper {
    scope = 1;
    author = AUTHOR;
    class LinkedItems {
        class LinkedItemsOptic {
            slot = "CowsSlot";
            item = "ls_cows_mercenarySniper_scope";
        };
    };
};

class ls_cows_mercenarySniper_scope: ItemCore {
    scope = 2;
    author = AUTHOR;
    displayName = "Mercenary Sniper Scope";
    descriptionShort = "Mercenary Sniper Scope";

    model = QPATHTOF(sniper\ls_cows_mercenarySniper_scope.p3d);
    picture = QPATHTOF(data\ui\sniper_scope_ui_ca.paa);
    weaponInfoType = "RscWeaponZeroing";

    GVAR(adsSounds)[] = {
        {QGVAR(sniperRifle_zoomIn01), QGVAR(sniperRifle_zoomIn02)},
        QGVAR(sniperRifle_zoomOut01)
    };

    class ItemInfo: InventoryOpticsItem_Base_F {
        mass = 8;
        opticType = 1;
        optics = 1;
        modelOptics = QPATHTOEF(weapons_westar,westarM5\ls_optic_westarM5.p3d);
        class OpticsModes {
            class Scope {
                opticsID = 1;
                useModelOptics = 1;
                opticsPPEffects[] = {
                    "OpticsCHAbera5",
                    "OpticsBlur5"
                };
                opticsDisablePeripherialVision = 0.67;
                ///optics magnification = opticsZoomInit/OpticsZoom(Min or Max)
                opticsZoomMin = 0.01;
                opticsZoomMax = 0.042;
                opticsZoomInit = 0.042;
                discretefov[] = {0.042, 0.01};
                discreteInitIndex = 0;
                discreteDistance[] = {
                    100, 200,
                    300, 400,
                    500, 600,
                    700, 800,
                    900, 1000,
                    1100, 1200
                };
                discreteDistanceInitIndex = 0;
                memoryPointCamera = "opticView";
                visionMode[] = {
                    "Normal",
                    "NVG",
                    "TI"
                };
                thermalMode[] = {0, 1};
                opticsFlare = "true";
                distanceZoomMin = 300;
                distanceZoomMax = 1200;
                cameraDir = "";
            };
        };
    };
};
