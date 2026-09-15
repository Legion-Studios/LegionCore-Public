class CfgMagazines {
    class ls_magazine_base;
    class ls_magazine_valken38x: ls_magazine_base {
        scope = 2;
        author = AUTHOR;

        displayName = CSTRING(valken38x_magazine_displayName);
        displayNameShort = ECSTRING(weapons,highEnergy);
        descriptionShort = CSTRING(valken38x_magazine_descriptionShort);

        model = QPATHTOF(ls_magazine_valken38x.p3d);
        // picture = QPATHTOF(data\ui\valken38x_mag_ui_ca.paa);

        initSpeed = 867;
        mass = 20;

        count = 30;
        ammo = "ls_ammo_93x64_blue";
    };
    DEPRECATED(ls_magazine_valken,ls_magazine_valken38x);
};
