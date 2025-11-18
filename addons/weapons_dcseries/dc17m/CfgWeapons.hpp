class ls_weapon_dc17m_base: ls_rifle_base {
    scope = 0;
    author = AUTHOR;
    displayName = "DC-17M";
    descriptionShort = "DC-17M Interchangeable Weapon System";

    model = QPATHTOF(dc17m\ls_weapon_dc17m.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(dc17m\data\camo1_co.paa)
    };
    picture = QPATHTOF(data\ui\dc17m_ui_ca.paa);

    handAnim[] = {
        "OFP2_ManSkeleton",
        QPATHTOF(dc17m\anims\dc17m_handanim.rtm)
    };
    reloadAction = "ReloadMagazine";

    magazines[] = {"ls_magazine_dc17m"};
    magazineWell[] = {"ls_magwell_dc17m"};

    drySound[] = {QPATHTOEF(sounds,weapons\dry\generic.wss), 0.39810717, 1, 20};
    reloadMagazineSound[] = {QPATHTOEF(sounds,weapons\reload\dc17m.wss), 0.56234133, 1, 30};
    magazineReloadSwitchPhase = 0.4;
    initSpeed = 600;
    recoil = "recoil_smg_03";

    fireLightDuration = 0.05;
    fireLightIntensity = 0.4;
    fireLightDiffuse[] = {0, 0, 0.01};
    fireLightAmbient[] = {0, 0, 0};

    modes[] = {"FullAuto", "Single"};
    muzzles[] = {"this"};

    class Single: Mode_SemiAuto {
        reloadTime = 2;
        dispersion = 0.15;
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
            soundSetShot[] = {"ls_dc17m_sniper_Shot_SoundSet", "ls_sniper_Tail_SoundSet"};
        };
    };
    class FullAuto: Mode_FullAuto {
        reloadTime = 0.1;
        dispersion = 0.2;
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
            soundSetShot[] = {"ls_dc17m_Shot_SoundSet", "ls_mediumBlaster_Tail_SoundSet"};
        };
    };

    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 60;
        class CowsSlot: CowsSlot {
            class compatibleItems {
                ls_cows_dc17m_sniper = 1;
            };
        };
        class MuzzleSlot: MuzzleSlot {
            class compatibleItems {
                ls_muzzle_dc17m_blaster = 1;
                ls_muzzle_dc17m_blaster_activeCamo = 1;
                ls_muzzle_dc17m_sniper = 1;
                ls_muzzle_dc17m_sniper_activeCamo = 1;
                ls_muzzle_dc17m_antiArmor = 1;
                ls_muzzle_dc17m_antiArmor_activeCamo = 1;
            };
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
        {QGVAR(isATMag), "ls_muzzle_dc17m_antiArmor"},
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
        {QGVAR(isATMag), "ls_muzzle_dc17m_antiArmor_activeCamo"},
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
        {QGVAR(isATMag), "ls_muzzle_dc17m_antiArmor_activeCamo"},
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
        {QGVAR(isATMag), "ls_muzzle_dc17m_antiArmor_activeCamo"},
        {QGVAR(isSniperMag), "ls_muzzle_dc17m_sniper_activeCamo"}
    };
};

class ls_cows_dc17m_sniper: ItemCore {
    scope = 2;
    author = AUTHOR;
    displayName = "DC-17M Sniper scope";
    descriptionShort = "";

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
    displayName = "DC-17M Blaster Attachment";

    model = QPATHTOF(dc17m\ls_muzzle_dc17m_blaster.p3d);
    picture = QPATHTOF(data\ui\dc17m_muzzle_blaster_ui_ca.paa);

    dispersion = 0.00029;
    memoryPointCamera = "eye_attachment";

    class ItemInfo: InventoryMuzzleItem_Base_F {
        mass = 5;
        muzzleEnd = "zaslehPoint";
        alternativeFire = "Zasleh2";
        class MuzzleCoef {
            artilleryDispersionCoef = "0.02f";
            dispersionCoef = "0.02f";
            fireLightCoef = "1.0f";
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

class ls_muzzle_dc17m_blaster_activeCamo: ls_muzzle_dc17m_blaster {
    scope = 1;
    author = AUTHOR;
    model = QPATHTOF(dc17m\ls_muzzle_dc17m_blaster_activeCamo.p3d);
};

class ls_muzzle_dc17m_sniper: ItemCore {
    scope = 2;
    author = AUTHOR;
    displayName = "DC-17M Sniper Attachment";

    model = QPATHTOF(dc17m\ls_muzzle_dc17m_sniper.p3d);
    picture = QPATHTOF(data\ui\dc17m_muzzle_sniper_ui_ca.paa);

    dispersion = 1e-007;
    memoryPointCamera = "eye_attachment";
    modelOptics = QPATHTOF(dc17m\ls_optic_dc17m_sniper.p3d);

    class ItemInfo: InventoryMuzzleItem_Base_F {
        mass = 5;
        muzzleEnd = "zaslehPoint";
        alternativeFire = "Zasleh2";

        class MuzzleCoef {
            artilleryDispersionCoef = "0.01";
            dispersionCoef = "0.005f";
            fireLightCoef = "1.0f";
            maxRangeCoef = "1.0f";
            maxRangeProbabCoef = "1.0f";
            midRangeCoef = "1.0f";
            midRangeProbabCoef = "1.0f";
            minRangeCoef = "1.0f";
            minRangeProbabCoef = "1.0f";
            recoilCoef = "0.05f";
            recoilProneCoef = "0.05f";
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
    displayName = "DC-17M Anti-Armor Attachment";

    model = QPATHTOF(dc17m\ls_muzzle_dc17m_antiArmor.p3d);
    picture = QPATHTOF(data\ui\dc17m_muzzle_antiArmor_ui_ca.paa);

    memoryPointCamera = "eye_attachment";

    class ItemInfo: InventoryMuzzleItem_Base_F {
        mass = 5;
        muzzleEnd = "zaslehPoint";
        alternativeFire = "Zasleh2";

        class MuzzleCoef {
            artilleryDispersionCoef = "1.0f";
            dispersionCoef = "0.1f";
            fireLightCoef = "2.0f";
            maxRangeCoef = "1.0f";
            maxRangeProbabCoef = "1.0f";
            midRangeCoef = "1.0f";
            midRangeProbabCoef = "1.0f";
            minRangeCoef = "1.0f";
            minRangeProbabCoef = "1.0f";
            recoilCoef = "1.0f";
            recoilProneCoef = "1.0f";
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
