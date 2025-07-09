class CfgMagazines {
    class ls_magazine_base;
    class ls_magazine_rg4d: ls_magazine_base {
        scope = 2;
        author = AUTHOR;

        displayName = "RG-4D Energy Cell";
        displayNameShort = "Low Energy";
        descriptionShort = "Energy Cell<br/>Rounds: 30<br/>Used in: RG-4D";

        model = QPATHTOEF(weapons_eseries,e5\ls_magazine_e5.p3d);
        picture = QPATHTOEF(weapons_eseries,data\ui\e5_mag_ui_ca.paa);

        count = 30;
        ammo = "ls_bullet_12mw_red";
    };
};
