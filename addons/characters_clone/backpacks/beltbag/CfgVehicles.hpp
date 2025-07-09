class ls_cloneBackpack_beltbag: ls_backpack_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Clone Belt Bag";

    model = QPATHTOF(backpacks\beltbag\ls_backpack_clone_beltbag.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(backpacks\beltbag\data\camo1_co.paa)
    };
};
