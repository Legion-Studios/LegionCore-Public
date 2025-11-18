class ls_staticShip_quasar: ls_staticShip_base {
    scope = 2;
    scopeCurator = 2;
    author = AUTHOR;
    displayName = "Quasar Class Cruiser";

    model = QPATHTOF(quasar\ls_quasar.p3d);
    hiddenSelections[] = {
        "body1", "body2",
        "engine", "guns",
        "interior1", "interior2",
        "interior3", "interior4",
        "door1", "door2",
        "frame"
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(quasar\data\body1_co.paa),
        QPATHTOF(quasar\data\body2_co.paa),
        QPATHTOF(quasar\data\engine_co.paa),
        QPATHTOF(quasar\data\guns_co.paa),
        QPATHTOF(quasar\data\interior1_co.paa),
        QPATHTOF(quasar\data\interior2_co.paa),
        QPATHTOF(quasar\data\interior3_co.paa),
        QPATHTOF(quasar\data\interior4_co.paa),
        QPATHTOEF(props_structures,hallway\data\doors_co.paa),
        QPATHTOEF(props_structures,hallway\data\doors_co.paa),
        QPATHTOEF(props_structures,hallway\data\frame_co.paa)
    };
};

DEPRECATED(ls_quasar,ls_staticShip_quasar);
