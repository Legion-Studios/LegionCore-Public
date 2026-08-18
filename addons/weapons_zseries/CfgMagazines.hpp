class CfgMagazines {
    class ls_magazine_base;
    class ls_magazine_zSeries_universal: ls_magazine_base {
        scope = 2;
        author = AUTHOR;

        displayName = CSTRING(universal_magazine_displayName);
        displayNameShort = ECSTRING(weapons,standardEnergy);
        descriptionShort = CSTRING(universal_magazine_descriptionShort);

        model = QPATHTOF(z6\ls_magazine_z6.p3d);
        modelSpecial = QPATHTOF(z6\ls_magazine_z6.p3d);
        modelSpecialIsProxy = 1;

        hiddenSelections[] = {};
        hiddenSelectionsTextures[] = {};
        picture = QPATHTOF(data\ui\z6_mag_ui_ca.paa);

        initSpeed = 920;
        mass = 75;

        count = 300;
        ammo = "ls_ammo_65x39_blue";
    };

    class ls_magazine_z6: ls_magazine_base {
        scope = 2;
        author = AUTHOR;

        displayName = CSTRING(z6_magazine_displayName);
        displayNameShort = ECSTRING(weapons,highEnergy);
        descriptionShort = CSTRING(z6_magazine_descriptionShort);

        model = QPATHTOF(z6\ls_magazine_z6.p3d);
        hiddenSelections[] = {};
        hiddenSelectionsTextures[] = {};
        picture = QPATHTOF(data\ui\z6_mag_ui_ca.paa);

        initSpeed = 820;
        mass = 100;

        count = 125;
        ammo = "ls_ammo_127x108_blue";
    };

    class ls_launcherMagazine_base;
    class ls_magazine_z7: ls_launcherMagazine_base {
        scope = 2;
        author = AUTHOR;

        displayName = "Z-7 Chaingun Energy Cell";
        displayNameShort = ECSTRING(weapons,standardEnergy);
        descriptionShort = "Energy Cell<br/>Rounds: 500<br/>Used in: Z-7";

        model = QPATHTOF(z7\ls_magazine_z7.p3d);
        hiddenSelections[] = {};
        hiddenSelectionsTextures[] = {};
        picture = QPATHTOF(data\ui\z7_mag_ui_ca.paa);

        initSpeed = 800;
        maxLeadSpeed = 25;
        mass = 50;
        weaponPoolAvailable = 1;
        ace_isBelt = 1;

        count = 500;
        ammo = "ls_bullet_z7_blue";
    };
};
