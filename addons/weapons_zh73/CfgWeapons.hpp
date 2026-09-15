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
        author = AUTHOR;
        displayName = CSTRING(mk1_displayName);
        descriptionShort = ECSTRING(weapons,blasterRifle);
        baseWeapon = "ls_weapon_zh73";

        model = QPATHTOF(ls_weapon_zh73.p3d);
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\camo1_co.paa)};
        picture = QPATHTOF(data\ui\zh73_ui_ca.paa);

        handAnim[] = {"OFP2_ManSkeleton", "\A3\Weapons_F_epa\LongRangeRifles\DMR_01\Data\Anim\dmr_01.rtm"};
        reloadAction = "GestureReloadSPAR_01";

        magazines[] = {"ls_magazine_zh73"};
        magazineWell[] = {"ls_magwell_zh73"};

        drySound[] = {QPATHTOEF(sounds,weapons\dry\generic.wss), 0.39810717, 1, 20};
        reloadMagazineSound[] = {QPATHTOEF(sounds,weapons\dc17s\reload.wss), 0.56234133, 1, 30};
        changeFireModeSound[] = {"\A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR01\SPAR01_firemode.wss", 0.177828, 1, 5};

        fireLightDiffuse[] = {FIRELIGHT_RED};

        aimTransitionSpeed = 1.1;
        inertia = 0.5;
        dexterity = 1.5;
        initSpeed = -0.869636;
        recoil = "recoil_spar";

        muzzles[] = {"this"};
        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_medium_optics2", "fullauto_medium"};
        class Single: Mode_SemiAuto {
            reloadTime = RPM(400);
            dispersion = 0.003015;
            maxRange = 250;
            maxRangeProbab = 0.2;
            midRange = 150;
            midRangeProbab = 0.7;
            minRange = 2;
            minRangeProbab = 0.5;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 25;

            sounds[] = {"StandardSound"};
            class StandardSound {
                soundSetShot[] = {"ls_zh73_Shot_SoundSet", "ls_mediumBlaster_Tail_SoundSet"};
            };
        };
        class FullAuto: Mode_FullAuto {
            reloadTime = RPM(400);
            dispersion = 0.003015;
            maxRange = 30;
            maxRangeProbab = 0.05;
            midRange = 15;
            midRangeProbab = 0.7;
            minRange = 2;
            minRangeProbab = 0.9;
            aiRateOfFire = 1e-06;

            sounds[] = {"StandardSound"};
            class StandardSound {
                soundSetShot[] = {"ls_zh73_Shot_SoundSet", "ls_mediumBlaster_Tail_SoundSet"};
            };
        };
        class single_medium_optics1: Single {
            showToPlayer = 0;
            requiredOpticType = 1;

            maxRange = 450;
            maxRangeProbab = 0.3;
            midRange = 300;
            midRangeProbab = 0.7;
            minRange = 5;
            minRangeProbab = 0.2;
            aiRateOfFire = 5;
            aiRateOfFireDistance = 500;
        };
        class single_medium_optics2: single_medium_optics1 {
            requiredOpticType = 2;
            maxRange = 600;
            maxRangeProbab = 0.05;
            midRange = 400;
            midRangeProbab = 0.7;
            minRange = 100;
            minRangeProbab = 0.1;
            aiRateOfFire = 6;
            aiRateOfFireDistance = 600;
        };
        class fullauto_medium: FullAuto {
            showToPlayer = 0;
            burst = "2 + round random 3";
            maxRange = 100;
            maxRangeProbab = 0.05;
            midRange = 75;
            midRangeProbab = 0.7;
            minRange = 2;
            minRangeProbab = 0.5;
            aiRateOfFire = 2;
        };

        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 70;
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
        author = AUTHOR;
        displayName = CSTRING(mk1_optic_scope_displayName);
        descriptionShort = CSTRING(mk1_optic_scope_descriptionShort);

        model = QPATHTOF(ls_cows_zh73_scope.p3d);
        picture = QPATHTOF(data\ui\ZH73_scope_ui_ca.paa);

        weaponInfoType = "RscWeaponZeroing";
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
                    opticsPPEffects[] = {"", ""};
                    opticsFlare = 0;
                    opticsDisablePeripherialVision = 0;
                    opticsZoomMin = 0.25;
                    opticsZoomMax = 1.25;
                    opticsZoomInit = 0.75;
                    memoryPointCamera = "eye";
                    visionMode[] = {};
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
