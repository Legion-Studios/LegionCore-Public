class ls_weapon_e5_base: ls_rifle_base {
    scope = 0;
    author = AUTHOR;
    displayName = CSTRING(e5_displayName);
    descriptionShort = ECSTRING(weapons,blasterRifle);

    model = QPATHTOF(e5\ls_weapon_e5.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(e5\data\camo1_co.paa)
    };
    picture = QPATHTOF(data\ui\e5_ui_ca.paa);

    handAnim[] = {"OFP2_ManSkeleton", QPATHTOF(e5\anims\e5_handanim.rtm)};
    reloadAction = "ls_reload_e5";

    magazines[] = {"ls_magazine_e5"};
    magazineWell[] = {"ls_magwell_eSeries", "ls_magwell_e5"};

    drySound[] = {QPATHTOEF(sounds,weapons\dry\generic.wss), 0.39810717, 1, 20};
    reloadMagazineSound[] = {QPATHTOEF(sounds,weapons\reload\e5_reload.wss), 0.56234133, 1, 30};

    fireLightDiffuse[] = {FIRELIGHT_RED};

    maxRecoilSway = 0.0125;
    swayDecaySpeed = 1.25;
    initspeed = -0.972222;
    inertia = 0.5;
    dexterity = 1.5;
    aiDispersionCoefX = 4;

    muzzles[] = {"this"};
    modes[] = {
        "FullAuto",
        "Single",
        "fullauto_medium",
        "fullauto_far"
    };
    class Single: Mode_SemiAuto {
        reloadTime = RPM(300);
        dispersion = 0.00095;
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
            soundSetShot[] = {"ls_e5_Shot_SoundSet", "ls_mediumBlaster_Tail_SoundSet"};
        };
    };
    class FullAuto: Mode_FullAuto {
        reloadTime = RPM(300);
        dispersion = 0.00095;
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
            soundSetShot[] = {"ls_e5_Shot_SoundSet", "ls_mediumBlaster_Tail_SoundSet"};
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
        mass = 70;
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

    hiddenSelectionsTextures[] = {QPATHTOEF(data,textures\blank_ca.paa)};
    hiddenSelectionsMaterials[] = {QPATHTOEF(data,materials\activeCamo.rvmat)};
};
