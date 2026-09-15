class CfgMagazines {
    class ls_magazine_base;
    class ls_magazine_rg4d: ls_magazine_base {
        scope = 2;
        author = AUTHOR;

        displayName = CSTRING(magazine_displayName);
        displayNameShort = ECSTRING(weapons,lowEnergy);
        descriptionShort = CSTRING(magazine_descriptionShort);

        model = QPATHTOEF(weapons_eseries,ls_magazine_eSeries_universal.p3d);
        modelSpecial = QPATHTOEF(weapons_eseries,ls_magazine_eSeries_universal.p3d);
        modelSpecialIsProxy = 1;
        picture = QPATHTOEF(weapons_eseries,data\ui\universal_mag_ui_ca.paa);

        initSpeed = 400;
        mass = 10;

        count = 30;
        ammo = "ls_ammo_9x21_red";
    };
};
