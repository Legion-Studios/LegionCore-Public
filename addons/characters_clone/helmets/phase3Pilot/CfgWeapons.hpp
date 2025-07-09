class ls_cloneHelmet_phase3Pilot: ls_cloneHelmet_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Clone Pilot P3 Helmet";

    model = QPATHTOF(helmets\phase3Pilot\ls_helmet_clone_phase3Pilot.p3d);
    hiddenSelections[] = {
        "camo1",
        "camo2"
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\phase3Pilot\data\camo1_co.paa),
        QPATHTOF(helmets\phase3Pilot\data\camo2_co.paa)
    };

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(helmets\phase3Pilot\ls_helmet_clone_phase3Pilot.p3d);
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
        };
    };
};
