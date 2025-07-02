class ls_orsfBackpack_trooper: ls_backpack_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Special Tactics Trooper Backpack";

    model = QPATHTOF(backpacks\trooper\ls_backpack_orsf_trooper.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {QPATHTOF(backpacks\trooper\data\camo1_co.paa)};
    // picture = QPATHTOF(data\ui\trooperBackpack_ui_ca.paa);

    maximumLoad = 160;
};

class ls_orsfBackpack_trooper_radio: ls_orsfBackpack_trooper {
    scope = 2;
    author = AUTHOR;
    displayName = "Special Tactics Radio Backpack";

    model = QPATHTOF(backpacks\trooper\ls_backpack_orsf_trooper.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {QPATHTOF(backpacks\trooper\data\camo1_co.paa)};

    maximumLoad = 120;

    tf_hasLRradio = 1;
    tf_dialog = "ls_radios_cloneLR";
    tf_encryptionCode = "tf_west_radio_code";
};