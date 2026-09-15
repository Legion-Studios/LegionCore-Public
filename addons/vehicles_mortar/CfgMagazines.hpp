class CfgMagazines {
    class ls_vehicleMagazine_base;
    class ls_5Rnd_82mm_mortar_HE: ls_vehicleMagazine_base {
        scope = 2;
        author = AUTHOR;

        displayName = "82mm HE Shells";
        displayNameMFDFormat = "HE";
        displayNameShort = "HE";

        initSpeed = 200;
        muzzleImpulseFactor[] = {0, 0};
        nameSound = "heat";
        mass = 50;

        ammo = "ls_82mm_mortar_he";
        count = 5;
    };

    MAG_CSW(ls_5Rnd_82mm_mortar_HE,1);
};
