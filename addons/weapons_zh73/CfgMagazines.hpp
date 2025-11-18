class CfgMagazines {
    class ls_magazine_base;
    class ls_magazine_zh73: ls_magazine_base {
        scope = 2;
        author = AUTHOR;

        displayName = "ZH-73 Energy Cell";
        displayNameShort = "Standard Energy";
        descriptionShort = "Energy Cell<br/>Rounds: 100<br/>Used in: ZH-73";
        model = QPATHTOEF(weapons_dcseries,dc15a\ls_magazine_dc15a.p3d);
        picture = QPATHTOF(data\ui\zh73_mag_ui_ca.paa);

        initspeed = 827;
        mass = 15;

        count = 100;
        ammo = "ls_bullet_192mw_red";
    };
};
