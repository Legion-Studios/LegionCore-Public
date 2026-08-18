class ls_jabiimNVG_goggles: ls_nvg_base {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(nationalist_goggles);

    model = QPATHTOF(equipment\goggles\ls_glasses_jabiimGoggles_on.p3d);
    modelOptics = QPATHTOEF(characters,equipment\nvg\ls_optic_dummy.p3d);
    ace_nightvision_border = "";
    hiddenSelections[] = {"camo1", "camo2"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(equipment\goggles\data\camo1_co.paa),
        QPATHTOF(equipment\goggles\data\camo1_co.paa)
    };
    picture = QPATHTOF(data\ui\goggles_ui_ca.paa);

    visionMode[] = {"Normal", "NVG"};

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(equipment\goggles\ls_glasses_jabiimGoggles_on.p3d);
        modelOff = QPATHTOF(equipment\goggles\ls_glasses_jabiimGoggles_off.p3d);
        hiddenSelections[] = {"camo1"};
        mass = 4;
    };
};
