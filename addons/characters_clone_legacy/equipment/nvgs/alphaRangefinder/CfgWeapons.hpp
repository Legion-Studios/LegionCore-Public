class lsd_gar_alphaRangefinder_nvg: ls_nvg_base {
    scope = 2;
    author = "Dutch + Snap";
    displayName = "Republic Alpha-class Rangefinder [NV/TI]";
    modelOptics = QPATHTOEF(characters,equipment\nvg\ls_optic_dummy.p3d);
    model = QPATHTOF(equipment\nvgs\alphaRangefinder\lsd_gar_alphaRangefinder_nvg.p3d);
    ace_nightvision_border = QPATHTOF(equipment\nvgs\rangefinder\data\optic_ca.paa);
    picture = QPATHTOF(_ui\icon_clone_rangefinder_ca.paa);
    visionMode[] = {
        "Normal",
        "NVG",
        "TI"
    };
    thermalMode[] = {1, 2};
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(equipment\nvgs\alphaRangefinder\data\camo1_co.paa)
    };

    class ItemInfo: ItemInfo {
        type = 616;
        uniformModel = QPATHTOF(equipment\nvgs\alphaRangefinder\lsd_gar_alphaRangefinder_nvg.p3d);
        modelOff = QPATHTOF(equipment\nvgs\alphaRangefinder\lsd_gar_alphaRangefinder_nvg.p3d);
        mass = 4;
        hiddenSelections[] = {"camo1"};
    };
};