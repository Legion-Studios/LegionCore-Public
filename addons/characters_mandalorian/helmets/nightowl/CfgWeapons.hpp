class ls_mandalorianHelmet_nightowl: ls_mandalorianHelmet_traditional {
    scope = 2;
    author = AUTHOR;
    displayName = "Mandalorian Nightowl Helmet";

    model = QPATHTOF(helmets\nightowl\ls_helmet_mandalorian_nightowl.p3d);
    hiddenSelections[] = {
        "camo1",
        "visor",
        "neckTex"
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\nightowl\data\helmet_co.paa),
        QPATHTOF(helmets\nightowl\data\visor_co.paa),
        QPATHTOF(helmets\nightowl\data\neck_co.paa)
    };
    // picture = QPATHTOF(data\ui\nightowlHelmet_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(helmets\nightowl\ls_helmet_mandalorian_nightowl.p3d);
        hiddenSelections[] = {
            "camo1",
            "visor",
            "neckTex"
        };
    };
};
