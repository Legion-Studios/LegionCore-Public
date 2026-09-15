class ls_weapon_westar35c_base: ls_rifle_base {
    scope = 0;
    author = AUTHOR;
    displayname = CSTRING(westar35c_displayName);
    descriptionShort = ECSTRING(weapons,blasterCarbine);
    baseWeapon = "ls_weapon_westar35c";

    model = QPATHTOF(westar35c\ls_weapon_westar35c.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {QPATHTOF(westar35c\data\camo1_co.paa)};
    picture = QPATHTOF(data\ui\westar35c_ui_ca.paa);

    handAnim[] = {"OFP2_ManSkeleton", "\A3\Weapons_F_epa\LongRangeRifles\DMR_01\Data\Anim\dmr_01.rtm"};
    reloadAction = "ls_reload_westar35s";

    magazines[] = {"ls_magazine_westar35c"};
    magazineWell[] = {"ls_magwell_westar35c"};

    drySound[] = {QPATHTOEF(sounds,weapons\westar35s\dry.wss), 0.39810717, 1, 20};
    reloadMagazineSound[] = {QPATHTOEF(sounds,weapons\westar35s\reload.wss), 0.56234133, 1, 30};

    fireLightDiffuse[] = {FIRELIGHT_YELLOW};

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
        reloadTime = RPM(450);
        dispersion = 0.00116;
        maxRange = 400;
        maxRangeProbab = 0.3;
        midRange = 300;
        midRangeProbab = 0.5;
        minRange = 120;
        minRangeProbab = 0.7;

        sounds[] = {"StandardSound"};
        class StandardSound {
            soundSetShot[] = {"ls_westar35c_Shot_SoundSet", "ls_mediumBlaster_Tail_SoundSet"};
        };
    };
    class FullAuto: Mode_FullAuto {
        reloadTime = RPM(450);
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
            soundSetShot[] = {"ls_westar35c_Shot_SoundSet", "ls_mediumBlaster_Tail_SoundSet"};
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
        aiRateOfFire = 2;
        aiRateOfFireDistance = 900;
    };
    class fullauto_far: fullauto_medium {
        burst = "2 + round random 3";
        maxRange = 500;
        maxRangeProbab = 0.2;
        midRange = 400;
        midRangeProbab = 0.2;
        minRange = 300;
        minRangeProbab = 0.1;
        aiRateOfFireDistance = 400;
    };

    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 65;

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
};
