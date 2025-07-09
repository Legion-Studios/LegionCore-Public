class ls_weapon_e5c_base: ls_rifle_base {
    scope = 0;
    author = AUTHOR;
    displayName = "E-5C Blaster Repeater";

    model = QPATHTOF(e5c\ls_weapon_e5c.p3d);
    hiddenSelections[] = {};
    hiddenSelectionsTextures[] = {};
    picture = QPATHTOF(data\ui\e5c_ui_ca.paa);

    handAnim[] = {
        "OFP2_ManSkeleton",
        "\A3\Weapons_F_epa\LongRangeRifles\DMR_01\Data\Anim\dmr_01.rtm"
    };
    reloadAction = "ReloadMagazine";

    magazines[] = {"ls_magazine_e5c"};
    magazineWell[] = {"ls_magwell_e5c"};

    selectionFireAnim = "zasleh";
    drySound[] = {QPATHTOEF(sounds,weapons\dry\generic.wss), 0.39810717, 1, 20};
    reloadMagazineSound[] = {QPATHTOEF(sounds,weapons\reload\e5_reload.wss), 0.56234133, 1, 30};

    fireLightDuration = 0.05;
    fireLightIntensity = 0.4;
    fireLightDiffuse[] = {0, 0, 0.01};
    fireLightAmbient[] = {0, 0, 0};

    magazineReloadSwitchPhase = 0.4;
    discreteDistanceInitIndex = 0;
    maxRecoilSway = 0.01;
    swayDecaySpeed = 0.2;
    inertia = 3;
    initSpeed = -1;

    opticsZoomMin = 0.25;
    opticsZoomMax = 1.25;
    opticsZoomInit = 0.75;
    distanceZoomMin = 300;
    distanceZoomMax = 300;
    descriptionShort = "";

    aiDispersionCoefY = 6;
    aiDispersionCoefX = 4;

    muzzles[] = {"this"};
    modes[] = {"FullAuto"};
    class FullAuto: Mode_FullAuto {
        reloadTime = 0.15;
        dispersion = 0.007;
        minRange = 0;
        minRangeProbab = 0.9;
        midRange = 15;
        midRangeProbab = 0.7;
        maxRange = 30;
        maxRangeProbab = 0.1;

        sounds[] = {"StandardSound"};
        class StandardSound {
            soundSetShot[] = {"ls_e5c_Shot_SoundSet", "ls_mediumBlaster_Shot_SoundSet"};
        };
    };

    class GunParticles {
        class SecondEffect {
            positionName = "Nabojnicestart";
            directionName = "Nabojniceend";
            effectName = "CaselessAmmoCloud";
        };
    };

    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 176;
        class MuzzleSlot: MuzzleSlot {
            class compatibleItems {};
        };
        class CowsSlot: CowsSlot {
            class compatibleItems {};
        };
        class PointerSlot: PointerSlot {
            class compatibleItems {};
        };
    };
};

class ls_weapon_e5c: ls_weapon_e5c_base {
    scope = 2;
    author = AUTHOR;
    baseWeapon = "ls_weapon_e5c";
};
