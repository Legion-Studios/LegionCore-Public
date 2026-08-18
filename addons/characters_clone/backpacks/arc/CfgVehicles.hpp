class ls_cloneBackpack_arc: ls_backpack_base {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(arc_backpack);

    model = QPATHTOF(backpacks\arc\ls_backpack_clone_arc.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {QPATHTOF(backpacks\arc\data\camo1_co.paa)};
    picture = QPATHTOF(data\ui\arcBackpack_ui_ca.paa);

    tf_hasLRradio = 1;
    tf_range = 12000;
    tf_dialog = "ls_radios_cloneLR";
    tf_encryptionCode = "tf_west_radio_code";
};
