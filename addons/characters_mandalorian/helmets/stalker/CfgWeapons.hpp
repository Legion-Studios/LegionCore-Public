class ls_mandalorianHelmet_stalker: ls_mandalorianHelmet_traditional {
    scope = 2;
    author = AUTHOR;
    displayName = "Mandalorian Stalker Helmet";

    model = QPATHTOF(helmets\stalker\ls_helmet_mandalorian_stalker.p3d);
    hiddenSelections[] = {
        "camo1",
        "visor",
        "neckTex"
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\stalker\data\helmet_co.paa),
        QPATHTOF(helmets\stalker\data\visor_co.paa),
        QPATHTOF(helmets\stalker\data\neck_co.paa)
    };
    // picture = QPATHTOF(data\ui\stalkerHelmet_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(helmets\stalker\ls_helmet_mandalorian_stalker.p3d);
        hiddenSelections[] = {
            "camo1",
            "visor",
            "neckTex"
        };
    };
};
