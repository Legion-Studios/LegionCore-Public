class ls_cloneGlasses_phase2_visor: ls_clone_phase2_hud {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(phase2_visor);

    model = QPATHTOF(equipment\nvgs\visor\ls_nvg_clone_phase2_visor_off.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {QPATHTOF(equipment\nvgs\visor\data\camo1_co.paa)};
    picture = QPATHTOF(data\ui\visorNVG_ui_ca.paa);
    mass = 10;
};

class ls_cloneGlasses_phase1_visor: ls_clone_phase1_hud {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(phase1_visor);

    model = QPATHTOF(equipment\nvgs\visor\ls_nvg_clone_phase1_visor_off.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {QPATHTOF(equipment\nvgs\visor\data\camo1_co.paa)};
    picture = QPATHTOF(data\ui\visorNVG_ui_ca.paa);
    mass = 10;
};
