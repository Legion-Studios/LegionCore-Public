class ls_staticShip_hardcell: ls_staticShip_multiPart_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Hardcell Transport";

    mapSize = 3000;

    model = QPATHTOF(hardcell\ls_hardcell.p3d);
    multiStructureParts[] = {
        {"ls_staticShipPart_hardcell_body", "body"},
        {"ls_staticShipPart_hardcell_engine1", "engine1"},
        {"ls_staticShipPart_hardcell_engine2", "engine2"},
        {"ls_staticShipPart_hardcell_engine3", "engine3"},
        {"ls_staticShipPart_hardcell_leg1", "leg1"},
        {"ls_staticShipPart_hardcell_leg2", "leg2"},
        {"ls_staticShipPart_hardcell_leg3", "leg3"}
    };
};

class ls_staticShipPart_hardcell_body: ls_staticShipPart_base {
    scope = 2;
    scopeCurator = 2;
    author = AUTHOR;
    displayName = "Body";
    editorSubcategory = "ls_edsubcat_staticShips_hardcell";

    model = QPATHTOF(hardcell\ls_hardcell_body.p3d);
    hiddenSelections[] = {"upper"};
    hiddenSelectionsTextures[] = {QPATHTOF(hardcell\data\upper_co.paa)};
};
class ls_staticShipPart_hardcell_engine1: ls_staticShipPart_hardcell_body {
    author = AUTHOR;
    displayName = "Engine 1";
    model = QPATHTOF(hardcell\ls_hardcell_engine1.p3d);
    hiddenSelections[] = {"lower"};
    hiddenSelectionsTextures[] = {QPATHTOF(hardcell\data\lower_co.paa)};
};
class ls_staticShipPart_hardcell_engine2: ls_staticShipPart_hardcell_engine1 {
    author = AUTHOR;
    displayName = "Engine 2";
    model = QPATHTOF(hardcell\ls_hardcell_engine2.p3d);
};
class ls_staticShipPart_hardcell_engine3: ls_staticShipPart_hardcell_engine1 {
    author = AUTHOR;
    displayName = "Engine 3";
    model = QPATHTOF(hardcell\ls_hardcell_engine3.p3d);
};
class ls_staticShipPart_hardcell_leg1: ls_staticShipPart_hardcell_engine1 {
    author = AUTHOR;
    displayName = "Leg 1";
    model = QPATHTOF(hardcell\ls_hardcell_leg1.p3d);
};
class ls_staticShipPart_hardcell_leg2: ls_staticShipPart_hardcell_engine1 {
    author = AUTHOR;
    displayName = "Leg 2";
    model = QPATHTOF(hardcell\ls_hardcell_leg2.p3d);
};
class ls_staticShipPart_hardcell_leg3: ls_staticShipPart_hardcell_engine1 {
    author = AUTHOR;
    displayName = "Leg 3";
    model = QPATHTOF(hardcell\ls_hardcell_leg3.p3d);
};

DEPRECATED(ls_hardcell_base,ls_staticShip_hardcell);
DEPRECATED(ls_hardcell_body,ls_staticShipPart_hardcell_body);
DEPRECATED(ls_hardcell_engine1,ls_staticShipPart_hardcell_engine1);
DEPRECATED(ls_hardcell_engine2,ls_staticShipPart_hardcell_engine2);
DEPRECATED(ls_hardcell_engine3,ls_staticShipPart_hardcell_engine3);
DEPRECATED(ls_hardcell_leg1,ls_staticShipPart_hardcell_leg1);
DEPRECATED(ls_hardcell_leg2,ls_staticShipPart_hardcell_leg2);
DEPRECATED(ls_hardcell_leg3,ls_staticShipPart_hardcell_leg3);
