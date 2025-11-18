class lsd_gar_rangefinder_nvg: ls_nvg_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Republic Phase 2 Trooper Rangefinder";

    model = QPATHTOF(equipment\nvgs\rangefinder\lsd_gar_rangefinder_nvg_off.p3d);
    modelOptics = QPATHTOF(equipment\nvgs\rangefinder\lsd_gar_rangefinder_optic.p3d);
    ace_nightvision_border = QPATHTOF(equipment\nvgs\rangefinder\data\optic_ca.paa);
    picture = QPATHTOF(_ui\icon_clone_rangefinder_ca.paa);

    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(equipment\nvgs\common\camo1_co.paa)
    };

    visionMode[] = {"Normal", "NVG", "TI"};

    EGVAR(equipment,rangefinderDisplay) = "ls_RscCloneRangefinder";

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(equipment\nvgs\rangefinder\lsd_gar_rangefinder_nvg_on.p3d);
        modelOff = QPATHTOF(equipment\nvgs\rangefinder\lsd_gar_rangefinder_nvg_off.p3d);
        mass = 4;
        hiddenSelections[] = {"camo1"};
    };
};

class lsd_gar_rangefinderHologram_nvg: lsd_gar_rangefinder_nvg {
    author = AUTHOR;
    displayName = "Republic Phase 2 Trooper Rangefinder (Hologram)";

    hiddenSelectionsTextures[] = {
        QPATHTOEF(data,textures\hologram\blueHologram_ca.paa)
    };
    hiddenSelectionsMaterials[] = {
        QPATHTOF(equipment\nvgs\common\hologram\camo1.rvmat)
    };
};

class lsd_gar_p1Rangefinder_nvg: lsd_gar_rangefinder_nvg {
    author = AUTHOR;
    displayName = "Republic Phase 1 Trooper Rangefinder";
    model = QPATHTOF(equipment\nvgs\rangefinder\lsd_gar_p1Rangefinder_nvg_on.p3d);

    class ItemInfo: ItemInfo {
        uniformModel =  QPATHTOF(equipment\nvgs\rangefinder\lsd_gar_p1Rangefinder_nvg_on.p3d);
        modelOff = QPATHTOF(equipment\nvgs\rangefinder\lsd_gar_p1Rangefinder_nvg_off.p3d);
    };
};

class lsd_gar_p1RangefinderHologram_nvg: lsd_gar_p1Rangefinder_nvg {
    author = AUTHOR;
    displayName = "Republic Phase 1 Trooper Rangefinder (Hologram)";

    hiddenSelectionsTextures[] = {
        QPATHTOEF(data,textures\hologram\blueHologram_ca.paa)
    };
    hiddenSelectionsMaterials[] = {
        QPATHTOF(equipment\nvgs\common\hologram\camo1.rvmat)
    };
};
