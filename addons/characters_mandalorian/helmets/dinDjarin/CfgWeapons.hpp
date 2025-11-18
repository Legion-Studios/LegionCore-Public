class ls_mandalorianHelmet_dinDjarin: ls_mandalorianHelmet_traditional {
    scope = 2;
    author = AUTHOR;
    displayName = "Din Djarin's Helmet";

    model = QPATHTOF(helmets\dinDjarin\ls_helmet_mandalorian_dinDjarin.p3d);
    hiddenSelections[] = {
        "camo1",
        "visor",
        "neckTex"
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\dinDjarin\data\helmet_co.paa),
        QPATHTOF(helmets\dinDjarin\data\visor_co.paa),
        QPATHTOF(helmets\dinDjarin\data\neck_co.paa)
    };
    // picture = QPATHTOF(data\ui\dinDjarinHelmet_ui_ca.paa);

    class ItemInfo: ItemInfo {
        mass = 10;
        uniformModel = QPATHTOF(helmets\dinDjarin\ls_helmet_mandalorian_dinDjarin.p3d);
        hiddenSelections[] = {
            "camo1",
            "visor",
            "neckTex"
        };
    };
};

class ls_mandalorianHelmet_dinDjarin_beskar: ls_mandalorianHelmet_dinDjarin {
    author = AUTHOR;
    displayName = "Din Djarin's Helmet [Beskar]";

    hiddenSelectionsTextures[] = {
        "#(argb,8,8,3)color(0.3,0.3,0.3,0.7,CO)",
        QPATHTOF(helmets\dinDjarin\data\visor_co.paa),
        QPATHTOF(helmets\dinDjarin\data\neck_co.paa)
    };
    hiddenSelectionsMaterials[] = {
        QPATHTOF(helmets\dinDjarin\data\helmet_beskar.rvmat)
    };
    // picture = QPATHTOF(data\ui\dinDjarinHelmet_beskar_ui_ca.paa);
};

class ls_mandalorian_dinDjarin_helmet: ls_mandalorianHelmet_dinDjarin {
    scope = 1;
};
class ls_mandalorian_dinDjarinBeskar_helmet: ls_mandalorianHelmet_dinDjarin_beskar {
    scope = 1;
};
