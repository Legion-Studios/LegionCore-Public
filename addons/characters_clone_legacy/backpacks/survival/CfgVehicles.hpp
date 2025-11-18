class ls_gar_survival_backpack: ls_cloneBackpack_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Republic Survival Pack";

    model = QPATHTOF(backpacks\survival\ls_backpack_clone_survival.p3d);
    hiddenselections[] = {
        "camo1",
        "lr",
        "medic",
        "box1",
        "box2"
    };
    hiddenselectionstextures[] = {
        QPATHTOF(backpacks\survival\data\backpack_co.paa),
        "",
        "",
        QPATHTOF(backpacks\survival\data\box_co.paa),
        QPATHTOF(backpacks\survival\data\box_co.paa)
    };
    // picture = QPATHTOF(data\ui\survival_backpack_ca.paa);
};

class ls_gar_survivalMedic_backpack: ls_gar_survival_backpack {
    author = AUTHOR;
    displayName = "Republic Survival Medpack";
    hiddenSelectionsTextures[] = {
        QPATHTOF(backpacks\survival\data\backpack_co.paa),
        "",
        QPATHTOF(backpacks\survival\data\box_medic_co.paa),
        QPATHTOF(backpacks\survival\data\box_co.paa),
        QPATHTOF(backpacks\survival\data\box_co.paa)
    };
};

class ls_gar_survivalRadio_backpack: ls_gar_survival_backpack {
    author = AUTHOR;
    displayName = "Republic Survival Comms Array";

    hiddenselections[] = {
        "camo1",
        "lr",
        "medic",
        "box1",
        "box2"
    };
    hiddenselectionstextures[] = {
        QPATHTOF(backpacks\survival\data\backpack_co.paa),
        QPATHTOF(backpacks\survival\data\antenna_co.paa),
        "",
        QPATHTOF(backpacks\survival\data\box_co.paa),
        QPATHTOF(backpacks\survival\data\box_co.paa)
    };

    tf_hasLRradio = 1;
    tf_range = 12000;
    tf_dialog = "ls_radios_cloneLR";
    tf_encryptionCode = "tf_west_radio_code";
};
