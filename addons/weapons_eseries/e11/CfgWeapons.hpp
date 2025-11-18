class ls_weapon_e11_base: ls_rifle_base {
    scope = 0;
    author = AUTHOR;
    displayName = "E-11 Blaster Rifle";

    model = QPATHTOF(e11\ls_weapon_e11.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(e11\data\camo1_co.paa)
    };
    picture = QPATHTOF(data\ui\e11_ui_ca.paa);

    handAnim[] = {
        "OFP2_ManSkeleton",
        "\A3\Weapons_F\Rifles\MX\data\Anim\MX_cqc.rtm"
    };
    reloadAction = "GestureReloadMX";

    magazines[] = {
        "ls_magazine_e11"
    };
    magazineWell[] = {
        "ls_magwell_e11",
        "ls_magwell_stun",
        "ls_magwell_ion"
    };

    selectionFireAnim = "zasleh";

    drySound[] = {QPATHTOEF(sounds,weapons\dry\e11.wss), 0.39810717, 1, 20};
    reloadMagazineSound[] = {
        QPATHTOEF(sounds,weapons\e11\reload.wss), 0.56234133, 1, 30
    };
    modes[] = {"Single", "FullAuto", "fullauto_medium"};
    dispersion = 0.01;
    ace_overheating_mrbs = 100000;
    ace_overheating_slowdownFactor = 1e-06;
    ace_overheating_allowSwapBarrel = 0;
    ace_overheating_dispersion = 0.2;
    ace_overheating_closedBolt = 0;
    recoil = "recoil_EBR";

    class Single: Mode_SemiAuto {
        reloadTime = 0.096;
        dispersion = 0.01;

        minRange = 2;
        minRangeProbab = 0.5;
        midRange = 200;
        midRangeProbab = 0.7;
        maxRange = 400;
        maxRangeProbab = 0.3;

        sounds[] = {"StandardSound"};
        class StandardSound {
            soundSetShot[] = {"ls_e11_Shot_SoundSet", "ls_mediumBlaster_Tail_SoundSet"};
        };
    };

    class FullAuto: Mode_FullAuto {
        reloadTime = 0.096;
        dispersion = 1.0;

        minRange = 0;
        minRangeProbab = 0.9;
        midRange = 15;
        midRangeProbab = 0.7;
        maxRange = 30;
        maxRangeProbab = 0.1;

        aiRateOfFire = 0.000001;

        sounds[] = {"StandardSound"};
        class StandardSound {
            soundSetShot[] = {"ls_e11_Shot_SoundSet", "ls_mediumBlaster_Tail_SoundSet"};
        };
    };

    class fullauto_medium: FullAuto {
        showToPlayer = 0;
        burst = 3;

        minRange = 2;
        minRangeProbab = 0.5;
        midRange = 75;
        midRangeProbab = 0.7;
        maxRange = 150;
        maxRangeProbab = 0.05;

        aiRateOfFire = 2.0;
        aiRateOfFireDistance = 200;
    };

    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 80;
        class CowsSlot: CowsSlot {
            class compatibleItems {
                ls_cows_e11_optic = 1;
                ls_cows_e11_optic_thermal = 1;
            };
        };
        class MuzzleSlot: MuzzleSlot {
            class compatibleItems {
                ls_muzzle_e11_coils = 1;
                ls_muzzle_e11_fins = 1;
            };
        };
    };
};

class ls_weapon_e11: ls_weapon_e11_base {
    scope = 2;
    author = AUTHOR;
    displayName = "E-11 Blaster Rifle";
};

class ls_weapon_e11_scoped: ls_weapon_e11 {
    scope = 1;
    class LinkedItems {
        class LinkedItemsOptic {
            item = "ls_cows_e11_optic";
            slot = "CowsSlot";
        };

        class LinkedItemsMuzzle {
            item = "ls_muzzle_e11_coils";
            slot = "MuzzleSlot";
        };
    };
};

class ls_weapon_e11_scopedThermal: ls_weapon_e11 {
    scope = 1;
    class LinkedItems {
        class LinkedItemsOptic {
            item = "ls_cows_e11_optic_thermal";
            slot = "CowsSlot";
        };

        class LinkedItemsMuzzle {
            item = "ls_muzzle_e11_coils";
            slot = "MuzzleSlot";
        };
    };
};

class ls_cows_e11_optic: ItemCore {
    scope = 2;
    author = AUTHOR;
    displayName = "E-11 Optic";
    model = QPATHTOF(e11\ls_cows_e11_optic.p3d);
    picture = QPATHTOF(data\ui\e11_optic_ui_ca.paa);

    class ItemInfo: InventoryOpticsItem_Base_F {
        mass = 7;
        modelOptics = "\A3\Weapons_f\acc\reticle_nvs_F";
        class OpticsModes {
            class ESOptics {
                opticsID = 1;
                useModelOptics = 1;
                opticsPPEffects[] = {"OpticsCHAbera1", "OpticsBlur1"};
                opticsZoomMin = 0.0555;
                opticsZoomMax = 0.1300;
                opticsZoomInit= 0.1300;
                discreteDistance[] = {100, 300, 400, 500, 600, 700, 800, 900, 1000};
                discreteDistanceInitIndex = 1;
                distanceZoomMin = 100;
                distanceZoomMax = 1000;
                nFovLimit = 0.07;
                discreteFov[] = {0.1300, 0.0555};
                discreteInitIndex = 0;
                modelOptics[] = {"\A3\Weapons_F\acc\reticle_sniper_F", "\A3\Weapons_F\acc\reticle_sniper_z_F"};
                memoryPointCamera = "opticView";
                visionMode[] = {"Normal"};
                opticsFlare = 1;
                opticsDisablePeripherialVision = 1;
                cameraDir = "";
            };
        };
    };
};

class ls_cows_e11_optic_thermal: ls_cows_e11_optic {
    scope = 2;
    author = AUTHOR;
    displayName = "E-11 Thermal Optic";

    model = QPATHTOF(e11\ls_cows_e11_thermalOptic.p3d);
    picture = QPATHTOF(data\ui\e11_optic_thermal_ui_ca.paa);

    class ItemInfo: ItemInfo {
        class OpticsModes {
            class ESOpticsThrm {
                opticsID = 1;
                useModelOptics = 1;
                opticsPPEffects[] = {"OpticsCHAbera1", "OpticsBlur1"};
                opticsZoomMin = 0.0555;
                opticsZoomMax = 0.1300;
                opticsZoomInit= 0.1300;
                discreteDistance[] = {100, 300, 400, 500, 600, 700, 800, 900, 1000};
                discreteDistanceInitIndex = 1;
                distanceZoomMin = 100;
                distanceZoomMax = 1000;
                nFovLimit = 0.07;
                discreteFov[] = {0.1300, 0.0555};
                discreteInitIndex = 0;
                modelOptics[] = {"\A3\Weapons_F\acc\reticle_sniper_F", "\A3\Weapons_F\acc\reticle_sniper_z_F"};
                memoryPointCamera = "opticView";
                visionMode[] = {"Normal", "TI"};
                thermalMode[] = {5, 6};
                opticsFlare = 1;
                opticsDisablePeripherialVision = 1;
                cameraDir = "";
            };
        };
    };
};

class ls_muzzle_e11_coils: ItemCore {
    scope = 2;
    author = AUTHOR;
    displayName = "E-11 Cooling Coils";

    model = QPATHTOF(e11\ls_muzzle_e11_coils.p3d);
    picture = QPATHTOF(data\ui\e11_coils_ui_ca.paa);

    class ItemInfo: InventoryMuzzleItem_Base_F {
        mass = 5;
        muzzleEnd = "";
        alternativeFire = "";
        class MuzzleCoef {
            dispersionCoef = "0.01f";
            artilleryDispersionCoef = "1.0f";
            fireLightCoef = "1.0f";
            recoilCoef = "0.000000000000000000000000000000000001f";
            recoilProneCoef = "0.00000000001f";
            minRangeCoef = "1.0f";
            minRangeProbabCoef = "1.0f";
            midRangeCoef = "1.0f";
            midRangeProbabCoef = "1.0f";
            maxRangeCoef = "1.0f";
            maxRangeProbabCoef = "1.0f";
        };
    };
};

class ls_muzzle_e11_fins: ItemCore {
    scope = 2;
    author = AUTHOR;
    displayName = "E-11 Dispersion Fins";

    model = QPATHTOF(e11\ls_muzzle_e11_fins.p3d);
    picture = QPATHTOF(data\ui\e11_fins_ui_ca.paa);

    class ItemInfo: InventoryMuzzleItem_Base_F {
        mass = 5;
        muzzleEnd = "";
        alternativeFire = "";
        class MuzzleCoef {
            dispersionCoef = "0.001f";
            recoilCoef = "1.0f";
            recoilProneCoef = "1.0f";
            artilleryDispersionCoef = "1.0f";
            minRangeCoef = "1.0f";
            minRangeProbabCoef = "1.0f";
            midRangeCoef = "1.0f";
            midRangeProbabCoef = "1.0f";
            maxRangeCoef = "1.0f";
            maxRangeProbabCoef = "1.0f";
            fireLightCoef = "1.0f";
        };
    };
};
