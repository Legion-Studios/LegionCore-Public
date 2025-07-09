class ls_weapon_westar35s_base: ls_rifle_base {
    scope = 0;
    author = AUTHOR;
    displayName = "Westar-35S";

    model = QPATHTOF(westar35s\ls_weapon_westar35s.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(westar35s\data\camo1_co.paa)
    };
    picture = QPATHTOF(data\ui\westar35s_ui_ca.paa);

    handAnim[] = {
        "OFP2_ManSkeleton",
        "\A3\Weapons_F_epa\LongRangeRifles\DMR_01\Data\Anim\dmr_01.rtm"
    };
    reloadAction = "ls_reload_westar35s";

    magazines[] = {"ls_magazine_westar35s"};
    magazineWell[] = {"ls_magwell_westar35s"};

    selectionFireAnim = "zasleh";
    drySound[] = {QPATHTOEF(sounds,weapons\dry\westar.wss), 0.39810717, 1, 20};
    // TODO: Convert to WSS
    reloadMagazineSound[] = {
        QPATHTOEF(sounds,weapons\reload\westar35.ogg), 0.56234133, 1, 30
    };

    fireLightDuration = 0.05;
    fireLightIntensity = 0.4;
    fireLightDiffuse[] = {1, 1, 0};
    fireLightAmbient[] = {0, 0, 0};

    inertia = 1.4;
    dexterity = 1.7;
    initspeed = 800;
    recoil = "ls_recoil";
    maxRecoilSway = 0.0125;
    swayDecaySpeed = 1.25;

    modes[] = {"Single", "close", "short", "medium"};
    muzzles[] = {"this", "scatter"};
    class Single: Mode_SemiAuto {
        reloadTime = 0.15;
        dispersion = 0.003015;
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
            begin1[] = {
                QPATHTOEF(sounds,weapons\westar35s\shot1.wss), 1, 1, 1800
            };
            soundBegin[] = {"begin1", 1};
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

        // TODO: Convert to sound shader
        sounds[] = {"StandardSound", "SilencedSound"};
        class StandardSound {
            begin1[] = {
                QPATHTOEF(sounds,weapons\westar35s\shot1.wss), 1, 1, 1800
            };
            soundBegin[] = {"begin1", 1};
        };
        class SilencedSound {
            begin1[] = {
                QPATHTOEF(sounds,weapons\westar35s\shot1.wss), 0.5, 1, 600
            };
            soundBegin[] = {"begin1", 1};
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

    class scatter: ls_scatterMuzzle_base {
        magazines[] = {"ls_magazine_westar35s_scatter"};
        magazineWell[] = {
            "ls_magwell_scatterMuzzle",
            "ls_magwell_westar35s_scatter"
        };

        muzzleEnd = "shotgun pos";
        muzzlePos = "shotgun dir";
    };

    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 70;
        class CowsSlot: CowsSlot {
            class compatibleItems {
                ls_cows_westar35s_scope = 1;
            };
        };
        class MuzzleSlot: MuzzleSlot {
            class compatibleItems {
                ls_muzzle_westar35s_suppressor = 1;
            };
        };
    };
};

class ls_weapon_westar35s: ls_weapon_westar35s_base {
    scope = 2;
    author = AUTHOR;
    baseWeapon = "ls_weapon_westar35s";
};

class ls_weapon_westar35s_scoped: ls_weapon_westar35s {
    scope = 1;
    author = AUTHOR;
    class LinkedItems {
        class LinkedItemsOptic {
            slot = "CowsSlot";
            item = "ls_cows_westar35s_scope";
        };
    };
};

class ls_weapon_westar35s_suppressed: ls_weapon_westar35s {
    scope = 1;
    author = AUTHOR;
    class LinkedItems {
        class LinkedItemsMuzzle {
            slot = "MuzzleSlot";
            item = "ls_muzzle_westar35s_suppressor";
        };
    };
};

class ls_cows_westar35s_scope: ItemCore {
    scope = 2;
    author = AUTHOR;
    displayName = "Westar-35S Holosight";
    descriptionShort = "";

    model = QPATHTOF(westar35s\ls_cows_westar35s_scope.p3d);
    picture = QPATHTOF(data\ui\westar35s_scope_ui_ca.paa);

    inertia = 0;
    weaponInfoType = "RscWeaponZeroing";
    class ItemInfo: InventoryOpticsItem_Base_F {
        mass = 4;
        modelOptics = "\A3\Weapons_F\empty.p3d";
        optics = 1;
        class OpticsModes {
            class ACO {
                opticsID = 1;
                useModelOptics = 0;
                opticsZoomMin = 0.25;
                opticsZoomMax = 1.25;
                opticsZoomInit = 0.75;
                memoryPointCamera = "eye";
                opticsFlare = 0;
                opticsDisablePeripherialVision = 0;
                distanceZoomMin = 200;
                distanceZoomMax = 200;
                cameraDir = "";
                visionMode[] = {"Normal"};
                opticsPPEffects[] = {"Default"};
            };
        };
    };
};

class ls_muzzle_westar35s_suppressor: ItemCore {
    scope = 2;
    author = AUTHOR;
    displayName = "Westar-35S Flash Suppressor";

    model = QPATHTOF(westar35s\ls_muzzle_westar35s_suppressor.p3d);
    picture = QPATHTOF(data\ui\westar35s_suppressor_ui_ca.paa);

    class ItemInfo: InventoryMuzzleItem_Base_F {
        mass = 8;
        muzzleEnd = "zaslehPoint";
        alternativeFire = "Zasleh2";
        soundTypeIndex = 0; // Use a gun's StandardSound

        class AmmoCoef {
            airFriction = 1;
            audibleFire = 1;
            audibleFireTime = 1;
            cost = 1;
            hit = 1;
            typicalSpeed = 1;
            visibleFire = 0.5;
            visibleFireTime = 0.5;
        };

        class MagazineCoef {
            initSpeed = 1;
        };

        class MuzzleCoef {
            artilleryDispersionCoef = "1.0f";
            dispersionCoef = "0.9f";
            fireLightCoef = "0.5f";
            maxRangeCoef = "1.0f";
            maxRangeProbabCoef = "1.0f";
            midRangeCoef = "1.0f";
            midRangeProbabCoef = "1.0f";
            minRangeCoef = "1.0f";
            minRangeProbabCoef = "1.0f";
            recoilCoef = "1.0f";
            recoilProneCoef = "1.0f";
        };
    };
};
