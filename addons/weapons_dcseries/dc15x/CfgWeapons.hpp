class ls_weapon_dc15x_base: ls_rifle_base {
    scope = 0;
    author = AUTHOR;
    displayName = "DC-15X Sniper Rifle";

    model = QPATHTOF(dc15x\ls_weapon_dc15x.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(dc15x\data\camo1_co.paa)
    };
    picture = QPATHTOF(data\ui\dc15x_ui_ca.paa);

    handAnim[] = {
        "OFP2_ManSkeleton",
        QPATHTOF(dc15x\anims\dc15x_handanim.rtm)
    };
    reloadAction = "ReloadMagazine";

    magazines[] = {"ls_magazine_dc15x"};
    magazineWell[] = {"ls_magwell_dc15x"};

    selectionFireAnim = "zasleh";
    drySound[] = {QPATHTOEF(sounds,weapons\dry\generic.wss), 0.39810717, 1, 20};
    reloadMagazineSound[] = {QPATHTOEF(sounds,weapons\reload\dc15a_reload.wss), 0.56234133, 1, 30};

    maxZeroing = 1200;
    opticsZoomMin = 0.01;
    opticsZoomMax = 0.042;
    opticsZoomInit = 0.042;
    discretefov[] = {0.042, 0.01};
    discreteInitIndex = 0;
    distanceZoomMin = 100;
    distanceZoomMax = 1200;
    discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200};

    fireLightDuration = 0.050000001;
    fireLightIntensity = 0.4;
    fireLightDiffuse[] = {0, 0, 0.01};
    fireLightAmbient[] = {0, 0, 0};

    maxRecoilSway = 0.0125;
    recoil = "ls_recoil";
    swayDecaySpeed = 1.25;
    dexterity = 1.7;
    initspeed = 800;
    inertia = 1.4;

    modes[] = {"Single", "close", "short", "medium"};
    class Single: Mode_SemiAuto {
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

        sounds[] = {"StandardSound"};
        class StandardSound {
            soundSetShot[] = {"ls_dc15x_Shot_SoundSet", "ls_sniper_Tail_SoundSet"};
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

    modelOptics = QPATHTOF(dc15x\ls_optic_dc15x.p3d);
    class OpticModes {
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
            distanceZoomMin = 100;
            distanceZoomMax = 1200;
            discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200};
            discreteDistanceInitIndex = 0;
            memoryPointCamera = "opticView";
            visionMode[] = {"Normal", "NVG", "TI"};
            thermalMode[] = {0, 1};
            opticsFlare = "true";
            cameraDir = "";
        };
    };
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 130;

        class CowsSlot: ls_dcSeries_CowsSlot {
            class compatibleItems: compatibleItems {};
        };
        class MuzzleSlot: ls_dcSeries_MuzzleSlot {
            class compatibleItems: compatibleItems {};
        };
        class PointerSlot: ls_dcSeries_PointerSlot {
            class compatibleItems: compatibleItems {};
        };
        class UnderBarrelSlot: ls_dcSeries_UnderBarrelSlot {
            class compatibleItems: compatibleItems {};
        };
    };
};

class ls_weapon_dc15x: ls_weapon_dc15x_base {
    scope = 2;
    author = AUTHOR;
    baseWeapon = "ls_weapon_dc15x";

    GVAR(adsSounds)[] = {
        {QGVAR(sniperRifle_zoomIn01), QGVAR(sniperRifle_zoomIn02)},
        QGVAR(sniperRifle_zoomOut01)
    };

    // Would be nice to use, but it prevents firing until `delay` seconds passes
    // class EventHandlers {
    //     fired = "call CBA_fnc_weaponEvents";
    // };

    // No docs, see https://github.com/CBATeam/CBA_A3/blob/master/addons/events/fnc_weaponEvents.sqf
    // class CBA_WeaponEvents {
    //     sound = "ls_dc15x_rackBolt";
    //     delay = 1.5;
    // };
};

class ls_weapon_dc15x_wooden: ls_weapon_dc15x {
    author = AUTHOR;
    displayName = "DC-15X Sniper Rifle (Wooden)";
    baseWeapon = "ls_weapon_dc15x_wooden";

    hiddenSelectionsTextures[] = {
        QPATHTOF(dc15x\data\camo1_wooden_co.paa)
    };
};
