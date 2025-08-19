class ls_gar_barc_helmet: ls_cloneHelmet_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Clone BARC Helmet";

    model = QPATHTOF(helmets\barc\ls_helmet_clone_barc.p3d);
    hiddenSelections[] = {
        "camo1",
        "visor"
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\barc\data\helmet_co.paa),
        QPATHTOF(helmets\barc\data\visor_co.paa)
    };
    picture = QPATHTOEF(characters_clone_legacy,_ui\barc_helmet_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(helmets\barc\ls_helmet_clone_barc.p3d);
        hiddenSelections[] = {
            "camo1",
            "visor"
        };

        class HitpointsProtectionInfo {
            class Head {
                hitpointName = "HitHead";
                armor = 6;
                passThrough = 0.5;
            };
            class Face {
                hitpointName = "HitFace";
                armor = 6;
                passThrough = 0.5;
            };
        };
    };
};

class ls_gar_barcHologram_helmet: ls_gar_barc_helmet {
    displayName = "Clone BARC Helmet [Hologram]";
    model = QPATHTOF(helmets\barc\ls_helmet_clone_barc_hologram.p3d);

    hiddenSelectionsTextures[] = {
        QPATHTOEF(data,textures\hologram\blueHologram_ca.paa),
        QPATHTOEF(data,textures\hologram\blueHologram_ca.paa)
    };

    EGVAR(common,hideHead) = 1;

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(helmets\barc\ls_helmet_clone_barc_hologram.p3d);
    };
};
