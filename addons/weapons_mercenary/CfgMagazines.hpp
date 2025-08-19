class CfgMagazines {
    class ls_magazine_base;
    class ls_magazine_mercenarySniper: ls_magazine_base {
        scope = 2;
        author = AUTHOR;
        displayName = "Mercenary Sniper Energy Cell";
        displayNameShort = "High Energy";
        descriptionShort = "Energy Cell<br />Rounds: 10<br />Used in: Mercenary Sniper";

        model = QPATHTOF(sniper\ls_magazine_mercenarySniper.p3d);
        // hiddenSelections[] = {"camo1"};
        // hiddenSelectionsTextures[] = {QPATHTOF(sniper\data\mag_co.paa)};
        picture = QPATHTOF(data\ui\sniper_mag_ui_ca.paa);

        initSpeed = 910;
        mass = 14;

        count = 10;
        ammo = "ls_bullet_22mw_yellow";
    };
};
