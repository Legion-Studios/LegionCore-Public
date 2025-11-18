class ls_magazine_2Rnd_40mw_G77_HEAB: ls_magazine_base {
    scope = 2;
    displayName = "G772 2Rnd High Explosive Bounding Shell";
    displayNameShort = "G77 HE-AB";
    descriptionShort = "G77 High Explosive Bounding Shell<br />Rounds: 2";
    picture = "\A3\Weapons_f\Data\ui\gear_UGL_slug_CA.paa";

    initSpeed = 76;
    mass = 10;

    ammo = "ls_40mm_G77_HEAB";
    count = 2;
};

class ls_magazine_3Rnd_40mw_IM41: ls_magazine_base {
    scope = 2;
    type = 16;
    displayName = "IM41 High Explosive Shell (x3)";
    displayNameShort = "IM41 HE (x3)";
    picture = "\A3\Weapons_f\Data\ui\gear_UGL_slug_CA.paa";
    ammo = "ls_40mm_IM41_HE";
    initSpeed = 76;
    count = 3;
    nameSound = "";
    descriptionShort = "IM41 High Explosive Grenade Shell";
    mass = 15;
};

class ls_magazine_2Rnd_40mw_IM41: ls_magazine_3Rnd_40mw_IM41 {
    displayName = "IM41 High Explosive Shell (x2)";
    displayNameShort = "IM41 HE (x2)";
    mass = 10;
};

class ls_magazine_3Rnd_40mw_IM92F: ls_magazine_base {
    scope = 2;
    type = 16;
    displayName = "IM92F Fragmentation Shell (x3)";
    displayNameShort = "IM92F Frag (x3)";
    picture = "\A3\Weapons_f\Data\ui\gear_UGL_slug_CA.paa";
    ammo = "ls_40mm_IM92F_HEF";
    initSpeed = 76;
    count = 3;
    nameSound = "";
    descriptionShort = "IM92F Fragmentation Grenade Shell";
    mass = 15;
};

class ls_magazine_2Rnd_40mw_IM92F: ls_magazine_3Rnd_40mw_IM92F {
    displayName = "IM92F Fragmentation Shell (x2)";
    displayNameShort = "IM92F Frag (x2)";
    mass = 10;
};

class ls_magazine_3Rnd_40mw_IM304D: ls_magazine_base {
    scope = 2;
    type = 16;
    displayName = "IM304D High Explosive Dual-Purpose Shell (x3)";
    displayNameShort = "IM304D HEDP (x3)";
    picture = "\A3\Weapons_f\Data\ui\gear_UGL_slug_CA.paa";
    ammo = "ls_40mm_IM304D_HEDP";
    initSpeed = 76;
    count = 3;
    nameSound = "";
    descriptionShort = "IM304D High Explosive Dual-Purpose Grenade Shell";
    mass = 15;
};

class ls_magazine_2Rnd_40mw_IM304D: ls_magazine_3Rnd_40mw_IM304D {
    displayName = "IM304D High Explosive Dual-Purpose Shell (x2)";
    displayNameShort = "IM304D HEDP (x2)";
    count = 2;
    mass = 10;
};

class ls_magazine_2Rnd_40mw_IM334K: ls_magazine_base {
    scope = 2;
    type = 16;
    displayName = "IM334K High Explosive Anti-Tank Shell (x2)";
    displayNameShort = "IM334K HEAT (x2)";
    picture = "\A3\Weapons_f\Data\ui\gear_UGL_slug_CA.paa";
    ammo = "ls_40mm_IM334K_HEAT";
    initSpeed = 76;
    count = 2;
    nameSound = "";
    descriptionShort = "IM334K High Explosive Anti-Tank Shell";
    mass = 18;
};

class ls_magazine_2Rnd_40mw_IM973B: ls_magazine_base {
    scope = 2;
    type = 16;
    displayName = "IM973B High Explosive Bounding Shell (x2)";
    displayNameShort = "IM973B HE-AB (x2)";
    ammo = "ls_40mm_IM973B_HEAB";
    initSpeed = 76;
    count = 2;
    nameSound = "";
    descriptionShort = "IM973B High Explosive Bounding Grenade Shell";
    mass = 10;
};

class ls_magazine_3Rnd_40mw_G76_HEF: ls_magazine_base {
    scope = 2;
    type = 16;
    displayName = "G76 High Explosive Fragmentation Shell (x3)";
    displayNameShort = "G76 HE-F (x3)";
    ammo = "ls_40mm_G76_HEF";
    initSpeed = 76;
    count = 3;
    nameSound = "";
    descriptionShort = "G76 High Explosive Fragmentation Shell";
    mass = 10;
};

class ls_magazine_3Rnd_40mw_G75_HE: ls_magazine_base {
    scope = 2;
    type = 16;
    displayName = "G75 High Explosive Shell (x3)";
    displayNameShort = "G75 HE (x3)";
    ammo = "ls_40mm_G75_HE";
    initSpeed = 76;
    count = 3;
    nameSound = "";
    descriptionShort = "G75 High Explosive Shell";
    mass = 10;
};
