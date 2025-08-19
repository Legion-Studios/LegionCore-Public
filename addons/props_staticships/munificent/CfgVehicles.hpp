class ls_staticShip_munificent: ls_staticShip_base {
    scope = 2;
    scopeCurator = 2;
    author = AUTHOR;
    displayName = "Munificent";

    model = QPATHTOF(munificent\ls_munificent.p3d);
    hiddenSelections[] = {
        "body1", "body2",
        "body3", "body4",
        "engine"
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(munificent\data\body1_co.paa),
        QPATHTOF(munificent\data\body2_co.paa),
        QPATHTOF(munificent\data\body3_co.paa),
        QPATHTOF(munificent\data\body4_co.paa),
        QPATHTOF(munificent\data\engine_co.paa)
    };
};

DEPRECATED(ls_munificent,ls_staticShip_munificent);
