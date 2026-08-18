class CfgMagazines {
    class ls_magazine_base;
    class ls_magazine_wristblaster_B2: ls_magazine_base {
        scope = 2;
        author = AUTHOR;
        displayName = "B2 Wristblaster Energy Cell";
        displayNameShort = "Standard Energy";
        descriptionShort = "Energy Cell<br/>Rounds: 60</br/>Used In: B2 Wrist Blaster";

        model = QPATHTOEF(weapons_eseries,ls_magazine_eSeries_universal.p3d);
        modelSpecial = QPATHTOEF(weapons_eseries,ls_magazine_eSeries_universal.p3d);
        modelSpecialIsProxy = 1;
        picture = QPATHTOEF(weapons_eseries,data\ui\universal_mag_ui_ca.paa);

        initSpeed = 920;
        maxLeadSpeed = 27.7778;
        mass = 8;

        count = 60;
        ammo = "ls_bullet_9mw_red";
    };

    class ls_magazine_wristblaster_droideka: ls_magazine_base {
        scope = 2;
        author = AUTHOR;
        displayName = "Twin Blaster Cannon Energy Cell";
        displayNameShort = "Standard Energy";
        descriptionShort = "Energy Cell<br/>Rounds: 120</br/>Used In: Twin Blaster Cannons";

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
