class lsd_gar_medicalScanner_nvg: ls_nvg_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Republic Medical Scanner";

    model = QPATHTOF(equipment\nvgs\medicScanner\lsd_gar_medicalScanner_nvg_off.p3d);
    hiddenSelections[] = {"Camo1", "glow"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(equipment\nvgs\medicScanner\data\camo1_co.paa),
        "#(argb,8,8,3)color(0.501961,1,1,1.0,co)"
    };
    ace_nightvision_border = QPATHTOF(equipment\nvgs\rangefinder\data\optic_ca.paa);
    picture = QPATHTOF(_ui\icon_cloneMedic_scanner_ca.paa);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(equipment\nvgs\medicScanner\lsd_gar_medicalScanner_nvg_on.p3d);
        modelOff = QPATHTOF(equipment\nvgs\medicScanner\lsd_gar_medicalScanner_nvg_off.p3d);
        hiddenSelections[] = {"Camo1", "glow"};
    };
};

class lsd_gar_medicalScannerSPC_nvg: lsd_gar_medicalScanner_nvg {
    author = AUTHOR;
    displayName = "Republic Medical SPC Scanner";
    model = QPATHTOF(equipment\nvgs\medicScanner\lsd_gar_medicalScanner_nvg_on.p3d);

    class ItemInfo: ItemInfo {
        modelOff = QPATHTOF(equipment\nvgs\medicScanner\lsd_gar_medicalScanner_nvg_on.p3d);
    };
};
