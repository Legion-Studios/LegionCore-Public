class ls_cloneHelmet_phase2Pilot: ls_cloneHelmet_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Clone Pilot P2 Helmet";

    model = QPATHTOF(helmets\phase2Pilot\ls_helmet_clone_pilotPhase2.p3d);
    hiddenSelections[] = {
        "camo1",
        "camo2"
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\phase2Pilot\data\camo1_co.paa),
        QPATHTOF(helmets\phase2Pilot\data\camo2_co.paa)
    };

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(helmets\phase2Pilot\ls_helmet_clone_pilotPhase2.p3d);
        hiddenSelections[] = {
            "camo1",
            "camo2"
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
