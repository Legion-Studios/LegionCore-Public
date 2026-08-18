class lsd_gar_standard_nvg: ls_nvg_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Republic Phase 2 Visor";

    model = QPATHTOF(equipment\nvgs\visor\lsd_gar_visor_nvg_off.p3d);
    modelOptics = QPATHTOF(equipment\nvgs\visor\lsd_gar_nvg_optic.p3d);
    ace_nightvision_border = QPATHTOF(equipment\nvgs\rangefinder\data\optic_ca.paa);
    picture = QPATHTOF(_ui\icon_cloneVisor_ca.paa);

    hiddenSelections[] = {"camo1", "camo2"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(equipment\nvgs\common\camo1_co.paa)
    };

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(equipment\nvgs\visor\lsd_gar_visor_nvg_on.p3d);
        modelOff = QPATHTOF(equipment\nvgs\visor\lsd_gar_visor_nvg_off.p3d);
        mass = 5;
        hiddenSelections[] = {"camo1", "camo2"};
    };
};

class lsd_gar_standardSPC_nvg: lsd_gar_standard_nvg {
    author = AUTHOR;
    displayName = "Republic Phase 2 SPC Visor";

    class ItemInfo: ItemInfo {
        modelOff = QPATHTOF(equipment\nvgs\visor\lsd_gar_visor_nvg_on.p3d);
    };
};

class lsd_gar_p1Standard_nvg: lsd_gar_standard_nvg {
    author = AUTHOR;
    displayName = "Republic Phase 1 Visor";

    model = QPATHTOF(equipment\nvgs\visor\lsd_gar_p1Visor_nvg_off.p3d);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(equipment\nvgs\visor\lsd_gar_p1Visor_nvg_on.p3d);
        modelOff = QPATHTOF(equipment\nvgs\visor\lsd_gar_p1Visor_nvg_off.p3d);
    };
};

class ls_gar_p1StandardSPC_nvg: lsd_gar_p1Standard_nvg {
    author = AUTHOR;
    displayName = "Republic Phase 1 SPC Visor";

    class ItemInfo: ItemInfo {
        modelOff = QPATHTOF(equipment\nvgs\visor\lsd_gar_p1Visor_nvg_on.p3d);
    };
};
