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
        QPATHTOF(helmets\phase1\data\helmet_P1_co.paa),
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

// TODO: Hologram helmet is missing visor selection
// TODO: Selections seem broken, retextures don't apply
class ls_gar_phase1Hologram_helmet: ls_gar_phase1_helmet {
    author = AUTHOR;
    displayName = "Clone Trooper P1 Helmet [Hologram]";

    model = QPATHTOF(helmets\phase1\ls_cloneHelmet_phase1_hologram.p3d);
    hiddenSelectionsTextures[] = {
        QPATHTOEF(data,textures\hologram\blueHologram_ca.paa),
        QPATHTOEF(data,textures\hologram\blueHologram_ca.paa),
        QPATHTOEF(data,textures\hologram\blueHologram_ca.paa)
    };
    hiddenSelectionsMaterials[] = {
        QPATHTOF(helmets\phase1\data\hologramHelmet.rvmat),
        QPATHTOF(helmets\phase1\data\hologramVisor.rvmat),
        QPATHTOF(helmets\phase1\data\hologramIllum.rvmat)
    };
};

// class ls_cloneHelmet_phase1_hologramRed: ls_cloneHelmet_phase1_hologram {
//     author = AUTHOR;
//     displayName = "Clone Trooper P1 Helmet [Hologram - Red]";
//     hiddenSelectionsTextures[] = {
//         QPATHTOEF(data,textures\hologram\redHologram_ca.paa),
//         QPATHTOEF(data,textures\hologram\redHologram_ca.paa),
//         QPATHTOEF(data,textures\hologram\redHologram_ca.paa)
//     };
// };

// class ls_cloneHelmet_phase1_hologramGreen: ls_cloneHelmet_phase1_hologram {
//     author = AUTHOR;
//     displayName = "Clone Trooper P1 Helmet [Hologram - Green]";
//     hiddenSelectionsTextures[] = {
//         QPATHTOEF(data,textures\hologram\greenHologram_ca.paa),
//         QPATHTOEF(data,textures\hologram\greenHologram_ca.paa),
//         QPATHTOEF(data,textures\hologram\greenHologram_ca.paa)
//     };
// };

// class ls_cloneHelmet_phase1_hologramPurple: ls_cloneHelmet_phase1_hologram {
//     author = AUTHOR;
//     displayName = "Clone Trooper P1 Helmet [Hologram - Purple]";

//     hiddenSelectionsTextures[] = {
//         QPATHTOEF(data,textures\hologram\purpleHologram_ca.paa),
//         QPATHTOEF(data,textures\hologram\purpleHologram_ca.paa),
//         QPATHTOEF(data,textures\hologram\purpleHologram_ca.paa)
//     };
// };