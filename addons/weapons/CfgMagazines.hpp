class CfgMagazines {
    class CA_Magazine;
    class ls_magazine_base: CA_Magazine {
        scope = 0;
        author = AUTHOR;
        tracersEvery = 1;

        allowedSlots[] = {TYPE_UNIFORM, TYPE_VEST, TYPE_BACKPACK};
        picture = QPATHTOEF(main,data\ui\ls_logo_ca.paa);
    };

    class CA_LauncherMagazine;
    class ls_launcherMagazine_base: CA_LauncherMagazine {
        scope = 0;
        author = AUTHOR;

        picture = QPATHTOEF(main,data\ui\ls_logo_ca.paa);
    };

    class ls_magazine_22mw_15Rnd_blue: ls_magazine_base {
        scope = 2;
        author = AUTHOR;

        displayName = "22mw 15Rnd Mag (Blue)";
        displayNameShort = "22mw Plasma";
        descriptionShort = "Caliber: 22mw<br />Rounds: 15";

        initSpeed = 910;
        mass = 14;

        count = 15;
        ammo = "ls_bullet_22mw_blue";
    };

    class ls_magazine_9mw_60Rnd_blue: ls_magazine_base {
        scope = 1;
        author = AUTHOR;

        displayName = "9mw 60Rnd Mag (Blue)";
        displayNameShort = "9mw Plasma";
        descriptionShort = "Caliber: 9mw<br />Rounds: 60";

        initSpeed = 430;
        mass = 10;

        count = 60;
        ammo = "ls_bullet_9mw_blue";
    };

    // WIP ammo types
    class ls_magazine_stun_2Rnd: ls_magazine_base {
        #ifdef __A3_DEBUG__
            scope = 2;
        #else
            scope = 1;
        #endif
        author = AUTHOR;
        displayName = "Stun Cell Magazine";
        descriptionShort = "Stun Rounds<br/>Rounds: 2<br/>Capable of temporarily incapacitating organics.";

        initSpeed = 30;
        mass = 5;

        ammo = "ls_bullet_stun";
        count = 2;
    };

    class ls_magazine_ion_1Rnd: ls_magazine_base {
        #ifdef __A3_DEBUG__
            scope = 2;
        #else
            scope = 1;
        #endif
        author = AUTHOR;
        displayName = "Charged Ionized Cell";
        descriptionShort = "Ion Round<br/>Rounds: 1<br/>Capable of temporarily overloading electronics.";

        mass = 5;

        ammo = "ls_bullet_ion";
        count = 1;
    };

    #include "cfg\magazines\40mm.hpp"
};
