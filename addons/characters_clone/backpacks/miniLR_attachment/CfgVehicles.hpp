class ls_cloneBackpack_miniLR_attachment: ls_backpack_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Mini Long Range Attachment";

    model = QPATHTOF(backpacks\miniLR_attachment\ls_backpack_clone_miniLR_attachment.p3d);
    hiddenSelections[] = {
        "camo1"
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(backpacks\miniLR_attachment\data\camo1_co.paa)
    };

    tf_hasLRradio = 1;
    tf_range = 7000;
    tf_dialog = "ls_radios_cloneLR";
    tf_encryptionCode = "tf_west_radio_code";
};
