class ls_weapon_dc15sa_base: ls_pistol_base {
    scope = 0;
    author = AUTHOR;
    displayName = CSTRING(dc15sa_displayName);
    descriptionShort = ECSTRING(weapons,descriptionShort);

    model = QPATHTOF(dc15sa\ls_weapon_dc15sa.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(dc15sa\data\camo1_co.paa)
    };
    picture = QPATHTOF(data\ui\dc15sa_ui_ca.paa);

    magazines[] = {"ls_magazine_dc15sa"};
    magazineWell[] = {"ls_magwell_dc15sa"};
    magazineReloadSwitchPhase = 0.4;

    reloadAction = "GestureReloadPistol";
    reloadMagazineSound[] = {QPATHTOEF(sounds,weapons\reload\dc15sa.wss), 0.56234133, 1, 30};

    recoil = "recoil_pistol_zubr";
    initspeed = -0.905512;
    maxRecoilSway = 0.0125;
    swayDecaySpeed = 2;
    inertia = 1.4;
    dexterity = 1.7;
    aimTransition = 1.5;

    muzzles[] = {"this"};
    modes[] = {"Single"};
    class Single: Mode_SemiAuto {
        recoil = "recoil_pistol_heavy";
        recoilProne = "recoil_prone_pistol_heavy";
        reloadTime = RPM(240);
        dispersion = 0.01;
        maxRange = 50;
        maxRangeProbab = 0.1;
        midRange = 25;
        midRangeProbab = 0.6;
        minRange = 5;
        minRangeProbab = 0.3;
        aiRateOfFire = 2;
        aiRateOfFireDistance = 25;

        sounds[] = {"StandardSound"};
        class StandardSound {
            soundSetShot[] = {"ls_dc15sa_Shot_SoundSet", "ls_mediumBlaster_Tail_SoundSet"};
        };
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
