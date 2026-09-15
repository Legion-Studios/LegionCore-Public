class CfgMagazines {
    class ls_magazine_base;
    class ls_magazine_westar35c: ls_magazine_base {
        scope = 2;
        author = AUTHOR;

        displayName = CSTRING(westar35c_magazine_displayName);
        displayNameShort = ECSTRING(weapons,standardEnergy);
        descriptionShort = CSTRING(westar35c_magazine_descriptionShort);
        model = QPATHTOEF(weapons_dcseries,dc15s\ls_magazine_dc15s.p3d);
        picture = QPATHTOF(data\ui\westar35c_mag_ui_ca.paa);

        initSpeed = 774;
        mass = 12;

        count = 45;
        ammo = "ls_ammo_556x45_yellow";
    };

    class ls_magazine_westar35s: ls_magazine_base {
        scope = 2;
        author = AUTHOR;

        displayName = CSTRING(westar35s_magazine_displayName);
        displayNameShort = ECSTRING(weapons,standardEnergy);
        descriptionShort = CSTRING(westar35s_magazine_descriptionShort);
        model = QPATHTOEF(weapons_dcseries,dc15a\ls_magazine_dc15a.p3d);
        picture = QPATHTOF(data\ui\westar35c_mag_ui_ca.paa);

        initSpeed = 774;
        mass = 10;

        count = 35;
        ammo = "ls_ammo_65x39_yellow";
    };

    class ls_magazine_westar35s_scatter: ls_magazine_base {
        scope = 2;
        author = AUTHOR;

        displayName = CSTRING(westar35s_magazine_scatter_displayName);
        displayNameShort = ECSTRING(weapons,standardEnergy);
        descriptionShort = CSTRING(westar35s_magazine_scatter_descriptionShort);
        model = QPATHTOEF(weapons_dcseries,dc15a\ls_magazine_dc15a.p3d);
        picture = QPATHTOF(data\ui\westar35c_mag_ui_ca.paa);

        initSpeed = 380;

        mass = 30;
        count = 10;
        ammo = "ls_ammo_12Gauge_Pellets_Submunition_yellow";
    };

    class ls_magazine_westar35sa: ls_magazine_base {
        scope = 2;
        author = AUTHOR;

        displayName = CSTRING(westar35sa_magazine_displayName);
        displayNameShort = ECSTRING(weapons,lowEnergy);
        descriptionShort = CSTRING(westar35sa_magazine_descriptionShort);

        model = QPATHTOEF(weapons_dcseries,dc17s\ls_magazine_dc17s.p3d);
        picture = QPATHTOF(data\ui\westar35sa_mag_ui_ca.paa);

        initSpeed = 430;
        mass = 10;

        count = 17;
        ammo = "ls_ammo_45ACP_yellow";
    };

    class ls_magazine_westarM5: ls_magazine_base {
        scope = 2;
        author = AUTHOR;

        displayName = CSTRING(westarM5_magazine_displayName);
        displayNameShort = ECSTRING(weapons,standardEnergy);
        descriptionShort = CSTRING(westarM5_magazine_descriptionShort);

        model = QPATHTOF(westarM5\ls_magazine_westarM5.p3d);
        picture = QPATHTOF(data\ui\westarM5_mag_ui_ca.paa);

        initSpeed = 715;
        mass = 10;

        count = 60;
        ammo = "ls_ammo_762x39_blue";
    };

    class ls_magazine_westarM5_lowEnergy: ls_magazine_westarM5 {
        author = AUTHOR;
        displayName = CSTRING(westarM5_magazine_lowEnergy_displayName);
        displayNameShort = ECSTRING(weapons,lowEnergy);
        descriptionShort = CSTRING(westarM5_magazine_lowEnergy_descriptionShort);

        initSpeed = 869;
        mass = 16;

        count = 100;
        ammo = "ls_ammo_556x45_blue";
    };
};
