class CfgMagazines {
    class ls_magazine_base;
    class ls_magazine_z6: ls_magazine_base {
        scope = 2;
        author = AUTHOR;

        displayName = "Z-6 Energy Cell";
        displayNameShort = "Standard Energy";
        descriptionShort = "Energy Cell<br />Rounds: 500<br />Used in: Z-6";

        model = QPATHTOF(z6\ls_magazine_z6.p3d);
        hiddenSelections[] = {};
        hiddenSelectionsTextures[] = {};
        picture = QPATHTOF(data\ui\z6_mag_ui_ca.paa);

        initSpeed = 909;
        maxLeadSpeed = 25;
        mass = 50;

        count = 500;
        ammo = "ls_bullet_556mw_blue";
    };

    class ls_launcherMagazine_base;
    class ls_magazine_z7: ls_launcherMagazine_base {
        scope = 2;
        author = AUTHOR;

        displayName = "Z-7 Chaingun Energy Cell";
        displayNameShort = "Standard Energy";
        descriptionShort = "Energy Cell<br />Rounds: 500<br />Used in: Z-7";

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
