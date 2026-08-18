class ls_cloneBackpack_miniLR: ls_backpack_base {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(MiniLR);

    model = QPATHTOF(backpacks\MiniLR\ls_backpack_clone_miniLR.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {QPATHTOF(backpacks\minilr\data\camo1_co.paa)};
    picture = QPATHTOF(data\ui\miniLRBackpack_ui_ca.paa);

    tf_hasLRradio = 1;
    tf_range = 7000;
    tf_dialog = "ls_radios_cloneLR_mini";
    tf_encryptionCode = "tf_west_radio_code";
};
