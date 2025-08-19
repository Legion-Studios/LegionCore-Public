class ls_weapon_dc15s_base: ls_rifle_base {
    scope = 0;
    author = AUTHOR;
    displayname = "DC-15S Blaster Carbine";

    model = QPATHTOF(dc15s\ls_weapon_dc15s.p3d);
    hiddenSelections[] = {"camo1"}; // currently broken, since nothing is added to the camo1 selection
    hiddenSelectionsTextures[] = {
        QPATHTOF(dc15s\data\camo1_co.paa)
    };
    picture = QPATHTOF(data\ui\dc15s_ui_ca.paa);

    handAnim[] = {"OFP2_ManSkeleton", "\A3\Weapons_F_epa\LongRangeRifles\DMR_01\Data\Anim\dmr_01.rtm"};
    reloadAction = "ReloadMagazine";

    magazines[] = {"ls_magazine_dc15s"};
    magazineWell[] = {"ls_magwell_dc15s", "ls_magwell_stun", "ls_magwell_ion"};

    selectionFireAnim = "zasleh";
    drySound[] = {QPATHTOEF(sounds,weapons\dry\generic.wss), 0.39810717, 1, 20};
    reloadMagazineSound[] = {QPATHTOEF(sounds,weapons\reload\dc15s_reload.wss), 0.56234133, 1, 30};

    fireLightDuration = 0.05;
    fireLightIntensity = 0.4;
    fireLightDiffuse[] = {0, 0, 0.01};
    fireLightAmbient[] = {0, 0, 0};

    inertia = 1.4;
    dexterity = 1.7;
    initSpeed = -1;
    maxRecoilSway = 0.015;
    swayDecaySpeed = 1;

    modes[] = {"Single", "FullAuto", "close", "short", "medium"};
    muzzles[] = {"this"};

    class Single: Mode_SemiAuto {
        sounds[] = {"StandardSound"};
        class StandardSound {
            soundSetShot[] = {"ls_dc15s_Shot_SoundSet", "ls_mediumBlaster_Tail_SoundSet"};
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
            soundSetShot[] = {"ls_dc15s_Shot_SoundSet", "ls_mediumBlaster_Tail_SoundSet"};
        };

        reloadTime = 0.15;
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

class ls_weapon_dc15s: ls_weapon_dc15s_base {
    scope = 2;
    author = AUTHOR;
    baseWeapon = "ls_weapon_dc15s";
};
