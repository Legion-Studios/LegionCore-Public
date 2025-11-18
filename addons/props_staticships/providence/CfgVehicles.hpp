class ls_staticShip_providence: ls_staticShip_multiPart_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Providence-Class";

    model = QPATHTOF(providence\ls_providence.p3d);
    multiStructureParts[] = {
        {"ls_staticShipPart_providence_body1", "body1"},
        {"ls_staticShipPart_providence_body2", "body2"},
        {"ls_staticShipPart_providence_body3", "body3"},
        {"ls_staticShipPart_providence_bridge", "bridge"},
        {"ls_staticShipPart_providence_engine", "engine"},
        {"ls_staticShipPart_providence_interior", "interior"}
    };
};
class ls_staticShip_providence_hollow: ls_staticShip_providence {
    author = AUTHOR;
    displayname = "Providence-Class (Hollowed)";
    multiStructureParts[] = {
        {"ls_staticShipPart_providence_body1", "body1"},
        {"ls_staticShipPart_providence_body2", "body2"},
        {"ls_staticShipPart_providence_body3", "body3"},
        {"ls_staticShipPart_providence_bridge", "bridge"},
        {"ls_staticShipPart_providence_engine", "engine"}
    };
};

class ls_staticShip_providence_dreadnought: ls_staticShip_providence {
    author = AUTHOR;
    displayName = "Providence-Class Dreadnought";

    model = QPATHTOF(providence\ls_providence_dreadnought.p3d);
    multiStructureParts[] = {
        {"ls_staticShipPart_providence_body1_dreadnought", "body1"},
        {"ls_staticShipPart_providence_body2_dreadnought", "body2"},
        {"ls_staticShipPart_providence_body3_dreadnought", "body3"},
        {"ls_staticShipPart_providence_bridge_dreadnought", "bridge"},
        {"ls_staticShipPart_providence_engine_dreadnought", "engine"},
        {"ls_staticShipPart_providence_interior_dreadnought", "interior"}
    };
};
class ls_staticShip_providence_dreadnought_hollow: ls_staticShip_providence_dreadnought {
    author = AUTHOR;
    displayName = "Providence-Class Dreadnought (Hollowed)";
    multiStructureParts[] = {
        {"ls_staticShipPart_providence_body1_dreadnought", "body1"},
        {"ls_staticShipPart_providence_body2_dreadnought", "body2"},
        {"ls_staticShipPart_providence_body3_dreadnought", "body3"},
        {"ls_staticShipPart_providence_bridge_dreadnought", "bridge"},
        {"ls_staticShipPart_providence_engine_dreadnought", "engine"}
    };
};

class ls_staticShipPart_providence_body1: ls_staticShipPart_base {
    scope = 2;
    scopeCurator = 2;
    author = AUTHOR;
    displayName = "Body 1";
    editorSubcategory = "ls_edsubcat_staticShips_providence";

    model = QPATHTOF(providence\ls_providence_body1.p3d);
    hiddenSelections[] = {"body1"};
    hiddenSelectionsTextures[] = {QPATHTOF(providence\data\body1_co.paa)};
};
class ls_staticShipPart_providence_body1_dreadnought: ls_staticShipPart_providence_body1 {
    author = AUTHOR;
    displayName = "Body 1 (Dreadnought)";
    model = QPATHTOF(providence\ls_providence_body1_dreadnought.p3d);
    hiddenSelectionsTextures[] = {QPATHTOF(providence\data\body1_dreadnought_co.paa)};
};
class ls_staticShipPart_providence_body2: ls_staticShipPart_providence_body1 {
    author = AUTHOR;
    displayName = "Body 2";
    model = QPATHTOF(providence\ls_providence_body2.p3d);
    hiddenSelections[] = {"body2"};
    hiddenSelectionsTextures[] = {QPATHTOF(providence\data\body2_co.paa)};
};
class ls_staticShipPart_providence_body2_dreadnought: ls_staticShipPart_providence_body2 {
    author = AUTHOR;
    displayName = "Body 2 (Dreadnought)";
    model = QPATHTOF(providence\ls_providence_body2_dreadnought.p3d);
};
class ls_staticShipPart_providence_body3: ls_staticShipPart_providence_body1 {
    author = AUTHOR;
    displayName = "Body 3";
    model = QPATHTOF(providence\ls_providence_body3.p3d);
    hiddenSelections[] = {"body3"};
    hiddenSelectionsTextures[] = {QPATHTOF(providence\data\body3_co.paa)};
};
class ls_staticShipPart_providence_body3_dreadnought: ls_staticShipPart_providence_body3 {
    author = AUTHOR;
    displayName = "Body 3 (Dreadnought)";
    model = QPATHTOF(providence\ls_providence_body3_dreadnought.p3d);
};
class ls_staticShipPart_providence_bridge: ls_staticShipPart_providence_body1 {
    author = AUTHOR;
    displayName = "Bridge";
    model = QPATHTOF(providence\ls_providence_bridge.p3d);
    hiddenSelections[] = {"bridge"};
    hiddenSelectionsTextures[] = {QPATHTOF(providence\data\bridge_co.paa)};
};
class ls_staticShipPart_providence_bridge_dreadnought: ls_staticShipPart_providence_bridge {
    author = AUTHOR;
    displayName = "Bridge (Dreadnought)";
    model = QPATHTOF(providence\ls_providence_bridge_dreadnought.p3d);
};
class ls_staticShipPart_providence_engine: ls_staticShipPart_providence_body1 {
    author = AUTHOR;
    displayName = "Engine";
    model = QPATHTOF(providence\ls_providence_engine.p3d);
    hiddenSelections[] = {"engine"};
    hiddenSelectionsTextures[] = {QPATHTOF(providence\data\engine_co.paa)};
};
class ls_staticShipPart_providence_engine_dreadnought: ls_staticShipPart_providence_engine {
    author = AUTHOR;
    displayName = "Engine (Dreadnought)";
    model = QPATHTOF(providence\ls_providence_engine_dreadnought.p3d);
};
class ls_staticShipPart_providence_interior: ls_staticShipPart_providence_body1 {
    author = AUTHOR;
    displayName = "Interior";
    model = QPATHTOF(providence\ls_providence_interior.p3d);
    hiddenSelections[] = {"interior"};
    hiddenSelectionsTextures[] = {QPATHTOF(providence\data\interior_co.paa)};
};
class ls_staticShipPart_providence_interior_dreadnought: ls_staticShipPart_providence_interior {
    author = AUTHOR;
    displayName = "Interior (Dreadnought)";
    model = QPATHTOF(providence\ls_providence_interior_dreadnought.p3d);
};

class ls_staticShip_providence_zeus: ls_staticShip_base {
    scope = 2;
    scopeCurator = 2;
    author = AUTHOR;
    displayname = "Providence-Class (Zeus)";

    model = QPATHTOF(providence\ls_providence_zeus.p3d);
    hiddenSelections[] = {
        "body1", "body2",
        "body3", "bridge",
        "engine", "interior"
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(providence\data\body1_co.paa),
        QPATHTOF(providence\data\body2_co.paa),
        QPATHTOF(providence\data\body3_co.paa),
        QPATHTOF(providence\data\bridge_co.paa),
        QPATHTOF(providence\data\engine_co.paa),
        QPATHTOF(providence\data\interior_co.paa)
    };
};
class ls_staticShip_providence_dreadnought_zeus: ls_staticShip_providence_zeus {
    author = AUTHOR;
    displayname = "Providence-Class Dreadnought (Zeus)";

    model = QPATHTOF(providence\ls_providence_dreadnought_zeus.p3d);
    hiddenSelectionsTextures[] = {
        QPATHTOF(providence\data\body1_dreadnought_co.paa),
        QPATHTOF(providence\data\body2_co.paa),
        QPATHTOF(providence\data\body3_co.paa),
        QPATHTOF(providence\data\bridge_co.paa),
        QPATHTOF(providence\data\engine_co.paa),
        QPATHTOF(providence\data\interior_co.paa)
    };
};

DEPRECATED(ls_providence,ls_staticShip_providence);
DEPRECATED(ls_providence_2,ls_staticShip_providence_hollow);
DEPRECATED(ls_providence_d,ls_staticShip_providence_dreadnought);
DEPRECATED(ls_providence_d_2,ls_staticShip_providence_dreadnought_hollow);
DEPRECATED(providence_body1,ls_staticShipPart_providence_body1);
DEPRECATED(providence_body1_d,ls_staticShipPart_providence_body1_dreadnought);
DEPRECATED(providence_body2,ls_staticShipPart_providence_body2);
DEPRECATED(providence_body2_d,ls_staticShipPart_providence_body2_dreadnought);
DEPRECATED(providence_body3,ls_staticShipPart_providence_body3);
DEPRECATED(providence_body3_d,ls_staticShipPart_providence_body3_dreadnought);
DEPRECATED(providence_bridge,ls_staticShipPart_providence_bridge);
DEPRECATED(providence_bridge_d,ls_staticShipPart_providence_bridge_dreadnought);
DEPRECATED(providence_engine,ls_staticShipPart_providence_engine);
DEPRECATED(providence_engine_d,ls_staticShipPart_providence_engine_dreadnought);
DEPRECATED(providence_interior,ls_staticShipPart_providence_interior);
DEPRECATED(providence_interior_d,ls_staticShipPart_providence_interior_dreadnought);
DEPRECATED(ls_providence_zeus,ls_staticShip_providence_zeus);
DEPRECATED(ls_providence_d_zeus,ls_staticShip_providence_dreadnought_zeus);
