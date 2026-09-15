class ls_cloneNVG_phase2_commander: ls_nvg_base {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(phase2_commander_visor);
    model = QPATHTOF(equipment\nvgs\commander\ls_nvg_clone_commander.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {QPATHTOF(equipment\nvgs\commander\data\camo1_co.paa)};
    picture = QPATHTOF(data\ui\commanderNVG_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(equipment\nvgs\commander\ls_nvg_clone_commander.p3d);
        modelOff = QPATHTOF(equipment\nvgs\commander\ls_nvg_clone_commander.p3d);
        mass = 20;
        hiddenSelections[] = {"camo1"};
    };
};

class ls_cloneNVG_phase2_commander_white: ls_cloneNVG_phase2_commander {
    author = AUTHOR;
    displayName = CSTRING(phase2_commander_visor_white);
    hiddenSelectionsTextures[] = {QPATHTOF(equipment\nvgs\commander\data\camo1_white_co.paa)};
};

DEPRECATED(ls_cloneNVG_commander,ls_cloneNVG_phase2_commander);
