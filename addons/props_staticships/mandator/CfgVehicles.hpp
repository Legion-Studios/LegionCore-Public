class ls_staticShip_mandator: ls_staticShip_multiPart_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Mandator";

    mapSize = 3000;

    model = QPATHTOF(mandator\ls_mandator.p3d);
    multistructureparts[] = {
        {"ls_staticShipPart_mandator_body1_1", "body1_1"},
        {"ls_staticShipPart_mandator_body2_1", "body2_1"},
        {"ls_staticShipPart_mandator_body2_2", "body2_2"},
        {"ls_staticShipPart_mandator_body3_1", "body3_1"},
        {"ls_staticShipPart_mandator_body3_2", "body3_2"},
        {"ls_staticShipPart_mandator_body4_1", "body4_1"},
        {"ls_staticShipPart_mandator_body4_2", "body4_2"},
        {"ls_staticShipPart_mandator_body4_3", "body4_3"},
        {"ls_staticShipPart_mandator_body4_4", "body4_4"},
        {"ls_staticShipPart_mandator_body4_5", "body4_5"},
        {"ls_staticShipPart_mandator_body4_6", "body4_6"},
        {"ls_staticShipPart_mandator_body4_7", "body4_7"},
        {"ls_staticShipPart_mandator_body4_8", "body4_8"},
        {"ls_staticShipPart_mandator_engine1", "engine_1"},
        {"ls_staticShipPart_mandator_engine2", "engine_2"},
        {"ls_staticShipPart_mandator_engine3", "engine_3"},
        {"ls_staticShipPart_mandator_hanger1_1", "hanger1_1"},
        {"ls_staticShipPart_mandator_hanger2_1", "hanger2_1"},
        {"ls_staticShipPart_mandator_hanger2_2", "hanger2_2"},
        {"ls_staticShipPart_mandator_hanger3_1", "hanger3_1"},
        {"ls_staticShipPart_mandator_hanger3_2", "hanger3_2"},
        {"ls_staticShipPart_mandator_hanger4", "hanger4"}
    };
};

class ls_staticShipPart_mandator_body1_1: ls_staticShipPart_base {
    scope = 2;
    scopeCurator = 2;
    author = AUTHOR;
    displayName = "Body 1_1";
    editorSubcategory = "ls_edsubcat_staticShips_mandator";

    model = QPATHTOF(mandator\ls_mandator_body1_1.p3d);
    hiddenSelections[] = {"body1"};
    hiddenSelectionsTextures[] = {QPATHTOF(mandator\data\body1_co.paa)};
};
class ls_staticShipPart_mandator_body2_1: ls_staticShipPart_mandator_body1_1 {
    author = AUTHOR;
    displayName = "Body 2_1";
    model = QPATHTOF(mandator\ls_mandator_body2_1.p3d);
    hiddenSelections[] = {"body2"};
    hiddenSelectionsTextures[] = {QPATHTOF(mandator\data\body2_co.paa)};
};
class ls_staticShipPart_mandator_body2_2: ls_staticShipPart_mandator_body2_1 {
    author = AUTHOR;
    displayName = "Body 2_2";
    model = QPATHTOF(mandator\ls_mandator_body2_2.p3d);
};
class ls_staticShipPart_mandator_body3_1: ls_staticShipPart_mandator_body1_1 {
    author = AUTHOR;
    displayName = "Body 3_1";
    model = QPATHTOF(mandator\ls_mandator_body3_1.p3d);
    hiddenSelections[] = {"body3"};
    hiddenSelectionsTextures[] = {QPATHTOF(mandator\data\body3_co.paa)};
};
class ls_staticShipPart_mandator_body3_2: ls_staticShipPart_mandator_body3_1 {
    author = AUTHOR;
    displayName = "Body 3_2";
    model = QPATHTOF(mandator\ls_mandator_body3_2.p3d);
};
class ls_staticShipPart_mandator_body4_1: ls_staticShipPart_mandator_body1_1 {
    author = AUTHOR;
    displayName = "Body 4_1";
    model = QPATHTOF(mandator\ls_mandator_body4_1.p3d);
    hiddenSelections[] = {"body4"};
    hiddenSelectionsTextures[] = {QPATHTOF(mandator\data\body4_co.paa)};
};
class ls_staticShipPart_mandator_body4_2: ls_staticShipPart_mandator_body4_1 {
    author = AUTHOR;
    displayName = "Body 4_2";
    model = QPATHTOF(mandator\ls_mandator_body4_2.p3d);
};
class ls_staticShipPart_mandator_body4_3: ls_staticShipPart_mandator_body4_1 {
    author = AUTHOR;
    displayName = "Body 4_3";
    model = QPATHTOF(mandator\ls_mandator_body4_3.p3d);
};
class ls_staticShipPart_mandator_body4_4: ls_staticShipPart_mandator_body4_1 {
    author = AUTHOR;
    displayName = "Body 4_4";
    model = QPATHTOF(mandator\ls_mandator_body4_4.p3d);
};
class ls_staticShipPart_mandator_body4_5: ls_staticShipPart_mandator_body4_1 {
    author = AUTHOR;
    displayName = "Body 4_5";
    model = QPATHTOF(mandator\ls_mandator_body4_5.p3d);
};
class ls_staticShipPart_mandator_body4_6: ls_staticShipPart_mandator_body4_1 {
    author = AUTHOR;
    displayName = "Body 4_6";
    model = QPATHTOF(mandator\ls_mandator_body4_6.p3d);
};
class ls_staticShipPart_mandator_body4_7: ls_staticShipPart_mandator_body4_1 {
    author = AUTHOR;
    displayName = "Body 4_7";
    model = QPATHTOF(mandator\ls_mandator_body4_7.p3d);
};
class ls_staticShipPart_mandator_body4_8: ls_staticShipPart_mandator_body4_1 {
    author = AUTHOR;
    displayName = "Body 4_8";
    model = QPATHTOF(mandator\ls_mandator_body4_8.p3d);
};
class ls_staticShipPart_mandator_engine1: ls_staticShipPart_mandator_body1_1 {
    author = AUTHOR;
    displayName = "engine1";
    model = QPATHTOF(mandator\ls_mandator_engine1.p3d);
    hiddenSelections[] = {"engine"};
    hiddenSelectionsTextures[] = {QPATHTOF(mandator\data\engine_co.paa)};
};
class ls_staticShipPart_mandator_engine2: ls_staticShipPart_mandator_engine1 {
    author = AUTHOR;
    displayName = "engine2";
    model = QPATHTOF(mandator\ls_mandator_engine2.p3d);
};
class ls_staticShipPart_mandator_engine3: ls_staticShipPart_mandator_engine1 {
    author = AUTHOR;
    displayName = "engine3";
    model = QPATHTOF(mandator\ls_mandator_engine3.p3d);
};
class ls_staticShipPart_mandator_hanger1_1: ls_staticShipPart_mandator_body1_1 {
    author = AUTHOR;
    displayName = "hanger1_1";
    model = QPATHTOF(mandator\ls_mandator_hanger1_1.p3d);
    hiddenSelections[] = {"hanger1"};
    hiddenSelectionsTextures[] = {QPATHTOF(mandator\data\hanger1_co.paa)};
};
class ls_staticShipPart_mandator_hanger2_1: ls_staticShipPart_mandator_body1_1 {
    model = QPATHTOF(mandator\ls_mandator_hanger2_1.p3d);
    hiddenSelections[] = {"hanger2"};
    hiddenSelectionsTextures[] = {QPATHTOF(mandator\data\hanger2_co.paa)};
};
class ls_staticShipPart_mandator_hanger2_2: ls_staticShipPart_mandator_hanger2_1 {
    author = AUTHOR;
    displayName = "hanger2_2";
    model = QPATHTOF(mandator\ls_mandator_hanger2_2.p3d);
};
class ls_staticShipPart_mandator_hanger3_1: ls_staticShipPart_mandator_body1_1 {
    author = AUTHOR;
    displayName = "hanger3_1";
    model = QPATHTOF(mandator\ls_mandator_hanger3_1.p3d);
    hiddenSelections[] = {"hanger3"};
    hiddenSelectionsTextures[] = {QPATHTOF(mandator\data\hanger3_co.paa)};
};
class ls_staticShipPart_mandator_hanger3_2: ls_staticShipPart_mandator_hanger3_1 {
    author = AUTHOR;
    displayName = "hanger3_2";
    model = QPATHTOF(mandator\ls_mandator_hanger3_2.p3d);
};
class ls_staticShipPart_mandator_hanger4: ls_staticShipPart_mandator_body1_1 {
    author = AUTHOR;
    displayName = "hanger4";
    model = QPATHTOF(mandator\ls_mandator_hanger4.p3d);
    hiddenSelections[] = {"hanger4"};
    hiddenSelectionsTextures[] = {QPATHTOF(mandator\data\hanger4_co.paa)};
};

DEPRECATED(mandator_base,ls_staticShip_mandator);
DEPRECATED(mandator_body1_1,ls_staticShipPart_mandator_body1_1);
DEPRECATED(mandator_body2_1,ls_staticShipPart_mandator_body2_1);
DEPRECATED(mandator_body2_2,ls_staticShipPart_mandator_body2_2);
DEPRECATED(mandator_body3_1,ls_staticShipPart_mandator_body3_1);
DEPRECATED(mandator_body3_2,ls_staticShipPart_mandator_body3_2);
DEPRECATED(mandator_body4_1,ls_staticShipPart_mandator_body4_1);
DEPRECATED(mandator_body4_2,ls_staticShipPart_mandator_body4_2);
DEPRECATED(mandator_body4_3,ls_staticShipPart_mandator_body4_3);
DEPRECATED(mandator_body4_4,ls_staticShipPart_mandator_body4_4);
DEPRECATED(mandator_body4_5,ls_staticShipPart_mandator_body4_5);
DEPRECATED(mandator_body4_6,ls_staticShipPart_mandator_body4_6);
DEPRECATED(mandator_body4_7,ls_staticShipPart_mandator_body4_7);
DEPRECATED(mandator_body4_8,ls_staticShipPart_mandator_body4_8);
DEPRECATED(mandator_engine_1,ls_staticShipPart_mandator_engine1);
DEPRECATED(mandator_engine_2,ls_staticShipPart_mandator_engine2);
DEPRECATED(mandator_engine_3,ls_staticShipPart_mandator_engine3);
DEPRECATED(mandator_hanger1_1,ls_staticShipPart_mandator_hanger1_1);
DEPRECATED(mandator_hanger2_1,ls_staticShipPart_mandator_hanger2_1);
DEPRECATED(mandator_hanger2_2,ls_staticShipPart_mandator_hanger2_2);
DEPRECATED(mandator_hanger3_1,ls_staticShipPart_mandator_hanger3_1);
DEPRECATED(mandator_hanger3_2,ls_staticShipPart_mandator_hanger3_2);
DEPRECATED(mandator_hanger4,ls_staticShipPart_mandator_hanger4);
