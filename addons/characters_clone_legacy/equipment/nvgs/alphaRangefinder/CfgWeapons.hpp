class lsd_gar_alphaRangefinder_nvg: ls_nvg_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Republic Alpha-class Rangefinder [NV/TI]";

    model = QPATHTOF(equipment\nvgs\alphaRangefinder\lsd_gar_alphaRangefinder_nvg.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(equipment\nvgs\alphaRangefinder\data\camo1_co.paa)
    };
    modelOptics = QPATHTOEF(characters,equipment\nvg\ls_optic_dummy.p3d);
    ace_nightvision_border = QPATHTOF(equipment\nvgs\rangefinder\data\optic_ca.paa);
    picture = QPATHTOF(_ui\icon_clone_rangefinder_ca.paa);

    visionMode[] = {
        "Normal",
        "NVG",
        "TI"
    };

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(equipment\nvgs\alphaRangefinder\lsd_gar_alphaRangefinder_nvg.p3d);
        modelOff = QPATHTOF(equipment\nvgs\alphaRangefinder\lsd_gar_alphaRangefinder_nvg.p3d);
        mass = 4;
        hiddenSelections[] = {"camo1"};
    };
};
