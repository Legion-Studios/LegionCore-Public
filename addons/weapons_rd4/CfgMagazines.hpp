class CfgMagazines {
    class ls_magazine_40mm_3Rnd_IM41_HE;
    class ls_magazine_rd4: ls_magazine_40mm_3Rnd_IM41_HE {
        scope = 2;
        author = AUTHOR;
        displayName = CSTRING(magazine_displayName);
        descriptionShort = CSTRING(magazine_descriptionShort);

        model = QPATHTOEF(weapons_zseries,z6\ls_magazine_z6_grenade.p3d);
        picture = QPATHTOEF(weapons_zseries,data\ui\z6_mag_grenade_ui_ca.paa);
        ammo = "ls_ammo_40mm_IM41_HE_green";
    };

    DEPRECATED(ls_magazine_rd4_6Rnd,ls_magazine_rd4);
};
