class ls_weapon_e11_base: ls_rifle_base {
    scope = 0;
    author = AUTHOR;
    displayName = CSTRING(e11_displayName);
    descriptionShort = ECSTRING(weapons,blasterRifle);
    baseWeapon = "ls_weapon_e11";

    model = QPATHTOF(e11\ls_weapon_e11.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(e11\data\camo1_co.paa)
    };
    picture = QPATHTOF(data\ui\e11_ui_ca.paa);

    handAnim[] = {"OFP2_ManSkeleton", "\A3\Weapons_F\Rifles\MX\data\Anim\MX_cqc.rtm"};
    reloadAction = "ls_reload_e5";

    magazines[] = {"ls_magazine_e11"};
    magazineWell[] = {"ls_magwell_e11", "ls_magwell_stun", "ls_magwell_ion"};

    fireLightDiffuse[] = {FIRELIGHT_RED};

    drySound[] = {QPATHTOEF(sounds,weapons\dry\e11.wss), 0.39810717, 1, 20};
    reloadMagazineSound[] = {QPATHTOEF(sounds,weapons\e11\reload.wss), 0.56234133, 1, 30};
    recoil = "recoil_EBR";

    // dispersion = 0.01;

    initSpeed = -0.972222;
    maxRecoilSway = 0.0125;
    swayDecaySpeed = 1.25;
    aiDispersionCoefX = 4;

    muzzles[] = {"this"};
    modes[] = {"Single", "FullAuto", "fullauto_medium", "fullauto_far"};
    class Single: Mode_SemiAuto {
        reloadTime = RPM(500);
        dispersion = 0.00087 * E11_DISPERSION_COEF;
        maxRange = 400;
        maxRangeProbab = 0.3;
        midRange = 300;
        midRangeProbab = 0.5;
        minRange = 120;
        minRangeProbab = 0.7;
        aiRateOfFire = 2;
        aiRateOfFireDistance = 500;

        recoil = "recoil_single_mx";
        recoilProne = "recoil_single_prone_mx";

        sounds[] = {"StandardSound"};
        class StandardSound {
            soundSetShot[] = {"ls_e11_Shot_SoundSet", "ls_mediumBlaster_Tail_SoundSet"};
        };
    };
    class FullAuto: Mode_FullAuto {
        reloadTime = RPM(500);
        dispersion = 0.00087 * E11_DISPERSION_COEF;
        maxRange = 30;
        maxRangeProbab = 0.1;
        midRange = 15;
        midRangeProbab = 0.7;
        minRange = 0;
        minRangeProbab = 0.9;
        aiRateOfFire = 1e-06;
        aiRateOfFireDistance = 500;

        sounds[] = {"StandardSound"};
        class StandardSound {
            soundSetShot[] = {"ls_e11_Shot_SoundSet", "ls_mediumBlaster_Tail_SoundSet"};
        };
    };
    class fullauto_medium: FullAuto {
        showToPlayer = 0;
        aiBurstTerminable = 1;
        burst = "3 + round random 5";
        maxRange = 150;
        maxRangeProbab = 0.05;
        midRange = 75;
        midRangeProbab = 0.7;
        minRange = 20;
        minRangeProbab = 0.5;
        aiRateOfFire = 2;
        aiRateOfFireDistance = 200;
    };
    class fullauto_far: fullauto_medium {
        burst = "2 + round random 3";
        maxRange = 600;
        maxRangeProbab = 0.2;
        midRange = 500;
        midRangeProbab = 0.2;
        minRange = 400;
        minRangeProbab = 0.1;
        aiRateOfFireDistance = 500;
    };
    class single_medium_optics1: Single {
        showToPlayer = 0;
        requiredOpticType = 1;
        maxRange = 700;
        maxRangeProbab = 0.2;
        midRange = 450;
        midRangeProbab = 0.7;
        minRange = 120;
        minRangeProbab = 0.2;
        aiRateOfFire = 6;
        aiRateOfFireDistance = 700;
    };
    class single_far_optics2: single_medium_optics1 {
        requiredOpticType = 2;
        maxRange = 900;
        maxRangeProbab = 0.05;
        midRange = 500;
        midRangeProbab = 0.6;
        minRange = 200;
        minRangeProbab = 0.1;
        aiRateOfFire = 8;
        aiRateOfFireDistance = 900;
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

    class LinkedItems {
        class LinkedItemsMuzzle {
            item = "ls_muzzle_e11_coils";
            slot = "MuzzleSlot";
        };
    };
};

class ls_weapon_e11_scoped: ls_weapon_e11 {
    scope = 1;
    author = AUTHOR;

    class LinkedItems: LinkedItems {
        class LinkedItemsOptic {
            item = "ls_cows_e11_optic";
            slot = "CowsSlot";
        };
    };
};
class ls_weapon_e11_scopedThermal: ls_weapon_e11 {
    scope = 1;
    author = AUTHOR;

    class LinkedItems: LinkedItems {
        class LinkedItemsOptic {
            item = "ls_cows_e11_optic_thermal";
            slot = "CowsSlot";
        };
    };
};

class ls_cows_e11_optic: ItemCore {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(e11_optic_displayName);
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
    displayName = CSTRING(e11_optic_thermal_displayName);

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
    displayName = CSTRING(e11_muzzle_coils_displayName);

    model = QPATHTOF(e11\ls_muzzle_e11_coils.p3d);
    picture = QPATHTOF(data\ui\e11_coils_ui_ca.paa);

    class ItemInfo: InventoryMuzzleItem_Base_F {
        mass = 5;
        muzzleEnd = "";
        alternativeFire = "";
        soundTypeIndex = 0;

        class MuzzleCoef {
            dispersionCoef = 1 / E11_DISPERSION_COEF;
            artilleryDispersionCoef = 1;
            fireLightCoef = 1;
            recoilCoef = 0.9;
            recoilProneCoef = 0.9;
            minRangeCoef = 1;
            minRangeProbabCoef = 1;
            midRangeCoef = 1;
            midRangeProbabCoef = 1;
            maxRangeCoef = 1;
            maxRangeProbabCoef = 1;
        };
    };
};
class ls_muzzle_e11_fins: ls_muzzle_e11_coils {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(e11_muzzle_fins_displayName);

    model = QPATHTOF(e11\ls_muzzle_e11_fins.p3d);
    picture = QPATHTOF(data\ui\e11_fins_ui_ca.paa);
};
