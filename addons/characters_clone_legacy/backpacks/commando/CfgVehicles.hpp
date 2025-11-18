class ls_sob_commando_backpack: ls_backpack_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Clone Commando Katarn II Backpack";

    model = QPATHTOF(backpacks\commando\ls_backpack_clone_commando.p3d);
    hiddenSelections[] = {
        "illum",
        "camo1"
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(backpacks\commando\data\camo1_co.paa),
        QPATHTOF(backpacks\commando\data\camo1_co.paa)
    };
    hiddenSelectionsMaterials[] = {
        "a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
    };
    picture = QPATHTOF(_ui\commando_backpack_ui_ca.paa);
};

class ls_sob_commando_backpack_activeCamo: ls_sob_commando_backpack {
    scope = 1;
    author = AUTHOR;
    hiddenSelectionsTextures[] = {
        QPATHTOEF(data,textures\blank_ca.paa),
        QPATHTOEF(data,textures\blank_ca.paa)
    };
    hiddenSelectionsMaterials[] = {
        QPATHTOEF(data,materials\activeCamo.rvmat),
        QPATHTOEF(data,materials\activeCamo.rvmat)
    };
};

class ls_sob_commando_eod_backpack: ls_sob_commando_backpack {
    author = AUTHOR;
    displayName = "Clone Commando Katarn II EOD Backpack";
    model = QPATHTOF(backpacks\commando\ls_backpack_clone_commando_eod.p3d);
    picture = QPATHTOF(_ui\commando_backpack_eod_ui_ca.paa);
};

class ls_sob_commando_eod_backpack_activeCamo: ls_sob_commando_eod_backpack {
    scope = 1;
    author = AUTHOR;
    hiddenSelectionsTextures[] = {
        QPATHTOEF(data,textures\blank_ca.paa),
        QPATHTOEF(data,textures\blank_ca.paa)
    };
    hiddenSelectionsMaterials[] = {
        QPATHTOEF(data,materials\activeCamo.rvmat),
        QPATHTOEF(data,materials\activeCamo.rvmat)
    };
};

class ls_sob_commando_rto_backpack: ls_sob_commando_backpack {
    author = AUTHOR;
    displayName = "Clone Commando Katarn II RTO Backpack";
    model = QPATHTOF(backpacks\commando\ls_backpack_clone_commando_rto.p3d);
    picture = QPATHTOF(_ui\commando_backpack_rto_ui_ca.paa);

    tf_hasLRradio = 1;
    tf_range = 12000;
    tf_dialog = "ls_radios_cloneLR_commando";
    tf_encryptionCode = "tf_west_radio_code";
};

class ls_sob_commando_rto_backpack_activeCamo: ls_sob_commando_rto_backpack {
    scope = 1;
    author = AUTHOR;
    hiddenSelectionsTextures[] = {
        QPATHTOEF(data,textures\blank_ca.paa),
        QPATHTOEF(data,textures\blank_ca.paa)
    };
    hiddenSelectionsMaterials[] = {
        QPATHTOEF(data,materials\activeCamo.rvmat),
        QPATHTOEF(data,materials\activeCamo.rvmat)
    };
};

class ls_sob_commando_tech_backpack: ls_sob_commando_backpack {
    author = AUTHOR;
    displayName = "Clone Commando Katarn II Tech Backpack";

    model = QPATHTOF(backpacks\commando\ls_backpack_clone_commando_tech.p3d);
    hiddenSelections[] = {
        "illum",
        "camo1",
        "camo2"
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(backpacks\commando\data\camo1_co.paa),
        QPATHTOF(backpacks\commando\data\camo1_co.paa),
        QPATHTOF(backpacks\commando\data\camo2_tech_co.paa)
    };
};

class ls_sob_commando_tech_backpack_activeCamo: ls_sob_commando_tech_backpack {
    scope = 1;
    author = AUTHOR;
    hiddenSelectionsTextures[] = {
        QPATHTOEF(data,textures\blank_ca.paa),
        QPATHTOEF(data,textures\blank_ca.paa),
        QPATHTOEF(data,textures\blank_ca.paa)
    };
    hiddenSelectionsMaterials[] = {
        QPATHTOEF(data,materials\activeCamo.rvmat),
        QPATHTOEF(data,materials\activeCamo.rvmat),
        QPATHTOEF(data,materials\activeCamo.rvmat)
    };
};
