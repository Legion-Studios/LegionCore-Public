class CfgMagazines {
    class ls_launcherMagazine_base;
    class ls_magazine_plx1_at: ls_launcherMagazine_base {
        scope = 2;
        author = AUTHOR;

        displayName = CSTRING(plx1_at_magazine_displayName);
        displayNameShort = "$STR_A3_CfgMagazines_Titan_AT_dns";
        descriptionShort = CSTRING(plx1_at_magazine_descriptionShort);

        model = QPATHTOEF(weapons_rps,ls_magazine_rps6.p3d);
        picture = QPATHTOEF(weapons_rps,data\ui\rps6_mag_ui_ca.paa);

        initSpeed = 80;
        mass = 80;
        maxLeadSpeed = 27.7778;
        type = 256;

        count = 2;
        ammo = "ls_missile_plx1_at";
    };
    AI_MAG(ls_magazine_plx1_at);

    class ls_magazine_plx1_ap: ls_magazine_plx1_at {
        author = AUTHOR;
        displayName = CSTRING(plx1_ap_magazine_displayName);
        displayNameShort = "$STR_A3_CfgMagazines_Titan_AP_dns";
        descriptionShort = CSTRING(plx1_ap_magazine_descriptionShort);
        ammo = "ls_missile_plx1_ap";
    };
    AI_MAG(ls_magazine_plx1_ap);

    class ls_magazine_plx1_ap_SACLOS: ls_magazine_plx1_ap {
        author = AUTHOR;
        displayName = CSTRING(plx1_ap_SACLOS_magazine_displayName);
        displayNameShort = ECSTRING(weapons,ap_SACLOS);
        descriptionShort = CSTRING(plx1_ap_SACLOS_magazine_descriptionShort);
        ammo = "ls_missile_plx1_ap_SACLOS";
    };
    AI_MAG(ls_magazine_plx1_ap_SACLOS);

    class ls_magazine_plx1_aa: ls_magazine_plx1_at {
        author = AUTHOR;
        displayName = CSTRING(plx1_aa_magazine_displayName);
        displayNameShort = "$STR_A3_CfgMagazines_Titan_AA_dns";
        descriptionShort = CSTRING(plx1_aa_magazine_descriptionShort);
        ammo = "ls_missile_plx1_aa";
    };
    AI_MAG(ls_magazine_plx1_aa);
};
