class CfgMagazines {
    class ls_magazine_base;
    class ls_magazine_acpa: ls_magazine_base {
        scope = 2;
        author = AUTHOR;

        displayName = CSTRING(acpa_magazine_displayName);
        displayNameShort = ECSTRING(weapons,standardEnergy);
        descriptionShort = CSTRING(acpa_magazine_descriptionShort);
        model = QPATHTOF(acpa\ls_magazine_acpa.p3d);
        picture = QPATHTOF(data\ui\acpa_mag_ui_ca.paa);

        tracersEvery = 0;
        initSpeed = 380;

        mass = 24;
        count = 8;
        ammo = "ls_ammo_12Gauge_Pellets_Submunition";
    };

    class ls_magazine_acpr: ls_magazine_base {
        scope = 2;
        author = AUTHOR;

        displayName = CSTRING(acpr_magazine_displayName);
        displayNameShort = ECSTRING(weapons,standardEnergy);
        descriptionShort = CSTRING(acpr_magazine_descriptionShort);
        model = QPATHTOF(acpr\ls_magazine_acpr.p3d);
        picture = QPATHTOF(data\ui\acpr_mag_ui_ca.paa);

        tracersEvery = 0;
        initSpeed = 774;
        mass = 12;

        count = 40;
        ammo = "ls_ammo_556x45";
    };

    class ls_magazine_ls150: ls_magazine_base {
        scope = 2;
        author = AUTHOR;

        displayName = CSTRING(ls150_magazine_displayName);
        displayNameShort = ECSTRING(weapons,standardEnergy);
        descriptionShort = CSTRING(ls150_magazine_descriptionShort);
        model = QPATHTOF(ls150\ls_magazine_ls150.p3d);
        picture = QPATHTOF(data\ui\ls150_mag_ui_ca.paa);

        tracersEvery = 0;
        initSpeed = 768;
        mass = 140;

        count = 500;
        ammo = "ls_ammo_93x64";

        ACE_isBelt = 1;
    };
};
