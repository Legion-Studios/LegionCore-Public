class ls_cloneNVG_phase1Headlamp: ls_nvg_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Clone Phase 1 Headlamp";

    model = QPATHTOF(equipment\headlamps\ls_clone_phase1Headlamp.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(equipment\headlamps\data\camo1_co.paa)
    };
    modelOptics = QPATHTOEF(characters,equipment\nvg\ls_optic_dummy.p3d);
    picture = QPATHTOF(data\ui\headlamp_ui_ca.paa);
    ace_nightvision_border = "";

    visionMode[] = {"Normal"};
    thermalMode[] = {};

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(equipment\headlamps\ls_clone_phase1Headlamp.p3d);
        modelOff = QPATHTOF(equipment\headlamps\ls_clone_phase1Headlamp.p3d);
        mass = 5;
    };

    class ls_lighting: EGVAR(lighting,clone_phase1) {};
};

class ls_cloneNVG_phase2Headlamp: ls_cloneNVG_phase1Headlamp {
    author = AUTHOR;
    displayName = "Clone Phase 2 Headlamp";
    model = QPATHTOF(equipment\headlamps\ls_clone_phase2Headlamp.p3d);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(equipment\headlamps\ls_clone_phase2Headlamp.p3d);
        modelOff = QPATHTOF(equipment\headlamps\ls_clone_phase2Headlamp.p3d);
    };

    class ls_lighting: EGVAR(lighting,clone_phase2) {};
};

class ls_cloneNVG_phase2Headlamp_Double: ls_cloneNVG_phase1Headlamp {
    author = AUTHOR;
    displayName = "Clone Phase 2 Headlamp (Double)";
    model = QPATHTOF(equipment\headlamps\ls_clone_phase2Headlamp_Double.p3d);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(equipment\headlamps\ls_clone_phase2Headlamp_Double.p3d);
        modelOff = QPATHTOF(equipment\headlamps\ls_clone_phase2Headlamp_Double.p3d);
    };
};

class ls_cloneNVG_phase2Headlamp_Left: ls_cloneNVG_phase1Headlamp {
    author = AUTHOR;
    displayName = "Clone Phase 2 Headlamp (Left)";
    model = QPATHTOF(equipment\headlamps\ls_clone_phase2Headlamp_Left.p3d);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(equipment\headlamps\ls_clone_phase2Headlamp_Left.p3d);
        modelOff = QPATHTOF(equipment\headlamps\ls_clone_phase2Headlamp_Left.p3d);
    };
};

DEPRECATED(ls_clone_headlampPhase1_nvg,ls_cloneNVG_phase1Headlamp);
DEPRECATED(ls_clone_headlampPhase2_nvg,ls_cloneNVG_phase2Headlamp);
DEPRECATED(lsd_gar_p1SingleHeadlamp_nvg,ls_cloneNVG_phase1Headlamp);
DEPRECATED(lsd_gar_p2SingleHeadlamp_nvg,ls_cloneNVG_phase2Headlamp);
