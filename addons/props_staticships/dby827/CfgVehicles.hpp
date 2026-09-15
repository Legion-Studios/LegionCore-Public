class ls_staticShip_dby827: ls_staticShip_base {
    scope = 2;
    scopeCurator = 2;
    author = AUTHOR;
    displayName = "DBY-827 Heavy Turbolaser";

    model = QPATHTOF(dby827\ls_dby827.p3d);
    hiddenSelections[] = {
        "base",
        "body1",
        "body2",
        "body3",
        "gear",
        "gun"
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(dby827\data\base_co.paa),
        QPATHTOF(dby827\data\body1_co.paa),
        QPATHTOF(dby827\data\body2_co.paa),
        QPATHTOF(dby827\data\body3_co.paa),
        QPATHTOF(dby827\data\gear_co.paa),
        QPATHTOF(dby827\data\gun_co.paa)
    };
};

DEPRECATED(ls_dby_827,ls_staticShip_dby827);
