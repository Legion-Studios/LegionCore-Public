class Mode_SemiAuto;
class Mode_FullAuto;

class CfgWeapons {
    class Rifle_Long_Base_F;
    class ls_rifle_base: Rifle_Long_Base_F {
        class WeaponSlotsInfo {
            class CowsSlot;
            // class MuzzleSlot;
            class PointerSlot;
            // class UnderBarrelSlot;
        };
    };
    class ls_weapon_zh73_base: ls_rifle_base {
        scope = 0;
        displayName = "ZH-73 Mk-I";

        model = QPATHTOF(ls_weapon_zh73.p3d);
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\camo1_co.paa)
        };
        picture = QPATHTOF(data\ui\zh73_ui_ca.paa);

        handAnim[] = {
            "OFP2_ManSkeleton",
            "\A3\Weapons_F_epa\LongRangeRifles\DMR_01\Data\Anim\dmr_01.rtm"
        };
        reloadAction = "ReloadMagazine";

        magazines[] = {"ls_magazine_zh73"};
        magazineWell[] = {"ls_magwell_zh73"};

        selectionFireAnim = "zasleh";
        drySound[] = {QPATHTOEF(sounds,weapons\dry\generic.wss), 0.39810717, 1, 20};
        reloadMagazineSound[] = {QPATHTOEF(sounds,weapons\reload\dc17.wss), 0.56234133, 1, 30};

        fireLightDuration = 0.05;
        fireLightIntensity = 0.2;
        fireLightDiffuse[] = {0.1, 0.1, 0};
        fireLightAmbient[] = {0, 0, 0};

        inertia = 0.3;
        dexterity = 1.7;
        initSpeed = 400;

        muzzles[] = {"this"};
        modes[] = {"Single", "FullAuto", "close", "short", "medium"};

        class Single: Mode_SemiAuto {
            sounds[] = {"StandardSound"};
            class StandardSound {
                weaponSoundEffect = "";
                begin1[] = {QPATHTOEF(sounds,weapons\zh73\shot1.wss), 1, 1, 1800};
                soundBegin[] = {"begin1", 1};
            };
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
        };
        class FullAuto: Mode_FullAuto {
            sounds[] = {"StandardSound"};
            class StandardSound {
                weaponSoundEffect = "";
                begin1[] = {
                    QPATHTOEF(sounds,weapons\zh73\shot1.wss), 1, 1, 2000
                };
                soundBegin[] = {"begin1", 1};
            };
            reloadTime = 0.13;
            dispersion = 0.0014545;
            minRange = 5;
            minRangeProbab = 0.3;
            midRange = 25;
            midRangeProbab = 0.6;
            maxRange = 50;
            maxRangeProbab = 0.1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 25;
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
            mass=80;
            class CowsSlot: CowsSlot {
                class compatibleItems {
                    ls_cows_zh73_scope = 1;
                };
            };
            class PointerSlot: PointerSlot {
                class compatibleItems {
                    acc_flashlight = 1;
                    acc_pointer_IR = 1;
                };
            };
        };
    };

    class ls_weapon_zh73: ls_weapon_zh73_base {
        scope = 2;
        author = AUTHOR;
        baseWeapon = "ls_weapon_zh73";
    };

    class ls_weapon_zh73_scoped: ls_weapon_zh73 {
        scope = 1;
        author = AUTHOR;
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = "ls_cows_zh73_scope";
            };
        };
    };

    class ItemCore;
    class InventoryOpticsItem_Base_F;
    class ls_cows_zh73_scope: ItemCore {
        scope = 2;
        displayName = "ZH-73 Mk-I Scope";
        author = AUTHOR;
        picture = QPATHTOF(data\ui\ZH73_scope_ui_ca.paa);
        model = QPATHTOF(ls_cows_zh73_scope.p3d);
        weaponInfoType="RscWeaponZeroing";
        class ItemInfo: InventoryOpticsItem_Base_F {
            mass = 8;
            opticType = 1;
            optics = 1;
            modelOptics = "\A3\Weapons_F_Mark\Acc\reticle_acco_khs_F.p3d";
            class OpticsModes {
                class Scope {
                    opticsID = 1;
                    useModelOptics = 1;
                    opticsPPEffects[] = {
                        "OpticsCHAbera2",
                        "OpticsBlur3"
                    };
                    opticsZoomMin = 0.0625;
                    opticsZoomMax = 0.125;
                    opticsZoomInit = 0.125;
                    discreteDistance[] = {
                        100, 200,
                        300, 400,
                        500, 600,
                        700, 800,
                        900, 1000,
                        1100, 1200
                    };
                    discreteDistanceInitIndex = 1;
                    distanceZoomMin = 300;
                    distanceZoomMax = 1200;
                    discretefov[] = {0.125, 0.0625};
                    discreteInitIndex = 0;
                    memoryPointCamera = "opticView";
                    visionMode[] = {
                        "Normal",
                        "NVG",
                        "TI"
                    };
                    thermalMode[] = {0, 1};
                    opticsFlare = 1;
                    opticsDisablePeripherialVision = 1;
                    cameraDir = "";
                };
                class Ironsight: Scope {
                    opticsID = 2;
                    useModelOptics = 0;
                    opticsPPEffects[] = {
                        "",
                        ""
                    };
                    opticsFlare = 0;
                    opticsDisablePeripherialVision = 0;
                    opticsZoomMin = 0.25;
                    opticsZoomMax = 1.25;
                    opticsZoomInit = 0.75;
                    memoryPointCamera = "eye";
                    visionMode[] = {"Normal"};
                    discretefov[] = {};
                    distanceZoomMin = 200;
                    distanceZoomMax = 200;
                    discreteDistance[] = {200};
                    discreteDistanceInitIndex = 0;
                };
            };
        };
        inertia = 0.1;
    };

    // Needed for WebKnight droids
    DEPRECATED(SWLW_ZH73,ls_weapon_zh73);
};
