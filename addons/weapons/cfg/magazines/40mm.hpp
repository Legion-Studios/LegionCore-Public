#define MASS_40MM 6
#define MASS_40MM_3RND (MASS_40MM * 3)

class ls_magazine_40mm_base: ls_magazine_base {
    scope = 0;
    author = AUTHOR;

    model = "\a3\Weapons_F\MagazineProxies\mag_40x36_HE_1rnd.p3d";
    modelSpecial = "\a3\Weapons_F\MagazineProxies\mag_40x36_HE_1rnd.p3d";
    modelSpecialIsProxy = 1;
    picture = "\A3\Weapons_f\Data\ui\gear_UGL_slug_CA.paa";

    type = 16;
    initSpeed = 76;
    mass = MASS_40MM;
    count = 1;
};
class ls_magazine_40mm_G77_HEAB: ls_magazine_40mm_base {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(40mm_G77_HEAB_displayName);
    displayNameShort = CSTRING(heabGrenade);
    descriptionShort = CSTRING(40mm_G77_HEAB_descriptionShort);

    ammo = "ls_ammo_40mm_G77_HEAB";
};
class ls_magazine_40mm_3Rnd_G77_HEAB: ls_magazine_40mm_G77_HEAB {
    author = AUTHOR;
    displayName = CSTRING(40mm_3Rnd_G77_HEAB_displayName);
    descriptionShort = CSTRING(40mm_3Rnd_G77_HEAB_descriptionShort);

    mass = MASS_40MM_3RND;
    count = 3;
};

class ls_magazine_40mm_IM41_HE: ls_magazine_40mm_base {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(40mm_IM41_HE_displayName);
    displayNameShort = CSTRING(heGrenade);
    descriptionShort = "$STR_A3_CfgMagazines_1Rnd_HE_Grenade_shell1";
    ammo = "ls_ammo_40mm_IM41_HE";
};
class ls_magazine_40mm_3Rnd_IM41_HE: ls_magazine_40mm_IM41_HE {
    author = AUTHOR;
    displayName = CSTRING(40mm_3Rnd_IM41_HE_displayName);
    descriptionShort = "$STR_A3_CfgMagazines_3Rnd_HE_Grenade_shell1";

    mass = MASS_40MM_3RND;
    count = 3;
};

class ls_magazine_40mm_IM92F_HEF: ls_magazine_40mm_base {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(40mm_IM92F_HEF_displayName);
    displayNameShort = CSTRING(hefGrenade);
    descriptionShort = CSTRING(40mm_IM92F_HEF_descriptionShort);
    ammo = "ls_ammo_40mm_IM92F_HEF";
};
class ls_magazine_40mm_3Rnd_IM92F_HEF: ls_magazine_40mm_IM92F_HEF {
    author = AUTHOR;
    displayName = CSTRING(40mm_3Rnd_IM92F_HEF_displayName);
    descriptionShort = CSTRING(40mm_3Rnd_IM92F_HEF_descriptionShort);

    mass = MASS_40MM_3RND;
    count = 3;
};

class ls_magazine_40mm_IM304D_HEDP: ls_magazine_40mm_base {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(40mm_IM304D_HEDP_displayName);
    displayNameShort = CSTRING(hedpGrenade);
    descriptionShort = CSTRING(40mm_IM304D_HEDP_descriptionShort);
    ammo = "ls_ammo_40mm_IM304D_HEDP";
};
class ls_magazine_40mm_3Rnd_IM304D_HEDP: ls_magazine_40mm_IM304D_HEDP {
    author = AUTHOR;
    displayName = CSTRING(40mm_3Rnd_IM304D_HEDP_displayName);
    descriptionShort = CSTRING(40mm_3Rnd_IM304D_HEDP_descriptionShort);

    mass = MASS_40MM_3RND;
    count = 3;
};

class ls_magazine_40mm_IM334K_HEAT: ls_magazine_40mm_base {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(40mm_IM334K_HEAT_displayName);
    displayNameShort = CSTRING(heatGrenade);
    descriptionShort = CSTRING(40mm_IM334K_HEAT_descriptionShort);
    ammo = "ls_ammo_40mm_IM334K_HEAT";
};
class ls_magazine_40mm_3Rnd_IM334K_HEAT: ls_magazine_40mm_IM334K_HEAT {
    author = AUTHOR;
    displayName = CSTRING(40mm_3Rnd_IM334K_HEAT_displayName);
    descriptionShort = CSTRING(40mm_3Rnd_IM334K_HEAT_descriptionShort);

    mass = MASS_40MM_3RND;
    count = 3;
};

class ls_magazine_40mm_IM973B_HEAB: ls_magazine_40mm_base {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(40mm_IM973B_HEAB_displayName);
    displayNameShort = CSTRING(heabGrenade);
    descriptionShort = CSTRING(40mm_IM973B_HEAB_descriptionShort);
    ammo = "ls_ammo_40mm_IM973B_HEAB";
};
class ls_magazine_40mm_3Rnd_IM973B_HEAB: ls_magazine_40mm_IM973B_HEAB {
    author = AUTHOR;
    displayName = CSTRING(40mm_3Rnd_IM973B_HEAB_displayName);
    descriptionShort = CSTRING(40mm_3Rnd_IM973B_HEAB_descriptionShort);

    mass = MASS_40MM_3RND;
    count = 3;
};

class ls_magazine_40mm_G76_HEF: ls_magazine_40mm_base {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(40mm_G76_HEF_displayName);
    displayNameShort = CSTRING(hefGrenade);
    descriptionShort = CSTRING(40mm_G76_HEF_descriptionShort);
    ammo = "ls_ammo_40mm_G76_HEF";
};
class ls_magazine_40mm_3Rnd_G76_HEF: ls_magazine_40mm_G76_HEF {
    author = AUTHOR;
    displayName = CSTRING(40mm_3Rnd_G76_HEF_displayName);
    descriptionShort = CSTRING(40mm_3Rnd_G76_HEF_descriptionShort);

    mass = MASS_40MM_3RND;
    count = 3;
};

class ls_magazine_40mm_G75_HE: ls_magazine_40mm_base {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(40mm_G75_HE_displayName);
    displayNameShort = CSTRING(heGrenade);
    descriptionShort = CSTRING(40mm_G75_HE_descriptionShort);
    ammo = "ls_ammo_40mm_G75_HE";
};
class ls_magazine_40mm_3Rnd_G75_HE: ls_magazine_40mm_G76_HEF {
    author = AUTHOR;
    displayName = CSTRING(40mm_3Rnd_G75_HE_displayName);
    descriptionShort = CSTRING(40mm_3Rnd_G75_HE_descriptionShort);

    mass = MASS_40MM_3RND;
    count = 3;
};
