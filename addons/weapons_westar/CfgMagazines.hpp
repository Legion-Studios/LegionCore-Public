class CfgMagazines {
    class ls_magazine_base;
    class ls_magazine_westar35c: ls_magazine_base {
        scope = 2;
        author = AUTHOR;

        displayName = "Westar-35C Energy Cell";
        displayNameShort = "Standard Energy";
        descriptionShort = "Energy Cell<br/>Rounds: 35<br/>Used in: Westar-35C";
        model = QPATHTOEF(weapons_dcseries,dc15s\ls_magazine_dc15s.p3d);
        picture = QPATHTOF(data\ui\westar35c_mag_ui_ca.paa);

        count = 35;
        ammo = "ls_bullet_12mw_yellow";
    };

    class ls_magazine_westar35s: ls_magazine_base {
        scope = 2;
        author = AUTHOR;

        displayName = "Westar-35S Energy Cell";
        displayNameShort = "Standard Energy";
        descriptionShort = "Energy Cell<br/>Rounds: 35<br/>Used in: Westar-35S";
        model = QPATHTOEF(weapons_dcseries,dc15a\ls_magazine_dc15a.p3d);
        picture = QPATHTOF(data\ui\westar35c_mag_ui_ca.paa);

        count = 35;
        ammo = "ls_bullet_192mw_yellow";
    };

    class ls_magazine_westar35s_scatter: ls_magazine_base {
        scope = 2;
        author = AUTHOR;

        displayName = "Westar-35S Scatter Energy Cell";
        displayNameShort = "Low Energy";
        descriptionShort = "Scatter Energy Cell<br/>Rounds: 10<br/>Used in: Westar-35S Underbarrel Scattergun";
        model = QPATHTOEF(weapons_dcseries,dc15a\ls_magazine_dc15a.p3d);
        picture = QPATHTOF(data\ui\westar35c_mag_ui_ca.paa);

        count = 35;
        ammo = "ls_12Gauge_Pellets_Submunition";
    };

    class ls_magazine_westar35sa: ls_magazine_base {
        scope = 2;
        author = AUTHOR;

        displayName = "Westar-35SA Energy Cell";
        displayNameShort = "Low Energy";
        descriptionShort = "Energy Cell<br/>Rounds: 17<br/>Used in: Westar-35SA";

        model = QPATHTOEF(weapons_dcseries,dc17s\ls_magazine_dc17s.p3d);
        picture = QPATHTOF(data\ui\westar35sa_mag_ui_ca.paa);

        count = 30;
        ammo = "ls_bullet_12mw_yellow";
    };

    class ls_magazine_westarM5: ls_magazine_base {
        scope = 2;
        author = AUTHOR;

        displayName = "Westar-M5 Energy Cell";
        displayNameShort = "Standard Energy";
        descriptionShort = "Energy Cell<br/>Rounds: 60<br/>Used in: Westar-M5";

        model = QPATHTOF(westarM5\ls_magazine_westarM5.p3d);
        picture = QPATHTOF(data\ui\westarM5_mag_ui_ca.paa);

        count = 60;
        ammo = "ls_bullet_556mw_blue";
    };

    class ls_magazine_westarM5_lowEnergy: ls_magazine_westarM5 {
        author = AUTHOR;
        displayName = "Westar-M5 Low Energy Cell";
        displayNameShort = "Low Energy";
        descriptionShort = "Energy Cell<br/>Rounds: 100<br/>Used in: Westar-M5";
        count = 100;
        ammo = "ls_bullet_45mw_blue";
    };
};
