class ls_droidNvg_b1Sniper: ls_nvg_base {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(b1_sniper_nvg);

    model = QPATHTOF(equipment\b1\nvgs\sniper\ls_nvg_droid_b1Sniper.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {QPATHTOF(equipment\b1\nvgs\sniper\data\camo1_co.paa)};
    picture = QPATHTOF(data\ui\b1SniperNVG_ui_ca.paa);

    modelOptics = QPATHTOEF(characters,equipment\nvg\ls_optic_dummy.p3d);
    ace_nightvision_border = "";
    visionMode[] = {"Normal", "NVG", "TI"};

    class ItemInfo: ItemInfo {
        mass = 5;
        uniformModel = QPATHTOF(equipment\b1\nvgs\sniper\ls_nvg_droid_b1Sniper.p3d);
        modelOff = QPATHTOF(equipment\b1\nvgs\sniper\ls_nvg_droid_b1Sniper.p3d);
        hiddenSelections[] = {"camo1"};
    };
};

class ls_droidNvg_b1Sniper_training: ls_droidNvg_b1Sniper {
    author = AUTHOR;
    displayName = CSTRING(b1_sniper_training_nvg);

    hiddenSelectionsTextures[] = {QPATHTOF(equipment\b1\nvgs\sniper\data\training_camo1_co.paa)};
    picture = QPATHTOF(data\ui\b1SniperNVG_training_ui_ca.paa);
};
