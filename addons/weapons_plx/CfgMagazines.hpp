class CfgMagazines {
    class ls_launcherMagazine_base;
    class ls_magazine_plx1_at: ls_launcherMagazine_base {
        scope = 2;
        author = AUTHOR;

        displayName = "PLX-1 AT Missile Pack";
        displayNameShort = "AT";
        descriptionShort = "Anti-Tank Missile<br />Rounds: 3</br />Used In: PLX-1 M1";

        model = QPATHTOEF(weapons_rps,ls_magazine_rps6.p3d);
        picture = QPATHTOEF(weapons_rps,data\ui\rps6_mag_ui_ca.paa);

        initSpeed = 40;
        mass = 50;
        maxLeadSpeed = 27.7778;
        type = 256;

        count = 3;
        ammo = "ls_missile_plx1_at";
    };
    AI_MAG(ls_magazine_plx1_at);

    class ls_magazine_plx1_ap: ls_magazine_plx1_at {
        author = AUTHOR;
        displayName = "PLX-1 AP Missile Pack";
        displayNameShort = "AP";
        descriptionShort = "Anti-Personnel Missile<br />Rounds: 3</br />Used In: PLX-1 M1";
        ammo = "ls_missile_plx1_ap";
    };
    AI_MAG(ls_magazine_plx1_ap);

    class ls_magazine_plx1_ap_SACLOS: ls_magazine_plx1_ap {
        author = AUTHOR;
        displayName = "PLX-1 AP Missile Pack (SACLOS)";
        displayNameShort = "AP (SACLOS)";
        ammo = "ls_missile_plx1_ap_SACLOS";
    };
    AI_MAG(ls_magazine_plx1_ap_SACLOS);

    class ls_magazine_plx1_aa: ls_magazine_plx1_at {
        author = AUTHOR;
        displayName = "PLX-1 AA Missile Pack";
        displayNameShort = "AA";
        descriptionShort = "Anti-Air Missile<br />Rounds: 3</br />Used In: PLX-1 M2";
        ammo = "ls_missile_plx1_aa";
    };
    AI_MAG(ls_magazine_plx1_aa);
};
