class ls_weapon_dc15sa_base: ls_pistol_base {
    scope = 0;
    author = AUTHOR;
    displayName = "DC-15SA";

    model = QPATHTOF(dc15sa\ls_weapon_dc15sa.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(dc15sa\data\camo1_co.paa)
    };
    picture = QPATHTOF(data\ui\dc15sa_ui_ca.paa);
    reloadAction = "GestureReloadPistol";
    recoil = "recoil_pistol_4five";
    magazineReloadSwitchPhase = 0.4;

    magazines[] = {"ls_magazine_dc15sa"};
    magazineWell[] = {"ls_magwell_dc15sa"};

    fireLightDuration = 0.05;
    fireLightIntensity = 0.4;
    fireLightDiffuse[] = {0, 0, 0.01};
    fireLightAmbient[] = {0, 0, 0};

    reloadMagazineSound[] = {QPATHTOEF(sounds,weapons\reload\dc15sa.wss), 0.56234133, 1, 30};

    initspeed = 300;
    maxRecoilSway = 0.0125;
    swayDecaySpeed = 1.25;
    inertia = 1.4;
    dexterity = 1.7;

    modes[] = {"Single"};
    muzzles[] = {"this"};
    class Single: Mode_SemiAuto {
        // TODO: Convert to sound shader
        sounds[] = {"StandardSound"};
        class StandardSound {
            begin1[] = {QPATHTOEF(sounds,weapons\dc15sa\shot1.wss), 1, 1, 1800};
            soundBegin[] = {"begin1", 1};
        };

        recoil = "recoil_pistol_heavy";
        recoilProne = "recoil_prone_pistol_heavy";
        reloadTime = 0.1;
        dispersion = 0.01;
        minRange = 5;
        minRangeProbab = 0.3;
        midRange = 25;
        midRangeProbab = 0.6;
        maxRange = 50;
        maxRangeProbab = 0.1;
        aiRateOfFire = 2;
        aiRateOfFireDistance = 25;
    };

    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 24;
        holsterScale = 0.9;
    };
};

class ls_weapon_dc15sa: ls_weapon_dc15sa_base {
    scope = 2;
    author = AUTHOR;
    baseWeapon = "ls_weapon_dc15sa";
};

class ls_weapon_dc15sa_activeCamo: ls_weapon_dc15sa {
    scope = 1;
    author = AUTHOR;
    hiddenSelectionsTextures[] = {
        QPATHTOEF(data,textures\blank_ca.paa)
    };
    hiddenSelectionsMaterials[] = {
        QPATHTOEF(data,materials\activeCamo.rvmat)
    };
};
