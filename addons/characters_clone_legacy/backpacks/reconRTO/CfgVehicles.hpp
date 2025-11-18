class ls_gar_recon_rto_backpack: ls_cloneBackpack_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Republic Recon RTO Pack";

    model = QPATHTOF(backpacks\reconRTO\ls_gar_recon_rto_backpack.p3d);
    hiddenSelections[] = {"camo1", "camo2", "camo3", "main", "accumulator"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\common\bag\bag_co.paa),
        QPATHTOF(vests\common\bag\bag_co.paa),
        QPATHTOF(vests\common\light\light_accessories_co.paa),
        QPATHTOF(backpacks\rto\data\main_co.paa),
        QPATHTOF(backpacks\rto\data\accumulator_co.paa)
    };
    picture = QPATHTOF(_ui\icon_clone_rto_mini_backpack_ca.paa);

    maximumload = 200;
    tf_hasLRradio = 1;
};
