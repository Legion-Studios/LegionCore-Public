class ls_mandalorianHelmet_executioner: ls_mandalorianHelmet_traditional {
    scope = 2;
    author = AUTHOR;
    displayName = "Mandalorian Executioner Helmet";

    model = QPATHTOF(helmets\executioner\ls_helmet_mandalorian_executioner.p3d);
    hiddenSelections[] = {
        "camo1",
        "visor",
        "neckTex"
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\executioner\data\helmet_co.paa),
        QPATHTOF(helmets\executioner\data\visor_co.paa),
        QPATHTOF(helmets\executioner\data\neck_co.paa)
    };
    // picture = QPATHTOF(data\ui\executionerHelmet_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(helmets\executioner\ls_helmet_mandalorian_executioner.p3d);
        hiddenSelections[] = {
            "camo1",
            "visor",
            "neckTex"
        };
    };
};
