class CfgMagazines {
    class ls_magazine_base;
    class ls_magazine_mercenarySniper: ls_magazine_base {
        scope = 2;
        author = AUTHOR;
        displayName = CSTRING(sniper_magazine_displayName);
        displayNameShort = ECSTRING(weapons,highEnergy);
        descriptionShort = CSTRING(sniper_magazine_descriptionShort);

        model = QPATHTOF(sniper\ls_magazine_mercenarySniper.p3d);
        modelSpecial = QPATHTOF(sniper\ls_magazine_mercenarySniper.p3d);
        modelSpecialIsProxy = 1;
        // hiddenSelections[] = {"camo1"};
        // hiddenSelectionsTextures[] = {QPATHTOF(sniper\data\mag_co.paa)};
        picture = QPATHTOF(data\ui\sniper_mag_ui_ca.paa);

        initSpeed = 867;
        mass = 20;

        count = 10;
        ammo = "ls_ammo_408_yellow";
    };
};
