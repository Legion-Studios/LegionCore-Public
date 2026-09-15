class ls_cloneGlasses_phase2_commander: ls_clone_phase2_hud {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(phase2_commander_visor);

    model = QPATHTOF(equipment\nvgs\commander\ls_nvg_clone_commander.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {QPATHTOF(equipment\nvgs\commander\data\camo1_co.paa)};
    picture = QPATHTOF(data\ui\commanderNVG_ui_ca.paa);
    mass = 10;
};

class ls_cloneGlasses_phase2_commander_white: ls_cloneGlasses_phase2_commander {
    author = AUTHOR;
    displayName = CSTRING(phase2_commander_visor_white);
    hiddenSelectionsTextures[] = {QPATHTOF(equipment\nvgs\commander\data\camo1_white_co.paa)};
};
