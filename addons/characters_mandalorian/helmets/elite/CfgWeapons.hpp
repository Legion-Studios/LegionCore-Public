class ls_mandalorianHelmet_elite: ls_mandalorianHelmet_traditional {
    author = AUTHOR;
    displayName = "Mandalorian Elite Helmet";

    model = QPATHTOF(helmets\elite\ls_helmet_mandalorian_elite.p3d);
    hiddenSelections[] = {
        "camo1",
        "visor",
        "neckTex"
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\elite\data\helmet_co.paa),
        QPATHTOF(helmets\elite\data\visor_co.paa),
        QPATHTOF(helmets\elite\data\neck_co.paa)
    };
    // picture = QPATHTOF(data\ui\eliteHelmet_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(helmets\elite\ls_helmet_mandalorian_elite.p3d);
        hiddenSelections[] = {
            "camo1",
            "visor",
            "neckTex"
        };
    };
};
