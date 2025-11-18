class ls_mandalorianHelmet_traditional: ls_helmet_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Mandalorian Traditional Helmet";

    model = QPATHTOF(helmets\traditional\ls_helmet_mandalorian_traditional.p3d);
    hiddenSelections[] = {
        "camo1",
        "visor",
        "neckTex"
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\traditional\data\helmet_co.paa),
        QPATHTOF(helmets\traditional\data\visor_co.paa),
        QPATHTOF(helmets\traditional\data\neck_co.paa)
    };
    // picture = QPATHTOF(data\ui\traditionalHelmet_ui_ca.paa);

    class ItemInfo: ItemInfo {
        mass = 10;
        uniformModel = QPATHTOF(helmets\traditional\ls_helmet_mandalorian_traditional.p3d);
        hiddenSelections[] = {
            "camo1",
            "visor",
            "neckTex"
        };

        class HitpointsProtectionInfo {
            class Head {
                hitpointName = "HitHead";
                armor = 40;
                passThrough = 0.5;
            };
            class Face {
                hitPointName = "HitFace";
                armor = 20;
                passThrough = 0.3;
            };
        };
    };
};
