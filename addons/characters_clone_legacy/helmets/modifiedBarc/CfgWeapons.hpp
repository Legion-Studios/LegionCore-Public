class ls_sob_fordo_helmet: ls_cloneHelmet_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Clone Modified BARC Helmet";

    model = QPATHTOF(helmets\modifiedBarc\ls_sob_fordo_helmet.p3d);
    hiddenSelections[] = {
        "camo1",
        "visor"
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\modifiedBarc\data\helmet_co.paa),
        QPATHTOF(helmets\modifiedBarc\data\helmet_co.paa)
    };
    picture = QPATHTOEF(characters_clone_legacy,_ui\barc_helmet_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(helmets\modifiedBarc\ls_sob_fordo_helmet.p3d);
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

class ls_sob_fordoHologram_helmet: ls_sob_fordo_helmet {
    author = AUTHOR;
    displayName = "Clone Modified BARC Helmet (Hologram)";

    hiddenSelectionsTextures[] = {
        QPATHTOEF(data,textures\hologram\blueHologram_ca.paa),
        QPATHTOEF(data,textures\hologram\blueHologram_ca.paa)
    };
    hiddenSelectionsMaterials[] = {
        QPATHTOF(helmets\modifiedBarc\data\hologram\helmet.rvmat),
        QPATHTOF(helmets\modifiedBarc\data\hologram\visor.rvmat)
    };

    EGVAR(common,hideHead) = 1;
};
