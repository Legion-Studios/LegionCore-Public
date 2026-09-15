class CfgMagazines {
    class ls_magazine_base;
    class ls_magazine_zh73: ls_magazine_base {
        scope = 2;
        author = AUTHOR;

        displayName = CSTRING(magazine_displayName);
        displayNameShort = ECSTRING(weapons,standardEnergy);
        descriptionShort = CSTRING(magazine_descriptionShort);
        model = QPATHTOEF(weapons_dcseries,dc15a\ls_magazine_dc15a.p3d);
        picture = QPATHTOF(data\ui\zh73_mag_ui_ca.paa);

        initSpeed = 909;
        mass = 16;

        count = 100;
        ammo = "ls_ammo_556x45_red";
    };
};
