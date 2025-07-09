class ls_sob_commando_vest: ls_cloneVest_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Clone Commando Katarn I Vest";

    model = QPATHTOF(vests\commando\ls_vest_clone_commando.p3d);
    hiddenSelections[] = {"camo1"}; // Has no visual model, but here for child classes
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\commando\data\camo2_co.paa)
    };
    picture = QPATHTOF(_ui\commando_vest_ui_ca.paa);

    class ItemInfo: ItemInfo {
        containerClass = "Supply40";
        uniformModel = QPATHTOF(vests\commando\ls_vest_clone_commando.p3d);
        hiddenSelections[] = {"camo1"};
        mass = 80;
    };
};

class ls_sob_commando_eod_vest: ls_sob_commando_vest {
    author = AUTHOR;
    displayName = "Clone Commando Katarn I EOD Vest";

    model = QPATHTOF(vests\commando\ls_vest_clone_commando_eod.p3d);
    picture = QPATHTOF(_ui\commando_eod_vest_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(vests\commando\ls_vest_clone_commando_eod.p3d);
    };
};

class ls_sob_commando_eod_vest_activeCamo: ls_sob_commando_eod_vest {
    scope = 1;
    author = AUTHOR;
    hiddenSelectionsTextures[] = {
        QPATHTOEF(data,textures\blank_ca.paa)
    };
    hiddenSelectionsMaterials[] = {
        QPATHTOEF(data,materials\activeCamo.rvmat)
    };
};

class ls_sob_commando_sl_vest: ls_sob_commando_eod_vest {
    author = AUTHOR;
    displayName = "Clone Commando Katarn I Squad Leader Pauldron";

    model = QPATHTOF(vests\commando\ls_vest_clone_commando_sl.p3d);
    picture = QPATHTOF(_ui\commando_sl_vest_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(vests\commando\ls_vest_clone_commando_sl.p3d);
    };
};

class ls_sob_commando_sl_vest_activeCamo: ls_sob_commando_sl_vest {
    scope = 1;
    author = AUTHOR;
    hiddenSelectionsTextures[] = {
        QPATHTOEF(data,textures\blank_ca.paa)
    };
    hiddenSelectionsMaterials[] = {
        QPATHTOEF(data,materials\activeCamo.rvmat)
    };
};

class ls_sob_commando_sniper_vest: ls_sob_commando_eod_vest {
    author = AUTHOR;
    displayName = "Clone Commando Katarn I Sniper Vest";

    model = QPATHTOF(vests\commando\ls_vest_clone_commando_sniper.p3d);
    hiddenSelections[] = {"illum", "camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\commando\data\camo2_co.paa),
        QPATHTOF(uniforms\commando\data\camo2_co.paa)
    };
    hiddenSelectionsMaterials[] = {
        "a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
    };
    picture = QPATHTOF(_ui\commando_sniper_vest_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(vests\commando\ls_vest_clone_commando_sniper.p3d);
        hiddenSelections[] = {"illum", "camo1"};
    };
};

class ls_sob_commando_sniper_vest_activeCamo: ls_sob_commando_sniper_vest {
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

class ls_sob_commando_tech_vest: ls_sob_commando_eod_vest {
    author = AUTHOR;
    displayName = "Clone Commando Katarn I Tech Vest";

    model = QPATHTOF(vests\commando\ls_vest_clone_commando_tech.p3d);
    picture = QPATHTOF(_ui\commando_tech_vest_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(vests\commando\ls_vest_clone_commando_tech.p3d);
    };
};

class ls_sob_commando_tech_vest_activeCamo: ls_sob_commando_tech_vest {
    scope = 1;
    author = AUTHOR;
    hiddenSelectionsTextures[] = {
        QPATHTOEF(data,textures\blank_ca.paa)
    };
    hiddenSelectionsMaterials[] = {
        QPATHTOEF(data,materials\activeCamo.rvmat)
    };
};
