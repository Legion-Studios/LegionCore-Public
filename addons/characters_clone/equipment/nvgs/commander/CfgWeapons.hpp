class ls_cloneNVG_commander: ls_nvg_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Clone Commander Visor";

    model = QPATHTOF(equipment\nvgs\commander\ls_nvg_clone_commander.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {QPATHTOF(equipment\nvgs\commander\data\camo1_co.paa)};

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(equipment\nvgs\commander\ls_nvg_clone_commander.p3d);
        modelOff = QPATHTOF(equipment\nvgs\commander\ls_nvg_clone_commander.p3d);
        mass = 20;
        hiddenSelections[] = {"camo1"};
    };
};
