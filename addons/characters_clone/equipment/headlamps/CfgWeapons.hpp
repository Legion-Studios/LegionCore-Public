class ls_clone_headlampPhase1_nvg: ls_nvg_base {
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

    LIGHTING_P1_HEADLAMP;
};

class lsd_gar_p1SingleHeadlamp_nvg: ls_clone_headlampPhase1_nvg {
    scope = 1;
    ace_arsenal_uniqueBase = "ls_clone_phase1Headlamp_nvg";
};

class ls_clone_headlampPhase2_nvg: ls_clone_headlampPhase1_nvg {
    author = AUTHOR;
    displayName = "Clone Phase 2 Headlamp";
    model = QPATHTOF(equipment\headlamps\ls_clone_phase2Headlamp.p3d);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(equipment\headlamps\ls_clone_phase2Headlamp.p3d);
        modelOff = QPATHTOF(equipment\headlamps\ls_clone_phase2Headlamp.p3d);
    };

    LIGHTING_P2_HEADLAMP;
};

class lsd_gar_p2SingleHeadlamp_nvg: ls_clone_headlampPhase2_nvg {
    scope = 1;
    ace_arsenal_uniqueBase = "ls_clone_phase2Headlamp_nvg";
};
