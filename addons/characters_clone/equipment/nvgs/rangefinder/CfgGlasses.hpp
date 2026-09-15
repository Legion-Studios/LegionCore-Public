class ls_cloneGlasses_phase2_rangefinder: ls_clone_phase2_hud {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(phase2_rangefinder);

    model = QPATHTOF(equipment\nvgs\rangefinder\ls_nvg_clone_rangefinder_off.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {QPATHTOF(equipment\nvgs\rangefinder\data\camo1_co.paa)};
    picture = QPATHTOF(data\ui\rangefinderNVG_ui_ca.paa);
    mass = 10;
};

class ls_cloneGlasses_phase1_rangefinder: ls_clone_phase1_hud {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(phase1_rangefinder);

    model = QPATHTOF(equipment\nvgs\rangefinder\ls_nvg_clone_phase1_rangefinder_off.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {QPATHTOF(equipment\nvgs\rangefinder\data\camo1_co.paa)};
    picture = QPATHTOF(data\ui\rangefinderNVG_ui_ca.paa);
    mass = 10;
};
