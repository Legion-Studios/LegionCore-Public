class CfgMagazines {
    class ls_magazine_base;
    class ls_magazine_acpa: ls_magazine_base {
        scope = 2;
        author = AUTHOR;

        displayName = "ACP-A Scatter Energy Cell";
        displayNameShort = "Low Energy";
        descriptionShort = "Scatter Energy Cell<br/>Rounds: 13<br/>Used in: ACP-A";
        model = QPATHTOF(acpa\ls_magazine_acpa.p3d);
        picture = QPATHTOF(data\ui\acpa_mag_ui_ca.paa);

        count = 13;
        ammo = "ls_12Gauge_Pellets_Submunition";
    };

    class ls_magazine_acpr: ls_magazine_base {
        scope = 2;
        author = AUTHOR;

        displayName = "ACP-R Scatter Energy Cell";
        displayNameShort = "Standard Energy";
        descriptionShort = "Scatter Energy Cell<br/>Rounds: 40<br/>Used in: ACP-R";
        model = QPATHTOF(acpr\ls_magazine_acpr.p3d);
        picture = QPATHTOF(data\ui\acpr_mag_ui_ca.paa);

        count = 40;
        ammo = "ls_bullet_12mw_yellow";
    };

    class ls_magazine_ls150: ls_magazine_base {
        scope = 2;
        author = AUTHOR;

        displayName = "LS-150 Energy Cell";
        displayNameShort = "Standard Energy";
        descriptionShort = "Energy Cell<br />Rounds: 500<br />Used in: LS-150";
        model = QPATHTOF(ls150\ls_magazine_ls150.p3d);
        picture = QPATHTOF(data\ui\ls150_mag_ui_ca.paa);

        initSpeed = 910;
        mass = 140;

        count = 500;
        ammo = "ls_bullet_192mw_yellow";
    };
};
