class ls_mandalorian_rangefinder: ls_nvg_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Mandalorian Rangefinder";

    model = QPATHTOF(equipment\nvgs\rangefinder\ls_mandalorian_rangefinder_nvg_on.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\original\data\original_co.paa)
    };
    picture = QPATHTOF(data\ui\rangefinder_ui_ca.paa);

    visionMode[] = {"Normal", "NVG"};

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(equipment\nvgs\rangefinder\ls_mandalorian_rangefinder_nvg_on.p3d);
        modelOff = QPATHTOF(equipment\nvgs\rangefinder\ls_mandalorian_rangefinder_nvg_off.p3d);
        hiddenSelections[] = {"camo1"};
    };
};
