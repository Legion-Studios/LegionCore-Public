class ls_weapon_westar35c_base: ls_rifle_base {
    scope = 0;
    author = AUTHOR;
    displayname = "Westar-35C";

    model = QPATHTOF(westar35c\ls_weapon_westar35c.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(westar35c\data\camo1_co.paa)
    };
    picture = QPATHTOF(data\ui\westar35c_ui_ca.paa);

    handAnim[] = {
        "OFP2_ManSkeleton",
        "\A3\Weapons_F_epa\LongRangeRifles\DMR_01\Data\Anim\dmr_01.rtm"
    };
    reloadAction = "ls_reload_westar35s";

    magazines[] = {"ls_magazine_westar35c"};
    magazineWell[] = {"ls_magwell_westar35c"};

    selectionFireAnim = "zasleh";
    drySound[] = {QPATHTOEF(sounds,weapons\dry\westar.wss), 0.39810717, 1, 20};
    // TODO: Convert to WSS
    reloadMagazineSound[] = {
        QPATHTOEF(sounds,weapons\reload\westar35.ogg), 0.56234133, 1, 30
    };

    fireLightDuration = 0.05;
    fireLightIntensity = 0.4;
    fireLightDiffuse[] = {1, 1, 0};
    fireLightAmbient[] = {0, 0, 0};

    inertia = 1.4;
    dexterity = 1.7;
    initSpeed = -1;
    recoil = "ls_recoil";
    maxRecoilSway = 0.015;
    swayDecaySpeed = 1;

    modes[] = {
        "Single",
        "FullAuto",
        "close",
        "short",
        "medium"
    };
    muzzles[] = {"this"};
    class Single: Mode_SemiAuto {
        reloadTime = 0.15000001;
        dispersion = 0.0030149999;
        minRange = 5;
        minRangeProbab = 0.3;
        midRange = 25;
        midRangeProbab = 0.6;
        maxRange = 50;
        maxRangeProbab = 0.1;
        aiRateOfFire = 2;
        aiRateOfFireDistance = 25;

        // TODO: Convert to sound shader
        sounds[] = {"StandardSound"};
        class StandardSound {
            weaponSoundEffect = "";
            begin1[] = {
                QPATHTOEF(sounds,weapons\westar35c\shot1.wss), 1, 1, 1800
            };
            soundBegin[] = {"begin1", 1};
        };
    };
    class FullAuto: Mode_FullAuto {
        reloadTime = 0.15000001;
        dispersion = 0.0014545;
        minRange = 5;
        minRangeProbab = 0.30000001;
        midRange = 25;
        midRangeProbab = 0.60000002;
        maxRange = 50;
        maxRangeProbab = 0.1;
        aiRateOfFire = 2;
        aiRateOfFireDistance = 25;

        // TODO: Convert to sound shader
        sounds[] = {"StandardSound"};
        class StandardSound {
            weaponSoundEffect = "";
            begin1[] = {
                QPATHTOEF(sounds,weapons\westar35c\shot1.wss), 1, 1, 1800
            };
            soundBegin[] = {"begin1", 1};
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
        midRangeProbab = 0.6;
        maxRange = 900;
        maxRangeProbab = 0.2;
    };

    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 60;

        class CowsSlot: CowsSlot {
            class compatibleItems {
                ls_cows_westar35s_scope = 1;
            };
        };
        class MuzzleSlot: MuzzleSlot {
            class compatibleItems {
                ls_muzzle_westar35s_suppressor = 1;
            };
        };
    };
};

class ls_weapon_westar35c: ls_weapon_westar35c_base {
    scope = 2;
    author = AUTHOR;
    baseWeapon = "ls_weapon_westar35c";
};
