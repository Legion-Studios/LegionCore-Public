class ls_weapon_dc17m_base: ls_rifle_base {
    scope = 0;
    author = AUTHOR;
    displayName = CSTRING(dc17m_displayName);
    descriptionShort = CSTRING(dc17m_descriptionShort);

    model = QPATHTOF(dc17m\ls_weapon_dc17m.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(dc17m\data\camo1_co.paa)
    };
    picture = QPATHTOF(data\ui\dc17m_ui_ca.paa);
    handAnim[] = {"OFP2_ManSkeleton", QPATHTOF(dc17m\anims\dc17m_handanim.rtm)};

    reloadAction = "ReloadMagazine";
    reloadMagazineSound[] = {QPATHTOEF(sounds,weapons\reload\dc17m.wss), 0.56234133, 1, 30};
    magazineReloadSwitchPhase = 0.4;

    magazines[] = {"ls_magazine_dc17m"};
    magazineWell[] = {"ls_magwell_dc17m"};

    recoil = "recoil_smg_03";
    dexterity = 1.4;
    initSpeed = -0.972222;
    maxRecoilSway = 0.0125;
    swayDecaySpeed = 1.25;
    aiDispersionCoefX = 4;

    muzzles[] = {"this"};
    modes[] = {"FullAuto", "Single", "fullauto_medium", "fullauto_far"};
    class Single: Mode_SemiAuto {
        requiredOpticType = 1;
        reloadTime = RPM(30);
        dispersion = 0.15;
        maxRange = 900;
        maxRangeProbab = 0.05;
        midRange = 500;
        midRangeProbab = 0.6;
        minRange = 300;
        minRangeProbab = 0.1;
        aiRateOfFire = 1;
        aiRateOfFireDistance = 900;

        sounds[] = {"StandardSound", "SniperSound", "AntiArmorSound"};
        class StandardSound {
            soundSetShot[] = {"ls_dc17m_Shot_SoundSet", "ls_mediumBlaster_Tail_SoundSet"};
        };
        class SniperSound {
            soundSetShot[] = {"ls_dc17m_sniper_Shot_SoundSet", "ls_sniper_Tail_SoundSet"};
        };
        class AntiArmorSound {
            begin1[] = {"\A3\Sounds_F\arsenal\weapons\UGL\UGL_01.wss", 0.707946, 1, 200};
            begin2[] = {"\A3\Sounds_F\arsenal\weapons\UGL\UGL_02.wss", 0.707946, 1, 200};
            closure1[] = {"\A3\Sounds_F\arsenal\weapons\UGL\Closure_UGL.wss", 1, 1, 10};
            soundBegin[] = {"begin1", 0.5, "begin2", 0.5};
            soundClosure[] = {"closure1", 1};
            soundSetShot[] = {"UGL_shot_SoundSet", "UGL_Tail_SoundSet", "UGL_InteriorTail_SoundSet"};
        };
    };
    class FullAuto: Mode_FullAuto {
        reloadTime = RPM(600);
        dispersion = 0.2;
        maxRange = 30;
        maxRangeProbab = 0.1;
        midRange = 15;
        midRangeProbab = 0.7;
        minRange = 0;
        minRangeProbab = 0.9;
        aiRateOfFire = 1e-06;

        sounds[] = {"StandardSound", "SniperSound", "AntiArmorSound"};
        class StandardSound {
            soundSetShot[] = {"ls_dc17m_Shot_SoundSet", "ls_mediumBlaster_Tail_SoundSet"};
        };
        class SniperSound {
            soundSetShot[] = {"ls_dc17m_sniper_Shot_SoundSet", "ls_sniper_Tail_SoundSet"};
        };
        class AntiArmorSound {
            begin1[] = {"\A3\Sounds_F\arsenal\weapons\UGL\UGL_01.wss", 0.707946, 1, 200};
            begin2[] = {"\A3\Sounds_F\arsenal\weapons\UGL\UGL_02.wss", 0.707946, 1, 200};
            closure1[] = {"\A3\Sounds_F\arsenal\weapons\UGL\Closure_UGL.wss", 1, 1, 10};
            soundBegin[] = {"begin1", 0.5, "begin2", 0.5};
            soundClosure[] = {"closure1", 1};
            soundSetShot[] = {"UGL_shot_SoundSet", "UGL_Tail_SoundSet", "UGL_InteriorTail_SoundSet"};
        };
    };
    class fullauto_medium: FullAuto {
        showToPlayer = 0;
        burst = "3 + round random 5";
        maxRange = 150;
        maxRangeProbab = 0.05;
        midRange = 75;
        midRangeProbab = 0.7;
        minRange = 20;
        minRangeProbab = 0.5;
        aiBurstTerminable = 1;
        aiRateOfFire = 2;
        aiRateOfFireDistance = 200;
    };
    class fullauto_far: fullauto_medium {
        burst = "2 + round random 3";
        aiRateOfFireDistance = 400;
        maxRange = 300;
        maxRangeProbab = 0.2;
        midRange = 225;
        midRangeProbab = 0.2;
        minRange = 150;
        minRangeProbab = 0.1;
    };

    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 80;
        class CowsSlot: CowsSlot {
            iconPinpoint = "center";
            iconPosition[] = {0.715, 0.258};
            class compatibleItems {
                ls_cows_dc17m_sniper = 1;
            };
        };
        class PointerSlot: PointerSlot {
            iconPinpoint = "center";
            iconPosition[] = {0.467, 0.551};
        };
        class MuzzleSlot: MuzzleSlot {
            iconPinpoint = "center";
            iconPosition[] = {0.137, 0.402};
            class compatibleItems {
                ls_muzzle_dc17m_blaster = 1;
                ls_muzzle_dc17m_blaster_activeCamo = 1;
                ls_muzzle_dc17m_sniper = 1;
                ls_muzzle_dc17m_sniper_activeCamo = 1;
                ls_muzzle_dc17m_antiArmor = 1;
                ls_muzzle_dc17m_antiArmor_activeCamo = 1;
            };
        };
        class UnderBarrelSlot: UnderBarrelSlot {
            iconPinpoint = "center";
            iconPosition[] = {0.621, 0.801};
        };
    };
};

class ls_weapon_dc17m: ls_weapon_dc17m_base {
    scope = 2;
    author = AUTHOR;
    baseWeapon = "ls_weapon_dc17m";

    GVAR(attachmentSwapEnabled) = 1;
    GVAR(attachments)[] = {
        {QGVAR(isBlasterMag), "ls_muzzle_dc17m_blaster"},
        {QGVAR(isAntiArmorMag), "ls_muzzle_dc17m_antiArmor"},
        {QGVAR(isSniperMag), "ls_muzzle_dc17m_sniper"}
    };

    class LinkedItems {
        class LinkedItemsMuzzle {
            slot = "MuzzleSlot";
            item = "ls_muzzle_dc17m_blaster";
        };
    };
};

class ls_weapon_dc17m_activeCamo: ls_weapon_dc17m {
    scope = 1;
    author = AUTHOR;
    hiddenSelectionsTextures[] = {
        QPATHTOEF(data,textures\blank_ca.paa)
    };
    hiddenSelectionsMaterials[] = {
        QPATHTOEF(data,materials\activeCamo.rvmat)
    };

    GVAR(attachments)[] = {
        {QGVAR(isBlasterMag), "ls_muzzle_dc17m_blaster_activeCamo"},
        {QGVAR(isAntiArmorMag), "ls_muzzle_dc17m_antiArmor_activeCamo"},
        {QGVAR(isSniperMag), "ls_muzzle_dc17m_sniper_activeCamo"}
    };
};

class ls_weapon_dc17m_sniper: ls_weapon_dc17m {
    scope = 1;
    author = AUTHOR;

    magazines[] = {"ls_magazine_dc17m_sniper"}; // This is so AI spawn with this magazine

    class LinkedItems {
        class LinkedItemsMuzzle {
            slot = "MuzzleSlot";
            item = "ls_muzzle_dc17m_sniper";
        };
        class LinkedItemsOptic {
            slot = "CowsSlot";
            item = "ls_cows_dc17m_sniper";
        };
    };
};

class ls_weapon_dc17m_sniper_activeCamo: ls_weapon_dc17m_sniper {
    author = AUTHOR;
    hiddenSelectionsTextures[] = {
        QPATHTOEF(data,textures\blank_ca.paa)
    };
    hiddenSelectionsMaterials[] = {
        QPATHTOEF(data,materials\activeCamo.rvmat)
    };

    GVAR(attachments)[] = {
        {QGVAR(isBlasterMag), "ls_muzzle_dc17m_blaster_activeCamo"},
        {QGVAR(isAntiArmorMag), "ls_muzzle_dc17m_antiArmor_activeCamo"},
        {QGVAR(isSniperMag), "ls_muzzle_dc17m_sniper_activeCamo"}
    };
};

class ls_weapon_dc17m_antiArmor: ls_weapon_dc17m {
    scope = 1;
    author = AUTHOR;

    magazines[] = {"ls_magazine_dc17m_antiArmor"};

    class LinkedItems {
        class LinkedItemsMuzzle {
            slot = "MuzzleSlot";
            item = "ls_muzzle_dc17m_antiArmor";
        };
    };
};

class ls_weapon_dc17m_antiArmor_activeCamo: ls_weapon_dc17m_antiArmor {
    author = AUTHOR;
    hiddenSelectionsTextures[] = {
        QPATHTOEF(data,textures\blank_ca.paa)
    };
    hiddenSelectionsMaterials[] = {
        QPATHTOEF(data,materials\activeCamo.rvmat)
    };

    GVAR(attachments)[] = {
        {QGVAR(isBlasterMag), "ls_muzzle_dc17m_blaster_activeCamo"},
        {QGVAR(isAntiArmorMag), "ls_muzzle_dc17m_antiArmor_activeCamo"},
        {QGVAR(isSniperMag), "ls_muzzle_dc17m_sniper_activeCamo"}
    };
};

// TODO: Adjust attachments

class ls_cows_dc17m_sniper: ItemCore {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(dc17m_optic_sniper_displayName);
    descriptionShort = CSTRING(dc17m_optic_sniper_descriptionShort);

    model = QPATHTOF(dc17m\ls_cows_dc17m_sniper.p3d);
    picture = QPATHTOF(dc17m\data\optic_sniper_ca.paa);

    GVAR(adsSounds)[] = {
        {QGVAR(sniperRifle_zoomIn01), QGVAR(sniperRifle_zoomIn02)},
        QGVAR(sniperRifle_zoomOut01)
    };

    weaponInfoType = "RscWeaponZeroing";
    class ItemInfo: InventoryOpticsItem_Base_F {
        mass = 8;
        opticType = 1;
        optics = 1;
        inertia = 0.1;
        modelOptics = QPATHTOF(dc17m\ls_optic_dc17m_sniper.p3d);

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
            class Sight {
                opticsID = 1;
                useModelOptics = 0;
                opticsPPEffects[] = {
                    "Default"
                };
                opticsFlare = 0;
                opticsDisablePeripherialVision = 0;
                opticsZoomMin = 0.25;
                opticsZoomMax = 1.25;
                opticsZoomInit = 0.75;
                memoryPointCamera = "sightView";
                visionMode[] = {};
                distanceZoomMin = 200;
                distanceZoomMax = 200;
                cameraDir = "";
            };
        };
    };
};

class ls_muzzle_dc17m_blaster: ItemCore {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(dc17m_muzzle_blaster_displayName);

    model = QPATHTOF(dc17m\ls_muzzle_dc17m_blaster.p3d);
    picture = QPATHTOF(data\ui\dc17m_muzzle_blaster_ui_ca.paa);

    dispersion = 0.00029;
    memoryPointCamera = "eye_attachment";

    class ItemInfo: InventoryMuzzleItem_Base_F {
        mass = 5;
        muzzleEnd = "zaslehPoint";
        alternativeFire = "Zasleh2";
        soundTypeIndex = 0;

        class MuzzleCoef {
            artilleryDispersionCoef = 0.02;
            dispersionCoef = 0.02;
            fireLightCoef = 1;
            maxRangeCoef = 1;
            maxRangeProbabCoef = 1;
            midRangeCoef = 1;
            midRangeProbabCoef = 1;
            minRangeCoef = 1;
            minRangeProbabCoef = 1;
            recoilCoef = 1;
            recoilProneCoef = 1;
        };
    };
};

class ls_muzzle_dc17m_blaster_activeCamo: ls_muzzle_dc17m_blaster {
    scope = 1;
    author = AUTHOR;
    model = QPATHTOF(dc17m\ls_muzzle_dc17m_blaster_activeCamo.p3d);
};

class ls_muzzle_dc17m_sniper: ItemCore {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(dc17m_muzzle_sniper_displayName);

    model = QPATHTOF(dc17m\ls_muzzle_dc17m_sniper.p3d);
    picture = QPATHTOF(data\ui\dc17m_muzzle_sniper_ui_ca.paa);

    dispersion = 1e-007;
    memoryPointCamera = "eye_attachment";
    modelOptics = QPATHTOF(dc17m\ls_optic_dc17m_sniper.p3d);

    class ItemInfo: InventoryMuzzleItem_Base_F {
        mass = 5;
        muzzleEnd = "zaslehPoint";
        alternativeFire = "Zasleh2";
        soundTypeIndex = 1;

        class MuzzleCoef {
            artilleryDispersionCoef = 0.01;
            dispersionCoef = 0.005;
            fireLightCoef = 1;
            maxRangeCoef = 1;
            maxRangeProbabCoef = 1;
            midRangeCoef = 1;
            midRangeProbabCoef = 1;
            minRangeCoef = 1;
            minRangeProbabCoef = 1;
            recoilCoef = 0.05;
            recoilProneCoef = 0.05;
        };
    };
};

class ls_muzzle_dc17m_sniper_activeCamo: ls_muzzle_dc17m_sniper {
    scope = 1;
    author = AUTHOR;
    model = QPATHTOF(dc17m\ls_muzzle_dc17m_sniper_activeCamo.p3d);
};

class ls_muzzle_dc17m_antiArmor: ItemCore {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(dc17m_muzzle_antiArmor_displayName);

    model = QPATHTOF(dc17m\ls_muzzle_dc17m_antiArmor.p3d);
    picture = QPATHTOF(data\ui\dc17m_muzzle_antiArmor_ui_ca.paa);

    dispersion = 0.00029;
    memoryPointCamera = "eye_attachment";

    class ItemInfo: InventoryMuzzleItem_Base_F {
        mass = 5;
        muzzleEnd = "zaslehPoint";
        alternativeFire = "Zasleh2";
        soundTypeIndex = 2;

        class MuzzleCoef {
            artilleryDispersionCoef = 1;
            dispersionCoef = 0.005;
            fireLightCoef = 2;
            maxRangeCoef = 1;
            maxRangeProbabCoef = 1;
            midRangeCoef = 1;
            midRangeProbabCoef = 1;
            minRangeCoef = 1;
            minRangeProbabCoef = 1;
            recoilCoef = 1;
            recoilProneCoef = 1;
        };

        class OpticModes {
            class Iron {
                opticsID = 1;
                useModelOptics = 0;
                opticsPPEffects[] = {};
                opticsFlare = 0;
                opticsDisablePeripherialVision = 0;
                opticsZoomMin = 0.375;
                opticsZoomMax = 1;
                opticsZoomInit = 0.75;
                memoryPointCamera = "eye_attachment";
                visionMode[] = {};
                distanceZoomMin = 300;
                distanceZoomMax = 300;
            };
        };
    };
};

class ls_muzzle_dc17m_antiArmor_activeCamo: ls_muzzle_dc17m_antiArmor {
    scope = 1;
    author = AUTHOR;
    model = QPATHTOF(dc17m\ls_muzzle_dc17m_antiArmor_activeCamo.p3d);
};
