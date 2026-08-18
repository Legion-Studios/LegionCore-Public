class lsd_gar_engineerCommArray_nvg: ls_nvg_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Republic Enginner Comm. Array";

    modelOptics = QPATHTOF(equipment\nvgs\commander\lsd_gar_commander_optic.p3d);
    ace_nightvision_border = QPATHTOF(equipment\nvgs\commander\data\optic_ca.paa);
    model = QPATHTOF(equipment\nvgs\engineerCommArray\lsd_gar_engineerCommArray_nvg.p3d);
    hiddenSelections[] = {"camo1", "camo2"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(equipment\nvgs\common\camo1_co.paa),
        QPATHTOF(equipment\nvgs\common\camo1_co.paa)
    };
    picture = QPATHTOF(_ui\icon_cloneVisor_ca.paa);

    visionMode[] = { "Normal", "NVG", "TI"};

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(equipment\nvgs\engineerCommArray\lsd_gar_engineerCommArray_nvg.p3d);
        modelOff = QPATHTOF(equipment\nvgs\engineerCommArray\lsd_gar_engineerCommArray_nvg.p3d);
        mass = 5;
        hiddenSelections[] = {"camo1", "camo2"};
    };
};
