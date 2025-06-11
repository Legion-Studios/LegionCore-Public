class ls_cloneNVG_visor: ls_nvg_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Clone Visor";
    model = QPATHTOF(equipment\nvgs\visor\ls_nvg_clone_visor.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {QPATHTOF(equipment\nvgs\visor\data\camo1_co.paa)};
    visionMode[] = {"Normal", "NVG"};
    thermalMode[] = {0, 1};
    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(equipment\nvgs\visor\ls_nvg_clone_visor.p3d);
        modelOff = QPATHTOF(equipment\nvgs\visor\ls_nvg_clone_visor.p3d);
        mass = 20;
        hiddenSelections[] = {"camo1"};
    };
};