class CfgMagazines {
    class ls_magazine_base;
    class ls_magazine_rd4: ls_magazine_base {
        scope = 2;
        author = AUTHOR;
        displayName = "Explosive Radiation Canister (1Rnd)";

        model = QPATHTOEF(weapons_zseries,z6\ls_magazine_z6_grenade.p3d);
        picture = QPATHTOEF(weapons_zseries,data\ui\z6_mag_grenade_ui_ca.paa);
        ammo = "ls_40mm_he_green";
        count = 1;
    };

    class ls_magazine_rd4_6Rnd: ls_magazine_rd4 {
        author = AUTHOR;
        displayName = "Explosive Radiation Canister (6Rnd)";
        count = 6;
    };
};
