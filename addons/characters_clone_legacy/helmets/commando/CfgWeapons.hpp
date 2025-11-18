class ls_sob_commando_helmet: ls_cloneHelmet_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Clone Commando Katarn I Helmet";

    model = QPATHTOF(helmets\commando\ls_helmet_clone_commando.p3d);
    hiddenSelections[] = {
        "illum",
        "camo1"
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\commando\data\camo1_co.paa),
        QPATHTOF(helmets\commando\data\camo1_co.paa)
    };
    hiddenSelectionsMaterials[] = {"a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"};
    picture = QPATHTOF(_ui\commando_helmet_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(helmets\commando\ls_helmet_clone_commando.p3d);
        hiddenSelections[] = {
            "illum",
            "camo1"
        };

        class HitpointsProtectionInfo {
            class Head {
                hitpointName = "HitHead";
                armor = 20;
                passThrough = 0.5;
            };
            class HitFace {
                hitpointName = "HitFace";
                armor = 15;
                passThrough = 0.5;
            };
        };
    };

    class ls_lighting: ls_lighting_clone_phase1 {};
};

class ls_sob_commando_hologram_helmet: ls_sob_commando_helmet {
    displayName = "Clone Commando Katarn I Helmet [Hologram]";

    model = QPATHTOF(helmets\commando\ls_helmet_clone_commando_hologram.p3d);
    hiddenSelectionsTextures[] = {
        QPATHTOEF(data,textures\hologram\blueHologram_ca.paa),
        QPATHTOEF(data,textures\hologram\blueHologram_ca.paa)
    };

    EGVAR(common,hideHead) = 1;

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(helmets\commando\ls_helmet_clone_commando_hologram.p3d);
    };
};

class ls_sob_commando_helmet_activeCamo: ls_sob_commando_hologram_helmet {
    scope = 1;
    author = AUTHOR;

    EGVAR(common,hideHead) = 0;

    hiddenSelectionsTextures[] = {
        QPATHTOEF(data,textures\blank_ca.paa),
        QPATHTOEF(data,textures\blank_ca.paa)
    };
    hiddenSelectionsMaterials[] = {
        QPATHTOEF(data,materials\activeCamo.rvmat),
        QPATHTOEF(data,materials\activeCamo.rvmat)
    };
};
