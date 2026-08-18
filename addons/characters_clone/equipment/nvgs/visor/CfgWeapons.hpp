class ls_cloneNVG_phase2_visor: ls_nvg_base {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(phase2_visor);

    model = QPATHTOF(equipment\nvgs\visor\ls_nvg_clone_phase2_visor_off.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {QPATHTOF(equipment\nvgs\visor\data\camo1_co.paa)};
    picture = QPATHTOF(data\ui\visorNVG_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(equipment\nvgs\visor\ls_nvg_clone_phase2_visor_on.p3d);
        modelOff = QPATHTOF(equipment\nvgs\visor\ls_nvg_clone_phase2_visor_off.p3d);
        mass = 20;
        hiddenSelections[] = {"camo1"};
    };
};

class ls_cloneNVG_phase1_visor: ls_cloneNVG_phase2_visor {
    author = AUTHOR;
    displayName = CSTRING(phase1_visor);
    model = QPATHTOF(equipment\nvgs\visor\ls_nvg_clone_phase1_visor_off.p3d);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(equipment\nvgs\visor\ls_nvg_clone_phase1_visor_on.p3d);
        modelOff = QPATHTOF(equipment\nvgs\visor\ls_nvg_clone_phase1_visor_off.p3d);
    };
};

DEPRECATED(ls_cloneNVG_visor,ls_cloneNVG_phase2_visor);
