class ls_mandalorianHelmet_armorer: ls_mandalorianHelmet_traditional {
    author = AUTHOR;
    displayName = "Mandalorian Armorer Helmet";

    model = QPATHTOF(helmets\armorer\ls_helmet_mandalorian_armorer.p3d);
    hiddenSelections[] = {
        "camo1",
        "visor",
        "neckTex"
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\armorer\data\helmet_co.paa),
        QPATHTOF(helmets\armorer\data\visor_co.paa),
        QPATHTOF(helmets\armorer\data\visor_co.paa)
    };
    // picture = QPATHTOF(data\ui\armorerHelmet_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(helmets\armorer\ls_helmet_mandalorian_armorer.p3d);
        hiddenSelections[] = {
            "camo1",
            "visor",
            "neckTex"
        };
    };
};

class ls_mandalorian_armorer_helmet: ls_mandalorianHelmet_armorer {
    scope = 1;
};
