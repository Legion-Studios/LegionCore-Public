class ls_gar_arc_backpack: ls_cloneBackpack_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Clone ARC Trooper Backpack";

    model = QPATHTOF(backpacks\arc\ls_gar_arc_backpack.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(backpacks\arc\data\camo1_co.paa)
    };
    picture = QPATHTOF(_ui\icon_clone_arc_backpack_ca.paa);

    maximumload = 200;
};
