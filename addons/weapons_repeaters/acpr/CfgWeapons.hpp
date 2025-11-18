class ls_weapon_acpr_base: ls_rifle_base {
    scope = 0;
    author = AUTHOR;
    displayName = "ACP-R";
    descriptionShort = "Accelerated Charged Particle - Repeater";

    model = QPATHTOF(acpr\ls_weapon_acpr.p3d);
    hiddenSelections[] = {};
    hiddenSelectionsTextures[] = {};
    picture = QPATHTOF(data\ui\acpr_ui_ca.paa);

    handAnim[] = {
        "OFP2_ManSkeleton",
        QPATHTOF(acpr\anims\acpr_handanim.rtm)
    };
    reloadAction = "ReloadMagazine";

    magazines[] = {"ls_magazine_acpr"};
    magazineWell[] = {"ls_magwell_acpr"};

    selectionFireAnim = "zasleh";
    drySound[] = {QPATHTOEF(sounds,weapons\dry\z6.wss), 2, 1, 20};
    reloadMagazineSound[] = {QPATHTOEF(sounds,weapons\reload\acpr.ogg), 0.56234133, 1, 30};

    fireLightDuration = 0.05;
    fireLightIntensity = 0.4;
    fireLightDiffuse[] = {0.01, 0.01, 0};
    fireLightAmbient[] = {0, 0, 0};

    inertia = 1.4;
    dexterity = 1.7;
    initSpeed = -1;
    recoil = "ls_recoil";
    maxRecoilSway = 0.015;
    swayDecaySpeed = 1;

    modes[] = {
        "FullAuto",
        "close",
        "short",
        "medium"
    };
    muzzles[] = {"this"};
    class Single: Mode_SemiAuto {
        sounds[] = {"StandardSound"};
        class StandardSound {
            begin1[] = {QPATHTOEF(sounds,weapons\ls150\shot1.wss), 1, 1, 800};
            soundBegin[] = {"begin1", 1};
        };
        reloadTime = 0.15;
        dispersion = 0.003015;
        minRange = 5;
        minRangeProbab = 0.3;
        midRange = 25;
        midRangeProbab = 0.6;
        maxRange = 50;
        maxRangeProbab = 0.1;
        aiRateOfFire = 2;
        aiRateOfFireDistance = 25;
    };
    class FullAuto: Mode_FullAuto {
        sounds[] = {"StandardSound"};
        class StandardSound {
            begin1[] = {QPATHTOEF(sounds,weapons\ls150\shot1.wss), 1, 1, 800};
            soundBegin[] = {"begin1", 1};
        };
        reloadTime = 0.1;
        dispersion = 0.0014545;
        minRange = 5;
        minRangeProbab = 0.3;
        midRange = 25;
        midRangeProbab = 0.6;
        maxRange = 50;
        maxRangeProbab = 0.1;
        aiRateOfFire = 2;
        aiRateOfFireDistance = 25;
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

class ls_weapon_acpr: ls_weapon_acpr_base {
    scope = 2;
    author = AUTHOR;
    baseWeapon = "ls_weapon_acpr";
};
