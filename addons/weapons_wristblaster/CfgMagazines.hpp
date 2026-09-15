class CfgMagazines {
    class ls_magazine_base;
    class ls_magazine_wristblaster_B2: ls_magazine_base {
        scope = 2;
        author = AUTHOR;
        displayName = CSTRING(b2_magazine_displayname);
        displayNameShort = ECSTRING(weapons,standardEnergy);
        descriptionShort = CSTRING(b2_magazine_descriptionShort);

        model = QPATHTOEF(weapons_eseries,ls_magazine_eSeries_universal.p3d);
        modelSpecial = QPATHTOEF(weapons_eseries,ls_magazine_eSeries_universal.p3d);
        modelSpecialIsProxy = 1;
        picture = QPATHTOEF(weapons_eseries,data\ui\universal_mag_ui_ca.paa);

        initSpeed = 920;
        maxLeadSpeed = 27.7778;
        mass = 8;

        count = 60;
        ammo = "ls_ammo_762x39_red";
    };

    class ls_magazine_wristblaster_B2_scatter: ls_magazine_base {
        scope = 2;
        author = AUTHOR;

        displayName = CSTRING(b2_magazine_scatter_displayName);
        displayNameShort = ECSTRING(weapons,standardEnergy);
        descriptionShort = CSTRING(b2_magazine_scatter_descriptionShort);

        model = QPATHTOEF(weapons_eseries,ls_magazine_eSeries_universal.p3d);
        modelSpecial = QPATHTOEF(weapons_eseries,ls_magazine_eSeries_universal.p3d);
        modelSpecialIsProxy = 1;
        picture = QPATHTOEF(weapons_eseries,data\ui\universal_mag_ui_ca.paa);

        initSpeed = 380;

        mass = 30;
        count = 10;
        ammo = "ls_ammo_12Gauge_Pellets_Submunition_red";
    };

    class ls_magazine_wristblaster_droideka: ls_magazine_base {
        scope = 2;
        author = AUTHOR;
        displayName = CSTRING(droideka_magazine_displayName);
        displayNameShort = ECSTRING(weapons,standardEnergy);
        descriptionShort = CSTRING(droideka_magazine_descriptionShort);

        model = QPATHTOEF(weapons_eseries,ls_magazine_eSeries_universal.p3d);
        modelSpecial = QPATHTOEF(weapons_eseries,ls_magazine_eSeries_universal.p3d);
        modelSpecialIsProxy = 1;
        picture = QPATHTOEF(weapons_eseries,data\ui\universal_mag_ui_ca.paa);

        initSpeed = 920;
        maxLeadSpeed = 27.7778;
        mass = 10;

        count = 120;
        ammo = "ls_ammo_762x51_red";
    };
};
