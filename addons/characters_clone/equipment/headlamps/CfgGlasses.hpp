class ls_clone_headlampPhase1_hud: ls_clone_phase1_hud {
    author = AUTHOR;
    displayName = "Clone Phase 1 Headlamp";

    model = QPATHTOF(equipment\headlamps\ls_clone_phase1Headlamp.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(equipment\headlamps\data\camo1_co.paa)
    };
    picture = QPATHTOF(data\ui\headlamp_ui_ca.paa);

    class ls_lighting: EGVAR(lighting,clone_phase1) {};

    class FlashLight {
        ace_flashlight_beam = "\z\ace\addons\flashlights\UI\Flashlight_beam_white_ca.paa";
        ace_flashlight_colour = "white";
        ace_flashlight_size = 2.15;
    };
};

class ls_clone_headlampPhase1_left_hud: ls_clone_headlampPhase1_hud {
    author = AUTHOR;
    displayName = "Clone Phase 1 Headlamp (Left)";

    model = QPATHTOF(equipment\headlamps\ls_clone_phase1Headlamp_left.p3d);

    class ls_lighting: ls_lighting {
        sources[] = {"left"};
    };
};

class ls_clone_headlampPhase1_double_hud: ls_clone_headlampPhase1_hud {
    author = AUTHOR;
    displayName = "Clone Phase 1 Headlamp (Double)";

    model = QPATHTOF(equipment\headlamps\ls_clone_phase1Headlamp_double.p3d);

    class ls_lighting: ls_lighting {
        sources[] = {"left", "right"};
    };
};

class ls_clone_headlampPhase2_hud: ls_clone_phase2_hud {
    author = AUTHOR;
    displayName = "Clone Phase 2 Headlamp";

    model = QPATHTOF(equipment\headlamps\ls_clone_phase2Headlamp.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(equipment\headlamps\data\camo1_co.paa)
    };
    picture = QPATHTOF(data\ui\headlamp_ui_ca.paa);

    class ls_lighting: EGVAR(lighting,clone_phase2) {};

    class FlashLight {
        ace_flashlight_beam = "\z\ace\addons\flashlights\UI\Flashlight_beam_white_ca.paa";
        ace_flashlight_colour = "white";
        ace_flashlight_size = 2.15;
    };
};


class ls_clone_headlampPhase2_right_hud: ls_clone_headlampPhase2_hud {
    author = AUTHOR;
    displayName = "Clone Phase 2 Headlamp (Right)";

    model = QPATHTOF(equipment\headlamps\ls_clone_phase2Headlamp_right.p3d);

    class ls_lighting: ls_lighting {
        sources[] = {"right"};
    };
};

class ls_clone_headlampPhase2_double_hud: ls_clone_headlampPhase2_hud {
    author = AUTHOR;
    displayName = "Clone Phase 2 Headlamp (Double)";

    model = QPATHTOF(equipment\headlamps\ls_clone_phase2Headlamp_double.p3d);

    class ls_lighting: ls_lighting {
        sources[] = {"left", "right"};
    };
};

DEPRECATED(lsd_gar_p1Interior_flashlight,ls_clone_headlampPhase1_hud);
DEPRECATED(lsd_gar_p2Interior_flashlight,ls_clone_headlampPhase2_hud);
