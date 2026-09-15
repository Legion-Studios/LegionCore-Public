class CfgMagazines {
    class ls_magazine_base;
    class ls_magazine_atrt_laserCannon: ls_magazine_base {
        scope = 2;
        author = AUTHOR;

        displayName = CSTRING(laserCannon_magazine_displayName);
        displayNameShort = ECSTRING(weapons,standardEnergy);
        descriptionShort = CSTRING(laserCannon_magazine_descriptionShort);
        // model = QPATHTOF(dc15a\ls_magazine_dc15a.p3d);
        // picture = QPATHTOF(data\ui\dc15a_mag_ui_ca.paa);

        initSpeed = 800; // 1120;
        mass = 10;

        count = 100;
        ammo = "ls_ammo_atrt_30mm_AP_blue";
    };
};
