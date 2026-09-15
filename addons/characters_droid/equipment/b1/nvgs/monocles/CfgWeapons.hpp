class ls_droidNvg_b1Tech: ls_nvg_base {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(b1_tech_nvg);
    descriptionShort = CSTRING(b1_tech_nvg_description);

    model = QPATHTOF(equipment\b1\nvgs\monocles\ls_nvg_droid_b1Tech.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {QPATHTOF(equipment\b1\nvgs\monocles\data\camo1_co.paa)};
    picture = QPATHTOF(data\ui\b1TechNVG_ui_ca.paa);

    modelOptics = QPATHTOEF(characters,equipment\nvg\ls_optic_dummy.p3d);
    ace_nightvision_border = "";
    visionMode[] = {"Normal", "NVG"};

    class ItemInfo: ItemInfo {
        mass = 5;
        uniformModel = QPATHTOF(equipment\b1\nvgs\monocles\ls_nvg_droid_b1Tech.p3d);
        modelOff = QPATHTOF(equipment\b1\nvgs\monocles\ls_nvg_droid_b1Tech.p3d);
        hiddenSelections[] = {"camo1"};
    };
};

class ls_droidNvg_b1Tech_geonosis: ls_droidNvg_b1Tech {
    author = AUTHOR;
    displayName = CSTRING(b1_tech_geonosis_nvg);
    hiddenSelectionsTextures[] = {QPATHTOF(equipment\b1\nvgs\monocles\data\geonosis_camo1_co.paa)};
    picture = QPATHTOF(data\ui\b1TechNVG_geonosis_ui_ca.paa);
};

class ls_droidNvg_b1Grenadier: ls_droidNvg_b1Tech {
    author = AUTHOR;
    displayName = CSTRING(b1_grenadier_nvg);

    model = QPATHTOF(equipment\b1\nvgs\monocles\ls_nvg_droid_b1Grenadier.p3d);
    picture = QPATHTOF(data\ui\b1GrenadierNVG_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(equipment\b1\nvgs\monocles\ls_nvg_droid_b1Grenadier.p3d);
        modelOff = QPATHTOF(equipment\b1\nvgs\monocles\ls_nvg_droid_b1Grenadier.p3d);
    };
};
