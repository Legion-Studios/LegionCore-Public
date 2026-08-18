class CfgMagazines {
    class ls_magazine_base;
    class ls_magazine_eSeries_universal: ls_magazine_base {
        scope = 2;
        author = AUTHOR;
        displayName = CSTRING(universal_magazine_displayName);
        displayNameShort = ECSTRING(weapons,standardEnergy);
        descriptionShort = CSTRING(universal_magazine_descriptionShort);

        model = QPATHTOF(ls_magazine_eSeries_universal.p3d);
        modelSpecial = QPATHTOF(ls_magazine_eSeries_universal.p3d);
        modelSpecialIsProxy = 1;
        picture = QPATHTOF(data\ui\universal_mag_ui_ca.paa);

        initSpeed = 774;
        mass = 8;

        count = 30;
        ammo = "ls_ammo_65x39_red";
    };
    DEPRECATED(ls_magazine_e5,ls_magazine_eSeries_universal);

    class ls_magazine_e5c: ls_magazine_base {
        scope = 2;
        author = AUTHOR;
        displayName = CSTRING(e5c_magazine_displayName);
        displayNameShort = ECSTRING(weapons,standardEnergy);
        descriptionShort = CSTRING(e5c_magazine_descriptionShort);

        // TODO: Extended magazine model
        model = QPATHTOF(ls_magazine_eSeries_universal.p3d);
        modelSpecial = QPATHTOF(ls_magazine_eSeries_universal.p3d);
        modelSpecialIsProxy = 1;
        picture = QPATHTOF(data\ui\universal_mag_ui_ca.paa);

        initSpeed = 743;
        mass = 50;

        count = 200;
        ammo = "ls_ammo_65x39_red";
    };

    class ls_magazine_e11: ls_magazine_base {
        scope = 2;
        author = AUTHOR;

        displayName = CSTRING(e11_magazine_displayName);
        displayNameShort = ECSTRING(weapons,standardEnergy);
        descriptionShort = CSTRING(e11_magazine_descriptionShort);

        model = QPATHTOF(e11\ls_magazine_e11.p3d);
        modelSpecial = QPATHTOF(e11\ls_magazine_e11.p3d);
        modelSpecialIsProxy = 1;
        picture = QPATHTOF(data\ui\e11_magazine_ui_ca.paa);

        initSpeed = 500;
        mass = 12;

        count = 45;
        ammo = "ls_ammo_65x39_red";
    };

    class ls_launcherMagazine_base;
    class ls_magazine_e60r_at: ls_launcherMagazine_base {
        scope = 2;
        author = AUTHOR;

        displayName = CSTRING(e60r_at_magazine_displayName);
        displayNameShort = "$STR_A3_CfgMagazines_Titan_AT_dns";
        descriptionShort = CSTRING(e60r_at_magazine_descriptionShort);

        model = QPATHTOEF(weapons_rps,ls_magazine_rps6.p3d);
        picture = QPATHTOEF(weapons_rps,data\ui\rps6_mag_ui_ca.paa);

        initSpeed = 40;
        mass = 50;
        maxLeadSpeed = 27.7778;
        type = 256;

        count = 3;
        ammo = "ls_missile_e60r_at";
    };
    AI_MAG(ls_magazine_e60r_at);

    class ls_magazine_e60r_ap: ls_magazine_e60r_at {
        author = AUTHOR;
        displayName = CSTRING(e60r_ap_magazine_displayName);
        displayNameShort = "$STR_A3_CfgMagazines_Titan_AP_dns";
        descriptionShort = CSTRING(e60r_ap_magazine_descriptionShort);
        ammo = "ls_missile_e60r_ap";
    };
    AI_MAG(ls_magazine_e60r_ap);

    // Might be able to use SACLOS guidance on AP round if no target is locked?
    class ls_magazine_e60r_ap_SACLOS: ls_magazine_e60r_ap {
        author = AUTHOR;
        displayNameShort = "AP (SACLOS)";
        displayName = "E-60R AP Missile Pack (SACLOS)";
        ammo = "ls_missile_e60r_ap_SACLOS";
    };
    AI_MAG(ls_magazine_e60r_ap_SACLOS);

    class ls_magazine_e60r_aa: ls_magazine_e60r_at {
        author = AUTHOR;
        displayName = CSTRING(e60r_aa_magazine_displayName);
        displayNameShort = "$STR_A3_CfgMagazines_Titan_AA_dns";
        descriptionShort = CSTRING(e60r_aa_magazine_descriptionShort);
        ammo = "ls_missile_e60r_aa";
    };
    AI_MAG(ls_magazine_e60r_aa);
};
