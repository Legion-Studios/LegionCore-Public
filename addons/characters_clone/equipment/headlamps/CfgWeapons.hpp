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
        hiddenSelections[] = {"camo1"};
        mass = 5;

        class FlashLight {
            ace_flashlight_beam = "\z\ace\addons\flashlights\UI\Flashlight_beam_white_ca.paa";
            ace_flashlight_colour = "white";
            ace_flashlight_size = 2.15;
        };
    };

    class ls_lighting: EGVAR(lighting,clone_phase1) {};
};

class ls_cloneNVG_phase1Headlamp_left: ls_cloneNVG_phase1Headlamp {
    author = AUTHOR;
    displayName = "Clone Phase 1 Headlamp (Left)";
    model = QPATHTOF(equipment\headlamps\ls_clone_phase1Headlamp_left.p3d);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(equipment\headlamps\ls_clone_phase1Headlamp_left.p3d);
        modelOff = QPATHTOF(equipment\headlamps\ls_clone_phase1Headlamp_left.p3d);
    };

    class ls_lighting: ls_lighting {
        sources[] = {"left"};
    };
};

class ls_cloneNVG_phase1Headlamp_double: ls_cloneNVG_phase1Headlamp {
    author = AUTHOR;
    displayName = "Clone Phase 1 Headlamp (Double)";
    model = QPATHTOF(equipment\headlamps\ls_clone_phase1Headlamp_double.p3d);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(equipment\headlamps\ls_clone_phase1Headlamp_double.p3d);
        modelOff = QPATHTOF(equipment\headlamps\ls_clone_phase1Headlamp_double.p3d);
    };

    class ls_lighting: ls_lighting {
        sources[] = {"left", "right"};
    };
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

class ls_cloneNVG_phase2Headlamp_right: ls_cloneNVG_phase1Headlamp {
    author = AUTHOR;
    displayName = "Clone Phase 2 Headlamp (Right)";
    model = QPATHTOF(equipment\headlamps\ls_clone_phase2Headlamp_right.p3d);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(equipment\headlamps\ls_clone_phase2Headlamp_right.p3d);
        modelOff = QPATHTOF(equipment\headlamps\ls_clone_phase2Headlamp_right.p3d);
    };

    class ls_lighting: ls_lighting {
        sources[] = {"right"};
    };
};

class ls_cloneNVG_phase2Headlamp_double: ls_cloneNVG_phase1Headlamp {
    author = AUTHOR;
    displayName = "Clone Phase 2 Headlamp (Double)";
    model = QPATHTOF(equipment\headlamps\ls_clone_phase2Headlamp_double.p3d);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(equipment\headlamps\ls_clone_phase2Headlamp_double.p3d);
        modelOff = QPATHTOF(equipment\headlamps\ls_clone_phase2Headlamp_double.p3d);
    };

    class ls_lighting: ls_lighting {
        sources[] = {"left", "right"};
    };
};

DEPRECATED(ls_clone_headlampPhase1_nvg,ls_cloneNVG_phase1Headlamp);
DEPRECATED(ls_clone_headlampPhase2_nvg,ls_cloneNVG_phase2Headlamp);
DEPRECATED(lsd_gar_p1SingleHeadlamp_nvg,ls_cloneNVG_phase1Headlamp);
DEPRECATED(lsd_gar_p2SingleHeadlamp_nvg,ls_cloneNVG_phase2Headlamp);
