class ls_weapon_dc15x_base: ls_rifle_base {
    scope = 0;
    author = AUTHOR;
    displayName = CSTRING(dc15x_displayName);
    descriptionShort = ECSTRING(weapons,sniperBlasterRifle);
    baseWeapon = "ls_weapon_dc15x";

    model = QPATHTOF(dc15x\ls_weapon_dc15x.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(dc15x\data\camo1_co.paa)
    };
    picture = QPATHTOF(data\ui\dc15x_ui_ca.paa);

    handAnim[] = {"OFP2_ManSkeleton", QPATHTOF(dc15x\anims\dc15x_handanim.rtm)};

    magazines[] = {"ls_magazine_dc15x"};
    magazineWell[] = {"ls_magwell_dcSeries", "ls_magwell_dc15x"};

    reloadMagazineSound[] = {QPATHTOEF(sounds,weapons\reload\dc15a_reload.wss), 0.56234133, 1, 30};
    cursor = "srifle";

    maxZeroing = 1200;
    opticsZoomMin = 0.01;
    opticsZoomMax = 0.042;
    opticsZoomInit = 0.042;
    discreteFov[] = {0.042, 0.01};
    discreteInitIndex = 0;
    distanceZoomMin = 100;
    distanceZoomMax = 1200;
    discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200};

    recoil = "recoil_m320";
    maxRecoilSway = 0.008;
    swayDecaySpeed = 2;
    dexterity = 1.1;
    initSpeed = 910;
    inertia = 1.1;
    aimTransitionSpeed = 0.5;

    muzzles[] = {"this"};
    modes[] = {"Single", "far_optic1", "far_optic2", "medium_optic2"};
    class Single: Mode_SemiAuto {
        reloadTime = RPM(50);
        dispersion = 0.00018;
        recoil = "recoil_single_gm6";
        recoilProne = "recoil_single_prone_gm6";

        maxRange = 350;
        maxRangeProbab = 0.05;
        midRange = 250;
        midRangeProbab = 0.7;
        minRange = 2;
        minRangeProbab = 0.1;
        aiRateOfFire = 3;
        aiRateOfFireDistance = 500;

        sounds[] = {"StandardSound"};
        class StandardSound {
            soundSetShot[] = {"ls_dc15x_Shot_SoundSet", "ls_sniper_Tail_SoundSet"};
        };
    };
    class far_optic1: Single {
        showToPlayer = 0;
        requiredOpticType = 1;

        aiRateOfFire = 5;
        aiRateOfFireDistance = 700;
        maxRange = 1000;
        maxRangeProbab = 0.3;
        midRange = 500;
        midRangeProbab = 0.7;
        minRange = 150;
        minRangeProbab = 0.1;
    };
    class far_optic2: far_optic1 {
        requiredOpticType = 2;
        aiRateOfFire = 8;
        aiRateOfFireDistance = 2000;
        maxRange = 2000;
        maxRangeProbab = 0.3;
        midRange = 1050;
        midRangeProbab = 0.7;
        minRange = 500;
        minRangeProbab = 0.1;
    };
    class medium_optic2: Single {
        showToPlayer = 0;
        requiredOpticType = 2;

        aiRateOfFire = 6;
        aiRateOfFireDistance = 1000;
        maxRange = 1000;
        maxRangeProbab = 0.3;
        midRange = 750;
        midRangeProbab = 0.7;
        minRange = 250;
        minRangeProbab = 0.1;
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
            // optics magnification = opticsZoomInit/OpticsZoom(Min or Max)
            opticsZoomMin = 0.01;
            opticsZoomMax = 0.042;
            opticsZoomInit = 0.042;
            discreteFov[] = {0.042, 0.01};
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
        mass = 310;

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
    displayName = CSTRING(dc15x_wooden_displayName);
    baseWeapon = "ls_weapon_dc15x_wooden";

    hiddenSelectionsTextures[] = {
        QPATHTOF(dc15x\data\camo1_wooden_co.paa)
    };
};
