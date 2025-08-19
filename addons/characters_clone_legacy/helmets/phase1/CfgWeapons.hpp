class ls_gar_phase1_helmet: ls_cloneHelmet_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Clone Trooper P1 Helmet";

    model = QPATHTOF(helmets\phase1\ls_cloneHelmet_phase1.p3d);
    hiddenSelections[] = {
        "camo1",
        "visor",
        "illum"
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\phase1\data\camo1_co.paa),
        QPATHTOF(helmets\phase1\data\visor_co.paa),
        QPATHTOF(helmets\phase1\data\illum_co.paa)
    };
    picture = QPATHTOF(_ui\phase1_helmet_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(helmets\phase1\ls_cloneHelmet_phase1.p3d);
        hiddenSelections[] = {
            "camo1",
            "visor",
            "illum"
        };

        class HitpointsProtectionInfo {
            class Head {
                hitpointName = "HitHead";
                armor = 6;
                passThrough = 0.5;
            };

            class Face: Head {
                hitpointName = "HitFace";
            };
        };
    };
};

class ls_gar_phase1_hologram_helmet: ls_gar_phase1_helmet {
    author = AUTHOR;
    displayName = "Clone Trooper P1 Helmet [Hologram]";

    model = QPATHTOF(helmets\phase1\ls_cloneHelmet_phase1_hologram.p3d);
    hiddenSelectionsTextures[] = {
        QPATHTOEF(data,textures\hologram\blueHologram_ca.paa),
        QPATHTOEF(data,textures\hologram\blueHologram_ca.paa),
        QPATHTOEF(data,textures\hologram\blueHologram_ca.paa)
    };
    hiddenSelectionsMaterials[] = {
        QPATHTOF(helmets\phase1\data\hologram\camo1.rvmat),
        QPATHTOF(helmets\phase1\data\hologram\visor.rvmat),
        QPATHTOF(helmets\phase1\data\hologram\illum.rvmat)
    };

    EGVAR(common,hideHead) = 1;

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(helmets\phase1\ls_cloneHelmet_phase1_hologram.p3d);
    };
};
