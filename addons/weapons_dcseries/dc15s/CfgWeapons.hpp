class ls_weapon_dc15s_base: ls_rifle_base {
    scope = 0;
    author = AUTHOR;
    displayname = CSTRING(dc15s_displayName);
    descriptionShort = ECSTRING(weapons,blasterCarbine);

    model = QPATHTOF(dc15s\ls_weapon_dc15s.p3d);
    hiddenSelections[] = {"camo1"}; // currently broken, since nothing is added to the camo1 selection
    hiddenSelectionsTextures[] = {
        QPATHTOF(dc15s\data\camo1_co.paa)
    };
    handAnim[] = {"OFP2_ManSkeleton", "\A3\Weapons_F_epa\LongRangeRifles\DMR_01\Data\Anim\dmr_01.rtm"};
    picture = QPATHTOF(data\ui\dc15s_ui_ca.paa);

    magazines[] = {"ls_magazine_dc15s"};
    magazineWell[] = {"ls_magwell_dcSeries", "ls_magwell_dc15s", "ls_magwell_stun", "ls_magwell_ion"};

    reloadMagazineSound[] = {QPATHTOEF(sounds,weapons\reload\dc15s_reload.wss), 0.56234133, 1, 30};

    recoil = "recoil_trg20";
    inertia = 0.3;
    dexterity = 1.7;
    initSpeed = -0.961496;
    maxRecoilSway = 0.008;
    swayDecaySpeed = 2;
    aimTransitionSpeed = 1.4;
    aiDispersionCoefX = 4;

    muzzles[] = {"this"};
    modes[] = {"FullAuto", "Single", "fullauto_medium", "fullauto_far"};
    class Single: Mode_SemiAuto {
        reloadTime = RPM(500);
        dispersion = 0.00116;
        maxRange = 350;
        maxRangeProbab = 0.2;
        midRange = 250;
        midRangeProbab = 0.5;
        minRange = 120;
        minRangeProbab = 0.7;
        aiRateOfFire = 2;
        aiRateOfFireDistance = 500;

        sounds[] = {"StandardSound"};
        class StandardSound {
            soundSetShot[] = {"ls_dc15s_Shot_SoundSet", "ls_mediumBlaster_Tail_SoundSet"};
        };
    };
    class FullAuto: Mode_FullAuto {
        reloadTime = RPM(500);
        dispersion = 0.00116;
        maxRange = 30;
        maxRangeProbab = 0.05;
        midRange = 15;
        midRangeProbab = 0.7;
        minRange = 0;
        minRangeProbab = 0.9;
        aiRateOfFire = 1e-06;
        aiRateOfFireDistance = 500;

        sounds[] = {"StandardSound"};
        class StandardSound {
            soundSetShot[] = {"ls_dc15s_Shot_SoundSet", "ls_mediumBlaster_Tail_SoundSet"};
        };
    };
    class fullauto_medium: FullAuto {
        showToPlayer = 0;
        burst = "3 + round random 5";
        aiRateOfFire = 2;
        aiRateOfFireDistance = 900;
        minRange = 20;
        minRangeProbab = 0.5;
        midRange = 75;
        midRangeProbab = 0.7;
        maxRange = 150;
        maxRangeProbab = 0.05;
    };
    class fullauto_far: fullauto_medium {
        burst = "2 + round random 3";
        aiRateOfFireDistance = 400;
        maxRange = 500;
        maxRangeProbab = 0.2;
        midRange = 400;
        midRangeProbab = 0.2;
        minRange = 300;
        minRangeProbab = 0.1;
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
