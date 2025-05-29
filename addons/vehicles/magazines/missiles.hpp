class ls_AD3M_x3_pylon: VehicleMagazine {
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
    pylonWeapon = "ls_AD3M_AAM_Weapon";
};

class ls_148mm_Fletch_x4_mag: VehicleMagazine {
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
    pylonWeapon = "ls_148mw_K2M_ATGM";
};