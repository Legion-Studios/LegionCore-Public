class ls_clone_headlampPhase1_hud: ls_clone_phase1_hud {
    scope = 2;
    author = AUTHOR;
    displayName = "Clone Phase 1 Headlamp";

    model = QPATHTOF(equipment\headlamps\ls_clone_phase1Headlamp.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(equipment\headlamps\data\camo1_co.paa)
    };
    picture = QPATHTOF(data\ui\headlamp_ui_ca.paa);

    class ls_lighting: EGVAR(lighting,clone_phase1) {};
};

class ls_clone_headlampPhase2_hud: ls_clone_phase2_hud {
    scope = 2;
    author = AUTHOR;
    displayName = "Clone Phase 2 Headlamp";

    model = QPATHTOF(equipment\headlamps\ls_clone_phase2Headlamp.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(equipment\headlamps\data\camo1_co.paa)
    };
    picture = QPATHTOF(data\ui\headlamp_ui_ca.paa);

    class ls_lighting: EGVAR(lighting,clone_phase2) {};
};

class ls_clone_headlampPhase2_double_hud: ls_clone_phase2_hud {
    scope = 2;
    author = AUTHOR;
    displayName = "Clone Phase 2 Headlamp (Double)";

    model = QPATHTOF(equipment\headlamps\ls_clone_phase2Headlamp_Double.p3d);
};

class ls_clone_headlampPhase2_left_hud: ls_clone_phase2_hud {
    scope = 2;
    author = AUTHOR;
    displayName = "Clone Phase 2 Headlamp (Left)";

    model = QPATHTOF(equipment\headlamps\ls_clone_phase2Headlamp_Left.p3d);
};

class lsd_gar_p1Interior_flashlight: ls_clone_headlampPhase1_hud {
    scope = 1;
    ace_arsenal_uniqueBase = "ls_clone_headlampPhase1_hud";
};
class lsd_gar_p2Interior_flashlight: ls_clone_headlampPhase2_hud {
    scope = 1;
    ace_arsenal_uniqueBase = "ls_clone_headlampPhase2_hud";
};
