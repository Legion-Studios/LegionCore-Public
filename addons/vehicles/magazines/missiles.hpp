class ls_magazine_AD3M_3Rnd_pylon: ls_vehicleMagazine_base {
    ammo = "ls_AD3M_AAM";
    count = 3;
    displayName = "AD-3M AAM";
    displayNameShort = "AD-3M AAM";
    tracersEvery = 1;
    model = "a3\weapons_f\empty.p3d";
    initspeed = 50;
    hardpoints[] = {
        "ls_Universal_rail",
    };
    pylonWeapon = "ls_weapon_AD3M_AAM";
};

class ls_magazine_148mm_4Rnd_Fletch: ls_vehicleMagazine_base {
    ammo = "ls_148mm_Fletch_ATGM";
    count = 4;
    displayName = "K-2M Fletch ATGM";
    displayNameShort = "Fletch ATGM";
    tracersEvery = 1;
    initspeed = 50;
    model = "a3\weapons_f\empty.p3d";
    hardpoints[] = {
        "ls_Universal_rail"
    };
    pylonWeapon = "ls_weapon_148mw_K2M_ATGM";
};
