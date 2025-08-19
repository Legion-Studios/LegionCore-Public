class ls_staticShip_subjugator: ls_staticShip_multiPart_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Subjugator-Class Heavy Cruiser";

    mapSize = 4800;
    model = QPATHTOF(subjugator\ls_subjugator.p3d);
    multiStructureParts[] = {
        {"ls_staticShipPart_subjugator_body1", "body1"},
        {"ls_staticShipPart_subjugator_body1_1", "body1_1"},
        {"ls_staticShipPart_subjugator_body2", "body2"},
        {"ls_staticShipPart_subjugator_body2_1", "body2_1"},
        {"ls_staticShipPart_subjugator_body2_2", "body2_2"},
        {"ls_staticShipPart_subjugator_body2_3", "body2_3"},
        {"ls_staticShipPart_subjugator_body2_4", "body2_4"},
        {"ls_staticShipPart_subjugator_body3", "body3"},
        {"ls_staticShipPart_subjugator_body4", "body4"},
        {"ls_staticShipPart_subjugator_body4_1", "body4_1"},
        {"ls_staticShipPart_subjugator_body4_2", "body4_2"},
        {"ls_staticShipPart_subjugator_body4_3", "body4_3"},
        {"ls_staticShipPart_subjugator_body4_4", "body4_4"},
        {"ls_staticShipPart_subjugator_body5", "body5"},
        {"ls_staticShipPart_subjugator_body5_1", "body5_1"},
        {"ls_staticShipPart_subjugator_body5_2", "body5_2"},
        {"ls_staticShipPart_subjugator_body5_3", "body5_3"},
        {"ls_staticShipPart_subjugator_body5_4", "body5_4"},
        {"ls_staticShipPart_subjugator_emp1", "emp1"},
        {"ls_staticShipPart_subjugator_emp1_1", "emp1_1"},
        {"ls_staticShipPart_subjugator_emp2", "emp2"},
        {"ls_staticShipPart_subjugator_emp2_1", "emp2_1"},
        {"ls_staticShipPart_subjugator_bridge", "bridge"},
        {"ls_staticShipPart_subjugator_engine", "engine"},
    };
};

class ls_staticShipPart_subjugator_body1: ls_staticShipPart_base {
    scope = 2;
    scopeCurator = 2;
    author = AUTHOR;
    displayName = "Body 1";
    editorSubcategory = "ls_edsubcat_staticShips_subjugator";

    model = QPATHTOF(subjugator\ls_subjugator_body1.p3d);
    hiddenselections[] = {"body1"};
    hiddenselectionstextures[] = {QPATHTOF(subjugator\data\body1_co.paa)};
};
class ls_staticShipPart_subjugator_body1_1: ls_staticShipPart_subjugator_body1 {
    author = AUTHOR;
    displayName = "Body 1_1";
    model = QPATHTOF(subjugator\ls_subjugator_body1_1.p3d);
};
class ls_staticShipPart_subjugator_body2: ls_staticShipPart_subjugator_body1 {
    author = AUTHOR;
    displayName = "Body 2";
    model = QPATHTOF(subjugator\ls_subjugator_body2.p3d);
    hiddenselections[] = {"body2"};
    hiddenselectionstextures[] = {QPATHTOF(subjugator\data\body2_co.paa)};
};
class ls_staticShipPart_subjugator_body2_1: ls_staticShipPart_subjugator_body2 {
    author = AUTHOR;
    displayName = "Body 2_1";
    model = QPATHTOF(subjugator\ls_subjugator_body2_1.p3d);
};
class ls_staticShipPart_subjugator_body2_2: ls_staticShipPart_subjugator_body2 {
    author = AUTHOR;
    displayName = "Body 2_2";
    model = QPATHTOF(subjugator\ls_subjugator_body2_2.p3d);
};
class ls_staticShipPart_subjugator_body2_3: ls_staticShipPart_subjugator_body2 {
    author = AUTHOR;
    displayName = "Body 2_3";
    model = QPATHTOF(subjugator\ls_subjugator_body2_3.p3d);
};
class ls_staticShipPart_subjugator_body2_4: ls_staticShipPart_subjugator_body2 {
    author = AUTHOR;
    displayName = "Body 2_4";
    model = QPATHTOF(subjugator\ls_subjugator_body2_4.p3d);
};
class ls_staticShipPart_subjugator_body3: ls_staticShipPart_subjugator_body1 {
    author = AUTHOR;
    displayName = "Body 3";
    model = QPATHTOF(subjugator\ls_subjugator_body3.p3d);
    hiddenselections[] = {"body3"};
    hiddenselectionstextures[] = {QPATHTOF(subjugator\data\body3_co.paa)};
};
class ls_staticShipPart_subjugator_body4: ls_staticShipPart_subjugator_body1 {
    author = AUTHOR;
    displayName = "Body 4";
    model = QPATHTOF(subjugator\ls_subjugator_body4.p3d);
    hiddenselections[] = {"body4"};
    hiddenselectionstextures[] = {QPATHTOF(subjugator\data\body4_co.paa)};
};
class ls_staticShipPart_subjugator_body4_1: ls_staticShipPart_subjugator_body4 {
    author = AUTHOR;
    displayName = "Body 4_1";
    model = QPATHTOF(subjugator\ls_subjugator_body4_1.p3d);
};
class ls_staticShipPart_subjugator_body4_2: ls_staticShipPart_subjugator_body4 {
    author = AUTHOR;
    displayName = "Body 4_2";
    model = QPATHTOF(subjugator\ls_subjugator_body4_2.p3d);
};
class ls_staticShipPart_subjugator_body4_3: ls_staticShipPart_subjugator_body4 {
    author = AUTHOR;
    displayName = "Body 4_3";
    model = QPATHTOF(subjugator\ls_subjugator_body4_3.p3d);
};
class ls_staticShipPart_subjugator_body4_4: ls_staticShipPart_subjugator_body4 {
    author = AUTHOR;
    displayName = "Body 4_4";
    model = QPATHTOF(subjugator\ls_subjugator_body4_4.p3d);
};
class ls_staticShipPart_subjugator_body5: ls_staticShipPart_subjugator_body1 {
    author = AUTHOR;
    displayName = "Body 5";
    model = QPATHTOF(subjugator\ls_subjugator_body5.p3d);
    hiddenselections[] = {"body5"};
    hiddenselectionstextures[] = {QPATHTOF(subjugator\data\body5_co.paa)};
};
class ls_staticShipPart_subjugator_body5_1: ls_staticShipPart_subjugator_body5 {
    author = AUTHOR;
    displayName = "Body 5_1";
    model = QPATHTOF(subjugator\ls_subjugator_body5_1.p3d);
};
class ls_staticShipPart_subjugator_body5_2: ls_staticShipPart_subjugator_body5 {
    author = AUTHOR;
    displayName = "Body 5_2";
    model = QPATHTOF(subjugator\ls_subjugator_body5_2.p3d);
};
class ls_staticShipPart_subjugator_body5_3: ls_staticShipPart_subjugator_body5 {
    author = AUTHOR;
    displayName = "Body 5_3";
    model = QPATHTOF(subjugator\ls_subjugator_body5_3.p3d);
};
class ls_staticShipPart_subjugator_body5_4: ls_staticShipPart_subjugator_body5 {
    author = AUTHOR;
    displayName = "Body 5_4";
    model = QPATHTOF(subjugator\ls_subjugator_body5_4.p3d);
};
class ls_staticShipPart_subjugator_bridge: ls_staticShipPart_subjugator_body1 {
    author = AUTHOR;
    displayName = "Bridge";
    model = QPATHTOF(subjugator\ls_subjugator_bridge.p3d);
    hiddenselections[] = {"bridge"};
    hiddenselectionstextures[] = {QPATHTOF(subjugator\data\bridge_co.paa)};
};
class ls_staticShipPart_subjugator_emp1: ls_staticShipPart_subjugator_body1 {
    author = AUTHOR;
    displayName = "Emp 1";
    model = QPATHTOF(subjugator\ls_subjugator_emp1.p3d);
    hiddenselections[] = {"emp1"};
    hiddenselectionstextures[] = {QPATHTOF(subjugator\data\emp1_co.paa)};
};
class ls_staticShipPart_subjugator_emp1_1: ls_staticShipPart_subjugator_emp1 {
    author = AUTHOR;
    displayName = "Emp 1_1";
    model = QPATHTOF(subjugator\ls_subjugator_emp1_1.p3d);
};
class ls_staticShipPart_subjugator_emp2: ls_staticShipPart_subjugator_body1 {
    author = AUTHOR;
    displayName = "Emp 2";
    model = QPATHTOF(subjugator\ls_subjugator_emp2.p3d);
    hiddenselections[] = {"emp2"};
    hiddenselectionstextures[] = {QPATHTOF(subjugator\data\emp2_co.paa)};
};
class ls_staticShipPart_subjugator_emp2_1: ls_staticShipPart_subjugator_emp2 {
    author = AUTHOR;
    displayName = "Emp 2_1";
    model = QPATHTOF(subjugator\ls_subjugator_emp2_1.p3d);
};
class ls_staticShipPart_subjugator_engine: ls_staticShipPart_subjugator_body1 {
    author = AUTHOR;
    displayName = "Engine";
    model = QPATHTOF(subjugator\ls_subjugator_engine.p3d);
    hiddenselections[] = {"engine"};
    hiddenselectionstextures[] = {QPATHTOF(subjugator\data\engine_co.paa)};
};

DEPRECATED(ls_subjugator_base,ls_staticShip_subjugator);
DEPRECATED(ls_subjugator_body1,ls_staticShipPart_subjugator_body1);
DEPRECATED(ls_subjugator_body1_1,ls_staticShipPart_subjugator_body1_1);
DEPRECATED(ls_subjugator_body2,ls_staticShipPart_subjugator_body2);
DEPRECATED(ls_subjugator_body2_1,ls_staticShipPart_subjugator_body2_1);
DEPRECATED(ls_subjugator_body2_2,ls_staticShipPart_subjugator_body2_2);
DEPRECATED(ls_subjugator_body2_3,ls_staticShipPart_subjugator_body2_3);
DEPRECATED(ls_subjugator_body2_4,ls_staticShipPart_subjugator_body2_4);
DEPRECATED(ls_subjugator_body3,ls_staticShipPart_subjugator_body3);
DEPRECATED(ls_subjugator_body4,ls_staticShipPart_subjugator_body4);
DEPRECATED(ls_subjugator_body4_1,ls_staticShipPart_subjugator_body4_1);
DEPRECATED(ls_subjugator_body4_2,ls_staticShipPart_subjugator_body4_2);
DEPRECATED(ls_subjugator_body4_3,ls_staticShipPart_subjugator_body4_3);
DEPRECATED(ls_subjugator_body4_4,ls_staticShipPart_subjugator_body4_4);
DEPRECATED(ls_subjugator_body5,ls_staticShipPart_subjugator_body5);
DEPRECATED(ls_subjugator_body5_1,ls_staticShipPart_subjugator_body5_1);
DEPRECATED(ls_subjugator_body5_2,ls_staticShipPart_subjugator_body5_2);
DEPRECATED(ls_subjugator_body5_3,ls_staticShipPart_subjugator_body5_3);
DEPRECATED(ls_subjugator_body5_4,ls_staticShipPart_subjugator_body5_4);
DEPRECATED(ls_subjugator_bridge,ls_staticShipPart_subjugator_bridge);
DEPRECATED(ls_subjugator_emp1,ls_staticShipPart_subjugator_emp1);
DEPRECATED(ls_subjugator_emp1_1,ls_staticShipPart_subjugator_emp1_1);
DEPRECATED(ls_subjugator_emp2,ls_staticShipPart_subjugator_emp2);
DEPRECATED(ls_subjugator_emp2_1,ls_staticShipPart_subjugator_emp2_1);
DEPRECATED(ls_subjugator_engine,ls_staticShipPart_subjugator_engine);
