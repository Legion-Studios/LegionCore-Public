class ls_clone_electrobinoculars: Laserdesignator {
    scope = 2;
    author = AUTHOR;
    displayName = "Clone Trooper Electrobinoculars";
    descriptionShort = "";

    model = QPATHTOF(equipment\binoculars\ls_binoculars_clone.p3d);
    modelOptics = QPATHTOF(equipment\binoculars\ls_binoculars_cloneCommander_optic.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(equipment\binoculars\data\electrobinoculars\camo1_co.paa)
    };
    // The electrobinoculars_x_ca.paa is used when the binocs have no loaded magazine, they use the legacy icon system
    picture = QPATHTOF(data\ui\electrobinoculars_ui_ca.paa);

    visionMode[] = {"Normal", "NVG", "TI"};
    thermalMode[] = {0, 1};
};

class ls_clone_electrobinocularsCommander: ls_clone_electrobinoculars {
    author = AUTHOR;
    displayName = "Clone Commander Electrobinoculars";

    model = QPATHTOF(equipment\binoculars\ls_binoculars_cloneCommander.p3d);
    modelOptics = QPATHTOF(equipment\binoculars\ls_binoculars_cloneCommander_optic.p3d);
    hiddenSelectionsTextures[] = {
        QPATHTOF(equipment\binoculars\data\electrobinocularsCommander\camo1_co.paa)
    };
};

class ls_clone_electrobinocularsCommander_night: ls_clone_electrobinocularsCommander {
    author = AUTHOR;
    displayName = "Clone Commander Electrobinoculars (Night)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(equipment\binoculars\data\electrobinocularsCommander\camo1_night_co.paa)
    };
};
