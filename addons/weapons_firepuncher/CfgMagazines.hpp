class CfgMagazines {
    class ls_magazine_base;
    class ls_magazine_firepuncher: ls_magazine_base {
        scope = 2;
        author = AUTHOR;

        displayName = CSTRING(magazine_displayName);
        displayNameShort = ECSTRING(weapons,highEnergy);
        descriptionShort = CSTRING(magazine_descriptionShort);

        initSpeed = 880;
        mass = 14;

        count = 15;
        ammo = "ls_ammo_338_blue";
    };
};
