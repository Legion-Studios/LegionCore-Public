class CfgMagazines {
    class ls_magazine_base;
    class ls_magazine_rg4d: ls_magazine_base {
        scope = 2;
        author = AUTHOR;

        displayName = "RG-4D Energy Cell";
        displayNameShort = "Low Energy";
        descriptionShort = "Energy Cell<br/>Rounds: 30<br/>Used in: RG-4D";

        model = QPATHTOEF(weapons_eseries,ls_magazine_eSeries_universal.p3d);
        modelSpecial = QPATHTOEF(weapons_eseries,ls_magazine_eSeries_universal.p3d);
        modelSpecialIsProxy = 1;
        picture = QPATHTOEF(weapons_eseries,data\ui\universal_mag_ui_ca.paa);

        count = 30;
        ammo = "ls_bullet_12mw_red";
    };
};
