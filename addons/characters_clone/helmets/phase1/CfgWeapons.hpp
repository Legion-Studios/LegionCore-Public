class ls_cloneHelmet_phase1: ls_cloneHelmet_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Clone Trooper Phase 1 Helmet";

    model = QPATHTOF(helmets\phase1\ls_helmet_clone_p1.p3d);
    hiddenSelections[] = {
        "helmet",
        "visor"
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\phase1\data\helmet_co.paa),
        QPATHTOF(helmets\phase1\data\visor_co.paa)
    };

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(helmets\phase1\ls_helmet_clone_p1.p3d);
        hiddenSelections[] = {
            "helmet",
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
