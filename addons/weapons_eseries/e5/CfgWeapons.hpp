class ls_weapon_e5_base: ls_rifle_base {
    scope = 0;
    author = AUTHOR;
    displayName = "E-5 Blaster Carbine";

    model = QPATHTOF(e5\ls_weapon_e5.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(e5\data\camo1_co.paa)
    };
    picture = QPATHTOF(data\ui\e5_ui_ca.paa);

    handAnim[] = {
        "OFP2_ManSkeleton",
        "\A3\Weapons_F_epa\LongRangeRifles\DMR_01\Data\Anim\dmr_01.rtm"
    };
    reloadAction = "ReloadMagazine";

    magazines[] = {"ls_magazine_e5"};
    magazineWell[] = {"ls_magwell_e5"};

    selectionFireAnim = "zasleh";
    drySound[] = {QPATHTOEF(sounds,weapons\dry\generic.wss), 0.39810717, 1, 20};
    reloadMagazineSound[] = {QPATHTOEF(sounds,weapons\reload\e5_reload.wss), 0.56234133, 1, 30};

    fireLightDuration = 0.05;
    fireLightIntensity = 0.4;
    fireLightDiffuse[] = {0, 0, 0.01};
    fireLightAmbient[] = {0, 0, 0};

    maxRecoilSway = 0.015;
    swayDecaySpeed = 5;
    initspeed = 820;
    inertia = 2;
    dexterity = 5;

    modes[] = {
        "Single",
        "FullAuto",
        "close",
        "short",
        "medium"
    };
    muzzles[] = {"this"};
    class Single: Mode_SemiAuto {
        reloadTime = 0.2;
        dispersion = 0.005;
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
            soundSetShot[] = {"ls_e5_Shot_SoundSet", "ls_mediumBlaster_Tail_SoundSet"};
        };
    };
    class FullAuto: Mode_FullAuto {
        reloadTime = 0.19;
        dispersion = 0.005;
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
            soundSetShot[] = {"ls_e5_Shot_SoundSet", "ls_mediumBlaster_Tail_SoundSet"};
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

    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 60;
        class CowsSlot: CowsSlot {
            class compatibleItems {};
        };
    };
};

class ls_weapon_e5: ls_weapon_e5_base {
    scope = 2;
    author = AUTHOR;
    baseWeapon = "ls_weapon_e5";
};

class ls_weapon_e5_activeCamo: ls_weapon_e5 {
    scope = 1;
    author = AUTHOR;

    hiddenSelectionsTextures[] = {
        QPATHTOEF(data,textures\blank_ca.paa)
    };
    hiddenSelectionsMaterials[] = {
        QPATHTOEF(data,materials\activeCamo.rvmat)
    };
};
