class CfgMagazines {
    class ls_magazine_base;
    class ls_magazine_e5: ls_magazine_base {
        scope = 2;
        author = AUTHOR;
        displayName = "E-5 Energy Cell";
        displayNameShort = "Standard Energy";
        descriptionShort = "Energy Cell<br />Rounds: 60</br />Used In: E-5";

        model = QPATHTOF(e5\ls_magazine_e5.p3d);
        picture = QPATHTOF(data\ui\e5_mag_ui_ca.paa);

        initSpeed = 920;
        maxLeadSpeed = 27.7778;
        mass = 8;

        count = 60;
        ammo = "ls_bullet_9mw_red";
    };

    class ls_magazine_e5c: ls_magazine_base {
        scope = 2;
        author = AUTHOR;
        displayName = "E-5C Energy Cell";
        displayNameShort = "Standard Energy";
        descriptionShort = "Energy Cell<br />Rounds: 200</br />Used In: E-5C";

        model = QPATHTOF(e5c\ls_magazine_e5c.p3d);
        picture = QPATHTOF(data\ui\e5c_mag_ui_ca.paa);

        initSpeed = 310;
        mass = 10;

        count = 200;
        ammo = "ls_bullet_192mw_red";
    };

    class ls_magazine_e11: ls_magazine_base {
        scope = 2;
        author = AUTHOR;

        displayName = "E-11 Blaster Rifle Energy Cell";
        displayNameShort = "Standard Energy";
        descriptionShort = "Energy Cell<br/>Rounds: 30<br/>Used in: E-11";
        model = QPATHTOF(e11\ls_magazine_e11.p3d);
        picture = QPATHTOF(data\ui\e11_magazine_ui_ca.paa);

        initSpeed = 800;
        mass = 8;

        count = 30;
        ammo = "ls_bullet_12mw_red";
    };

    class ls_launcherMagazine_base;
    class ls_magazine_e60r_at: ls_launcherMagazine_base {
        scope = 2;
        author = AUTHOR;

        displayName = "E-60R AT Missile Pack";
        displayNameShort = "AT";
        descriptionShort = "Anti-Tank Missile<br />Rounds: 3</br />Used In: E-60R M1";

        model = QPATHTOEF(weapons_rps,ls_magazine_rps6.p3d);
        picture = QPATHTOEF(weapons_rps,data\ui\rps6_mag_ui_ca.paa);

        initSpeed = 40;
        mass = 50;
        maxLeadSpeed = 27.7778;
        type = 256;

        count = 3;
        ammo = "ls_missile_e60r_at";
    };
    AI_MAG(ls_magazine_e60r_at);

    class ls_magazine_e60r_ap: ls_magazine_e60r_at {
        author = AUTHOR;
        displayName = "E-60R AP Missile Pack";
        displayNameShort = "AP";
        descriptionShort = "Anti-Personnel Missile<br />Rounds: 3</br />Used In: E-60R M1";
        ammo = "ls_missile_e60r_ap";
    };
    AI_MAG(ls_magazine_e60r_ap);

    class ls_magazine_e60r_ap_SACLOS: ls_magazine_e60r_ap {
        author = AUTHOR;
        displayNameShort = "AP (SACLOS)";
        displayName = "E-60R AP Missile Pack (SACLOS)";
        ammo = "ls_missile_e60r_ap_SACLOS";
    };
    AI_MAG(ls_magazine_e60r_ap_SACLOS);

    class ls_magazine_e60r_aa: ls_magazine_e60r_at {
        author = AUTHOR;
        displayName = "E-60R AA Missile Pack";
        displayNameShort = "AA";
        descriptionShort = "Anti-Air Missile<br />Rounds: 3</br />Used In: E-60R M2";
        ammo = "ls_missile_e60r_aa";
    };
    AI_MAG(ls_magazine_e60r_aa);
};
