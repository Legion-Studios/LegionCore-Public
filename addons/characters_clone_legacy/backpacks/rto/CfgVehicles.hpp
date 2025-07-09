class ls_gar_rto_mini_backpack: ls_cloneBackpack_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Republic Mini RTO Pack";

    model = QPATHTOF(backpacks\rto\ls_gar_rto_mini_backpack.p3d);
    hiddenSelections[] = {"main", "accumulator"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(backpacks\rto\data\main_co.paa),
        QPATHTOF(backpacks\rto\data\accumulator_co.paa)
    };
    picture = QPATHTOF(_ui\icon_clone_rto_mini_backpack_ca.paa);

    maximumload = 0;
    tf_hasLRradio = 1;
};

class ls_gar_rto_mini_backpack_night: ls_gar_rto_mini_backpack {
    author = AUTHOR;
    displayName = "Republic Mini RTO Pack (Night)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(backpacks\rto\data\main_night_co.paa),
        QPATHTOF(backpacks\rto\data\accumulator_night_co.paa)
    };
};
