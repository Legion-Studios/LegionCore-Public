class ls_gar_medium_backpack: ls_cloneBackpack_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Republic Trooper Medium Backpack";

    model = QPATHTOF(backpacks\medium\ls_gar_medium_backpack.p3d);
    hiddenSelections[] = {
        "backpack",
        "cover",
        "pouches"
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(backpacks\standard\data\backpack_co.paa),
        QPATHTOF(backpacks\standard\data\cover_co.paa),
        QPATHTOF(backpacks\standard\data\pouches_co.paa)
    };
    picture = QPATHTOF(_ui\icon_clone_backpack_ca.paa);

    maximumload = 200;
};

class ls_gar_mediumRadio_backpack: ls_cloneBackpack_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Republic Trooper Expanded Storage Long-range Comms";

    model = QPATHTOF(backpacks\medium\ls_gar_mediumRadio_backpack.p3d);
    hiddenSelections[] = {
        "backpack",
        "radio",
        "screen",
        "pouches"
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(backpacks\standard\data\backpack_co.paa),
        QPATHTOF(backpacks\standard\data\radio_co.paa),
        QPATHTOF(backpacks\standard\data\screen_co.paa),
        QPATHTOF(backpacks\standard\data\pouches_co.paa)
    };
    picture = QPATHTOF(_ui\icon_clone_backpack_ca.paa);

    maximumload = 150;
    tf_hasLRradio = 1;
};
