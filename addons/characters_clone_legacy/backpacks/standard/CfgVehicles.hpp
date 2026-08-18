class ls_gar_standard_backpack: ls_cloneBackpack_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Republic Trooper Backpack";

    model = QPATHTOF(backpacks\standard\ls_gar_standard_backpack.p3d);
    hiddenSelections[] = {
        "backpack",
        "cover"
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(backpacks\standard\data\backpack_co.paa),
        QPATHTOF(backpacks\standard\data\cover_co.paa)
    };
    picture = QPATHTOF(_ui\icon_clone_backpack_ca.paa);

    maximumload = 150;
};

class ls_gar_medic_backpack: ls_cloneBackpack_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Republic Trooper Medic Backpack";

    model = QPATHTOF(backpacks\standard\ls_gar_medic_backpack.p3d);
    hiddenSelections[] = {
        "backpack",
        "cover",
        "medic1",
        "medic2"
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(backpacks\standard\data\backpack_medic_co.paa),
        QPATHTOF(backpacks\standard\data\cover_co.paa),
        QPATHTOF(backpacks\standard\data\medic_co.paa),
        QPATHTOF(backpacks\standard\data\medic_co.paa)
    };
    picture = QPATHTOF(_ui\icon_clone_backpack_ca.paa);

    maximumload = 200;
};

class ls_gar_rocket_backpack: ls_cloneBackpack_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Republic Trooper Rocket Backpack";

    model = QPATHTOF(backpacks\standard\ls_gar_rocket_backpack.p3d);
    hiddenSelections[] = {
        "backpack",
        "holder",
        "rocket",
        "light",
        "pouches"
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(backpacks\standard\data\backpack_eod_co.paa),
        QPATHTOF(backpacks\standard\data\holder_co.paa),
        QPATHTOF(backpacks\standard\data\rocket_co.paa),
        QPATHTOF(backpacks\standard\data\light_co.paa),
        QPATHTOF(backpacks\standard\data\pouches_co.paa)
    };
    picture = QPATHTOF(_ui\icon_clone_backpack_ca.paa);

    maximumload = 300;
};

class ls_gar_radio_backpack: ls_cloneBackpack_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Republic Trooper Long-range Comms";

    model = QPATHTOF(backpacks\standard\ls_gar_radio_backpack.p3d);
    hiddenSelections[] = {
        "backpack",
        "radio",
        "screen"
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(backpacks\standard\data\backpack_co.paa),
        QPATHTOF(backpacks\standard\data\radio_co.paa),
        QPATHTOF(backpacks\standard\data\screen_co.paa)
    };
    picture = QPATHTOF(_ui\icon_clone_backpack_ca.paa);

    maximumload = 100;
    tf_hasLRradio = 1;
};
