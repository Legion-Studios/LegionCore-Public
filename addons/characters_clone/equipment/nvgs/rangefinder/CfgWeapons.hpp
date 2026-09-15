class ls_cloneNVG_phase2_rangefinder: ls_nvg_base {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(phase2_rangefinder);

    model = QPATHTOF(equipment\nvgs\rangefinder\ls_nvg_clone_rangefinder_off.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {QPATHTOF(equipment\nvgs\rangefinder\data\camo1_co.paa)};
    picture = QPATHTOF(data\ui\rangefinderNVG_ui_ca.paa);

    modelOptics = QPATHTOF(equipment\nvgs\rangefinder\ls_nvg_clone_rangefinder_optic.p3d);
    ace_nightvision_border = QPATHTOF(equipment\nvgs\rangefinder\data\optic_ca.paa);
    visionMode[] = {"Normal", "NVG", "TI"};

    EGVAR(equipment,rangefinderDisplay) = "ls_RscCloneRangefinder";

    class ItemInfo: ItemInfo {
        mass = 10;
        uniformModel = QPATHTOF(equipment\nvgs\rangefinder\ls_nvg_clone_rangefinder_on.p3d);
        modelOff = QPATHTOF(equipment\nvgs\rangefinder\ls_nvg_clone_rangefinder_off.p3d);
        hiddenSelections[] = {"camo1"};
    };
};

class ls_cloneNVG_phase1_rangefinder: ls_cloneNVG_phase2_rangefinder {
    author = AUTHOR;
    displayName = CSTRING(phase1_rangefinder);

    model = QPATHTOF(equipment\nvgs\rangefinder\ls_nvg_clone_phase1_rangefinder_off.p3d);
    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(equipment\nvgs\rangefinder\ls_nvg_clone_phase1_rangefinder_on.p3d);
        modelOff = QPATHTOF(equipment\nvgs\rangefinder\ls_nvg_clone_phase1_rangefinder_off.p3d);
    };
};
