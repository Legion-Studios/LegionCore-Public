class ls_gar_heavy_backpack: ls_cloneBackpack_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Republic Trooper Heavy Backpack";

    model = QPATHTOF(backpacks\heavy\ls_gar_heavy_backpack.p3d);
    picture = QPATHTOF(_ui\icon_clone_backpack_ca.paa);
    hiddenSelections[] = {
        "backpack",
        "cover",
        "pouches",
        "tube"
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(backpacks\standard\data\backpack_co.paa),
        QPATHTOF(backpacks\standard\data\cover_co.paa),
        QPATHTOF(backpacks\standard\data\pouches_co.paa),
        QPATHTOF(backpacks\standard\data\tube_co.paa)
    };

    maximumload = 250;
};

class ls_gar_heavyMedic_backpack: ls_gar_heavy_backpack {
    author = AUTHOR;
    displayName = "Republic Trooper Heavy Medic Backpack";

    model = QPATHTOF(backpacks\heavy\ls_gar_heavyMedic_backpack.p3d);
    picture = QPATHTOF(_ui\icon_clone_backpack_ca.paa);
    hiddenSelections[] = {
        "backpack",
        "cover",
        "pouches",
        "medic1",
        "medic2"
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(backpacks\standard\data\backpack_medic_co.paa),
        QPATHTOF(backpacks\standard\data\cover_co.paa),
        QPATHTOF(backpacks\standard\data\pouches_co.paa),
        QPATHTOF(backpacks\standard\data\medic_co.paa),
        QPATHTOF(backpacks\standard\data\medic_co.paa)
    };

    maximumload = 250;
};
