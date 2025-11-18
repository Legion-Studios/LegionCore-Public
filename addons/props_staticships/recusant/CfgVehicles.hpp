class ls_staticShip_recusant: ls_staticShip_multiPart_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Recusant";

    model = QPATHTOF(recusant\ls_recusant.p3d);
    mapsize = 1326;
    multistructureparts[] = {
        {"ls_staticShipPart_recusant_body1", "body1"},
        {"ls_staticShipPart_recusant_body2", "body2"},
        {"ls_staticShipPart_recusant_engine", "engine"}
    };
};
class ls_staticShip_recusant_dreadnought: ls_staticShip_recusant {
    author = AUTHOR;
    displayName = "Recusant Dreadnought";

    model = QPATHTOF(recusant\ls_recusant_dreadnought.p3d);
    multistructureparts[] = {
        {"ls_staticShipPart_recusant_body1_dreadnought", "body1"},
        {"ls_staticShipPart_recusant_body2_dreadnought", "body2"},
        {"ls_staticShipPart_recusant_engine_dreadnought", "engine"}
    };
};
class ls_staticShipPart_recusant_body1: ls_staticShipPart_base {
    scope = 2;
    scopeCurator = 2;
    author = AUTHOR;
    displayName = "Body 1";
    editorSubcategory = "ls_edsubcat_staticShips_recusant";

    model = QPATHTOF(recusant\ls_recusant_body1.p3d);
    hiddenSelections[] = {"body1"};
    hiddenSelectionsTextures[] = {QPATHTOF(recusant\data\body1_co.paa)};
};
class ls_staticShipPart_recusant_body1_dreadnought: ls_staticShipPart_recusant_body1 {
    author = AUTHOR;
    displayName = "Body 1 (Dreadnought)";
    model = QPATHTOF(recusant\ls_recusant_body1_dreadnought.p3d);
};
class ls_staticShipPart_recusant_body2: ls_staticShipPart_recusant_body1 {
    author = AUTHOR;
    displayName = "Body 2";
    model = QPATHTOF(recusant\ls_recusant_body2.p3d);
    hiddenSelections[] = {"body2"};
    hiddenSelectionsTextures[] = {QPATHTOF(recusant\data\body2_co.paa)};
};
class ls_staticShipPart_recusant_body2_dreadnought: ls_staticShipPart_recusant_body2 {
    author = AUTHOR;
    displayName = "Body 2 (Dreadnought)";
    model = QPATHTOF(recusant\ls_recusant_body2_dreadnought.p3d);
};
class ls_staticShipPart_recusant_engine: ls_staticShipPart_recusant_body1 {
    author = AUTHOR;
    displayName = "Engine";
    model = QPATHTOF(recusant\ls_recusant_engine.p3d);
    hiddenSelections[] = {"engine"};
    hiddenSelectionsTextures[] = {QPATHTOF(recusant\data\engine_co.paa)};
};
class ls_staticShipPart_recusant_engine_dreadnought: ls_staticShipPart_recusant_engine {
    displayName = "Engine (Dreadnought)";
    model = QPATHTOF(recusant\ls_recusant_engine_dreadnought.p3d);
};

class ls_staticShip_recusant_zeus: ls_staticShip_base {
    scope = 2;
    scopeCurator = 2;
    author = AUTHOR;
    displayName = "Recusant (Zeus)";

    model = QPATHTOF(recusant\ls_recusant_zeus.p3d);
    hiddenSelections[] = {
        "body1",
        "body2",
        "engine"
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(recusant\data\body1_co.paa),
        QPATHTOF(recusant\data\body2_co.paa),
        QPATHTOF(recusant\data\engine_co.paa)
    };
};
class ls_staticShip_recusant_zeus_dreadnought: ls_staticShip_recusant_zeus {
    author = AUTHOR;
    displayName = "Recusant Dreadnought (Zeus)";
    model = QPATHTOF(recusant\ls_recusant_dreadnought_zeus.p3d);
};

DEPRECATED(ls_recusant_base,ls_staticShip_recusant);
DEPRECATED(ls_recusant_base_d,ls_staticShip_recusant_dreadnought);
DEPRECATED(ls_rec_body1,ls_staticShipPart_recusant_body1);
DEPRECATED(ls_rec_body1_d,ls_staticShipPart_recusant_body1_dreadnought);
DEPRECATED(ls_rec_body2,ls_staticShipPart_recusant_body2);
DEPRECATED(ls_rec_body2_d,ls_staticShipPart_recusant_body2_dreadnought);
DEPRECATED(ls_rec_engine,ls_staticShipPart_recusant_engine);
DEPRECATED(ls_rec_engine_d,ls_staticShipPart_recusant_engine_dreadnought);
DEPRECATED(ls_recusant_zeus,ls_staticShip_recusant_zeus);
DEPRECATED(ls_recusant_zeus_d,ls_staticShip_recusant_zeus_dreadnought);
