class ls_gar_phase2_helmet: ls_cloneHelmet_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Republic Trooper Phase 2 Helmet";

    model = QPATHTOF(helmets\phase2\ls_gar_phase2_helmet.p3d);
    hiddenSelections[] = {
        "camo1",
        "visor"
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\phase2\data\helmet_co.paa),
        QPATHTOF(helmets\phase2\data\visor_co.paa)
    };
    picture = QPATHTOF(_ui\phase2_helmet_ui_ca.paa);

    class ItemInfo: ItemInfo {
        mass = 10;
        uniformModel = QPATHTOF(helmets\phase2\ls_gar_phase2_helmet.p3d);
        allowedSlots[] = {801, 901, 701, 605};
        hiddenSelections[] = {
            "camo1",
            "visor"
        };

        class HitpointsProtectionInfo {
            class Head {
                hitpointName = "HitHead";
                armor = 8;
                passThrough = 0.5;
            };
            class Face {
                hitpointName = "HitFace";
                armor = 8;
                passThrough = 0.5;
            };
        };
    };
};

class ls_gar_phase2Hologram_helmet: ls_gar_phase2_helmet {
    author = AUTHOR;
    displayName = "Republic Trooper Phase 2 Helmet [Hologram]";

    model = QPATHTOF(helmets\phase2\ls_gar_phase2Hologram_helmet.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOEF(data,textures\hologram\blueHologram_ca.paa)
    };

    EGVAR(common,hideHead) = 1;

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(helmets\phase2\ls_gar_phase2Hologram_helmet.p3d);
    };
};
